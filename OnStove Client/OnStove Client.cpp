// OnStove Client.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <ctime>
#include <string>
#include <iostream>
#include <fstream>
#include "OnStove Client.h"

using namespace std;

/*
int (__cdecl *__cdecl SGUPAPI_Init(void))(void)()
Initializing Discord RPC for appId: xxx.
Updating Discord RPC.
void (__cdecl *__cdecl SGUPAPI_SetCallback(void (__cdecl *)(void)))(void)(0x13351190)
int __cdecl SGUPUser(void)()
int (__cdecl *__cdecl SGUPAPI_GetAuthToken(void))(int,int,unsigned char)()
int __cdecl SGUPAPI_RunCallback(void)(void)
...
...
int __cdecl SGUPAPI_RunCallback(void)(void)
*/

int(*SGUPAPI_Init(void))(void) {
	printf("%s()\n", __FUNCSIG__);

#ifdef DISCORD
	// Discord RPC
	DiscordEventHandlers handlers;
	memset(&handlers, 0, sizeof(handlers));

	auto appId = "471081044854964225";

	Discord_Initialize(appId, &handlers, 1, "");
	printf("Initializing Discord RPC for appId: %s.\n", appId);

	DiscordRichPresence discordPresence;
	memset(&discordPresence, 0, sizeof(discordPresence));

	std::time_t result = std::time(nullptr);

	discordPresence.state = "In-Game";
	discordPresence.details = "Main Menu";
	discordPresence.startTimestamp = result;
	discordPresence.largeImageKey = "ncvaf4a";
	Discord_UpdatePresence(&discordPresence);

	printf("Updating Discord RPC.\n");
	// Discord RPC
#endif // DISCORD
	return SGUPLocalClient_Init;
}
int SGUPLocalClient_Init(void) {
	printf("%s()\n", __FUNCSIG__);
	return 0;
}

int(*SGUPAPI_Term(void))(void) {
	// Terminate
#ifdef DISCORD
	Discord_ClearPresence();
	Discord_Shutdown();
#endif // DISCORD

	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_Term;
}
int SGUPLocalClient_Term(void) {
	printf("%s()\n", __FUNCSIG__);
	return 0;
}

int(*SGUPAPI_GetAuthToken(void))(int, int, unsigned char) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_GetAuthToken;
}
int SGUPLocalClient_GetAuthToken(int str2, int str3, unsigned char a3) {
	printf("%s(%ws, %ws, %d)\n", __FUNCSIG__, str2, str3, a3);
	return 0;
}

int SGUPAPI_GetCurrentAccessToken(void) {
	printf("%s()\n", __FUNCSIG__);
	return 0;
}

int(*SGUPAPI_GetMessengerAuthToken(void))(void) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_GetMessengerAuthToken;
}
int SGUPLocalClient_GetMessengerAuthToken(void) {
	printf("%s()\n", __FUNCSIG__);
	return 0;
}

int(*SGUPAPI_RenewAuthToken(void))(int, int, int) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_RenewAuthToken;
}
int SGUPLocalClient_RenewAuthToken(int str2, int str3, int str4) {
	printf("%s(%ws, %ws, %ws)\n", __FUNCSIG__, str2, str3, str4);
	return 0;
}

int(*SGUPAPI_RenewMessengerAuthToken(void))(int) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalCleint_RenewMessengerAuthToken;
}
int SGUPLocalCleint_RenewMessengerAuthToken(int str) {
	printf("%s(%ws, %ws, %ws)\n", __FUNCSIG__, str);
	return 0;
}

int(*SGUPAPI_RunCallback(void))(void) {
#ifdef DEBUG
	// printf("%s()\n", __FUNCSIG__);
#endif // DEBUG
	return SGUPLocalClient_RunCallback;
}
int SGUPLocalClient_RunCallback(void) {
	printf("%s()\n", __FUNCSIG__);
	return 0;
}

int(*SGUPIAPI_GetMemberInfo(void))(void) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_GetMemberInfo;
}
int SGUPLocalClient_GetMemberInfo(void) {
	printf("%s()\n", __FUNCSIG__);
	return 0;
}

int(*SGUPIAPI_InternalRenewAuthToken(void))(int, int, int) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_InternalRenewAuthToken;
}
int SGUPLocalClient_InternalRenewAuthToken(int str2, int str3, int str4) {
	printf("%s(%ws, %ws, %ws)\n", __FUNCSIG__, str2, str3, str4);
	return 0;
}

int(*SGUPIAPI_MessengerInit(void))(void) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_MessengerInit;
}
int SGUPLocalClient_MessengerInit(void) {
	printf("%s()\n", __FUNCSIG__);
	return 0;
}

