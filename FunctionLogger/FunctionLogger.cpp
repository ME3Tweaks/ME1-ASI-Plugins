#include <stdio.h>
#include <fstream>
#include <iostream>
#include <ostream>
#include <streambuf>
#include <shlwapi.h>

#include "../ME1-SDK/ME3TweaksHeader.h"
#include "../detours/detours.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.

ME3TweaksASILogger logger("Function Call Logger", "FunctionCallLog.txt");

void __fastcall HookedPE(SDK::UObject *pObject, void *edx, SDK::UFunction *pFunction, void *pParms, void *pResult)
{
	std::string szName = pFunction->GetFullName();
	logger.writeToConsoleOnly(string_format("%s\n", szName.c_str()), true);
	//logger.flush();
	ProcessEvent(pObject, pFunction, pParms, pResult);
}

void onAttach()
{
	std::cout << "Close the game immediately after the issue you are trying to reproduce occurs. Thousands of calls are generated per second, a few extra seconds of output will generate huge amounts of extra entires.\n";
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread()); //This command set the current working thread to the game current thread.
	DetourAttach(&(PVOID&)ProcessEvent, HookedPE); //This command will start your Hook.
	DetourTransactionCommit();
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)onAttach, NULL, 0, NULL);
		return true;
		break;

	case DLL_PROCESS_DETACH:
		return true;
		break;
	}
	return true;
};