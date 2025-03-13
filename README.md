# freecivstuff
Tileset &amp; ruleset for freeciv

This repository is for testing freeciv with more terrain types. Such as "arctic hills" and "desert hills".  This gives more opportunities for nice looking terrains, as it is now possible to have a hill in a desert or polar region - without getting an unrealistic green hill there. A green hill is not merely a bad fit visually, it also ruins the gameplay by providing too nice terrain in an otherwise barren region. 

Having more terrain types makes a custom ruleset necessary, as the ruleset specifies the terrain types.  The custom ruleset here is the civ2civ3 rules, with more terrain added.

The extra terrain types is supported by the terrain generator in freeciv 3.1  They are also supported by my "tergen" terrain generator. The terrain graphics is based on the toonhex tileset, and is therefore named toonhex+.

To use this, copy the files and folders into your freeciv folder. Such as /usr/share/freeciv/ on Linux.

There are two ways to specify the toonhex+ tileset. Those using the command line, can start the game like this:
freeciv-gtk3 -t toonhex+

Those preferring GUI solutions, start freeciv and open "client settings". Select graphics, and set tileset(Iso-Hex) to "toonhex+"

Either way, start a game and choose the "hh" ruleset. 
