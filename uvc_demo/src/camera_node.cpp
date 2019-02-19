#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>

#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace std;

int main(int argc, char **argv)
{
    ros::init(argc, argv, "image_publisher");

    std::string video_name;
    int video_fps;

    ros::param::get("video_name",video_name);
    ros::param::get("video_fps",video_fps);

    VideoCapture cap(video_name);
    if (!cap.isOpened()) {
        std::cerr << "ERROR! Unable to open video \n";
        return -1;
    }

    ros::NodeHandle nh_pub;
    image_transport::ImageTransport it(nh_pub);
    image_transport::Publisher pub = it.advertise("camera/image", 1);
    cv_bridge::CvImagePtr frame = boost::make_shared< cv_bridge::CvImage >();
    frame->encoding = sensor_msgs::image_encodings::BGR8;

    ros::Rate loop_rate(video_fps);
   
    while(ros::ok())
    {
        cap >> frame->image;       
        if ( frame->image.empty() )
        {
            ROS_ERROR_STREAM( "Failed to capture frame!" );
            ros::shutdown();
        }
        frame->header.stamp = ros::Time::now();
        pub.publish(frame->toImageMsg());
        ros::spinOnce();
        loop_rate.sleep();
    }
    cap.release();

    return 0;
}
