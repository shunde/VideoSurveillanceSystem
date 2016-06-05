#ifndef _DOMINANT_COLOR_H
#define _DOMINANT_COLOR_H

#include <opencv2/core/core.hpp>
#include <string>

enum Color {
    RED = 0,
    YELLOW,
    GREEN,
    CYAN,
    BLUE,
    MAGENTA,
    GRAY,
    BLACK,
    WHITE 
}; 

std::string get_color_name(Color color);

Color dominant_color_from_hls(const cv::Mat &hlsImg, const cv::Rect &roi);

Color dominant_color(const cv::Mat &bgrImg, const cv::Rect &roi);

#endif 
