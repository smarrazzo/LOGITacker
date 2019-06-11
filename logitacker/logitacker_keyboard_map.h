#ifndef LOGITACKER_KEYBOARD_MAP_H__
#define LOGITACKER_KEYBOARD_MAP_H__

#include "stdint.h"
#include "stdlib.h"
#include "nordic_common.h"
#include "app_util.h"
#include "wchar.h"

typedef uint32_t utf8_char_t;
typedef char HID_key_code_t;
typedef char HID_mod_code_t;


/*
 * https://www.usb.org/sites/default/files/documents/hut1_12v2.pdf
 *
 * see table 12
 */


#define ALL_KEYCODES(PROCESSING_FUNC)           \
    PROCESSING_FUNC(NONE, 0x00)	    			\
    PROCESSING_FUNC(ERROR_ROLLOVER, 0x01)		\
    PROCESSING_FUNC(POST_FAIL, 0x02)			\
    PROCESSING_FUNC(ERROR_UNDEFINED, 0x03)		\
    PROCESSING_FUNC(A, 0x04)				    \
    PROCESSING_FUNC(B, 0x05)				    \
    PROCESSING_FUNC(C, 0x06)				    \
    PROCESSING_FUNC(D, 0x07)				    \
    PROCESSING_FUNC(E, 0x08)				    \
    PROCESSING_FUNC(F, 0x09)				    \
    PROCESSING_FUNC(G, 0x0a)				    \
    PROCESSING_FUNC(H, 0x0b)				    \
    PROCESSING_FUNC(I, 0x0c)				    \
    PROCESSING_FUNC(J, 0x0d)				    \
    PROCESSING_FUNC(K, 0x0e)				    \
    PROCESSING_FUNC(L, 0x0f)				    \
    PROCESSING_FUNC(M, 0x10)				    \
    PROCESSING_FUNC(N, 0x11)				    \
    PROCESSING_FUNC(O, 0x12)				    \
    PROCESSING_FUNC(P, 0x13)				    \
    PROCESSING_FUNC(Q, 0x14)				    \
    PROCESSING_FUNC(R, 0x15)				    \
    PROCESSING_FUNC(S, 0x16)				    \
    PROCESSING_FUNC(T, 0x17)				    \
    PROCESSING_FUNC(U, 0x18)				    \
    PROCESSING_FUNC(V, 0x19)				    \
    PROCESSING_FUNC(W, 0x1a)				    \
    PROCESSING_FUNC(X, 0x1b)				    \
    PROCESSING_FUNC(Y, 0x1c)				    \
    PROCESSING_FUNC(Z, 0x1d)				    \
    PROCESSING_FUNC(1, 0x1e)				    \
    PROCESSING_FUNC(2, 0x1f)				    \
    PROCESSING_FUNC(3, 0x20)				    \
    PROCESSING_FUNC(4, 0x21)				    \
    PROCESSING_FUNC(5, 0x22)				    \
    PROCESSING_FUNC(6, 0x23)				    \
    PROCESSING_FUNC(7, 0x24)				    \
    PROCESSING_FUNC(8, 0x25)				    \
    PROCESSING_FUNC(9, 0x26)				    \
    PROCESSING_FUNC(0, 0x27)				    \
    PROCESSING_FUNC(ENTER, 0x28)				\
    PROCESSING_FUNC(ESC, 0x29)				    \
    PROCESSING_FUNC(BACKSPACE, 0x2a)			\
    PROCESSING_FUNC(TAB, 0x2b)				    \
    PROCESSING_FUNC(SPACE, 0x2c)				\
    PROCESSING_FUNC(MINUS, 0x2d)				\
    PROCESSING_FUNC(EQUAL, 0x2e)				\
    PROCESSING_FUNC(LEFTBRACE, 0x2f)			\
    PROCESSING_FUNC(RIGHTBRACE, 0x30)			\
    PROCESSING_FUNC(BACKSLASH, 0x31)			\
    PROCESSING_FUNC(HASHTILDE, 0x32)			\
    PROCESSING_FUNC(SEMICOLON, 0x33)			\
    PROCESSING_FUNC(APOSTROPHE, 0x34)			\
    PROCESSING_FUNC(GRAVE, 0x35)				\
    PROCESSING_FUNC(COMMA, 0x36)				\
    PROCESSING_FUNC(DOT, 0x37)				    \
    PROCESSING_FUNC(SLASH, 0x38)				\
    PROCESSING_FUNC(CAPSLOCK, 0x39)				\
    PROCESSING_FUNC(F1, 0x3a)				    \
    PROCESSING_FUNC(F2, 0x3b)				    \
    PROCESSING_FUNC(F3, 0x3c)				    \
    PROCESSING_FUNC(F4, 0x3d)				    \
    PROCESSING_FUNC(F5, 0x3e)				    \
    PROCESSING_FUNC(F6, 0x3f)				    \
    PROCESSING_FUNC(F7, 0x40)				    \
    PROCESSING_FUNC(F8, 0x41)				    \
    PROCESSING_FUNC(F9, 0x42)				    \
    PROCESSING_FUNC(F10, 0x43)				    \
    PROCESSING_FUNC(F11, 0x44)				    \
    PROCESSING_FUNC(F12, 0x45)				    \
    PROCESSING_FUNC(SYSRQ, 0x46)				\
    PROCESSING_FUNC(SCROLLLOCK, 0x47)			\
    PROCESSING_FUNC(PAUSE, 0x48)				\
    PROCESSING_FUNC(INSERT, 0x49)				\
    PROCESSING_FUNC(HOME, 0x4a)				    \
    PROCESSING_FUNC(PAGEUP, 0x4b)				\
    PROCESSING_FUNC(DELETE, 0x4c)				\
    PROCESSING_FUNC(END, 0x4d)				    \
    PROCESSING_FUNC(PAGEDOWN, 0x4e)				\
    PROCESSING_FUNC(RIGHT, 0x4f)			   	\
    PROCESSING_FUNC(LEFT, 0x50)				    \
    PROCESSING_FUNC(DOWN, 0x51)				    \
    PROCESSING_FUNC(UP, 0x52)				    \
    PROCESSING_FUNC(NUMLOCK, 0x53)				\
    PROCESSING_FUNC(KPSLASH, 0x54)				\
    PROCESSING_FUNC(KPASTERISK, 0x55)			\
    PROCESSING_FUNC(KPMINUS, 0x56)				\
    PROCESSING_FUNC(KPPLUS, 0x57)				\
    PROCESSING_FUNC(KPENTER, 0x58)				\
    PROCESSING_FUNC(KP1, 0x59)				    \
    PROCESSING_FUNC(KP2, 0x5a)				    \
    PROCESSING_FUNC(KP3, 0x5b)				    \
    PROCESSING_FUNC(KP4, 0x5c)				    \
    PROCESSING_FUNC(KP5, 0x5d)				    \
    PROCESSING_FUNC(KP6, 0x5e)				    \
    PROCESSING_FUNC(KP7, 0x5f)				    \
    PROCESSING_FUNC(KP8, 0x60)				    \
    PROCESSING_FUNC(KP9, 0x61)				    \
    PROCESSING_FUNC(KP0, 0x62)				    \
    PROCESSING_FUNC(KPDOT, 0x63)				\
    PROCESSING_FUNC(102ND, 0x64)				\
    PROCESSING_FUNC(COMPOSE, 0x65)				\
    PROCESSING_FUNC(POWER, 0x66)				\
    PROCESSING_FUNC(KPEQUAL, 0x67)				\
    PROCESSING_FUNC(F13, 0x68)				    \
    PROCESSING_FUNC(F14, 0x69)				    \
    PROCESSING_FUNC(F15, 0x6a)				    \
    PROCESSING_FUNC(F16, 0x6b)				    \
    PROCESSING_FUNC(F17, 0x6c)				    \
    PROCESSING_FUNC(F18, 0x6d)				    \
    PROCESSING_FUNC(F19, 0x6e)				    \
    PROCESSING_FUNC(F20, 0x6f)				    \
    PROCESSING_FUNC(F21, 0x70)				    \
    PROCESSING_FUNC(F22, 0x71)				    \
    PROCESSING_FUNC(F23, 0x72)				    \
    PROCESSING_FUNC(F24, 0x73)				    \
    PROCESSING_FUNC(OPEN, 0x74)				    \
    PROCESSING_FUNC(HELP, 0x75)				    \
    PROCESSING_FUNC(PROPS, 0x76)				\
    PROCESSING_FUNC(FRONT, 0x77)				\
    PROCESSING_FUNC(STOP, 0x78)				    \
    PROCESSING_FUNC(AGAIN, 0x79)				\
    PROCESSING_FUNC(UNDO, 0x7a)				    \
    PROCESSING_FUNC(CUT, 0x7b)				    \
    PROCESSING_FUNC(COPY, 0x7c)				    \
    PROCESSING_FUNC(PASTE, 0x7d)				\
    PROCESSING_FUNC(FIND, 0x7e)				    \
    PROCESSING_FUNC(MUTE, 0x7f)				    \
    PROCESSING_FUNC(VOLUMEUP, 0x80)				\
    PROCESSING_FUNC(VOLUMEDOWN, 0x81)			\
    PROCESSING_FUNC(KPCOMMA, 0x85)				\
    PROCESSING_FUNC(RO, 0x87)				    \
    PROCESSING_FUNC(KATAKANAHIRAGANA, 0x88)		\
    PROCESSING_FUNC(YEN, 0x89)				    \
    PROCESSING_FUNC(HENKAN, 0x8a)				\
    PROCESSING_FUNC(MUHENKAN, 0x8b)				\
    PROCESSING_FUNC(KPJPCOMMA, 0x8c)			\
    PROCESSING_FUNC(HANGEUL, 0x90)				\
    PROCESSING_FUNC(HANJA, 0x91)				\
    PROCESSING_FUNC(KATAKANA, 0x92)				\
    PROCESSING_FUNC(HIRAGANA, 0x93)				\
    PROCESSING_FUNC(ZENKAKUHANKAKU, 0x94)		\
    PROCESSING_FUNC(KPLEFTPARENTHESE, 0xb6)		\
    PROCESSING_FUNC(KPRIGHTPARENTHESE, 0xb7)	\
    PROCESSING_FUNC(LEFTCTRL, 0xe0)				\
    PROCESSING_FUNC(LEFTSHIFT, 0xe1)			\
    PROCESSING_FUNC(LEFTALT, 0xe2)				\
    PROCESSING_FUNC(LEFTMETA, 0xe3)				\
    PROCESSING_FUNC(RIGHTCTRL, 0xe4)			\
    PROCESSING_FUNC(RIGHTSHIFT, 0xe5)			\
    PROCESSING_FUNC(RIGHTALT, 0xe6)				\
    PROCESSING_FUNC(RIGHTMETA, 0xe7)			\


