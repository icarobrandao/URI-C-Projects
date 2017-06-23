/*
 * 1176.c
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
	int fibonacci[60];
	int fib[] = {};
	int i,j,k,l;
	fibonacci[0]=0;fibonacci[1]=1;
	for(i=2;i<sizeof(fibonacci)/sizeof(fibonacci[0]);++i){
		fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
	}
	scanf("%d",&j);
	for(k=0;k<j;++k){
		scanf("%d",&fib[k]);
	}
	for(k=0;k<sizeof(fibonacci)/sizeof(fibonacci[0]);++k){
		for(l=0;l<j;++l){
			if(k==fib[l]){
				printf("Fib(%d) = %d\n",fib[l],fibonacci[k]);
			}
		}
	}
	return 0;
}

