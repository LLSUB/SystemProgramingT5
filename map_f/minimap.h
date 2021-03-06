#include <stdio.h>

int miniwall[161][2] = {{3,16},{3,17},{3,18},{3,19},
	{4,6},{4,7},{4,8},{4,9},{4,11},{4,12},{4,13},{4,16},{4,19},{4,21},{4,22},{4,23},{4,24},
	{5,6},{5,9},{5,12},{5,13},{5,16},{5,18},{5,19},{5,21},{5,24},
	{6,4},{6,5},{6,6},{6,9},{6,10},{6,11},{6,12},{6,13},{6,21},{6,24},{6,25},{6,26},
	{7,4},{7,6},{7,7},{7,8},{7,9},{7,10},{7,11},{7,13},{7,21},{7,26},
	{8,4},{8,5},{8,6},{8,11},{8,13},{8,14},{8,15},{8,16},{8,17},{8,18},{8,20},{8,21},{8,26},
	{9,11},{9,18},{9,20},{9,21},{9,22},{9,23},{9,24},{9,25},{9,26},
	{10,11},{10,12},{10,13},{10,14},{10,15},{10,16},{10,17},{10,18},{10,20},{10,21},{10,25},{10,26},
	{11,4},{11,5},{11,6},{11,11},{11,12},{11,17},{11,18},{11,25},{11,26},
	{12,4},{12,6},{12,7},{12,8},{12,9},{12,10},{12,11},{12,12},{12,17},{12,18},{12,20},{12,21},{12,25},{12,26},
	{13,4},{13,12},{13,17},{13,18},{13,20},{13,21},{13,22},{13,23},{13,24},{13,25},{13,26},
	{14,4},{14,5},{14,6},{14,7},{14,8},{14,9},{14,12},{14,17},{14,18},{14,20},{14,21},{14,22},{14,23},{14,24},{14,25},{14,26},
	{15,9},{15,12},{15,15},{15,16},{15,17},{15,18},{15,23},{15,24},
	{16,4},{16,5},{16,9},{16,10},{16,11},{16,12},{16,15},{16,16},{16,17},{16,18},{16,23},{16,24},
	{17,4},{17,5}};

int minimisson[6][2] = {{17,0},{8,10},{5,11},{11,16},{4,18},{12,24}};

void minimap();
void gauge(int);