#define KEYCODE_ASSIGN_ENUM(name, val) CONCAT_2(HID_KEY_,name)=val,
#define KEYCODE_SWITCH_CASE(nameval, val) case val: { return STRINGIFY(CONCAT_2(HID_KEY_,nameval)); }

// define enum with HID key codes
typedef enum keys {
    ALL_KEYCODES(KEYCODE_ASSIGN_ENUM)
} logitacker_keyboard_map_hid_keys_t;

#define ALIAS_KEYCODES(PROCESSING_FUNC)         \
    PROCESSING_FUNC(RETURN, HID_KEY_ENTER)  	\
    PROCESSING_FUNC(ESCAPE, HID_KEY_ESC)	    \
    PROCESSING_FUNC(TABULATOR, HID_KEY_TAB)	    \
    PROCESSING_FUNC(CAPS, HID_KEY_CAPSLOCK)     \
    PROCESSING_FUNC(PRINT, HID_KEY_SYSRQ)		\
    PROCESSING_FUNC(PRINTSCREEN, HID_KEY_SYSRQ)	\
    PROCESSING_FUNC(SCROLL, HID_KEY_SCROLLLOCK)	\
    PROCESSING_FUNC(BREAK, HID_KEY_PAUSE)		\
    PROCESSING_FUNC(INS, HID_KEY_INSERT)		\
    PROCESSING_FUNC(DEL, HID_KEY_DELETE)		\
    PROCESSING_FUNC(RIGHTARROW, HID_KEY_RIGHT)	\
    PROCESSING_FUNC(LEFTARROW, HID_KEY_LEFT)	\
    PROCESSING_FUNC(DOWNARROW, HID_KEY_DOWN)	\
    PROCESSING_FUNC(UPARROW, HID_KEY_UP)		\
    PROCESSING_FUNC(NUM, HID_KEY_NUMLOCK)		\
    PROCESSING_FUNC(APP, HID_KEY_COMPOSE)		\
    PROCESSING_FUNC(MENU, HID_KEY_COMPOSE)		\
    PROCESSING_FUNC(CTRL, HID_KEY_LEFTCTRL)		\
    PROCESSING_FUNC(CONTROL, HID_KEY_LEFTCTRL)	\
    PROCESSING_FUNC(SHIFT, HID_KEY_LEFTSHIFT)	\
    PROCESSING_FUNC(ALT, HID_KEY_LEFTALT)		\
    PROCESSING_FUNC(GUI, HID_KEY_LEFTMETA)		\
    PROCESSING_FUNC(COMMAND, HID_KEY_LEFTMETA)	\
    PROCESSING_FUNC(WINDOWS, HID_KEY_LEFTMETA)	\


