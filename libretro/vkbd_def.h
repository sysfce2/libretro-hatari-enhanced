#ifndef VKBD_DEF_H
#define VKBD_DEF_H

/* Atari ST scancodes - from STkeymap.h */
#define SK_ESC       0x01
#define SK_1         0x02
#define SK_2         0x03
#define SK_3         0x04
#define SK_4         0x05
#define SK_5         0x06
#define SK_6         0x07
#define SK_7         0x08
#define SK_8         0x09
#define SK_9         0x0A
#define SK_0         0x0B
#define SK_MINUS     0x0C
#define SK_EQUAL     0x0D
#define SK_BACKSP    0x0E
#define SK_TAB       0x0F
#define SK_Q         0x10
#define SK_W         0x11
#define SK_E         0x12
#define SK_R         0x13
#define SK_T         0x14
#define SK_Y         0x15
#define SK_U         0x16
#define SK_I         0x17
#define SK_O         0x18
#define SK_P         0x19
#define SK_LBRACK    0x63
#define SK_RBRACK    0x64
#define SK_RETURN    0x1C
#define SK_CTRL      0x1D
#define SK_A         0x1E
#define SK_S         0x1F
#define SK_D         0x20
#define SK_F         0x21
#define SK_G         0x22
#define SK_H         0x23
#define SK_J         0x24
#define SK_K         0x25
#define SK_L         0x26
#define SK_SEMICOL   0x27
#define SK_QUOTE     0x28
#define SK_GRAVE     0x29
#define SK_LSHIFT    0x2A
#define SK_BACKSL    0x2B
#define SK_Z         0x2C
#define SK_X         0x2D
#define SK_C         0x2E
#define SK_V         0x2F
#define SK_B         0x30
#define SK_N         0x31
#define SK_M         0x32
#define SK_COMMA     0x33
#define SK_PERIOD    0x34
#define SK_SLASH     0x35
#define SK_RSHIFT    0x36
#define SK_ALT       0x38
#define SK_SPACE     0x39
#define SK_CAPS      0x3A
#define SK_F1        0x3B
#define SK_F2        0x3C
#define SK_F3        0x3D
#define SK_F4        0x3E
#define SK_F5        0x3F
#define SK_F6        0x40
#define SK_F7        0x41
#define SK_F8        0x42
#define SK_F9        0x43
#define SK_F10       0x44
#define SK_UP        0x48
#define SK_NPSUB     0x4A
#define SK_LEFT      0x4B
#define SK_RIGHT     0x4D
#define SK_NPADD     0x4E
#define SK_DOWN      0x50
#define SK_INSERT    0x52
#define SK_DELETE    0x53
#define SK_NPDIV     0x65
#define SK_NPMUL     0x66
#define SK_NP7       0x67
#define SK_NP8       0x68
#define SK_NP9       0x69
#define SK_NP4       0x6A
#define SK_NP5       0x6B
#define SK_NP6       0x6C
#define SK_NP1       0x6D
#define SK_NP2       0x6E
#define SK_NP3       0x6F
#define SK_NP0       0x70
#define SK_NPDOT     0x71
#define SK_NPENTER   0x72
#define SK_UNDO      0x61
#define SK_HELP      0x62
#define SK_CLRHOME   0x47

typedef struct {
   char normal[5];
   char shift[5];
   int  val;
} ST_Vkey;

