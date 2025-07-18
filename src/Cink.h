#ifndef CINK_H
#define CINK_H

#ifdef BUILDDLL
  #if defined(_WIN32) || defined(_WIN64)
      #define API __declspec(dllexport)
  #else
      #define API
  #endif
#elif defined(BUILDSTATIC)
  #define API
#else
  #define API __declspec(dllimport)
#endif

/*
    ANSI FUNCTIONS
    Using Control Secuence Introducer CSI and some OS ANSI functions
*/

API void ansi_cursorUp(void); // \033[1A
API void ansi_cursorUpN(unsigned int); // \033[nA
API void ansi_cursorDown(void); // \033[1B
API void ansi_cursorDownN(unsigned int); // \033[nB
API void ansi_cursorRight(void); // \033[1C
API void ansi_cursorRightN(unsigned int); // \033[nC
API void ansi_cursorLeft(void); // \033[1D
API void ansi_cursorLeftN(unsigned int); // \033[nD
API void ansi_cursorNextLine(void); // \033[1E
API void ansi_cursorNextLineN(unsigned int); // \033[nE
API void ansi_cursorPrevLine(void); // \033[1F
API void ansi_cursorPrevLineN(unsigned int); // \033[nF
API void ansi_cursorHorizontalMove(void); // \033[1G
API void ansi_cursorHorizontalMoveN(unsigned int); // \033[nG
API void ansi_cursorGOTOXY(unsigned int, unsigned int); // \033[y;xH
API void ansi_moveCursorToStart(void); // \r
API void ansi_clearScreenCursorToEnd(void); // \033[0J
API void ansi_clearScreenCursorToStart(void); // \033[1J
API void ansi_clearScreen(void); // \033[2J
API void ansi_resetScreen(void); // \033[3J
API void ansi_clearLineCursorToEnd(void); // \033[0K
API void ansi_clearLineCursorToStart(void); // \033[1K
API void ansi_clearLineCursorStay(void); // \033[2K
API void ansi_resetLine(void); // \033[2K and other function
API void ansi_scrollUp(unsigned int); // \033[nS
API void ansi_scrollDown(unsigned int); // \033[nT
API void ansi_hideCursor(void); // \033[?25l
API void ansi_showCursor(void); // \033[?25h
API void ansi_fontReset(void); // \033[0m
API void ansi_setFontBold(void); // \033[1m
API void ansi_setFontLight(void); // \033[2m
API void ansi_setFontItalic(void); // \033[3m
API void ansi_setFontNormalIntensity(void); // \033[22m
API void ansi_setFontNotItalic(void); // \033[23m
API void ansi_setForegroundRGB(unsigned int, unsigned int, unsigned int); // \033[38;2;r;g;bm
API void ansi_setDefaultForeground(void); // \033[39m
API void ansi_setBackgroundRGB(unsigned int, unsigned int, unsigned int); // \033[48;2;r;g;bm
API void ansi_setDefaultBackground(void); // \033[49m
API void ansi_setWindowTitle(char *); // \033]0;TEXTO\a

#endif