#define HID_MOD_KEY_NONE            0x00
#define HID_MOD_KEY_LEFT_CONTROL    0x01
#define HID_MOD_KEY_LEFT_SHIFT      0x02
#define HID_MOD_KEY_LEFT_ALT        0x04
#define HID_MOD_KEY_LEFT_GUI        0x08
#define HID_MOD_KEY_RIGHT_CONTROL   0x10
#define HID_MOD_KEY_RIGHT_SHIFT     0x20
#define HID_MOD_KEY_RIGHT_ALT       0x40
#define HID_MOD_KEY_RIGHT_GUI       0x80

typedef struct {
    HID_mod_code_t mod;
    HID_key_code_t keys[6];
} hid_keyboard_report_t;

#define DEF_REPORT_NAMED_X(arg_num, ...) CONCAT_2(DEF_REPORT_NAMED_,arg_num) (__VA_ARGS__)
#define DEF_REPORT_NAMED(name,mod,...) DEF_REPORT_NAMED_X(NUM_VA_ARGS(__VA_ARGS__), name, mod, __VA_ARGS__)
#define DEF_REPORT_NAMED_0(name,modifier) static const hid_keyboard_report_t CONCAT_2(REPORT_,name) = { .mod = modifier, .keys = { 0 } }
#define DEF_REPORT_NAMED_1(name,modifier,key1) static const hid_keyboard_report_t CONCAT_2(REPORT_,name) = { .mod = modifier, .keys = { key1 } }
#define DEF_REPORT_NAMED_2(name,modifier,key1,key2) static const hid_keyboard_report_t CONCAT_2(REPORT_,name) = { .mod = modifier, .keys = { key1, key2 } }
#define DEF_REPORT_NAMED_3(name,modifier,key1,key2,key3) static const hid_keyboard_report_t CONCAT_2(REPORT_,name) = { .mod = modifier, .keys = { key1, key2 ,key3 } }
#define DEF_REPORT_NAMED_4(name,modifier,key1,key2,key3,key4) static const hid_keyboard_report_t CONCAT_2(REPORT_,name) = { .mod = modifier, .keys = { key1, key2 ,key3, key4 } }
#define DEF_REPORT_NAMED_5(name,modifier,key1,key2,key3,key4,key5) static const hid_keyboard_report_t CONCAT_2(REPORT_,name) = { .mod = modifier, .keys = { key1, key2 ,key3, key4, key5 } }
#define DEF_REPORT_NAMED_6(name,modifier,key1,key2,key3,key4,key5,key6) static const hid_keyboard_report_t CONCAT_2(REPORT_,name) = { .mod = modifier, .keys = { key1, key2 ,key3, key4, key5, key6 } }

#define DEF_REPORT_X(arg_num, ...) CONCAT_2(DEF_REPORT_,arg_num) (__VA_ARGS__)
#define DEF_REPORT(mod,...) DEF_REPORT_X(NUM_VA_ARGS(__VA_ARGS__), mod, __VA_ARGS__)
#define DEF_REPORT_0(modifier) { .mod = modifier, .keys = { 0 } }
#define DEF_REPORT_1(modifier,key1) { .mod = modifier, .keys = { key1 } }
#define DEF_REPORT_2(modifier,key1,key2) { .mod = modifier, .keys = { key1, key2 } }
#define DEF_REPORT_3(modifier,key1,key2,key3) { .mod = modifier, .keys = { key1, key2 ,key3 } }
#define DEF_REPORT_4(modifier,key1,key2,key3,key4) { .mod = modifier, .keys = { key1, key2 ,key3, key4 } }
#define DEF_REPORT_5(modifier,key1,key2,key3,key4,key5) { .mod = modifier, .keys = { key1, key2 ,key3, key4, key5 } }
#define DEF_REPORT_6(modifier,key1,key2,key3,key4,key5,key6) { .mod = modifier, .keys = { key1, key2 ,key3, key4, key5, key6 } }

#define DEF_REPORT_SEQUENCE(...) { __VA_ARGS__ }
#define DEF_REPORT_SEQUENCE_NAMED(name,...) const static hid_keyboard_report_t CONCAT_2(HID_REPORT_SEQUENCE_,name)[] = DEF_REPORT_SEQUENCE(__VA_ARGS__ )

    /*
DEF_REPORT_NAMED(RELEASE,0);
DEF_REPORT_NAMED(LOWER_A, 0, HID_KEY_A);
DEF_REPORT_NAMED(UPPER_A, HID_MOD_KEY_LEFT_SHIFT, HID_KEY_A);
DEF_REPORT_NAMED(UPPER_ABC, HID_MOD_KEY_LEFT_SHIFT, HID_KEY_A, HID_KEY_B, HID_KEY_C);

DEF_REPORT_NAMED(US_TAB, 0, HID_KEY_TAB);         // '\t'
DEF_REPORT_NAMED(US_ENTER, 0, HID_KEY_TAB);       // '\n'
DEF_REPORT_NAMED(US_SPACE, 0, HID_KEY_SPACE);     // ' '

DEF_REPORT_SEQUENCE_NAMED(US_UPPER_A, DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT,HID_KEY_A), DEF_REPORT(0,HID_KEY_NONE));
DEF_REPORT_SEQUENCE_NAMED(US_UPPER_B, DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT,HID_KEY_B), DEF_REPORT(0,HID_KEY_NONE));
DEF_REPORT_SEQUENCE_NAMED(US_LOWER_A, DEF_REPORT(HID_MOD_KEY_NONE,HID_KEY_A), DEF_REPORT(0,HID_KEY_NONE));
DEF_REPORT_SEQUENCE_NAMED(US_LOWER_B, DEF_REPORT(HID_MOD_KEY_NONE,HID_KEY_B), DEF_REPORT(0,HID_KEY_NONE));
DEF_REPORT_SEQUENCE_NAMED(US_UUML, DEF_REPORT(HID_MOD_KEY_NONE,HID_KEY_B), DEF_REPORT(HID_MOD_KEY_NONE,HID_KEY_C), DEF_REPORT(0,HID_KEY_NONE));

DEF_REPORT_SEQUENCE_NAMED(US_UPPER_A, DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT,HID_KEY_A));

DEF_REPORT_SEQUENCE_NAMED(US_UPPER_A,			 DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT,HID_KEY_A));
DEF_REPORT_SEQUENCE_NAMED(US_LOWER_A,			 DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT,HID_KEY_A));
*/

