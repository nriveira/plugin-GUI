/*
    ------------------------------------------------------------------

    This file is part of the Open Ephys GUI
    Copyright (C) 2014 Open Ephys

    ------------------------------------------------------------------

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#include "EmptyProcessorEditor.h"

EmptyProcessorEditor::EmptyProcessorEditor(GenericProcessor* parentNode)
	: GenericEditor(parentNode)
{

    drawerButton->setVisible(false);

}

EmptyProcessorEditor::~EmptyProcessorEditor()
{

}


void EmptyProcessorEditor::paint(Graphics& g)
{
    if (getSelectionState())
        g.setColour(Colours::yellow);
    else
        g.setColour(Colour(150, 150, 150));

    g.drawRect(1, 1, getWidth() - 2, getHeight() - 2, 2);
    g.drawHorizontalLine(22, 1, getWidth() - 2);
    
    g.setFont( Font("CP Mono", "Plain", 16.0f) );
    g.drawFittedText("NO SOURCE", 10, 5, getWidth() - 12, 16, Justification::centredLeft, 1);

    g.setColour (Colours::lightgrey);

}