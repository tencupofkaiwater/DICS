/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file		dics_service_main.cpp
* @version     
* @brief      
* @author   duye
* @date     2014-02-25
* @note 
*
*  1. 2014-02-25 duye Created this file
* 
*/

#include <stdio.h>
#include <duye/duye_posix>
#include <dics_service_startup.h>

int main()
{
	printf("DICS Service Start \n");
	
	for (;;)
	{
	    printf("DICS Service working. \n");
	    sleep(2);
	}

	return 0;
}