DEF_REPORT_SEQUENCE_NAMED(RELEASE,			        DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_NONE));


DEF_REPORT_SEQUENCE_NAMED(US_TAB,			        DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_TAB));
DEF_REPORT_SEQUENCE_NAMED(US_ENTER,			        DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_ENTER));
DEF_REPORT_SEQUENCE_NAMED(US_SPACE,			        DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_SPACE));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_1,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_1));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_2,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_2));
DEF_REPORT_SEQUENCE_NAMED(US_BACKSLASH,			    DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_BACKSLASH));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_4,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_4));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_5,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_5));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_6,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_6));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_BACKSLASH,	DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_BACKSLASH));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_8,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_8));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_9,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_9));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_RIGHTBRACE,	DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_RIGHTBRACE));
DEF_REPORT_SEQUENCE_NAMED(US_RIGHTBRACE,			DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_RIGHTBRACE));
DEF_REPORT_SEQUENCE_NAMED(US_COMMA,			        DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_COMMA));
DEF_REPORT_SEQUENCE_NAMED(US_SLASH,			        DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_SLASH));
DEF_REPORT_SEQUENCE_NAMED(US_DOT,			        DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_DOT));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_7,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_7));
DEF_REPORT_SEQUENCE_NAMED(US_0,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_0));
DEF_REPORT_SEQUENCE_NAMED(US_1,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_1));
DEF_REPORT_SEQUENCE_NAMED(US_2,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_2));
DEF_REPORT_SEQUENCE_NAMED(US_3,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_3));
DEF_REPORT_SEQUENCE_NAMED(US_4,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_4));
DEF_REPORT_SEQUENCE_NAMED(US_5,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_5));
DEF_REPORT_SEQUENCE_NAMED(US_6,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_6));
DEF_REPORT_SEQUENCE_NAMED(US_7,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_7));
DEF_REPORT_SEQUENCE_NAMED(US_8,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_8));
DEF_REPORT_SEQUENCE_NAMED(US_9,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_9));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_DOT,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_DOT));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_COMMA,		DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_COMMA));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_0,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_0));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_MINUS,		DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_MINUS));
DEF_REPORT_SEQUENCE_NAMED(US_MINUS,			        DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_MINUS));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_A,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_A));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_B,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_B));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_C,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_C));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_D,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_D));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_E,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_E));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_F,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_F));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_G,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_G));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_H,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_H));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_I,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_I));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_J,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_J));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_K,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_K));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_L,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_L));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_M,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_M));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_N,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_N));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_O,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_O));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_P,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_P));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_Q,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_Q));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_R,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_R));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_S,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_S));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_T,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_T));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_U,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_U));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_V,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_V));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_W,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_W));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_X,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_X));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_Y,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_Y));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_Z,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_Z));
DEF_REPORT_SEQUENCE_NAMED(US_GRAVE,			        DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_GRAVE));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_GRAVE,		DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_GRAVE));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_SLASH,		DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_SLASH));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_EQUAL,		DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_EQUAL));
DEF_REPORT_SEQUENCE_NAMED(US_EQUAL,			        DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_EQUAL));
DEF_REPORT_SEQUENCE_NAMED(US_A,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_A));
DEF_REPORT_SEQUENCE_NAMED(US_B,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_B));
DEF_REPORT_SEQUENCE_NAMED(US_C,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_C));
DEF_REPORT_SEQUENCE_NAMED(US_D,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_D));
DEF_REPORT_SEQUENCE_NAMED(US_E,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_E));
DEF_REPORT_SEQUENCE_NAMED(US_F,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_F));
DEF_REPORT_SEQUENCE_NAMED(US_G,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_G));
DEF_REPORT_SEQUENCE_NAMED(US_H,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_H));
DEF_REPORT_SEQUENCE_NAMED(US_I,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_I));
DEF_REPORT_SEQUENCE_NAMED(US_J,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_J));
DEF_REPORT_SEQUENCE_NAMED(US_K,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_K));
DEF_REPORT_SEQUENCE_NAMED(US_L,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_L));
DEF_REPORT_SEQUENCE_NAMED(US_M,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_M));
DEF_REPORT_SEQUENCE_NAMED(US_N,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_N));
DEF_REPORT_SEQUENCE_NAMED(US_O,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_O));
DEF_REPORT_SEQUENCE_NAMED(US_P,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_P));
DEF_REPORT_SEQUENCE_NAMED(US_Q,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_Q));
DEF_REPORT_SEQUENCE_NAMED(US_R,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_R));
DEF_REPORT_SEQUENCE_NAMED(US_S,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_S));
DEF_REPORT_SEQUENCE_NAMED(US_T,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_T));
DEF_REPORT_SEQUENCE_NAMED(US_U,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_U));
DEF_REPORT_SEQUENCE_NAMED(US_V,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_V));
DEF_REPORT_SEQUENCE_NAMED(US_W,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_W));
DEF_REPORT_SEQUENCE_NAMED(US_X,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_X));
DEF_REPORT_SEQUENCE_NAMED(US_Y,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_Y));
DEF_REPORT_SEQUENCE_NAMED(US_Z,			            DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_Z));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_3,			DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_3));
DEF_REPORT_SEQUENCE_NAMED(US_LEFTBRACE,			    DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_LEFTBRACE));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_LEFTBRACE,	DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_LEFTBRACE));
DEF_REPORT_SEQUENCE_NAMED(US_SEMICOLON,			    DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_SEMICOLON));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_SEMICOLON,	DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_SEMICOLON));
DEF_REPORT_SEQUENCE_NAMED(US_APOSTROPHE,			DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_APOSTROPHE));
DEF_REPORT_SEQUENCE_NAMED(US_SHIFT_AND_APOSTROPHE,	DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_APOSTROPHE));

