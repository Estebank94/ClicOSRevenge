void setIDTEntry(uint64_t offset, int entry);
void loadIDT();
void enablePIC();
void timerTickHandlerC();
void timerTickHandler();
void sti();
void keyboardHandlerC();
void keyboardHandler();
void sys_callHandler();
void spure();