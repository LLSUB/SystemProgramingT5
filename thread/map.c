#include "map.h"
#include <ncurses.h>
#include <signal.h>

void set_up();
int main()
{
	int	c;
	set_up();

	while ( ( c = getchar()) != 'Q' ){
			
	}
	endwin();
}

void set_up()
{
	initscr();
	noecho();
	crmode();

	move(0,0);
	vline('*',25);
	hline('*',80);
	move(0,80);
	vline('*',25);
	move(25,0);
	hline('*',81);
	for(int i=0;i<149;i++){
		mvaddch(wall[i][0],wall[i][1],'*');
	}
	start_color();
	init_pair(1,COLOR_RED,COLOR_BLACK);
	attron(COLOR_PAIR(1));
	for(int i=0;i<5;i++){
		mvaddch(misson[i][0],misson[i][1],'M');
	}

	attroff(COLOR_PAIR(1));
	refresh();
}