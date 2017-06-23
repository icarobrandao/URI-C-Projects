/*
 * 1094.c
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
	int n, quant, nCoelho = 0, nRato = 0, nSapo = 0, i;
	char animal;
	scanf("%d", &n);
	
	for(i = 1 ; i<=n ; i++){
		scanf("%d %c", &quant, &animal);
		
		if(animal == 'C' || animal == 'c'){
			nCoelho = nCoelho + quant;
		}
		if(animal == 'S' || animal == 's'){
			nSapo = nSapo + quant;
		}
		if(animal == 'R' || animal == 'r'){
			nRato = nRato + quant;
		}
	}
	
	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d", nCoelho + nSapo + nRato, nCoelho, nSapo, nRato);
	return 0;
}