DEF_REPORT_SEQUENCE_NAMED(102ND,	                DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_102ND));
DEF_REPORT_SEQUENCE_NAMED(SHIFT_AND_102ND,	        DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_102ND));
DEF_REPORT_SEQUENCE_NAMED(RALT_AND_102ND,	        DEF_REPORT(HID_MOD_KEY_RIGHT_ALT, HID_KEY_102ND));
DEF_REPORT_SEQUENCE_NAMED(RALT_AND_Q,    	        DEF_REPORT(HID_MOD_KEY_RIGHT_ALT, HID_KEY_Q));
DEF_REPORT_SEQUENCE_NAMED(RALT_AND_7,    	        DEF_REPORT(HID_MOD_KEY_RIGHT_ALT, HID_KEY_7));
DEF_REPORT_SEQUENCE_NAMED(RALT_AND_8,    	        DEF_REPORT(HID_MOD_KEY_RIGHT_ALT, HID_KEY_8));
DEF_REPORT_SEQUENCE_NAMED(RALT_AND_9,    	        DEF_REPORT(HID_MOD_KEY_RIGHT_ALT, HID_KEY_9));
DEF_REPORT_SEQUENCE_NAMED(RALT_AND_0,    	        DEF_REPORT(HID_MOD_KEY_RIGHT_ALT, HID_KEY_0));
DEF_REPORT_SEQUENCE_NAMED(RALT_AND_RIGHTBRACE,    	DEF_REPORT(HID_MOD_KEY_RIGHT_ALT, HID_KEY_RIGHTBRACE));
DEF_REPORT_SEQUENCE_NAMED(RALT_AND_MINUS,    	    DEF_REPORT(HID_MOD_KEY_RIGHT_ALT, HID_KEY_MINUS));
DEF_REPORT_SEQUENCE_NAMED(RALT_AND_M,    	        DEF_REPORT(HID_MOD_KEY_RIGHT_ALT, HID_KEY_M));
DEF_REPORT_SEQUENCE_NAMED(RALT_AND_E,    	        DEF_REPORT(HID_MOD_KEY_RIGHT_ALT, HID_KEY_E));

// German '^' as deadkey
DEF_REPORT_SEQUENCE_NAMED(GRAVE_FOLLOWED_BY_SPACE,    	    DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_GRAVE), DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_NONE), DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_SPACE));
// German '`' as deadkey
DEF_REPORT_SEQUENCE_NAMED(SHIFT_AND_EQUAL_FOLLOWED_BY_SPACE,    	    DEF_REPORT(HID_MOD_KEY_LEFT_SHIFT, HID_KEY_EQUAL), DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_NONE), DEF_REPORT(HID_MOD_KEY_NONE, HID_KEY_SPACE));


