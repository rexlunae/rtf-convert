NOTICE
===

This software is not my original work. It is software that I needed, and could only find hiding in a very old archive. I'm putting it on GitHub in case it turns out to be useful to someone other than me.

Retrieved 2021-11-29 from here, at which time it states "Saturday February 11, 2006 3:48 PM":
http://support.moonpoint.com/downloads/computer_languages/c++/rtf-converter.php


rtf-convert
===

Copyright 2001

rtf-converter

Author: Gregory Ford greg@reddfish.co.nz

This software was developed for: 
The Ministry for the Environment (NZ)
As part of the Kaitiaki Web Site Project 
A Sustainable Management Fund Project

RTF token parser based on:
     rtf2html by Dmitry Porapov <dpotapov@capitalsoft.com>,
     based on earlier work of Chuck Shotton.
     distributed under BSD-style license
RTF token lists and hashing algorithm based on
     RTF Tools, Release 1.10 
     6 April 1994	
     Paul DuBois	dubois@primate.wisc.edu 

Copying permitted under GNU licence (see COPYING)


The rtf-converter is a standalone executable.
It is intended for command-line conversion of rtf to 
html. It produces only the html body code which will need 
to be wrapped in "body" tags and given an html header.
 
It attempts to produce HTML 4.0 (strict) compliant html code.

The fonts, colours and indenting are not converted, so that 
style-sheets may be used to set the look and feel of the 
generated pages.

Instructions for making and running the application 
are given in the INSTALL document.

Initial development was done on WinNT (Visual C++) so it should 
compile on most Windows and *NIX versions.

The rtf-converter does the following conversions:

Heading and normal styles --> H and P tags
Character styles --> b, i, u 
Tables --> html tables
Footnotes -->placed at end of document

The rtf-converter does not do:
Graphics 
Fields (beware hyperlink and page number fields may be lost).
Indenting

As the converter throws away all font information, it also
tends to convert bullet points from Symbol fonts to ordinary letters.


13 May 2001

