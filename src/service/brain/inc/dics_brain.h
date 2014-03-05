/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    dics_brain.h
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

#include <string>

DICS_BRAIN_NS_BEG

typedef D_UInt32 BrainId;

enum BrainState
{
    BRAIN_DEFAULT = 0,
    BRAIN_ALIVE,
    BRAIN_DEAD,
    BRAIN_THINKING,
    BRAIN_SLEEP
};

enum BrainType
{
    BRAIN_DEF = 0,
    BRAIN_NORMAL,
    BRAIN_SMART,
    BRAIN_SUPER
};

class BrainBaseAction
{
public:
    virtual ~BrainAction() {}
    virtual D_Result Thinking(const std::string& inputInfo, std::string& outputRet) = 0;   
};

class Brain : public BrainBaseAction
{
public:
    Brain() {}
    virtual ~Brain() {}

    virtual D_Result Thinking(const std::string& inputInfo, std::string& outputRet) = 0; 

    void SetBrainProperty(const BrainProperty& brainProperty) { m_brainProperty = brainProperty; }
    const BrainProperty& GetBrainProperty() const { return m_brainProperty; }

    void SetBrainId(const BrainId& brainId) { m_brainId = brainId; }
    const BrainId& GetBrainId() const { return m_brainId; }

    void SetBrainState(const BrainState& brainState) { m_brainState = brainState; }
    const BrainState& GetBrainState() const { return m_brainState; }

    void SetBrainType(const BrainType& brainType) { m_brainType = brainType; }
    const BrainType& GetBrainType() const { return m_brainType; }
    
private:
    BrainId     m_brainId;
    BrainState  m_brainState;
    BrainType   m_brainType;    
};

DICS_BRAIN_NS_END