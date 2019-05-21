/*
	Configuration options used by both platform specific
	and platform independent code.

	This file is automatically generated by the build system,
	which tries to know what options are valid in what
	combinations. Avoid changing this file manually unless
	you know what you're doing.
*/

/* adapt to current compiler/host processor */
#ifdef __i386__
#error "source is configured for 64 bit compiler"
#endif

#define MayInline inline __attribute__((always_inline))
#define MayNotInline __attribute__((noinline))
#define SmallGlobals 0
#define cIncludeUnused 0
#define UnusedParam(p) (void) p

/* --- integer types ---- */

typedef unsigned char ui3b;
#define HaveRealui3b 1

typedef signed char si3b;
#define HaveRealsi3b 1

typedef unsigned short ui4b;
#define HaveRealui4b 1

typedef short si4b;
#define HaveRealsi4b 1

typedef unsigned int ui5b;
#define HaveRealui5b 1

typedef int si5b;
#define HaveRealsi5b 1

#define HaveRealui6b 0
#define HaveRealsi6b 0

/* --- integer representation types ---- */

typedef ui3b ui3r;
#define ui3beqr 1

typedef si3b si3r;
#define si3beqr 1

typedef ui4b ui4r;
#define ui4beqr 1

typedef si4b si4r;
#define si4beqr 1

typedef ui5b ui5r;
#define ui5beqr 1

typedef si5b si5r;
#define si5beqr 1

typedef signed long long si6r;
typedef signed long long si6b;
typedef unsigned long long ui6r;
typedef unsigned long long ui6b;
#define LIT64(a) a##ULL

/* capabilities provided by platform specific code */

#define MySoundEnabled 1

#define MySoundRecenterSilence 0
#define kLn2SoundSampSz 3

#define dbglog_HAVE 0
#define WantAbnormalReports 0

#define NumDrives 6
#define IncludeSonyRawMode 1
#define IncludeSonyGetName 0
#define IncludeSonyNew 0
#define IncludeSonyNameNew 0

#define vMacScreenHeight 540
#define vMacScreenWidth 960
#define vMacScreenDepth 3

#define kROM_Size 0x00040000

#define IncludePbufs 1
#define NumPbufs 4

#define EnableMouseMotion 1

#define IncludeHostTextClipExchange 1
#define EnableAutoSlow 1
#define EmLocalTalk 0
#define AutoLocation 1
#define AutoTimeZone 1
