# ifndef __RKTOOLS_DEFINITIONS
    /**
     * @file Definitions.hpp
     * @brief RKTools Definitions
     * @version 1.1
     * @date 2023-06-06
     */
    # define __RKTOOLS_DEFINITIONS
    /**
     * @brief Preprocessor Directive Method to Convert Input Arguemnt into String
     */
    # define STR(__input) #__input
    /**
     * @brief Warning Termianl Report
     */
    # define WARNING "\033[38;2;255;255;0m[WARNING] \033[0m"
    /**
     * @brief Success Termianl Report
     */
    # define SUCCESS "\033[38;2;0;255;0m[SUCCESS] \033[0m"
    /**
     * @brief Fail Termianl Report
     */
    # define FAILED "\033[38;2;255;0;0m[FAILED] \033[0m"
    /**
     * @brief Log Termianl Report
     */
    # define LOG "\033[38;2;173;173;173m[LOG] \033[0m"
    /**
     * @brief Tip Terminal Suggestion
     */
    # define TIP "\033[38;2;0;255;255m[TIP] \033[0m"
    /**
     * @brief Highlight Input Text
     * @param __input Input Text
     */
    // # define HIGHLIGHT(__input) "\033[38;2;255;255;255m"##__input//##"\033[0m"
    /**
     * @brief Used for Determine Content Type of Argumnet
     */
    # define STRING_TYPE_ID "NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE"
# endif // __RKTOOLS_DEFINITIONS