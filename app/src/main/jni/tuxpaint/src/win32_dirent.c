/****************************************************/  
/*                                                  */ 
/* For Win32 that lacks Unix direct support.        */ 
/*    - avoids including "windows.h"                */ 
/*                                                  */ 
/* Copyright (c) 2002 John Popplewell               */ 
/* john@johnnypops.demon.co.uk                      */ 
/*                                                  */ 
/* Version 1.0.1 - fixed bug in opendir()           */ 
/* Version 1.0.0 - initial version                  */ 
/*                                                  */ 
/****************************************************/ 
  
/*
  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.
 
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  
  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/ 
  
/* $Id: win32_dirent.c,v 1.5 2006/08/27 21:00:55 wkendrick Exp $ */ 
  
#include <stdlib.h>
#include <string.h>
#include <assert.h>
  
#include "win32_dirent.h"
#include "debug.h"
  
{
  
  
  
    return NULL;
  
  
  
  
    
  {
    
    
  
  


{
  
  

{
  
  
    
  {
    
    
      
    {
      
      
    
    
  
  


{
  
	   ((*(const struct dirent **) a)->d_name,
	    (*(const struct dirent **) b)->d_name));

			   struct dirent *entry) 
{
  
  
  
    (struct dirent **) realloc((void *) (*namelist),
			       (size_t) ((i + 1) * sizeof(struct dirent *)));
  
    return -1;
  
    (((char *) &entry->d_name) - ((char *) entry)) + strlen(entry->d_name) +
    1;
  
  
    return -1;
  
  
  


	       comparCB compar) 
{
  
  
  
  
  
  
    return -1;
  
  
    
  {
    
      
	
  
  
  
    return -1;
  
    
	   compar);
  


