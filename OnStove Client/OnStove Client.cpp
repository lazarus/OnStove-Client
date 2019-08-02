// OnStove Client.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <string>
#include "OnStove Client.h"

using namespace std;

int32_t SGUPAPI_GetAuthToken(void) {
	printf("SGUPAPI_GetAuthToken\n");
	return (int32_t)SGUPLocalClient_GetAuthToken;
}
int32_t SGUPLocalClient_GetAuthToken(int32_t str2, int32_t str3, unsigned char a3)
{
	printf("SGUPLocalClient_GetAuthToken - %ws, %ws, %d\n", str2, str3, a3);
	return 0;
}

int32_t SGUPAPI_GetCurrentAccessToken(void) {
	printf("SGUPAPI_GetCurrentAccessToken\n");
	return (int32_t)0;
}

int32_t SGUPAPI_GetMessengerAuthToken(void) {
	printf("SGUPAPI_GetMessengerAuthToken\n");
	return (int32_t)SGUPLocalClient_GetMessengerAuthToken;
}
int32_t SGUPLocalClient_GetMessengerAuthToken(void)
{
	printf("SGUPLocalClient_GetMessengerAuthToken\n");
	return 0;
}

int32_t SGUPAPI_Init(void) {
	printf("SGUPAPI_Init\n");

	return (int32_t)SGUPLocalClient_Init;
}
int32_t SGUPLocalClient_Init(void)
{
	printf("SGUPLocalClient_Init\n");
	return 0;
}

int32_t SGUPAPI_RenewAuthToken(void) { return (int32_t)SGUPLocalClient_RenewAuthToken; }
int32_t SGUPLocalClient_RenewAuthToken(int32_t str2, int32_t str3, int32_t str4)
{
	printf("SGUPLocalClient_RenewAuthToken - %ws, %ws, %ws\n", str2, str3, str4);
	return 0;
}

int32_t SGUPAPI_RenewMessengerAuthToken(void) {
	return (int32_t)SGUPLocalCleint_RenewMessengerAuthToken;
}
int32_t SGUPLocalCleint_RenewMessengerAuthToken(int32_t str)
{
	printf("SGUPLocalCleint_RenewMessengerAuthToken - %ws\n", str);
	return 0;
}

int32_t SGUPAPI_RunCallback(void) {
	return (int32_t)SGUPLocalClient_RunCallback;
}
int32_t SGUPLocalClient_RunCallback(void)
{
	printf("SGUPLocalClient_RunCallback\n");
	return 0;
}

int32_t SGUPAPI_SetCallback(int32_t result) {
	return result;
}

int32_t SGUPAPI_Term(void) {
	return (int32_t)SGUPLocalClient_Term;
}
int32_t SGUPLocalClient_Term(void)
{
	printf("SGUPLocalClient_RunCallback\n");
	return 0;
}

int32_t SGUPIAPI_GetMemberInfo(void) { return (int32_t)SGUPIAPI_GetMemberInfo; }
int32_t SGUPLocalClient_GetMemberInfo(void)
{
	printf("SGUPLocalClient_RunCallback\n");
	return 0;
}

int32_t SGUPIAPI_InternalRenewAuthToken(void) { return (int32_t)SGUPLocalClient_InternalRenewAuthToken; }
int32_t SGUPLocalClient_InternalRenewAuthToken(int32_t str2, int32_t str3, int32_t str4)
{
	printf("SGUPLocalClient_InternalRenewAuthToken - %ws, %ws, %ws\n", str2, str3, str4);
	return 0;
}

int32_t SGUPIAPI_MessengerInit(void) { return (int32_t)SGUPLocalClient_MessengerInit; }
int32_t SGUPLocalClient_MessengerInit(void)
{
	printf("SGUPLocalClient_RunCallback\n");
	return 0;
}

int32_t SGUPIAPI_MessengerTerm(void) { return (int32_t)SGUPLocalClient_MessengerTerm; }
int32_t SGUPLocalClient_MessengerTerm(void)
{
	printf("SGUPLocalClient_RunCallback\n");
	return 0;
}

int32_t SGUPIAPI_OverlayHostInit(void) { return (int32_t)SGUPLocalClient_OverlayHostInit; }
int32_t SGUPLocalClient_OverlayHostInit(void)
{
	printf("SGUPLocalClient_RunCallback\n");
	return 0;
}

int32_t SGUPIAPI_OverlayHostTerm(void) { return (int32_t)SGUPLocalClient_OverlayHostTerm; }
int32_t SGUPLocalClient_OverlayHostTerm(void)
{
	printf("SGUPLocalClient_RunCallback\n");
	return 0;
}

int32_t SGUPIAPI_SendDuplicateLoginEvent(void) { return (int32_t)SGUPLocalClient_SendDuplicateLoginEvent; }
int32_t SGUPLocalClient_SendDuplicateLoginEvent(void)
{
	printf("SGUPLocalClient_RunCallback\n");
	return 0;
}

