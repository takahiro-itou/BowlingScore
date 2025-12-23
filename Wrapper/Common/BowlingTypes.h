//  -*-  coding: utf-8-with-signature;  mode: c++  -*-  //
/*************************************************************************
**                                                                      **
**                  ---   Bowling Score View App   ---                  **
**                                                                      **
**          Copyright (C), 2025-2025, Takahiro Itou                     **
**          All Rights Reserved.                                        **
**                                                                      **
**          License: (See COPYING or LICENSE files)                     **
**          GNU Affero General Public License (AGPL) version 3,         **
**          or (at your option) any later version.                      **
**                                                                      **
*************************************************************************/

/**
**      Type Definitions.
**
**      @file       BowlingTypes.h
**/

#pragma     once

#include    "BowlingScore/Common/BowlingTypes.h"


namespace  BsWrap  {

//----------------------------------------------------------------
/**
**    エラーコード。
**/

public  enum class  ErrCode
{
    SUCCESS             = BsCore::ErrCode::SUCCESS,
    FAILURE             = BsCore::ErrCode::FAILURE,
    INDEX_OUT_OF_RANGE  = BsCore::ErrCode::INDEX_OUT_OF_RANGE,
    FILE_OPEN_ERROR     = BsCore::ErrCode::FILE_OPEN_ERROR,
    FILE_IO_ERROR       = BsCore::ErrCode::FILE_IO_ERROR,
    FILE_INVALID_FORMAT = BsCore::ErrCode::FILE_INVALID_FORMAT,
};

}   //  End of namespace  BsWrap