#define LAYOUT_US(PROC_FUNC) \
    PROC_FUNC(L'\t', HID_REPORT_SEQUENCE_US_TAB)                    \
    PROC_FUNC(L'\n', HID_REPORT_SEQUENCE_US_ENTER)                  \
    PROC_FUNC(L' ', HID_REPORT_SEQUENCE_US_SPACE)                   \
    PROC_FUNC(L'!', HID_REPORT_SEQUENCE_US_SHIFT_AND_1)             \
    PROC_FUNC(L'@', HID_REPORT_SEQUENCE_US_SHIFT_AND_2)             \
    PROC_FUNC(L'\\', HID_REPORT_SEQUENCE_US_BACKSLASH)              \
    PROC_FUNC(L'$', HID_REPORT_SEQUENCE_US_SHIFT_AND_4)             \
    PROC_FUNC(L'%', HID_REPORT_SEQUENCE_US_SHIFT_AND_5)             \
    PROC_FUNC(L'^', HID_REPORT_SEQUENCE_US_SHIFT_AND_6)             \
    PROC_FUNC(L'|', HID_REPORT_SEQUENCE_US_SHIFT_AND_BACKSLASH)     \
    PROC_FUNC(L'*', HID_REPORT_SEQUENCE_US_SHIFT_AND_8)             \
    PROC_FUNC(L'(', HID_REPORT_SEQUENCE_US_SHIFT_AND_9)             \
    PROC_FUNC(L'}', HID_REPORT_SEQUENCE_US_SHIFT_AND_RIGHTBRACE)    \
    PROC_FUNC(L']', HID_REPORT_SEQUENCE_US_RIGHTBRACE)              \
    PROC_FUNC(L',', HID_REPORT_SEQUENCE_US_COMMA)                   \
    PROC_FUNC(L'/', HID_REPORT_SEQUENCE_US_SLASH)                   \
    PROC_FUNC(L'.', HID_REPORT_SEQUENCE_US_DOT)                     \
    PROC_FUNC(L'&', HID_REPORT_SEQUENCE_US_SHIFT_AND_7)             \
    PROC_FUNC(L'0', HID_REPORT_SEQUENCE_US_0)                       \
    PROC_FUNC(L'1', HID_REPORT_SEQUENCE_US_1)                       \
    PROC_FUNC(L'2', HID_REPORT_SEQUENCE_US_2)                       \
    PROC_FUNC(L'3', HID_REPORT_SEQUENCE_US_3)                       \
    PROC_FUNC(L'4', HID_REPORT_SEQUENCE_US_4)                       \
    PROC_FUNC(L'5', HID_REPORT_SEQUENCE_US_5)                       \
    PROC_FUNC(L'6', HID_REPORT_SEQUENCE_US_6)                       \
    PROC_FUNC(L'7', HID_REPORT_SEQUENCE_US_7)                       \
    PROC_FUNC(L'8', HID_REPORT_SEQUENCE_US_8)                       \
    PROC_FUNC(L'9', HID_REPORT_SEQUENCE_US_9)                       \
    PROC_FUNC(L'>', HID_REPORT_SEQUENCE_US_SHIFT_AND_DOT)           \
    PROC_FUNC(L'<', HID_REPORT_SEQUENCE_US_SHIFT_AND_COMMA)         \
    PROC_FUNC(L')', HID_REPORT_SEQUENCE_US_SHIFT_AND_0)             \
    PROC_FUNC(L'_', HID_REPORT_SEQUENCE_US_SHIFT_AND_MINUS)         \
    PROC_FUNC(L'-', HID_REPORT_SEQUENCE_US_MINUS)                   \
    PROC_FUNC(L'A', HID_REPORT_SEQUENCE_US_SHIFT_AND_A)             \
    PROC_FUNC(L'B', HID_REPORT_SEQUENCE_US_SHIFT_AND_B)             \
    PROC_FUNC(L'C', HID_REPORT_SEQUENCE_US_SHIFT_AND_C)             \
    PROC_FUNC(L'D', HID_REPORT_SEQUENCE_US_SHIFT_AND_D)             \
    PROC_FUNC(L'E', HID_REPORT_SEQUENCE_US_SHIFT_AND_E)             \
    PROC_FUNC(L'F', HID_REPORT_SEQUENCE_US_SHIFT_AND_F)             \
    PROC_FUNC(L'G', HID_REPORT_SEQUENCE_US_SHIFT_AND_G)             \
    PROC_FUNC(L'H', HID_REPORT_SEQUENCE_US_SHIFT_AND_H)             \
    PROC_FUNC(L'I', HID_REPORT_SEQUENCE_US_SHIFT_AND_I)             \
    PROC_FUNC(L'J', HID_REPORT_SEQUENCE_US_SHIFT_AND_J)             \
    PROC_FUNC(L'K', HID_REPORT_SEQUENCE_US_SHIFT_AND_K)             \
    PROC_FUNC(L'L', HID_REPORT_SEQUENCE_US_SHIFT_AND_L)             \
    PROC_FUNC(L'M', HID_REPORT_SEQUENCE_US_SHIFT_AND_M)             \
    PROC_FUNC(L'N', HID_REPORT_SEQUENCE_US_SHIFT_AND_N)             \
    PROC_FUNC(L'O', HID_REPORT_SEQUENCE_US_SHIFT_AND_O)             \
    PROC_FUNC(L'P', HID_REPORT_SEQUENCE_US_SHIFT_AND_P)             \
    PROC_FUNC(L'Q', HID_REPORT_SEQUENCE_US_SHIFT_AND_Q)             \
    PROC_FUNC(L'R', HID_REPORT_SEQUENCE_US_SHIFT_AND_R)             \
    PROC_FUNC(L'S', HID_REPORT_SEQUENCE_US_SHIFT_AND_S)             \
    PROC_FUNC(L'T', HID_REPORT_SEQUENCE_US_SHIFT_AND_T)             \
    PROC_FUNC(L'U', HID_REPORT_SEQUENCE_US_SHIFT_AND_U)             \
    PROC_FUNC(L'V', HID_REPORT_SEQUENCE_US_SHIFT_AND_V)             \
    PROC_FUNC(L'W', HID_REPORT_SEQUENCE_US_SHIFT_AND_W)             \
    PROC_FUNC(L'X', HID_REPORT_SEQUENCE_US_SHIFT_AND_X)             \
    PROC_FUNC(L'Y', HID_REPORT_SEQUENCE_US_SHIFT_AND_Y)             \
    PROC_FUNC(L'Z', HID_REPORT_SEQUENCE_US_SHIFT_AND_Z)             \
    PROC_FUNC(L'`', HID_REPORT_SEQUENCE_US_GRAVE)                   \
    PROC_FUNC(L'~', HID_REPORT_SEQUENCE_US_SHIFT_AND_GRAVE)         \
    PROC_FUNC(L'?', HID_REPORT_SEQUENCE_US_SHIFT_AND_SLASH)         \
    PROC_FUNC(L'+', HID_REPORT_SEQUENCE_US_SHIFT_AND_EQUAL)         \
    PROC_FUNC(L'=', HID_REPORT_SEQUENCE_US_EQUAL)                   \
    PROC_FUNC(L'a', HID_REPORT_SEQUENCE_US_A)                       \
    PROC_FUNC(L'b', HID_REPORT_SEQUENCE_US_B)                       \
    PROC_FUNC(L'c', HID_REPORT_SEQUENCE_US_C)                       \
    PROC_FUNC(L'd', HID_REPORT_SEQUENCE_US_D)                       \
    PROC_FUNC(L'e', HID_REPORT_SEQUENCE_US_E)                       \
    PROC_FUNC(L'f', HID_REPORT_SEQUENCE_US_F)                       \
    PROC_FUNC(L'g', HID_REPORT_SEQUENCE_US_G)                       \
    PROC_FUNC(L'h', HID_REPORT_SEQUENCE_US_H)                       \
    PROC_FUNC(L'i', HID_REPORT_SEQUENCE_US_I)                       \
    PROC_FUNC(L'j', HID_REPORT_SEQUENCE_US_J)                       \
    PROC_FUNC(L'k', HID_REPORT_SEQUENCE_US_K)                       \
    PROC_FUNC(L'l', HID_REPORT_SEQUENCE_US_L)                       \
    PROC_FUNC(L'm', HID_REPORT_SEQUENCE_US_M)                       \
    PROC_FUNC(L'n', HID_REPORT_SEQUENCE_US_N)                       \
    PROC_FUNC(L'o', HID_REPORT_SEQUENCE_US_O)                       \
    PROC_FUNC(L'p', HID_REPORT_SEQUENCE_US_P)                       \
    PROC_FUNC(L'q', HID_REPORT_SEQUENCE_US_Q)                       \
    PROC_FUNC(L'r', HID_REPORT_SEQUENCE_US_R)                       \
    PROC_FUNC(L's', HID_REPORT_SEQUENCE_US_S)                       \
    PROC_FUNC(L't', HID_REPORT_SEQUENCE_US_T)                       \
    PROC_FUNC(L'u', HID_REPORT_SEQUENCE_US_U)                       \
    PROC_FUNC(L'v', HID_REPORT_SEQUENCE_US_V)                       \
    PROC_FUNC(L'w', HID_REPORT_SEQUENCE_US_W)                       \
    PROC_FUNC(L'x', HID_REPORT_SEQUENCE_US_X)                       \
    PROC_FUNC(L'y', HID_REPORT_SEQUENCE_US_Y)                       \
    PROC_FUNC(L'z', HID_REPORT_SEQUENCE_US_Z)                       \
    PROC_FUNC(L'#', HID_REPORT_SEQUENCE_US_SHIFT_AND_3)             \
    PROC_FUNC(L'[', HID_REPORT_SEQUENCE_US_LEFTBRACE)               \
    PROC_FUNC(L'{', HID_REPORT_SEQUENCE_US_SHIFT_AND_LEFTBRACE)     \
    PROC_FUNC(L';', HID_REPORT_SEQUENCE_US_SEMICOLON)               \
    PROC_FUNC(L':', HID_REPORT_SEQUENCE_US_SHIFT_AND_SEMICOLON)     \
    PROC_FUNC(L'\'', HID_REPORT_SEQUENCE_US_APOSTROPHE)             \
    PROC_FUNC(L'"', HID_REPORT_SEQUENCE_US_SHIFT_AND_APOSTROPHE)    \

