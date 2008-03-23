/*  Copyright 2008 Guillaume Duhamel
  
    This file is part of mini18n.
  
    mini18n is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
  
    mini18n is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
  
    You should have received a copy of the GNU General Public License
    along with mini18n; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include "../src/mini18n.h"
#include <stdio.h>

int main(int argc, char ** argv) {
	if (argc > 1) {
		mini18n_set_locale(argv[1]);
	}

	/* "long" version */
	printf("%s\n", mini18n("Hello!"));
	/* "short" version */
	printf("%s\n", _("I am a test program"));
	printf("%s\n", _("You can use \\ and | in your strings"));

	mini18n_close();
}
