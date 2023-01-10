#include "test.h"


void test_log()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "hello test." << endl;
    }
    

}

Yazi::TestClass::TestClass()
{
    cout << "test constructed." << endl;
}

Yazi::TestClass::~TestClass()
{
    cout << "test deconstructed." << endl;
}

void Yazi::TestClass::myfun()
{
    string input_img_path;
    cv::Mat img;
    vector<string> filePaths;

    cv::glob("../img", filePaths, false);
    vector<string>::iterator input_img_path_it;
    for (input_img_path_it = filePaths.begin(); input_img_path_it != filePaths.end(); ++input_img_path_it)
    {
        cout << *input_img_path_it << endl;
    }

    
    int cnt = 0;
    for (input_img_path_it = filePaths.begin(); input_img_path_it != filePaths.end(); ++input_img_path_it)
    {
        cnt++;
        input_img_path = *input_img_path_it;
        img = cv::imread(input_img_path);
        cv::imshow("img" + to_string(cnt), img);
    }
    cv::waitKey(0);
}