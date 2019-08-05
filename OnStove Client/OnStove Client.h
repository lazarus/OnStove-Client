#pragma once

#include <stdint.h>

int(*SGUPAPI_GetAuthToken(void))(int str2, int str3, unsigned char a3);
int SGUPLocalClient_GetAuthToken(int str2, int str3, unsigned char a3);

int SGUPAPI_GetCurrentAccessToken(void);

int(*SGUPAPI_GetMessengerAuthToken(void))(void);
int SGUPLocalClient_GetMessengerAuthToken(void);

int(*SGUPAPI_Init(void))(void);
int SGUPLocalClient_Init(void);

int(*SGUPAPI_RenewAuthToken(void))(int str2, int str3, int str4);
int SGUPLocalClient_RenewAuthToken(int str2, int str3, int str4);

int(*SGUPAPI_RenewMessengerAuthToken(void))(int);
int SGUPLocalCleint_RenewMessengerAuthToken(int str);

int(*SGUPAPI_RunCallback(void))(void);
int SGUPLocalClient_RunCallback(void);

int(*SGUPAPI_Term(void))(void);
int SGUPLocalClient_Term(void);

int(*SGUPIAPI_GetMemberInfo(void))(void);
int SGUPLocalClient_GetMemberInfo(void);

int(*SGUPIAPI_InternalRenewAuthToken(void))(int str2, int str3, int str4);
int SGUPLocalClient_InternalRenewAuthToken(int str2, int str3, int str4);

int(*SGUPIAPI_MessengerInit(void))(void);
int SGUPLocalClient_MessengerInit(void);

int(*SGUPIAPI_MessengerTerm(void))(void);
int SGUPLocalClient_MessengerTerm(void);

int(*SGUPIAPI_OverlayHostInit(void))(void);
int SGUPLocalClient_OverlayHostInit(void);

int(*SGUPIAPI_OverlayHostTerm(void))(void);
int SGUPLocalClient_OverlayHostTerm(void);

int(*SGUPIAPI_SendDuplicateLoginEvent(void))(void);
int SGUPLocalClient_SendDuplicateLoginEvent(void);

int(*SGUPIAPI_SetCallbackDuplicateLoginResult(void))(int a1);
int SGUPLocalClient_SetCallbackDuplicateLoginResult(int a1);

int(*SGUPIAPI_SetCallbackGetMemberInfo(void))(int a1);
int SGUPLocalClient_SetCallbackGetMemberInfo(int a1);

int(*SGUPIAPI_SetCallbackInternalRenewAuthToken(void))(int a1);
int SGUPLocalClient_SetCallbackInternalRenewAuthToken(int a1);

int(*SGUPIAPI_SetCallbackMessengerConfigUpdate(void))(int a1);
int SGUPLocalClient_SetCallbackMessengerConfigUpdate(int a1);

int(*SGUPIAPI_SetCallbackSubscriptReq(void))(int a1);
int SGUPLocalClient_SetCallbackSubscriptReq(int a1);

int(*SGUPIAPI_SetCallbackUpdateAuthToken(void))(int a1);
int SGUPLocalClient_SetCallbackUpdateAuthToken(int a1);

int(*SGUPIAPI_SetCallback(int a1))(int);
int SGUPAPI_SetCallback(int result);

int SGUPFriends(void);
int SGUPMatchMaking(void);
int SGUPOverlay(void);
int SGUPPeerToPeer(void);
int SGUPUser(void);