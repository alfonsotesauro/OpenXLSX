//
// Created by Kenneth Balslev on 26/12/2017.
//

#ifndef OPENXLEXE_XLCELLTYPE_H
#define OPENXLEXE_XLCELLTYPE_H


//======================================================================================================================
//========== XLCellType Enum ===========================================================================================
//======================================================================================================================

/**
 * @brief The XLCellType class is an enumeration of the possible cell types, as recognized by Excel.
 */
enum class XLCellType
{
    Empty, Boolean, Number, Error, String
};

//======================================================================================================================
//========== XLValue Enum ==========================================================================================
//======================================================================================================================

/**
 * @brief The XLValueType class is an enumeration of the possible cell value types.
 */
enum class XLValueType
{
    Empty, Boolean, Integer, Float, String, Error
};

//======================================================================================================================
//========== XLStringType Enum =========================================================================================
//======================================================================================================================

/**
 * @brief The XLStringType class is an enumeration of the possible string types, as recognized by Excel.
 */
enum class XLStringType
{
    String, SharedString, InlineString
};

//======================================================================================================================
//========== XLBool Enum ===============================================================================================
//======================================================================================================================

/**
 * @brief The XLBool enum has two values: True and False. The reason for using this instead of \c bool is for
 * clarity and to avoid implicit \c bool <-> \c int conversions.
 */
enum class XLBool
{
    True, False
};

//======================================================================================================================
//========== XLNumberType Enum =========================================================================================
//======================================================================================================================

/**
 * @brief
 */
enum class XLNumberType
{
    Integer, Float
};


#endif //OPENXLEXE_XLCELLTYPE_H