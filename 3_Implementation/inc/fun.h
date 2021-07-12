/**
 * @mainpage Mini_Project by "Rahul Kumar"
 * @subpage Library Managment System
 * @file fun.h
 * @author Rahul Kumar (rahultiwaricusat@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __FUN_H__
#define __FUN_H__
/**
 * @brief 
 * 

 */
void create_account(void);
void Login(void);
void account_check(void);
int libraryFine(int day1, int month1, int year1, int day2, int month2, int year2,int no_of_book);
void choose_book(void);
#endif 