int32_t SGUPIAPI_SetCallbackDuplicateLoginResult(void) {
	printf("SGUPIAPI_SetCallbackDuplicateLoginResult\n");
	return (int32_t)SGUPLocalClient_SetCallbackDuplicateLoginResult;
}
int32_t SGUPLocalClient_SetCallbackDuplicateLoginResult(int32_t a1) {
	printf("SGUPLocalClient_SetCallbackDuplicateLoginResult\n");
	return (int32_t)SGUPLocalClient_SetCallbackDuplicateLoginResult;
}

int32_t SGUPIAPI_SetCallbackGetMemberInfo(void) {
	printf("SGUPIAPI_SetCallbackGetMemberInfo\n");
	return (int32_t)SGUPLocalClient_SetCallbackGetMemberInfo;
}
int32_t SGUPLocalClient_SetCallbackGetMemberInfo(int32_t a1) {
	printf("SGUPLocalClient_SetCallbackGetMemberInfo\n");
	return (int32_t)SGUPLocalClient_SetCallbackGetMemberInfo;
}

int32_t SGUPIAPI_SetCallbackInternalRenewAuthToken(void) {
	printf("SGUPIAPI_SetCallbackInternalRenewAuthToken\n");
	return (int32_t)SGUPLocalClient_SetCallbackInternalRenewAuthToken;
}
int32_t SGUPLocalClient_SetCallbackInternalRenewAuthToken(int32_t a1) {
	printf("SGUPLocalClient_SetCallbackInternalRenewAuthToken\n");
	return (int32_t)SGUPLocalClient_SetCallbackInternalRenewAuthToken;
}

int32_t SGUPIAPI_SetCallbackMessengerConfigUpdate(void) {
	printf("SGUPIAPI_SetCallbackMessengerConfigUpdate\n");
	return (int32_t)SGUPLocalClient_SetCallbackMessengerConfigUpdate;
}
int32_t SGUPLocalClient_SetCallbackMessengerConfigUpdate(int32_t a1) {
	printf("SGUPLocalClient_SetCallbackMessengerConfigUpdate\n");
	return (int32_t)SGUPLocalClient_SetCallbackMessengerConfigUpdate;
}

int32_t SGUPIAPI_SetCallbackSubscriptReq(void) {
	printf("SGUPIAPI_SetCallbackSubscriptReq\n");
	return (int32_t)SGUPLocalClient_SetCallbackSubscriptReq;
}
int32_t SGUPLocalClient_SetCallbackSubscriptReq(int32_t a1) {
	printf("SGUPLocalClient_SetCallbackSubscriptReq\n");
	return (int32_t)SGUPLocalClient_SetCallbackSubscriptReq;
}

int32_t SGUPIAPI_SetCallbackUpdateAuthToken(void) {
	printf("SGUPIAPI_SetCallbackUpdateAuthToken\n");
	return (int32_t)SGUPLocalClient_SetCallbackUpdateAuthToken;
}
int32_t SGUPLocalClient_SetCallbackUpdateAuthToken(int32_t a1) {
	printf("SGUPLocalClient_SetCallbackUpdateAuthToken\n");
	return (int32_t)SGUPLocalClient_SetCallbackUpdateAuthToken;
}

int32_t SGUPIAPI_SetCallback(int32_t a1) {
	int32_t result; // eax
	if (a1 == 0) {
		return 0;
	}
	int32_t v3 = *(int32_t *)(a1 + 4); // 0x10005543
	result = v3;
	if (v3 == 2) {
		//return function_100012a0(a1, v1);
		return (int32_t)SGUPLocalClient_SetCallbackSubscriptReq;
	}
	if (v3 == 3) {
		//return function_100012e0(a1, v1);
		return (int32_t)SGUPLocalClient_SetCallbackMessengerConfigUpdate;
	}
	if (v3 == 6) {
		//return function_10001320(a1, v1);
		return (int32_t)SGUPLocalClient_SetCallbackGetMemberInfo;
	}
	if (v3 == 7) {
		//return function_10001360(a1, v1);
		return (int32_t)SGUPLocalClient_SetCallbackInternalRenewAuthToken;
	}
	if (v3 == 8) {
		//result = function_100013a0(a1, v1);
		return (int32_t)SGUPLocalClient_SetCallbackDuplicateLoginResult;
	}
	// 0x10005585
	return result;
}

int32_t SGUPFriends(void) { return (int32_t)0; }
int32_t SGUPMatchMaking(void) { return (int32_t)0; }
int32_t SGUPOverlay(void) { return (int32_t)0; }
int32_t SGUPPeerToPeer(void) { return (int32_t)0; }
int32_t SGUPUser(void) { return (int32_t)0; }