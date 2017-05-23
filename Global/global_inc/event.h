/*
 * event.h
 *
 *  Created on: 2015年10月19日
 *      Author: Louis Ju
 */

#pragma once

#define EVENT_FILTER								90000
#define EVENT_COMMAND								3000
#define EVENT_MSQ_KEY								4000

/*
 * event filter
 * will be defined 2xxx
 */
enum _EVENT_FILTER
{
	CONTROLLER = 0x00000001, SOCKET_SERVER = 5000, SOCKET_CLIENT = 6000
};

#define EVENT_FILTER_CONTROLLER						(EVENT_FILTER + CONTROLLER)
#define EVENT_FILTER_SOCKET_SERVER					(EVENT_FILTER + SOCKET_SERVER)
#define EVENT_FILTER_SOCKET_CLIENT					(EVENT_FILTER + SOCKET_CLIENT)

/********************************************************************
 * event command
 * will be defined 1xxx
 */
enum _EVENT_COMMAND
{
	TIMER = 0x00000001,
	THREAD_EXIT,
	SOCKET_ACCEPT,
	SOCKET_CONNECT,
	SOCKET_DISCONNECT,
	SOCKET_SERVER_RECEIVE,
	SOCKET_CLIENT_RECEIVE,
	SERVER_DOMAIN,
	SOCKET_TCP_RECEIVE,
	SOCKET_UDP_RECEIVE,
	SOCKET_CLIENT_CONNECT,
	SOCKET_CLIENT_DISCONNECT,
	SOCKET_CLIENT_CLOSE,
	SOCKET_TCP_AMX_RECEIVE,
	SOCKET_TCP_DEVICE_RECEIVE,
	SOCKET_CLIENT_CONNECT_AMX,
	SOCKET_CLIENT_DISCONNECT_AMX,
	SOCKET_SERVER_DISCONNECT_AMX,
	SOCKET_CLIENT_CONNECT_DEVICE,
	SOCKET_CLIENT_DISCONNECT_DEVICE,
	SOCKET_TCP_MEETING_RECEIVE,
	SOCKET_CLIENT_CONNECT_MEETING,
	SOCKET_CLIENT_DISCONNECT_MEETING,
	SOCKET_TCP_MEETING_AGENT_RECEIVE,
	SOCKET_SERVER_DISCONNECT_MEETING_AGENT,
	SOCKET_TCP_DISPATCHER_RECEIVER,
	SOCKET_CLIENT_CONNECT_DISPATCHER,
	SOCKET_CLIENT_DISCONNECT_DISPATCHER,
	SOCKET_TCP_MONGODB_RECEIVE,
	SOCKET_SERVER_DISCONNECT_MONGODB,
	RECONNECT_CONTROLLER_MONGODB,
	SOCKET_TCP_SIGNIN_RECEIVER,
	SOCKET_CLIENT_CONNECT_SIGNIN,
	SOCKET_CLIENT_DISCONNECT_SIGNIN,
	SOCKET_TCP_TRACKER_RECEIVER,
	SOCKET_CLIENT_CONNECT_TRACKER,
	SOCKET_CLIENT_DISCONNECT_TRACKER,
	SOCKET_TCP_CONNECT_ALIVE,
	HANDLE_MESSAGE,
	SOCKET_SERVER_CLOSE
};

