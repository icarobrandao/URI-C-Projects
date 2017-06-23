/*
 * 1168.c
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
#include <stdlib.h>
#include <string.h>
int main()
{
    char v[1110];
    int n,i,j,soma=0;
    scanf("%d", &n);
    for(i=0 ; i < n ; i++){
		scanf("%s", v);
        for( j=0 ; j < strlen(v) ; j++){
			if(v[j] == '1') soma+=2;
			if(v[j] == '2' || v[j] == '3' || v[j] == '5') soma+=5;
			if(v[j] == '4') soma+=4;
			if(v[j] == '6' || v[j] == '9' || v[j] == '0') soma+=6;
			if(v[j] == '7') soma+=3;
			if(v[j] == '8') soma+=7;
        }
        printf("%d leds\n",soma);
            soma = 0;
        }
    return 0;
}
