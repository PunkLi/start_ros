#include <ros/ros.h>
#include <actionlib/client/simple_action_client.h>
#include "actionlib_demo/ReadBookAction.h"

void doneCb(const actionlib::SimpleClientGoalState& state,
            const actionlib_demo::ReadBookResultConstPtr& result)
{
    ROS_INFO("Finsh Reading!");
    ros::shutdown();
}

void activeCb()
{
   ROS_INFO("Goal is active! Begin to Read.");
}

void feedbackCb(const actionlib_demo::ReadBookFeedbackConstPtr& feedback)
{
    ROS_INFO("Reading page: %d", feedback->reading_page);
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "read_book_client");
 
    actionlib::SimpleActionClient<actionlib_demo::ReadBookAction> client("read_book", true);
    ROS_INFO("Waiting for action server to start");

    client.waitForServer();
    ROS_INFO("Action server started");
    
    actionlib_demo::ReadBookGoal goal;
    goal.total_pages = 10;  // 创建一个目标：读10页书
    
    client.sendGoal(goal, &doneCb, &activeCb, &feedbackCb); 
 
    ros::spin();
 
    return 0;
}