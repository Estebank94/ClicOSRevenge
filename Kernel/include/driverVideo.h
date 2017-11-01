void printMsg(int f, int c, char*msg,  char color);
void clear();
void printChar(int f, int c, char a, char color);
char getChar(int f, int c);
void putChar( char a ) ;
void forwardCursor();
void forwardCursorB();
void scroll();
void backwardCursor();
int validPosition(int f, int c);
void lineJump();
void printMsgCursor( char * msg);
void clearPosition(int f, int c);
void clearRow(int f);
void setCursor(int f, int c);
int getScreen(int f, int c);
void updateScreen();
void copyRow(int from, int to);
void changeColor(int f, int c, char color);
void changeStartModule(int i, int j);
void changeStopBackwards(int from);
int isBackwardsOn();
void backInLine();


