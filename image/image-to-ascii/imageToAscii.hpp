# ifndef __RKLTOOLS_IMAGE_TO_ASCII
    //-- Check Operating System for Console Escape Character
    # if defined(unix) || defined(__unix) || defined(__unix__) || defined(__APPLE__) || defined(__MACH__) || defined(macintosh) || defined(Macintosh)
        # define IS_UNIX true
    # else
        # define IS_UNIX false
    # endif // Check Operating System for Console Escape Character
    /**
     * @file imageToAscii.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief Convert Image to Colorful Ascii Characters
     * @version 0.1
     * @date 2023-06-02
     */
    # define __RKLTOOLS_IMAGE_TO_ASCII
    //-- Include Needed Libraries
    # include <iostream>
    # include <string>
    /**
     * @brief Unix Based Settings
     */
    namespace UNIX_BASED {
        std::string escChar = "\033[";
    }
    /**
     * @brief Windows Based Settings
     */
    namespace DOS_BASED {
        std::string escChar = "\1xb[";
    }
    /**
     * @brief Class Definition of Colorful Character
     */
    class Character {
        protected :
            /**
             * @brief Pixel Character's Color
             */
            std::string color;
            /**
             * @brief Pixel Character
             */
            std::string pixel;
        public:
            /**
             * @brief Character Constructor
             */
            Character() noexcept;
            /**
             * @brief Method to Change Color of Character
             */
    };
    /**
     * @brief Class Definitions of Image to Ascii Methodes
     */
    class AsciiImage : public Character {
        private:
            /**
             * @brief Ascii Image Character
             */
            Character aic;
            /**
             * @brief Structure to Store Terminal's Size
             */
            struct Terminal {
                /**
                 * @brief Rows of Terminal
                 */
                int rows;
                /**
                 * @brief Columns of Terminal
                 */
                int cols;
            };
        public:
            /**
             * @brief AsciiImage Constructor
             */
            AsciiImage() noexcept;
            Terminal getSize();
    };
# endif // __RKLTOOLS_IMAGE_TO_ASCII