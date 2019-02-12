#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

void imageCallback(const sensor_msgs::ImageConstPtr& msg)
{
  try
  {
      cv::imshow("view", cv_bridge::toCvShare(msg, "bgr8")->image);
      cv::waitKey(1); 
  }
  catch (cv_bridge::Exception& e)
  {
      ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->encoding.c_str());
  }
}
 
int main(int argc, char **argv)
{
    ros::init(argc, argv, "image_listener");
    
    ros::NodeHandle nh_sub;
    image_transport::ImageTransport it(nh_sub);
    image_transport::Subscriber sub = it.subscribe("camera/image", 1, imageCallback);
    //cv::namedWindow("view");
    //cv::startWindowThread();
    ros::spin();
    //cv::destroyWindow("view");
    return 0;
}
