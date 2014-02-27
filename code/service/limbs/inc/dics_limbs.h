/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    dics_limbs.h
* @version     
* @brief      
* @author   duye
* @date     2014-02-26
* @note 
*
*  1. 2014-02-26 duye Created this file
* 
*/

#pragma once

#include <dics_service_def.h>

DICS_SERVICE_NS_BEG

class Limbs
{
public:
    Limbs() {}
    virtual ~Limbs() {}
};

class Mouth : public Limbs
{
public:
    Mouth();
    virtual ~Mouth();
}

DICS_SERVICE_NS_END