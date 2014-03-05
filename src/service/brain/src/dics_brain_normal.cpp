/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    dics_brain_normal.cpp
* @version     
* @brief      
* @author   duye
* @date     2014-02-27
* @note 
*
*  1. 2014-02-27 duye Created this file
* 
*/

#pragma once

#include <dics_brain_normal.h>

DICS_BRAIN_NS_BEG

NormalBrain::NormalBrain()
{
}

NormalBrain::~NormalBrain()
{
}

D_Result NormalBrain::Thinking(const std::string& inputInfo, std::string& outputRet)
{
    outputRet.assign("Thinking out time");
    
    return D_SUCCESS;
}

DICS_BRAIN_NS_END