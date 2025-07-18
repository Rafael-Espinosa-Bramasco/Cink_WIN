#include <stdio.h>

#ifndef STDACINK_H
#define STDACINK_H

/*
    ANSI FUNCTIONS PROTOTYPES
    Using Control Secuence Introducer CSI and some OS ANSI functions
*/

static inline void ansi_cursorUp(void); // \033[1A
static inline void ansi_cursorUpN(unsigned int); // \033[nA
static inline void ansi_cursorDown(void); // \033[1B
static inline void ansi_cursorDownN(unsigned int); // \033[nB
static inline void ansi_cursorRight(void); // \033[1C
static inline void ansi_cursorRightN(unsigned int); // \033[nC
static inline void ansi_cursorLeft(void); // \033[1D
static inline void ansi_cursorLeftN(unsigned int); // \033[nD
static inline void ansi_cursorNextLine(void); // \033[1E
static inline void ansi_cursorNextLineN(unsigned int); // \033[nE
static inline void ansi_cursorPrevLine(void); // \033[1F
static inline void ansi_cursorPrevLineN(unsigned int); // \033[nF
static inline void ansi_cursorHorizontalMove(void); // \033[1G
static inline void ansi_cursorHorizontalMoveN(unsigned int); // \033[nG
static inline void ansi_cursorGOTOXY(unsigned int, unsigned int); // \033[y;xH
static inline void ansi_moveCursorToStart(void); // \r
static inline void ansi_clearScreenCursorToEnd(void); // \033[0J
static inline void ansi_clearScreenCursorToStart(void); // \033[1J
static inline void ansi_clearScreen(void); // \033[2J
static inline void ansi_resetScreen(void); // \033[3J
static inline void ansi_clearLineCursorToEnd(void); // \033[0K
static inline void ansi_clearLineCursorToStart(void); // \033[1K
static inline void ansi_clearLineCursorStay(void); // \033[2K
static inline void ansi_resetLine(void); // \033[2K and other function
static inline void ansi_scrollUp(unsigned int); // \033[nS
static inline void ansi_scrollDown(unsigned int); // \033[nT
static inline void ansi_hideCursor(void); // \033[?25l
static inline void ansi_showCursor(void); // \033[?25h
static inline void ansi_fontReset(void); // \033[0m
static inline void ansi_setFontBold(void); // \033[1m
static inline void ansi_setFontLight(void); // \033[2m
static inline void ansi_setFontItalic(void); // \033[3m
static inline void ansi_setFontNormalIntensity(void); // \033[22m
static inline void ansi_setFontNotItalic(void); // \033[23m
static inline void ansi_setForegroundRGB(unsigned int, unsigned int, unsigned int); // \033[38;2;r;g;bm
static inline void ansi_setDefaultForeground(void); // \033[39m
static inline void ansi_setBackgroundRGB(unsigned int, unsigned int, unsigned int); // \033[48;2;r;g;bm
static inline void ansi_setDefaultBackground(void); // \033[49m
static inline void ansi_setWindowTitle(char *); // \033]0;TEXTO\a

/*
    ANSI FUNCTIONS DEFINITION
*/

void ansi_cursorUp(void){
    printf("\033[1A");
}
void ansi_cursorUpN(unsigned int n){
    if (n == 0){
        n = 1;
    }
    printf("\033[%iA",n);
}
void ansi_cursorDown(void){
    printf("\033[1B");
}
void ansi_cursorDownN(unsigned int n){
    if(n == 0){
        n = 1;
    }
    printf("\033[%iB",n);
}
void ansi_cursorRight(void){
    printf("\033[1C");
}
void ansi_cursorRightN(unsigned int n){
    if(n == 0){
        n = 1;
    }
    printf("\033[%iC",n);
}
void ansi_cursorLeft(void){
    printf("\033[1D");
}
void ansi_cursorLeftN(unsigned int n){
    if(n == 0){
        n = 1;
    }
    printf("\033[%iD",n);
}
void ansi_cursorNextLine(void){
    printf("\033[1E");
}
void ansi_cursorNextLineN(unsigned int n){
    if(n == 0){
        n = 1;
    }
    printf("\033[%iE",n);
}
void ansi_cursorPrevLine(void){
    printf("\033[1F");
}
void ansi_cursorPrevLineN(unsigned int n){
    if(n == 0){
        n = 1;
    }
    printf("\033[%iF",n);
}
void ansi_cursorHorizontalMove(void){
    printf("\033[1G");
}
void ansi_cursorHorizontalMoveN(unsigned int n){
    if(n == 0){
        n = 1;
    }
    printf("\033[%iG",n);
}
void ansi_cursorGOTOXY(unsigned int x, unsigned int y){
    if(x == 0) x = 1;
    if(y == 0) y = 1;
    printf("\033[%i;%iH",y,x);
}
static inline void ansi_moveCursorToStart(void){
    printf("\r");
}
void ansi_clearScreenCursorToEnd(void){
    printf("\033[0J");
}
void ansi_clearScreenCursorToStart(void){
    printf("\033[1J");
}
void ansi_clearScreen(void){
    printf("\033[2J");
}
void ansi_resetScreen(void){
    printf("\033[3J");
}
void ansi_clearLineCursorToEnd(void){
    printf("\033[0K");
}
void ansi_clearLineCursorToStart(void){
    printf("\033[1K");
}
void ansi_clearLineCursorStay(void){
    printf("\033[2K");
}
void ansi_resetLine(void){
    printf("\033[2K");
    printf("\r");
}
void ansi_scrollUp(unsigned int n){
    if(n == 0){
        n = 1;
    }
    printf("\033[%iS",n);
}
void ansi_scrollDown(unsigned int n){
    if(n == 0) n = 1;
    printf("\033[%iT",n);
}
void ansi_hideCursor(void){
    printf("\033[?25l");
}
void ansi_showCursor(void){
    printf("\033[?25h");
}
void ansi_fontReset(void){
    printf("\033[0m");
}
void ansi_setFontBold(void){
    printf("\033[1m");
}
void ansi_setFontLight(void){
    printf("\033[2m");
}
void ansi_setFontItalic(void){
    printf("\033[3m");
}
void ansi_setFontNormalIntensity(void){
    printf("\033[22m");
}
void ansi_setFontNotItalic(void){
    printf("\033[23m");
}
void ansi_setForegroundRGB(unsigned int r, unsigned int g, unsigned int b){
    printf("\033[38;2;%i;%i;%im",r,g,b);
}
void ansi_setDefaultForeground(void){
    printf("\033[39m");
}
void ansi_setBackgroundRGB(unsigned int r, unsigned int g, unsigned int b){
    printf("\033[48;2;%i;%i;%im",r,g,b);
}
void ansi_setDefaultBackground(void){
    printf("\033[49m");
}
void ansi_setWindowTitle(char * title){
    printf("\033]0;%s\a", title);
}
#endif // STDACINK_H