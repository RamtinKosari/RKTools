# ifndef RKTOOLS_TOOLS_LIST
    /**
     * @file toolsList.hpp
     * @brief RKTools List of Tools
     * @version 1.1
     * @date 2023-06-06
     */
    # define RKTOOLS_TOOLS_LIST
    //-- Include Core
    # ifndef __RKTOOLS_CORE
        # include "Core.hpp"
    # endif // __RKTOOLS_CORE
    /**
     * @brief Name List of Tools
     */
    const char *toolsList[2] = {
        "image-to-ascii",
        "logger"
    };
    enum TOOL_NUMBERS {
        IMAGE_TO_ASCII,
        LOGGER
    };
# endif // RKTOOLS_TOOLS_LIST