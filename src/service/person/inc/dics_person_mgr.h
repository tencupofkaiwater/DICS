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
#include <dics_brain.h>

DICS_BRAIN_NS_BEG

typedef std::map<BrainId, Brain*> BrainMap;

class PersonMgr
{
public:
    PersionMgr();
    ~PersionMgr();

    Brain* HatchPerson();
    Brain* CreateBrain(const BrainType& brainType);
    Brain* SearchBrain(const BrainId& brainId);
    D_Result ReleaseBrain(const BrainId& brainId);
    D_Result ReleaseAllBrain();

private:
    BrainMap        m_brainMap;
};

DICS_BRAIN_NS_END