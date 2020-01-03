#include <ncurses.h>
#include "appearance.c"
#include "compute.c"

int main() {
	initscr();
	start_color();
	curs_set(FALSE);
	startMenu();
	endwin();
}