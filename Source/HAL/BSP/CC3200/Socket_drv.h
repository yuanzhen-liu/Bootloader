/***************************************************************
 * Copyright (C), 2015-2025, H&T Tech
 * File name    : Socket_drv.h
 * Author       : Bernie Liu
 * Version      : V1.0.0
 * Date         : 2015-08-07
 * Description  : 
 * Others       : 
***************************************************************/

#ifndef _SOCKET_DRV_H_
#define _SOCKET_DRV_H_

/******************************************************
*                 includes
******************************************************/

/******************************************************
*                 Macros
******************************************************/

/******************************************************
*                Constants
******************************************************/

/******************************************************
*               Enumerations
******************************************************/

/******************************************************
*             Type Definitions
******************************************************/

/******************************************************
*               Structures
******************************************************/

/******************************************************
*               Function Declarations
******************************************************/

/********************************************************************************/
HETRetVal_e Socket_drv_sendToUDP(T16S sd, const void *pBuf, T16S Len, T16S flags, 
                                 const SocketAddrIn_st *to);
/********************************************************************************/

/********************************************************************************/
T16S Socket_drv_recvFromUDP(T16S sd, void *buf, T16S Len, T16S flags, 
                            SocketAddrIn_st *from);
/********************************************************************************/

/********************************************************************************/
HETRetVal_e Socket_drv_sendToTCP(T16S sd, const void *pBuf, T16S Len, T16S flags);
/********************************************************************************/

/********************************************************************************/
T16S Socket_drv_recvFromTCP(T16S sd, void *buf, T16S Len, T16S flags);
/********************************************************************************/

/********************************************************************************/
HETRetVal_e Socket_drv_nonBlockingRecvSet(T16S sd);
/********************************************************************************/

/********************************************************************************/
HETRetVal_e Socket_drv_clientOpen(T16S* sd, 
                                  SocketType_e sendType,
                                  SocketAddrIn_st* addr);
/********************************************************************************/

/********************************************************************************/
HETRetVal_e Socket_drv_clientClose(T16S sd);
/********************************************************************************/

#endif /*_SOCKET_DRV_H_*/

