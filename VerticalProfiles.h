//
// Created by Talha Rehman on 4/21/17.
//

#ifndef LAYOUTBTS_HELPER_H
#define LAYOUTBTS_HELPER_H

#include <iostream>
#include "opencv2/core/core_c.h"
#include "opencv2/ml.hpp"
#include "opencv2/highgui/highgui_c.h"
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;



class VerticalProfiles {

public:

    void plotRect(cv::Mat&,vector<cv::Rect>);
    void drawFilledRect(cv::Mat&,vector<cv::Rect>);
    void verticalProjectionProfiles(cv::Mat, vector<int> &);
    void binarizeShafait(Mat &gray, Mat &binary, int w, double k);
    void plot(vector<float>);
    void gaussianSmoothing(vector<int> &,vector<int> &);
    void noiseFiltering(vector<int> &, vector<int> &, int threshold);
    void normalizeHistogram(vector<int> &input, vector<float> &normalised);
    void displayVector(vector<float>);
    void truncateVector(vector<int> &, vector<int> &);
    void truncateStart(vector<int> &, int&);
    void invertVector(vector<int> &, vector<int> &);

    };


#endif //LAYOUTBTS_HELPER_H