int(*SGUPIAPI_MessengerTerm(void))(void) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_MessengerTerm;
}
int SGUPLocalClient_MessengerTerm(void) {
	printf("%s()\n", __FUNCSIG__);
	return 0;
}

int(*SGUPIAPI_OverlayHostInit(void))(void) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_OverlayHostInit;
}
int SGUPLocalClient_OverlayHostInit(void) {
	printf("%s()\n", __FUNCSIG__);
	return 0;
}

int(*SGUPIAPI_OverlayHostTerm(void))(void) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_OverlayHostTerm;
}
int SGUPLocalClient_OverlayHostTerm(void) {
	printf("%s()\n", __FUNCSIG__);
	return 0;
}

int(*SGUPIAPI_SendDuplicateLoginEvent(void))(void) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_SendDuplicateLoginEvent;
}
int SGUPLocalClient_SendDuplicateLoginEvent(void) {
	printf("%s()\n", __FUNCSIG__);
	return 0;
}

int(*SGUPIAPI_SetCallbackDuplicateLoginResult(void))(int) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_SetCallbackDuplicateLoginResult;
}
int SGUPLocalClient_SetCallbackDuplicateLoginResult(int a1) {
	printf("%s(%d)\n", __FUNCSIG__, a1);
	return 0;
}

int(*SGUPIAPI_SetCallbackGetMemberInfo(void))(int) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_SetCallbackGetMemberInfo;
}
int SGUPLocalClient_SetCallbackGetMemberInfo(int a1) {
	printf("%s(%d)\n", __FUNCSIG__, a1);
	return 0;
}

int(*SGUPIAPI_SetCallbackInternalRenewAuthToken(void))(int) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_SetCallbackInternalRenewAuthToken;
}
int SGUPLocalClient_SetCallbackInternalRenewAuthToken(int a1) {
	printf("%s(%d)\n", __FUNCSIG__, a1);
	return 0;
}

int(*SGUPIAPI_SetCallbackMessengerConfigUpdate(void))(int) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_SetCallbackMessengerConfigUpdate;
}
int SGUPLocalClient_SetCallbackMessengerConfigUpdate(int a1) {
	printf("%s(%d)\n", __FUNCSIG__, a1);
	return 0;
}

int(*SGUPIAPI_SetCallbackSubscriptReq(void))(int) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_SetCallbackSubscriptReq;
}
int SGUPLocalClient_SetCallbackSubscriptReq(int a1) {
	printf("%s(%d)\n", __FUNCSIG__, a1);
	return 0;
}

int(*SGUPIAPI_SetCallbackUpdateAuthToken(void))(int) {
	printf("%s()\n", __FUNCSIG__);
	return SGUPLocalClient_SetCallbackUpdateAuthToken;
}
int SGUPLocalClient_SetCallbackUpdateAuthToken(int a1) {
	printf("%s(%d)\n", __FUNCSIG__, a1);
	return 0;
}

int SGUPAPI_SetCallback(int result) {
	printf("%s(0x%X)\n", __FUNCSIG__, result);
	return result;
}
int(*SGUPIAPI_SetCallback(int a1))(int) {
	printf("%s(%d)\n", __FUNCSIG__, a1);
	int result; // eax
	if (a1 == 0) {
		return 0;
	}
	int v3 = *(int *)(a1 + 4); // 0x10005543

	printf("callback - %d = %s\n", v3, v3);

	result = v3;
	if (v3 == 2) {
		//return function_100012a0(a1, v1);
		return SGUPLocalClient_SetCallbackSubscriptReq;
	}
	if (v3 == 3) {
		//return function_100012e0(a1, v1);
		return SGUPLocalClient_SetCallbackMessengerConfigUpdate;
	}
	if (v3 == 6) {
		//return function_10001320(a1, v1);
		return SGUPLocalClient_SetCallbackGetMemberInfo;
	}
	if (v3 == 7) {
		//return function_10001360(a1, v1);
		return SGUPLocalClient_SetCallbackInternalRenewAuthToken;
	}
	if (v3 == 8) {
		//result = function_100013a0(a1, v1);
		return SGUPLocalClient_SetCallbackDuplicateLoginResult;
	}
	// 0x10005585
	return 0;
}

int SGUPFriends(void) {
	printf("%s()\n", __FUNCSIG__);
	return 0;
}
int SGUPMatchMaking(void) {
	printf("%s()\n", __FUNCSIG__);
	return 0;
}
int SGUPOverlay(void) {
	printf("%s()\n", __FUNCSIG__); return 0;
}
int SGUPPeerToPeer(void) {
	printf("%s()\n", __FUNCSIG__);
	return 0;
}
int SGUPUser(void) {
	printf("%s()\n", __FUNCSIG__);
	return 0;
}