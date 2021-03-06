/*
  ==============================================================================

    MultiDlyDisplay.cpp
    Created: 15 Aug 2020 1:19:30pm
    Author:  Zachary Lewis-Towbes

  ==============================================================================
*/

#include <JuceHeader.h>
#include "MultiDlyDisplay.h"

//==============================================================================
MultiDlyDisplay::MultiDlyDisplay(MultiDlyAudioProcessor& _p) : p(_p)
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

MultiDlyDisplay::~MultiDlyDisplay()
{
}

void MultiDlyDisplay::paint (juce::Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (juce::Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component
    g.setColour (juce::Colours::white);
    g.setFont (14.0f);
    g.drawText ("MultiDlyDisplay", getLocalBounds(),
                juce::Justification::centred, true);   // draw some placeholder text
}

void MultiDlyDisplay::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}

void MultiDlyDisplay::mouseDown (const MouseEvent& event)
{
    

}

void MultiDlyDisplay::mouseDrag (const MouseEvent& event)
{

}

void MultiDlyDisplay::mouseUp (const MouseEvent& event)
{

}
