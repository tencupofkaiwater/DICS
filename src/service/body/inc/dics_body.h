/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    dics_body.h
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

DICS_SERVICE_NS_BEG

enum BodyGender
{
    GERDER_UNKNOW = 0,
    GENDER_MALE,
    GENDER_FEMALE
};

class Body
{
public:
    Body() {}
    virtual ~Body() {}

private:
    BodyGender      m_gender;
};

class  GoodBody: public Body
{
public:
    GoodBody() {}
    virtual ~GoodBody() {}
}

class  NormalBody: public Body
{
public:
    NormalBody() {}
    virtual ~NormalBody() {}
}

class  CrippleBody: public Body
{
public:
    CrippleBody() {}
    virtual ~CrippleBody() {}
}

DICS_SERVICE_NS_END
