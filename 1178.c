/*
 * 1178.c
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
	double n[100];
	int i;
	scanf("%lf", &n[0]);
	printf("N[0] = %.4lf\n", n[0]);
	for(i=1;i<sizeof(n)/sizeof(n[0]);++i){
		n[i]=(n[i-1])/2;
		printf("N[%d] = %.4lf\n", i, n[i]);
	}
	return 0;
}

