# ifndef __RKTOOLS_IMAGE_TO_ASCII
    # include "imageToAscii.hpp"
    //-- OS Specefix Settings
    # if IS_UNIX
        using namespace UNIX_BASED;
    # else
        using namespace DOS_BASED;
    # endif // OS Specefix Settings
    /**
     * @brief Character Constructor
     */
    Character::Character() noexcept(true) {
        color = escChar + "0m";
        pixel = escChar + " ";
    }
    /**
     * @brief Method to Get Size of Terminal
     */
    void AsciiImage::getTermianlSize() noexcept(true) {
        struct winsize terminalWindow;
        ioctl(STDOUT_FILENO, TIOCGWINSZ, terminalWindow);
        rows = terminalWindow.ws_row;
        cols = terminalWindow.ws_col;
    }
    /**
     * @brief AsciiImage Constructor
     */
    AsciiImage::AsciiImage() noexcept(true) {
        getTermianlSize();
    }
# endif __RKLTOOLS_IMAGE_TO_ASCII