#define LAYOUT_DE(PROC_FUNC) \
    PROC_FUNC(L'\t', HID_REPORT_SEQUENCE_US_TAB)                    \
    PROC_FUNC(L'\n', HID_REPORT_SEQUENCE_US_ENTER)                  \
    PROC_FUNC(L' ', HID_REPORT_SEQUENCE_US_SPACE)                   \
    PROC_FUNC(L'!', HID_REPORT_SEQUENCE_US_SHIFT_AND_1)             \
    PROC_FUNC(L'\"', HID_REPORT_SEQUENCE_US_SHIFT_AND_2)             \
    PROC_FUNC(L'#', HID_REPORT_SEQUENCE_US_BACKSLASH)              \
    PROC_FUNC(L'$', HID_REPORT_SEQUENCE_US_SHIFT_AND_4)             \
    PROC_FUNC(L'%', HID_REPORT_SEQUENCE_US_SHIFT_AND_5)             \
    PROC_FUNC(L'&', HID_REPORT_SEQUENCE_US_SHIFT_AND_6)             \
    PROC_FUNC(L'\'', HID_REPORT_SEQUENCE_US_SHIFT_AND_BACKSLASH)     \
    PROC_FUNC(L'(', HID_REPORT_SEQUENCE_US_SHIFT_AND_8)             \
    PROC_FUNC(L')', HID_REPORT_SEQUENCE_US_SHIFT_AND_9)             \
    PROC_FUNC(L'*', HID_REPORT_SEQUENCE_US_SHIFT_AND_RIGHTBRACE)    \
    PROC_FUNC(L'+', HID_REPORT_SEQUENCE_US_RIGHTBRACE)              \
    PROC_FUNC(L',', HID_REPORT_SEQUENCE_US_COMMA)                   \
    PROC_FUNC(L'-', HID_REPORT_SEQUENCE_US_SLASH)                   \
    PROC_FUNC(L'.', HID_REPORT_SEQUENCE_US_DOT)                     \
    PROC_FUNC(L'/', HID_REPORT_SEQUENCE_US_SHIFT_AND_7)             \
    PROC_FUNC(L'0', HID_REPORT_SEQUENCE_US_0)                       \
    PROC_FUNC(L'1', HID_REPORT_SEQUENCE_US_1)                       \
    PROC_FUNC(L'2', HID_REPORT_SEQUENCE_US_2)                       \
    PROC_FUNC(L'3', HID_REPORT_SEQUENCE_US_3)                       \
    PROC_FUNC(L'4', HID_REPORT_SEQUENCE_US_4)                       \
    PROC_FUNC(L'5', HID_REPORT_SEQUENCE_US_5)                       \
    PROC_FUNC(L'6', HID_REPORT_SEQUENCE_US_6)                       \
    PROC_FUNC(L'7', HID_REPORT_SEQUENCE_US_7)                       \
    PROC_FUNC(L'8', HID_REPORT_SEQUENCE_US_8)                       \
    PROC_FUNC(L'9', HID_REPORT_SEQUENCE_US_9)                       \
    PROC_FUNC(L':', HID_REPORT_SEQUENCE_US_SHIFT_AND_DOT)           \
    PROC_FUNC(L';', HID_REPORT_SEQUENCE_US_SHIFT_AND_COMMA)         \
    PROC_FUNC(L'<', HID_REPORT_SEQUENCE_102ND)                      \
    PROC_FUNC(L'=', HID_REPORT_SEQUENCE_US_SHIFT_AND_0)             \
    PROC_FUNC(L'>', HID_REPORT_SEQUENCE_SHIFT_AND_102ND)            \
    PROC_FUNC(L'?', HID_REPORT_SEQUENCE_US_SHIFT_AND_MINUS)         \
    PROC_FUNC(L'@', HID_REPORT_SEQUENCE_RALT_AND_Q)                 \
    PROC_FUNC(L'A', HID_REPORT_SEQUENCE_US_SHIFT_AND_A)             \
    PROC_FUNC(L'B', HID_REPORT_SEQUENCE_US_SHIFT_AND_B)             \
    PROC_FUNC(L'C', HID_REPORT_SEQUENCE_US_SHIFT_AND_C)             \
    PROC_FUNC(L'D', HID_REPORT_SEQUENCE_US_SHIFT_AND_D)             \
    PROC_FUNC(L'E', HID_REPORT_SEQUENCE_US_SHIFT_AND_E)             \
    PROC_FUNC(L'F', HID_REPORT_SEQUENCE_US_SHIFT_AND_F)             \
    PROC_FUNC(L'G', HID_REPORT_SEQUENCE_US_SHIFT_AND_G)             \
    PROC_FUNC(L'H', HID_REPORT_SEQUENCE_US_SHIFT_AND_H)             \
    PROC_FUNC(L'I', HID_REPORT_SEQUENCE_US_SHIFT_AND_I)             \
    PROC_FUNC(L'J', HID_REPORT_SEQUENCE_US_SHIFT_AND_J)             \
    PROC_FUNC(L'K', HID_REPORT_SEQUENCE_US_SHIFT_AND_K)             \
    PROC_FUNC(L'L', HID_REPORT_SEQUENCE_US_SHIFT_AND_L)             \
    PROC_FUNC(L'M', HID_REPORT_SEQUENCE_US_SHIFT_AND_M)             \
    PROC_FUNC(L'N', HID_REPORT_SEQUENCE_US_SHIFT_AND_N)             \
    PROC_FUNC(L'O', HID_REPORT_SEQUENCE_US_SHIFT_AND_O)             \
    PROC_FUNC(L'P', HID_REPORT_SEQUENCE_US_SHIFT_AND_P)             \
    PROC_FUNC(L'Q', HID_REPORT_SEQUENCE_US_SHIFT_AND_Q)             \
    PROC_FUNC(L'R', HID_REPORT_SEQUENCE_US_SHIFT_AND_R)             \
    PROC_FUNC(L'S', HID_REPORT_SEQUENCE_US_SHIFT_AND_S)             \
    PROC_FUNC(L'T', HID_REPORT_SEQUENCE_US_SHIFT_AND_T)             \
    PROC_FUNC(L'U', HID_REPORT_SEQUENCE_US_SHIFT_AND_U)             \
    PROC_FUNC(L'V', HID_REPORT_SEQUENCE_US_SHIFT_AND_V)             \
    PROC_FUNC(L'W', HID_REPORT_SEQUENCE_US_SHIFT_AND_W)             \
    PROC_FUNC(L'X', HID_REPORT_SEQUENCE_US_SHIFT_AND_X)             \
    PROC_FUNC(L'Y', HID_REPORT_SEQUENCE_US_SHIFT_AND_Z)             \
    PROC_FUNC(L'Z', HID_REPORT_SEQUENCE_US_SHIFT_AND_Y)             \
    PROC_FUNC(L'[', HID_REPORT_SEQUENCE_RALT_AND_8)                 \
    PROC_FUNC(L'\\', HID_REPORT_SEQUENCE_RALT_AND_MINUS)            \
    PROC_FUNC(L']', HID_REPORT_SEQUENCE_RALT_AND_9)                 \
    PROC_FUNC(L'^', HID_REPORT_SEQUENCE_GRAVE_FOLLOWED_BY_SPACE)    \
    PROC_FUNC(L'_', HID_REPORT_SEQUENCE_US_SHIFT_AND_SLASH)         \
    PROC_FUNC(L'`', HID_REPORT_SEQUENCE_SHIFT_AND_EQUAL_FOLLOWED_BY_SPACE)    \
    PROC_FUNC(L'a', HID_REPORT_SEQUENCE_US_A)                       \
    PROC_FUNC(L'b', HID_REPORT_SEQUENCE_US_B)                       \
    PROC_FUNC(L'c', HID_REPORT_SEQUENCE_US_C)                       \
    PROC_FUNC(L'd', HID_REPORT_SEQUENCE_US_D)                       \
    PROC_FUNC(L'e', HID_REPORT_SEQUENCE_US_E)                       \
    PROC_FUNC(L'f', HID_REPORT_SEQUENCE_US_F)                       \
    PROC_FUNC(L'g', HID_REPORT_SEQUENCE_US_G)                       \
    PROC_FUNC(L'h', HID_REPORT_SEQUENCE_US_H)                       \
    PROC_FUNC(L'i', HID_REPORT_SEQUENCE_US_I)                       \
    PROC_FUNC(L'j', HID_REPORT_SEQUENCE_US_J)                       \
    PROC_FUNC(L'k', HID_REPORT_SEQUENCE_US_K)                       \
    PROC_FUNC(L'l', HID_REPORT_SEQUENCE_US_L)                       \
    PROC_FUNC(L'm', HID_REPORT_SEQUENCE_US_M)                       \
    PROC_FUNC(L'n', HID_REPORT_SEQUENCE_US_N)                       \
    PROC_FUNC(L'o', HID_REPORT_SEQUENCE_US_O)                       \
    PROC_FUNC(L'p', HID_REPORT_SEQUENCE_US_P)                       \
    PROC_FUNC(L'q', HID_REPORT_SEQUENCE_US_Q)                       \
    PROC_FUNC(L'r', HID_REPORT_SEQUENCE_US_R)                       \
    PROC_FUNC(L's', HID_REPORT_SEQUENCE_US_S)                       \
    PROC_FUNC(L't', HID_REPORT_SEQUENCE_US_T)                       \
    PROC_FUNC(L'u', HID_REPORT_SEQUENCE_US_U)                       \
    PROC_FUNC(L'v', HID_REPORT_SEQUENCE_US_V)                       \
    PROC_FUNC(L'w', HID_REPORT_SEQUENCE_US_W)                       \
    PROC_FUNC(L'x', HID_REPORT_SEQUENCE_US_X)                       \
    PROC_FUNC(L'y', HID_REPORT_SEQUENCE_US_Z)                       \
    PROC_FUNC(L'z', HID_REPORT_SEQUENCE_US_Y)                       \
    PROC_FUNC(L'{', HID_REPORT_SEQUENCE_RALT_AND_7)                 \
    PROC_FUNC(L'|', HID_REPORT_SEQUENCE_RALT_AND_102ND)             \
    PROC_FUNC(L'}', HID_REPORT_SEQUENCE_RALT_AND_0)                 \
    PROC_FUNC(L'~', HID_REPORT_SEQUENCE_RALT_AND_RIGHTBRACE)        \
    PROC_FUNC(L'§', HID_REPORT_SEQUENCE_US_SHIFT_AND_3)             \
    PROC_FUNC(L'°', HID_REPORT_SEQUENCE_US_SHIFT_AND_GRAVE)         \
    PROC_FUNC(L'ü', HID_REPORT_SEQUENCE_US_LEFTBRACE)               \
    PROC_FUNC(L'Ü', HID_REPORT_SEQUENCE_US_SHIFT_AND_LEFTBRACE)     \
    PROC_FUNC(L'ö', HID_REPORT_SEQUENCE_US_SEMICOLON)               \
    PROC_FUNC(L'Ö', HID_REPORT_SEQUENCE_US_SHIFT_AND_SEMICOLON)     \
    PROC_FUNC(L'ä', HID_REPORT_SEQUENCE_US_APOSTROPHE)             \
    PROC_FUNC(L'Ä', HID_REPORT_SEQUENCE_US_SHIFT_AND_APOSTROPHE)    \
    PROC_FUNC(L'ß', HID_REPORT_SEQUENCE_US_MINUS)                   \
    PROC_FUNC(L'€', HID_REPORT_SEQUENCE_RALT_AND_E)                 \
    PROC_FUNC(L'µ', HID_REPORT_SEQUENCE_RALT_AND_M)                 \


