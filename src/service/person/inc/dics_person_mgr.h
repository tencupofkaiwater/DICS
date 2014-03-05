/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    dics_person_mgr.h
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

#include <list>
#include <map>

#include <dics_service_def.h>
#include <dics_person.h>

DICS_PERSON_NS_BEG

typedef std::map<PersonId, Person*> PersonMap;

class PersonMgr
{
public:
    PersonMgr();
    ~PersonMgr();

    Person* HatchPerson() { return NULL; }
    Person* SearchPerson(const PersonId& personId) { return NULL; }
    D_Result KillPerson(const PersonId& personId) { return D_SUCCESS; }
    D_Result ReleaseAllPerson() { return D_SUCCESS; }

private:
    PersonMap        m_personMap;
};

DICS_PERSON_NS_END