#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
int main()
{
	std::cout << "ok" << std::endl;

	cv::Mat img = cv::imread("C:\\Users\\sheng\\Pictures\\220px-Iris_virginica.jpg");

	cv::imshow("img", img);
	cv::waitKey(0);

	std::getchar();
	return 0;
}