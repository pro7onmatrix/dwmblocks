// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /* Icon  Command                  Update Interval  Update Signal */
  { "",    "sb-playback",           1,               10 },
  { "",    "sb-updates",            1800,            11 },
  { "",    "sb-volume",             0,               12 },
  { "",    "sb-date",               1,               14 },
};

// sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