#define EVENT_COMMAND_TIMER													(EVENT_COMMAND + TIMER)
#define EVENT_COMMAND_THREAD_EXIT											(EVENT_COMMAND + THREAD_EXIT)
#define EVENT_COMMAND_SOCKET_ACCEPT											(EVENT_COMMAND + SOCKET_ACCEPT)
#define EVENT_COMMAND_SOCKET_CONNECT										(EVENT_COMMAND + SOCKET_CONNECT)
#define EVENT_COMMAND_SOCKET_DISCONNECT										(EVENT_COMMAND + SOCKET_DISCONNECT)
#define EVENT_COMMAND_SOCKET_SERVER_RECEIVE									(EVENT_COMMAND + SOCKET_SERVER_RECEIVE)
#define EVENT_COMMAND_SOCKET_CLIENT_RECEIVE									(EVENT_COMMAND + SOCKET_CLIENT_RECEIVE)
#define EVENT_COMMAND_SERVER_DOMAIN											(EVENT_COMMAND + SERVER_DOMAIN)
#define EVENT_COMMAND_SOCKET_TCP_RECEIVE									(EVENT_COMMAND + SOCKET_TCP_RECEIVE)
#define EVENT_COMMAND_SOCKET_UDP_RECEIVE									(EVENT_COMMAND + SOCKET_UDP_RECEIVE)
#define EVENT_COMMAND_SOCKET_CLIENT_CONNECT									(EVENT_COMMAND + SOCKET_CLIENT_CONNECT)
#define EVENT_COMMAND_SOCKET_CLIENT_DISCONNECT								(EVENT_COMMAND + SOCKET_CLIENT_DISCONNECT)
#define EVENT_COMMAND_SOCKET_CLIENT_COLSE									(EVENT_COMMAND + SOCKET_CLIENT_CLOSE)
#define EVENT_COMMAND_SOCKET_TCP_AMX_RECEIVE								(EVENT_COMMAND + SOCKET_TCP_AMX_RECEIVE)
#define EVENT_COMMAND_SOCKET_TCP_DEVICE_RECEIVE								(EVENT_COMMAND + SOCKET_TCP_DEVICE_RECEIVE)
#define EVENT_COMMAND_SOCKET_CLIENT_CONNECT_AMX								(EVENT_COMMAND + SOCKET_CLIENT_CONNECT_AMX)
#define EVENT_COMMAND_SOCKET_CLIENT_DISCONNECT_AMX							(EVENT_COMMAND + SOCKET_CLIENT_DISCONNECT_AMX)
#define EVENT_COMMAND_SOCKET_SERVER_DISCONNECT_AMX							(EVENT_COMMAND + SOCKET_SERVER_DISCONNECT_AMX)
#define EVENT_COMMAND_SOCKET_CLIENT_CONNECT_DEVICE							(EVENT_COMMAND + SOCKET_CLIENT_CONNECT_DEVICE)
#define EVENT_COMMAND_SOCKET_CLIENT_DISCONNECT_DEVICE						(EVENT_COMMAND + SOCKET_CLIENT_DISCONNECT_DEVICE)
#define EVENT_COMMAND_SOCKET_TCP_MEETING_RECEIVE							(EVENT_COMMAND + SOCKET_TCP_MEETING_RECEIVE)
#define EVENT_COMMAND_SOCKET_CLIENT_CONNECT_MEETING							(EVENT_COMMAND + SOCKET_CLIENT_CONNECT_MEETING)
#define EVENT_COMMAND_SOCKET_CLIENT_DISCONNECT_MEETING						(EVENT_COMMAND + SOCKET_CLIENT_DISCONNECT_MEETING)
#define EVENT_COMMAND_SOCKET_TCP_MEETING_AGENT_RECEIVE						(EVENT_COMMAND + SOCKET_TCP_MEETING_AGENT_RECEIVE)
#define EVENT_COMMAND_SOCKET_SERVER_DISCONNECT_MEETING_AGENT				(EVENT_COMMAND + SOCKET_SERVER_DISCONNECT_MEETING_AGENT)
#define EVENT_COMMAND_SOCKET_TCP_DISPATCHER_RECEIVER						(EVENT_COMMAND + SOCKET_TCP_DISPATCHER_RECEIVER)
#define EVENT_COMMAND_SOCKET_CLIENT_CONNECT_DISPATCHER						(EVENT_COMMAND + SOCKET_CLIENT_CONNECT_DISPATCHER)
#define EVENT_COMMAND_SOCKET_CLIENT_DISCONNECT_DISPATCHER					(EVENT_COMMAND + SOCKET_CLIENT_DISCONNECT_DISPATCHER)
#define EVENT_COMMAND_SOCKET_TCP_MONGODB_RECEIVE							(EVENT_COMMAND + SOCKET_TCP_MONGODB_RECEIVE)
#define EVENT_COMMAND_SOCKET_SERVER_DISCONNECT_MONGODB						(EVENT_COMMAND + SOCKET_SERVER_DISCONNECT_MONGODB)
#define EVENT_COMMAND_RECONNECT_CONTROLLER_MONGODB							(EVENT_COMMAND + RECONNECT_CONTROLLER_MONGODB)
#define EVENT_COMMAND_SOCKET_TCP_SIGNIN_RECEIVER							(EVENT_COMMAND + SOCKET_TCP_SIGNIN_RECEIVER)
#define EVENT_COMMAND_SOCKET_CLIENT_CONNECT_SIGNIN							(EVENT_COMMAND + SOCKET_CLIENT_CONNECT_SIGNIN)
#define EVENT_COMMAND_SOCKET_CLIENT_DISCONNECT_SIGNIN						(EVENT_COMMAND + SOCKET_CLIENT_DISCONNECT_SIGNIN)

