/***************************************************************************
                          kmmtrackvideopanel.h  -  description
                             -------------------
    begin                : Tue Apr 9 2002
    copyright            : (C) 2002 by Jason Wood
    email                : jasonwood@blueyonder.co.uk
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef KMMTRACKVIDEOPANEL_H
#define KMMTRACKVIDEOPANEL_H

#include <qwidget.h>

#include <doctrackvideo.h>
#include <kmmtrackvideopanel_ui.h>

/**KMMTrackVideoPanel contains useful controls for manipulating the video tracks
which reside in the main video widget
  *@author Jason Wood
  */

class KMMTrackVideoPanel : public KMMTrackVideoPanel_UI  {
   Q_OBJECT
public: 
	KMMTrackVideoPanel(DocTrackVideo *docTrack, QWidget *parent=0, const char *name=0);
	~KMMTrackVideoPanel();
};

#endif
