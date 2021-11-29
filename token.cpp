/*Copyright 2001
 *
 * token.cpp
 *
 * Author: Gregory Ford greg@reddfish.co.nz
 * RTF token parser based on:
 *      rtf2html by Dmitry Porapov <dpotapov@capitalsoft.com>,
 *      based on earlier work of Chuck Shotton.
 *      distributed under BSD-style license
 * RTF token lists and hashing algorithm based on
 *      RTF Tools, Release 1.10 
 *      6 April 1994	
 *      Paul DuBois	dubois@primate.wisc.edu 
 *
 * Copying permitted under GNU licence (see COPYING)
 */ 
// token.cpp: implementation of the Token class.
//
//////////////////////////////////////////////////////////////////////
#include <string>
using namespace std ;


#include "token.h"


//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Token::Token()
{
	destination = false;
}

Token::~Token()
{

}

//////////////////////////////////////////////////////////////////////
// GroupToken Class
//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

GroupToken::GroupToken()
{

}

GroupToken::~GroupToken()
{

}

//////////////////////////////////////////////////////////////////////
// ControlToken Class
//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

ControlToken::ControlToken()
{
	arg = 0;
	hasArg = false;
	text.erase();
}

ControlToken::~ControlToken()
{

}

//////////////////////////////////////////////////////////////////////
// CharToken Class
//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CharToken::CharToken()
{
	text.erase();
}

CharToken::~CharToken()
{

}


TokenType CharToken::getType()
{
	return charToken;
}

TokenType ControlToken::getType()
{
	return controlToken;
}


TokenType GroupToken::getType()
{
	return groupToken;
}

TokenType InvalidToken::getType()
{
	return invalidToken;
}


GroupToken::GroupToken(GroupType t)
{
	group = t;
	text.erase();
	if ( t == startGroup ) {
		text.assign("{", 1);
	} else {
		text.assign("}", 1);
	}
}

CharToken::CharToken(char ch)
{
	// ugly kludge to ensure ch is converted to null terminated string
	char strChar[2];
	strChar[0] = ch;
	strChar[1] = '\0';
	text.erase();
	
	this->ch = ch;
	text.assign(strChar, 1);
}

//////////////////////////////////////////////////////////////////////
// InvalidToken Class
//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

InvalidToken::InvalidToken()
{

}

InvalidToken::~InvalidToken()
{

}


InvalidToken::InvalidToken(const char *errorMessage)
{
	this->errorMessage = errorMessage;
}