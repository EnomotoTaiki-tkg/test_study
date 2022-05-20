// StaticLib.cpp : スタティック ライブラリ用の関数を定義します。
//

#include "pch.h"
#include "framework.h"
#include "../include/StaticLib.h"


bool is_leap_year(int year)
{
	/*
	400で割れればうるう年
	100で割り切れると平年
	4で割り切れればうるう年
	 */
	if (year % 400 == 0) 
		return true;
	
	else if (year % 100 == 0)
		return false;
	
	else if (year % 4 == 0)
		return true;
	
	else
		return false;
	
}
