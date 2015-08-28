/****************************************************/  
/*                                                  */ 
/* For Win32 that lacks Unix direct support.        */ 
/*    - avoids including "windows.h"                */ 
/*                                                  */ 
/* Copyright (c) 2002 John Popplewell               */ 
/* john@johnnypops.demon.co.uk                      */ 
/*                                                  */ 
/****************************************************/ 
/* $Id: win32_dirent.h,v 1.3 2006/08/27 21:00:55 wkendrick Exp $ */ 





#define MAX_PATH                256
#define INVALID_HANDLE_VALUE    ((HANDLE)(-1))
#define WINAPI                  __stdcall

{
  
  


{
  
  
  
  
  
  
  
  
  
  


#define FindFirstFile   FindFirstFileA
#define FindNextFile    FindNextFileA
#define FindClose       FindClose
  
#ifdef __cplusplus
extern "C"
{
  
#endif	/* 
  
   
   
   
#ifdef __cplusplus
};

#endif	/* 

{
  
 

{
  
  
  
 







		    selectCB select, comparCB compar);
