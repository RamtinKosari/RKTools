# ifndef __RKTOOLS_IMAGE_TO_ASCII
    # include "imageToAscii.hpp"
    /**
     * @brief Character Constructor
     */
    Character::Character() noexcept(true) {
        color.grayscale = 0;
        color.green = 0;
        color.blue = 0;
        color.red = 0;
        pixel = " ";
    }
    /**
     * @brief Method to Change Color of Character
     * @param Red RGB's Red Value
     * @param Green RGB's Green Value
     * @param Blue RGB's Blue Value
     */
    void Character::setRGBColor(int &Red, int &Green, int &Blue) noexcept(true) {
        color.green = Green;
        color.blue = Blue;
        color.red = Red;
    }
    /**
     * @brief Method to Get Size of Terminal
     */
    void AsciiImage::getTermianlSize() noexcept(true) {
        ioctl(STDOUT_FILENO, TIOCGWINSZ, &terminalWindow);
        rows = terminalWindow.ws_row;
        cols = terminalWindow.ws_col;
    }
    /**
     * @brief AsciiImage Constructor
     */
    AsciiImage::AsciiImage() noexcept(true) {
        getTermianlSize();
    }
    /**
     * @brief Method to Convert OpenCV's Matrix to Colorful Background Character
     * @param input Input OpenCV's Matrix
     * @param mode RGB or Grayscale Mode
     * @note Default Mode is Set to RGB, If You Want Faster Experiencing, Pass
     * 'GRAYSCALE' as Mode to The Method and for That, You Must Pass Grayscale
     * Matrix not RGB, Otherwise Method will Automatically Converts it to
     * Grayscale but It Might Take Some Time
     */
    void AsciiImage::convert(cv::Mat &input, const int &mode = RGB) {
        getTermianlSize();
        cv::resize(input, input, cv::Size(cols,rows), cv::INTER_LINEAR);
        if (mode == RGB) {
            for (int i = 0; i < input.rows; i++) {
                for (int j = 0; j < input.cols; j++) {
                    color.blue = input.at<cv::Vec3b>(i, j)[0];
                    color.green = input.at<cv::Vec3b>(i, j)[1];
                    color.red = input.at<cv::Vec3b>(i, j)[2];
                    std::cout << escChar << "48;2;" << color.red << ";" << color.green << ";" << color.blue << "m" << pixel << escChar << "0m";
                }
            }
        } else if (mode == GRAYSCALE) {
            for (int i = 0; i < input.rows; i++) {
                for (int j = 0; j < input.cols; j++) {
                    color.grayscale = input.at<uchar>(i, j);
                    std::cout << escChar << "48;2;" << color.grayscale << ";" << color.grayscale << ";" << color.grayscale << "m" << pixel << escChar << "0m";
                }
            }
        } else {
            std::cout << escChar << "38;2;255;0;0m[ERROR] \033[0mInput Mode is Unavalible" << std::endl;
            exit(0);
        }
        std::cout << "\033[" << rows << "A\033[0G";
        std::chrono::milliseconds duration(1);
        std::this_thread::sleep_for(duration);
    }

    int main() {
        AsciiImage image;
        cv::VideoCapture capture(0);
        cv::Mat frame;
        image.getTermianlSize();
        while (true) {
            capture >> frame;
            image.convert(frame);
        }
    }
# endif // __RKLTOOLS_IMAGE_TO_ASCII