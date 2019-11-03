// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the LAB8_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// LAB8_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LAB8_EXPORTS
#define LAB8_API __declspec(dllexport)
#else
#define LAB8_API __declspec(dllimport)
#endif

// This class is exported from the dll
class LAB8_API CLab8 {
public:
	CLab8(void);
	// TODO: add your methods here.
};

extern LAB8_API int nLab8;

LAB8_API int fnLab8(void);
