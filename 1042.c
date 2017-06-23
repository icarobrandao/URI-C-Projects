/*
 * 1042.c
 * 
 * Copyright 2017 Ícaro Brandão <icarobrandao@MacBook-Pro-de-Icaro.local>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c, _1 = 0, _2 = 0, _3 = 0;
	scanf("%d %d %d", &a, &b, &c);
	if(a<b && a>c && b>a && b>c && c<a && c<b){
		_1 = c;
		_2 = a;
		_3 = b;
	}else if(a<b && a<c && b>a && b>c && c>a && c<b){
		_1 = a;
		_2 = c;
		_3 = b;
	}
	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", _1, _2, _3, a, b, c);
	return 0;
}

