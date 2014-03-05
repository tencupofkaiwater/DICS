/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    dics_brain_normal.h
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

#include <dics_service_def.h>

#include <string>

DICS_BRAIN_NS_BEG

class Brain
{
public:
    Brain() {}
    virtual ~Brain() {}

    virtual D_Result Thinking(const std::string& inputInfo) = 0;
};

class NormalBrain : public Brain
{
public:
    NormalBrain();
    virtual ~NormalBrain();

    virtual D_Result Thinking(const std::string& inputInfo);    
};

DICS_BRAIN_NS_END