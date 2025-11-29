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


}   //  End of namespace  Common
}   //  End of namespace  SampleWrapper
