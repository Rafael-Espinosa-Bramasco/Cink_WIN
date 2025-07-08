#ifndef CINKANSI_H
#define CINKANSI_H

/*
    Cursor Movement
*/

static inline void ansi_cursorUp(void);
static inline void ansi_cursorUpN(int);
static inline void ansi_cursorDown(void);
static inline void ansi_cursorDownN(int);
static inline void ansi_cursorRight(void);
static inline void ansi_cursorRightN(int);
static inline void ansi_cursorLeft(void);
static inline void ansi_cursorLeftN(int);
static inline void ansi_cursorNextLine(void);
static inline void ansi_cursorNextLineN(int);
static inline void ansi_cursorPrevLine(void);
static inline void ansi_cursorPrevLineN(int);

#endif