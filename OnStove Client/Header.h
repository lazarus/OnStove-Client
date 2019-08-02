#pragma once

#include <stdint.h>

int32_t SGUPAPI_GetAuthToken(void);
int32_t SGUPAPI_GetCurrentAccessToken(void);
int32_t SGUPAPI_GetMessengerAuthToken(void);
int32_t SGUPAPI_Init(void);
int32_t SGUPAPI_RenewAuthToken(void);
int32_t SGUPAPI_RenewMessengerAuthToken(void);
int32_t SGUPAPI_RunCallback(void);
int32_t SGUPAPI_SetCallback(int32_t result);
int32_t SGUPAPI_Term(void);
int32_t SGUPFriends(void);
int32_t SGUPIAPI_GetMemberInfo(void);
int32_t SGUPIAPI_InternalRenewAuthToken(void);
int32_t SGUPIAPI_MessengerInit(void);
int32_t SGUPIAPI_MessengerTerm(void);
int32_t SGUPIAPI_OverlayHostInit(void);
int32_t SGUPIAPI_OverlayHostTerm(void);
int32_t SGUPIAPI_SendDuplicateLoginEvent(void);
int32_t SGUPIAPI_SetCallback(int32_t a1);
int32_t SGUPIAPI_SetCallbackDuplicateLoginResult(void);
int32_t SGUPIAPI_SetCallbackGetMemberInfo(void);
int32_t SGUPIAPI_SetCallbackInternalRenewAuthToken(void);
int32_t SGUPIAPI_SetCallbackMessengerConfigUpdate(void);
int32_t SGUPIAPI_SetCallbackSubscriptReq(void);
int32_t SGUPIAPI_SetCallbackUpdateAuthToken(void);
int32_t SGUPMatchMaking(void);
int32_t SGUPOverlay(void);
int32_t SGUPPeerToPeer(void);
int32_t SGUPUser(void);