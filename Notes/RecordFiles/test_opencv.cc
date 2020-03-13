#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace cv;
int main()
{
    Mat img=imread("/media/han/E/mWork/datasets/opencv/HappyFish.jpg");
    cv::imshow("image",img);
    cv::waitKey();
    return 0;
};