#define EVENT_COMMAND_SOCKET_TCP_TRACKER_RECEIVER							(EVENT_COMMAND + SOCKET_TCP_TRACKER_RECEIVER)
#define EVENT_COMMAND_SOCKET_CLIENT_CONNECT_TRACKER							(EVENT_COMMAND + SOCKET_CLIENT_CONNECT_TRACKER)
#define EVENT_COMMAND_SOCKET_CLIENT_DISCONNECT_TRACKER						(EVENT_COMMAND + SOCKET_CLIENT_DISCONNECT_TRACKER)
#define EVENT_COMMAND_SOCKET_TCP_CONNECT_ALIVE								(EVENT_COMMAND + SOCKET_TCP_CONNECT_ALIVE)
#define EVENT_COMMAND_HANDLE_MESSAGE										(EVENT_COMMAND + HANDLE_MESSAGE)

#define EVENT_COMMAND_SOCKET_SERVER_COLSE									(EVENT_COMMAND + SOCKET_SERVER_CLOSE)
//===================================================================================//
//	Message Queue ID																 //
//																					 //
//===================================================================================//
enum _EVENT_MSQ_KEY
{
	CONTROLLER_DISPATCHER = 0x00000001,
	CONTROLLER_SIGNIN,
	CONTROLLER_MONGODB,
	CONTROLLER_AMX,
	CONTROLLER_TRANSFER,
	CONTROLLER_TRANSFERMYSQL,
	CONTROLLER_TRACKER,
	CONTROLLER_SYNCDATA,
	CONTROLLER_SEMANTIC,
	CONTROLLER_MEETING_AGENT,
	CONTROLLER_MEETING
};

#define EVENT_MSQ_KEY_CONTROLLER_DISPATCHER									(EVENT_MSQ_KEY + CONTROLLER_DISPATCHER)
#define EVENT_MSQ_KEY_CONTROLLER_SIGNIN										(EVENT_MSQ_KEY + CONTROLLER_SIGNIN)
#define EVENT_MSQ_KEY_CONTROLLER_MONGODB									(EVENT_MSQ_KEY + CONTROLLER_MONGODB)
#define EVENT_MSQ_KEY_CONTROLLER_AMX										(EVENT_MSQ_KEY + CONTROLLER_AMX)
#define EVENT_MSQ_KEY_CONTROLLER_TRANSFER									(EVENT_MSQ_KEY + CONTROLLER_TRANSFER)
#define EVENT_MSQ_KEY_CONTROLLER_TRANSFERMYSQL								(EVENT_MSQ_KEY + CONTROLLER_TRANSFERMYSQL)
#define EVENT_MSQ_KEY_CONTROLLER_TRACKER									(EVENT_MSQ_KEY + CONTROLLER_TRACKER)
#define EVENT_MSQ_KEY_CONTROLLER_SYNCDATA									(EVENT_MSQ_KEY + CONTROLLER_SYNCDATA)
#define EVENT_MSQ_KEY_CONTROLLER_SEMANTIC									(EVENT_MSQ_KEY + CONTROLLER_SEMANTIC)
#define EVENT_MSQ_KEY_CONTROLLER_MEETING_AGENT								(EVENT_MSQ_KEY + CONTROLLER_MEETING_AGENT)
#define EVENT_MSQ_KEY_CONTROLLER_MEETING									(EVENT_MSQ_KEY + CONTROLLER_MEETING)
