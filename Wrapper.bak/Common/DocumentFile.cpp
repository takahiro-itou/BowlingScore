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

#include    "PreCompile.h"
#include    <msclr/marshal_cppstd.h>

#include    "DocumentFile.h"

#include    <string>


namespace  BsWrap  {
namespace  Common  {

//========================================================================
//
//    DocumentFile  class.
//

//========================================================================
//
//    Constructor(s) and Destructor.
//

//----------------------------------------------------------------
//    インスタンスを初期化する
//  （デフォルトコンストラクタ）。
//

DocumentFile::DocumentFile()
    : m_ptrObj { new WrapTarget() }
{
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （デストラクタ）。
//

DocumentFile::~DocumentFile()
{
    this->!DocumentFile();
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （ファイナライザ）。
//

DocumentFile::!DocumentFile()
{
    if ( this->m_ptrObj ) {
        delete  this->m_ptrObj;
        this->m_ptrObj  = nullptr;
    }
}


//========================================================================
//
//    Public Member Functions (Implement Pure Virtual).
//

//========================================================================
//
//    Public Member Functions (Overrides).
//

//========================================================================
//
//    Public Member Functions (Pure Virtual Functions).
//

//========================================================================
//
//    Public Member Functions (Virtual Functions).
//

//========================================================================
//
//    Public Member Functions.
//

//----------------------------------------------------------------
//    データをテキストファイルから読み込む。
//

ErrCode
DocumentFile::readFromTextFile(
        System::String^     fileName,
        ScoreDocument^%     ptrDoc)
{
    const   BsCore::ErrCode
        retVal  = this->m_ptrObj->readFromTextFile(
                        msclr::interop::marshal_as<std::string>(fileName),
                        ptrDoc->toNativePointer()
        );
    return ( static_cast<ErrCode>(retVal) );
}

//----------------------------------------------------------------
//    データをテキストファイルに書き込む。
//

ErrCode
DocumentFile::saveToTextFile(
        ScoreDocument^      objDoc,
        System::String^     fileName)
{
    const   BsCore::ErrCode
        retVal = this->m_ptrObj->saveToTextFile(
                    objDoc->toNativeInstance(),
                    msclr::interop::marshal_as<std::string>(fileName)
        );
    return ( static_cast<ErrCode>(retVal) );
}

//========================================================================
//
//    Accessors.
//

//========================================================================
//
//    Protected Member Functions.
//

//========================================================================
//
//    For Internal Use Only.
//

}   //  End of namespace  Common
}   //  End of namespace  SampleWrapper
