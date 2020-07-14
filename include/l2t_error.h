/*************************************************************************************************/
/**
 * \file
 * \brief Define errors code generated by L2 tester.
 */
/*************************************************************************************************/

#ifndef L2T_ERROR_H
#define L2T_ERROR_H

/*************************************************************************************************/

typedef enum {

    L2T_ERROR_GENERIC = -1,
    L2T_ERROR_INVALID_CONFIG = -2,
    L2T_ERROR_INVALID_OPERATION = -3,

    L2T_ERROR_SOCKET = -4,
    L2T_ERROR_TIMEOUT = -5,
    L2T_ERROR_NOT_FOUND = -6,

    L2T_ERROR_TEST_FAILED = -7,

} en_l2t_error_t;

/*************************************************************************************************/

/**
 * \brief Convert an error code to string.
 * \param _code              Code of the error.
 * \return String describing the error.
 */
const char *l2t_error_explanation_get(en_l2t_error_t _code);

/*************************************************************************************************/

#endif /* L2T_ERROR_H */