/* Layout: 11 cols x 8 rows x 2 pages */
static const ST_Vkey st_vkeys[VKBDX * VKBDY * 2] =
{
   /* Page 1 */
   /* Row 0: Esc + F1-F10 */
   { "Esc", "Esc", SK_ESC   },
   { "F1",  "F1",  SK_F1    },
   { "F2",  "F2",  SK_F2    },
   { "F3",  "F3",  SK_F3    },
   { "F4",  "F4",  SK_F4    },
   { "F5",  "F5",  SK_F5    },
   { "F6",  "F6",  SK_F6    },
   { "F7",  "F7",  SK_F7    },
   { "F8",  "F8",  SK_F8    },
   { "F9",  "F9",  SK_F9    },
   { "F10", "F10", SK_F10   },

   /* Row 1: numbers */
   { "`",   "~",   SK_GRAVE  },
   { "1",   "!",   SK_1      },
   { "2",   "@",   SK_2      },
   { "3",   "#",   SK_3      },
   { "4",   "$",   SK_4      },
   { "5",   "%",   SK_5      },
   { "6",   "^",   SK_6      },
   { "7",   "&",   SK_7      },
   { "8",   "*",   SK_8      },
   { "9",   "(",   SK_9      },
   { "0",   ")",   SK_0      },

   /* Row 2: QWERTY */
   { "Tab", "Tab", SK_TAB    },
   { "Q",   "Q",   SK_Q      },
   { "W",   "W",   SK_W      },
   { "E",   "E",   SK_E      },
   { "R",   "R",   SK_R      },
   { "T",   "T",   SK_T      },
   { "Y",   "Y",   SK_Y      },
   { "U",   "U",   SK_U      },
   { "I",   "I",   SK_I      },
   { "O",   "O",   SK_O      },
   { "P",   "P",   SK_P      },

   /* Row 3: ASDF */
   { "Ctrl","Ctrl",SK_CTRL   },
   { "A",   "A",   SK_A      },
   { "S",   "S",   SK_S      },
   { "D",   "D",   SK_D      },
   { "F",   "F",   SK_F      },
   { "G",   "G",   SK_G      },
   { "H",   "H",   SK_H      },
   { "J",   "J",   SK_J      },
   { "K",   "K",   SK_K      },
   { "L",   "L",   SK_L      },
   { ";",   ":",   SK_SEMICOL },

   /* Row 4: ZXCV */
   { "Caps","Caps",SK_CAPS   },
   { "Z",   "Z",   SK_Z      },
   { "X",   "X",   SK_X      },
   { "C",   "C",   SK_C      },
   { "V",   "V",   SK_V      },
   { "B",   "B",   SK_B      },
   { "N",   "N",   SK_N      },
   { "M",   "M",   SK_M      },
   { ",",   "<",   SK_COMMA  },
   { ".",   ">",   SK_PERIOD },
   { "/",   "?",   SK_SLASH  },

   /* Row 5: modifiers + punctuation */
   { "Shft","Shft",SK_LSHIFT },
   { "-",   "_",   SK_MINUS  },
   { "=",   "+",   SK_EQUAL  },
   { "\\",  "|",   SK_BACKSL },
   { "[",   "{",   SK_LBRACK },
   { "]",   "}",   SK_RBRACK },
   { "'",   "\"",  SK_QUOTE  },
   { "RSft","RSft",SK_RSHIFT },
   { "Bksp","Bksp",SK_BACKSP },
   { "Up",  "Up",  SK_UP     },
   { "Help","Help",SK_HELP   },

   /* Row 6: bottom row */
   { "PG2", "PG2", VKBD_PAGE2 },
   { "Alt", "Alt", SK_ALT    },
   { "Spc", "Spc", SK_SPACE  },
   { "Ret", "Ret", SK_RETURN },
   { "Del", "Del", SK_DELETE },
   { "Ins", "Ins", SK_INSERT },
   { "Clr", "Clr", SK_CLRHOME},
   { "Undo","Undo",SK_UNDO   },
   { "Left","Left",SK_LEFT   },
   { "Down","Down",SK_DOWN   },
   { "Rght","Rght",SK_RIGHT  },

   /* Row 7: special */
   { "",    "",    -1        },
   { "",    "",    -1        },
   { "Stat","Stat",VKBD_STAT },
   { "",    "",    -1        },
   { "",    "",    -1        },
   { "",    "",    -1        },
   { "",    "",    -1        },
   { "",    "",    -1        },
   { "Col", "Col", VKBD_COLOR},
   { "",    "",    -1        },
   { "Hide","Hide",VKBD_HIDE },

   /* ---- Page 2: Numpad + extras ---- */

   /* Row 0 */
   { "Esc", "Esc", SK_ESC   },
   { "F1",  "F1",  SK_F1    },
   { "F2",  "F2",  SK_F2    },
   { "F3",  "F3",  SK_F3    },
   { "F4",  "F4",  SK_F4    },
   { "F5",  "F5",  SK_F5    },
   { "F6",  "F6",  SK_F6    },
   { "F7",  "F7",  SK_F7    },
   { "F8",  "F8",  SK_F8    },
   { "F9",  "F9",  SK_F9    },
   { "F10", "F10", SK_F10   },

   /* Row 1: numpad top */
   { "NP/", "NP/", SK_NPDIV  },
   { "NP*", "NP*", SK_NPMUL  },
   { "NP-", "NP-", SK_NPSUB  },
   { "NP7", "7",   SK_NP7    },
   { "NP8", "8",   SK_NP8    },
   { "NP9", "9",   SK_NP9    },
   { "NP4", "4",   SK_NP4    },
   { "NP5", "5",   SK_NP5    },
   { "NP6", "6",   SK_NP6    },
   { "NP+", "NP+", SK_NPADD  },
   { "NPE", "NPE", SK_NPENTER},

   /* Row 2: numpad bottom */
   { "NP1", "1",   SK_NP1    },
   { "NP2", "2",   SK_NP2    },
   { "NP3", "3",   SK_NP3    },
   { "NP0", "0",   SK_NP0    },
   { "NP.", ".",   SK_NPDOT  },
   { "",    "",    -1        },
   { "",    "",    -1        },
   { "",    "",    -1        },
   { "",    "",    -1        },
   { "",    "",    -1        },
   { "",    "",    -1        },

   /* Row 3 */
   { "Tab", "Tab", SK_TAB    },
   { "Q",   "Q",   SK_Q      },
   { "W",   "W",   SK_W      },
   { "E",   "E",   SK_E      },
   { "R",   "R",   SK_R      },
   { "T",   "T",   SK_T      },
   { "Y",   "Y",   SK_Y      },
   { "U",   "U",   SK_U      },
   { "I",   "I",   SK_I      },
   { "O",   "O",   SK_O      },
   { "P",   "P",   SK_P      },

   /* Row 4 */
   { "Ctrl","Ctrl",SK_CTRL   },
   { "A",   "A",   SK_A      },
   { "S",   "S",   SK_S      },
   { "D",   "D",   SK_D      },
   { "F",   "F",   SK_F      },
   { "G",   "G",   SK_G      },
   { "H",   "H",   SK_H      },
   { "J",   "J",   SK_J      },
   { "K",   "K",   SK_K      },
   { "L",   "L",   SK_L      },
   { "Ret", "Ret", SK_RETURN },

   /* Row 5 */
   { "Shft","Shft",SK_LSHIFT },
   { "Z",   "Z",   SK_Z      },
   { "X",   "X",   SK_X      },
   { "C",   "C",   SK_C      },
   { "V",   "V",   SK_V      },
   { "B",   "B",   SK_B      },
   { "N",   "N",   SK_N      },
   { "M",   "M",   SK_M      },
   { "Alt", "Alt", SK_ALT    },
   { "Spc", "Spc", SK_SPACE  },
   { "RSft","RSft",SK_RSHIFT },

   /* Row 6 */
   { "PG1", "PG1", VKBD_PAGE2 },
   { "Up",  "Up",  SK_UP     },
   { "Down","Down",SK_DOWN   },
   { "Left","Left",SK_LEFT   },
   { "Rght","Rght",SK_RIGHT  },
   { "Del", "Del", SK_DELETE },
   { "Ins", "Ins", SK_INSERT },
   { "Clr", "Clr", SK_CLRHOME},
   { "Undo","Undo",SK_UNDO   },
   { "Help","Help",SK_HELP   },
   { "Bksp","Bksp",SK_BACKSP },

   /* Row 7 */
   { "",    "",    -1        },
   { "",    "",    -1        },
   { "Stat","Stat",VKBD_STAT },
   { "",    "",    -1        },
   { "",    "",    -1        },
   { "",    "",    -1        },
   { "",    "",    -1        },
   { "",    "",    -1        },
   { "Col", "Col", VKBD_COLOR},
   { "",    "",    -1        },
   { "Hide","Hide",VKBD_HIDE },
};

#endif /* VKBD_DEF_H */
