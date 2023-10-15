LIST Colour = White, Red, Blue, Green
VAR Cube1 = White
LIST visited =  Cube, RedRoundel, BlueBox, Parms, FlowsExplained

-> Main

== Main
    {  
    - not visited : 
        This is a demo of some of types of interaction between Ink script and the game world.
        The Ink flow is switched by the triggers that have been setup in the level blueprint.  
        Use W,A,S,D to walk, and the left and right arrow keys to turn.
        Walk towards to the colourless cube.
    - not (visited has RedRoundel or visited has BlueBox ):
        Visit the blue box or the red roundel.
    - not ( visited has BlueBox ):
        -> FlowDescription ->
        Check out the blue box.
    - not ( visited has RedRoundel ):
        -> FlowDescription ->
        Now, go visit out the red roundel.
    - visited has (RedRoundel, BlueBox) and not ( visited has Parms ) and Main >= 7:
        Now, walk over to the parameter passing pad, 
        and see how easy it is to pass parameters to Ink.
    - else :
        {
        - Main < 7:
            { shuffle :
            - See the blue box again.
            - Regard the red roundel again.
            }
        - else :
            { shuffle :
            - Change the colour of the cube, again.
            - Go back to the blue box.
            - Return to the red roundel.
            }
        }
    }
    -> DONE
    
= FlowDescription
    { not( visited ? FlowsExplained ):
        The Red Roundel and the Blue Box show how flows can switch and continue from where they left off. 
        Walking into either colour area will switch the flow and continue the Ink script for red or blue. 
        Leaving the area will pause the script for that flow.
        ~visited += FlowsExplained
    }
    ->->

== BigCubeEncounter
    {
    - not (visited ? Cube) :
        This cube demos how you can set up an Ink variable watch, 
        this cube has an Inkpot watch component that notifies when a variable changes,
        see props\BP_InkyCube for how this is setup.
        Now, this cube has no colour. 
        What colour should the cube be?
    - else :
        This cube is {Cube1}, what new colour should it be?
    }
    ~visited += Cube
    +[Red] You chose Red.
        ~Cube1 = Red
    +[Blue] Blue is the choice you made. 
        ~Cube1 =Blue
    +[Green] Green, green, green, it's not easy bein’ green!
        ~Cube1 = Green
    - The cube is now {Cube1}
    Now go check out some of the other areas
    When you come back here you can change the cube colour again. 
    -> DONE

== FlowsDemo

= BabblingBlueBox
    ~visited += BlueBox
    Blue is the colour of the sky and the ocean, two of nature's most vast and awe-inspiring wonders. 
    Blue is also one of the most popular colours in the world, beloved by people of all ages and cultures.
    Blue is a primary colour in the RGB colour model, which means that it cannot be created by mixing other colours. 
    Blue is also one of the three primary colours in the traditional RYB colour model.
    Blue has a wide range of shades and hues, from light and airy sky blue to deep and rich navy blue. 
    Blue is often associated with positive emotions such as peace, tranquility, trust, and intelligence. 
    Blue is also associated with coldness, distance, and sadness.
    In many cultures, blue is associated with royalty and nobility. 
    Blue is also a popular colour for corporate branding, as it conveys a sense of professionalism and trust. 
    The first documented use of blue pigment was in ancient Egypt, where it was used to decorate tombs and temples.
    In the Middle Ages, blue was a very expensive colour, as it was made from the mineral lapis lazuli.
    The first synthetic blue dye was invented in 1828.
    Blue is the most popular colour in the world, according to surveys.
    Blue is a colour of the human eye.
    Blue is the colour of the sky because of the way sunlight interacts with the atmosphere.
    Blue is a beautiful and versatile colour that can be used in many different ways. 
    Blue is a popular choice for everything from home decor to fashion to art.
    -> DONE
    
= RamblingRedRoundel
    ~visited += RedRoundel
    Red is the colour at the long wavelength end of the visible spectrum of light, next to orange and opposite violet. 
    Red has a dominant wavelength of approximately 625–740 nanometres. 
    Red is a primary colour in the RGB colour model 
    Red is a secondary colour (made from magenta and yellow) in the CMYK colour model, and is the complementary colour of cyan. 
    Reds range from the brilliant yellow-tinged scarlet and vermillion to bluish-red crimson. 
    Reds vary in shade from the pale red pink to the dark red burgundy.
    Red is one of the most powerful and evocative colours in the world. 
    Red is often associated with strong emotions such as love, passion, anger, and danger. 
    Red is also associated with heat, energy, and excitement.
    Red is a very visible colour, which is why it is often used in warning signs and traffic lights. 
    Red is also a popular colour for marketing and advertising, as it can grab people's attention quickly.
    Red is the colour of blood, which is why it is often associated with danger and violence.
    Red is the colour of fire, which is why it is often associated with heat and energy.
    Red is the colour of love and passion, which is why it is often used in romantic settings.
    Red is the colour of anger and rage, which is why it is often used to express these emotions.
    Red is a versatile colour that can be used in many different ways. 
    Red is a popular choice for everything from home decor to fashion to art.
    -> DONE

== ParameterPassingDemo( ABoolean, TheAnswer, PI, Message, Nephews ) 
    {
    - not (visited ? Parms) :
        These parameters have been passed from Blueprint to Ink. 
    - else:
        Parameters passed are 
    }
    Message : "{ Message }"
    ABoolean : { ABoolean }
    TheAnswer : { TheAnswer }
    PI : { PI }
    Nephews : { Nephews }
    {
    - not (visited ? Parms) :
        See the level blueprint to see how this has been setup. 
    }
    ~visited += Parms
    ->DONE
    


