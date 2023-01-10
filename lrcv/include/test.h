#ifndef TEST_H_
#define TEST_H_


#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>

using namespace std;



void test_log();



namespace Yazi{

    class TestClass
    {
    private:
        /* data */
    public:
        TestClass();
        ~TestClass();

        void myfun();
    };


}

#endif