//
// Copyright (C) 2001,2002,2003,2004 Jorge Daza Garcia-Blanes
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
// USA
//
/*
 * $Header: /root/cvs/drqueue/drqman/notebook.h,v 1.2 2001/08/28 21:49:29 jorge Exp $
 */

#ifndef _NOTEBOOK_H
#define _NOTEBOOK_H

#include "drqman.h"
#include <gtk/gtk.h>

void CreateNotebook (GtkWidget *window,GtkWidget *vbox,struct info_drqm *info);

#endif /* _NOTEBOOK_H */
