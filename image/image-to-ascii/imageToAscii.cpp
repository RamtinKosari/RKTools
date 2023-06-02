# ifndef __RKTOOLS_IMAGE_TO_ASCII
    # include "imageToAscii.hpp"
    # if IS_UNIX
        using namespace UNIX_BASED;
    # else
        using namespace DOS_BASED;
    # endif
    /**
     * @brief Character Constructor
     */
    Character::Character() noexcept(true) {
        color = escChar + "0m";
        pixel = escChar + " ";

    }
# endif __RKLTOOLS_IMAGE_TO_ASCII