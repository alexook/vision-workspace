
#include <opencv2/opencv.hpp>
#include <string>
#include <iostream>
#include "test.h"

using namespace std;

string image_path = "../img/ubuntu.png";
string catdog_path = "../img/catdog.jpg";

int main(int argc, char **argv){

	cv::Mat img(512,512, CV_8UC3,cv::Scalar(255,255,255));

	cv::circle(img, cv::Point(256,256), 155, cv::Scalar(0,69,255), cv::LINE_4);

	cv::rectangle(img, cv::Point(130, 226), cv::Point(382, 286), cv::Scalar(155, 155, 155), cv::LINE_4);
	cv::line(img, cv::Point(130, 296), cv::Point(382, 296), cv::Scalar(55, 55, 55), 2);

	cv::putText(img, "Murtaza's Workshop", cv::Point(137, 262), cv::FONT_HERSHEY_DUPLEX, 0.75, cv::Scalar(0, 69, 255), 2);



	cv::Mat image = cv::imread(image_path, cv::IMREAD_COLOR);
	cv::Mat catdog = cv::imread(catdog_path, cv::IMREAD_COLOR);
	cv::Mat image2;
	cv::cvtColor(image, image2, cv::COLOR_BGR2GRAY);
	
	if(image.empty() || catdog.empty())
	{
		cout << "Please ensure your files name currect." << endl;
		return -1;
	}

	cv::imshow("img", image);
	cv::imshow("img2", image2);
	cv::imshow("catdog", catdog);
	cv::imshow("img", img);
	cv::waitKey(0);

	test_log();
	Yazi::TestClass a;
	a.myfun();
	return 0;
}