#define LAYOUT_SWITCH_CASE(nameval, val) case nameval: {*p_out_report_seq=(void*)val; *out_rep_seq_len=sizeof(val) ;return NRF_SUCCESS; }



typedef enum {
    LANGUAGE_LAYOUT_DE,
    LANGUAGE_LAYOUT_US,
} logitacker_keyboard_map_lang_t;

typedef struct {
    const char * p_pos;
    bool append_release;
} logitacker_keyboard_map_u8_str_parser_ctx_t;

uint32_t logitacker_keyboard_map_wc_to_hid_reports(hid_keyboard_report_t **p_out_report_seq, uint32_t *out_rep_seq_len,
                                                   logitacker_keyboard_map_lang_t in_layout, wchar_t in_rune);
char* keycode_to_str(enum keys keycode);

uint32_t logitacker_keyboard_map_u8_str_to_hid_reports(logitacker_keyboard_map_u8_str_parser_ctx_t *p_ctx, char const *in_str,
                                                       hid_keyboard_report_t **p_out_next_report_seq,
                                                       uint32_t *out_next_rep_seq_len,
                                                       logitacker_keyboard_map_lang_t in_layout);


uint32_t logitacker_keyboard_map_combo_str_to_hid_report(char const *in_str,
                                                         hid_keyboard_report_t *p_out_report,
                                                         logitacker_keyboard_map_lang_t in_layout);

//del the following
//void logitacker_keyboard_map_test(void);
logitacker_keyboard_map_hid_keys_t str_to_keycode(char * key_str);

logitacker_keyboard_map_lang_t logitacker_keyboard_map_lang_from_str(char * lang_str);


#endif //HELPER_MAP_H__
