#include "StdAfx.h"
#include "global_variables.h"


global_variables::global_variables(void)
{
	;
}
int present_year = 2019;
int present_sem = 1; // 0 = Spring, 1 = Fall
int year_under_query;
int semester_under_query; 
int course_btn_index;

int x = 150;
int y = 50 + 21*(course_btn_index-1);