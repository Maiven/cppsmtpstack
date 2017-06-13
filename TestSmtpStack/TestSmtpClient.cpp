/* 
 * Copyright (C) 2012 Yee Young Han <websearch@naver.com> (http://blog.naver.com/websearch)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA 
 */

#include "TestSmtpStack.h"
#include "SmtpClient.h"
#include "Log.h"

bool TestSmtpClient( int argc, char *argv[] )
{
	CSmtpClient clsClient;

	if( argc != 7 )
	{
		printf( "%s {server ip} {server port} {user id} {password} {from} {to}\n", argv[0] );
		return false;
	}

	CLog::SetLevel( LOG_DEBUG | LOG_NETWORK );

	if( clsClient.Connect( argv[1], atoi(argv[2]), argv[3], argv[4] ) == false )
	{
		return false;
	}

	if( clsClient.Send( argv[5], argv[6], "test", "test mail" ) == false )
	{
		return false;
	}

	return true;
}
