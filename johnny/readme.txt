 README.TXT   
 
 Johnny Walker POV-Ray animation macro
 
 (c) Eric Brok 2006
 http://legomind.ericbrok.com
 http://legomind.ericbrok.com/index.htm?s=cad
 
 -----------------------------
 ANIMATION                    
 -----------------------------

 To animate, add these lines to your active POV-ray ini.file:
 Initial_Frame = 1
 Final_Frame = 16      //This determines the number of frames in the animation
 Initial_Clock = 0.0
 Final_Clock = 4.0     //This determines the number of walking steps in the animation 
 
 Always choose a multiple of 4.o Clock to complete a full walking cycle.
 
 This file defines the walk of a minifig along one linear or curved path. Create different files if you need a walk composed of different subsequent paths.

 -----------------------------
 WALKING DISTANCE 
 -----------------------------
 
 Total walking distance follows from Final_clock in ini-file. For each 4.0 clock (= 1 cycle) the fig walks two steps which covers a distance of (length_leg_spread+footsole)*2 (plus 1 forefoot at the start)

 -----------------------------
 SHIRT PRINT                  
 -----------------------------
 shirt_print,gif must be non-interlaced pallete gif file, such as in MS Paint. Colors in gif pallet are replaced by colors in the character settings
 
 -----------------------------
 GEAR
 -----------------------------
 
 Accesories included in package:

 -- Headgear     
 01 Common hair
 02 Long hair
 03 Pirate soldiers shako hat
 04 Pirate soldiers tricorne hat
 05 Knitted cap
 06 Knight soldiers helmet
 07 Dart Vader helmet
 08 Samurai helmet with ornament
 09 Cowboy hat
 10 Police hat
 11 Construction hat
 12 Helmet with visor
 13 Helmet w/o visor
 14 American indian (mock-up)
 15 Top hat
 16 Baseball cap
  16 Baseball cap
 18 Fedora

           
 -- Neckgear
 01 Body armor
 02 Pirate soldiers epaulettes
 03 Beard
 04 Backpack
 05 Cloth cape        
 06 Air tanks
 07 Samurai armor


 -- Handgear
 01 Cutlass
 02 Forestman shield
 03 Suitcase
 04 Small drill
 05 Pirate gun. 05r is rotated. Hold this in 180 degrees rotated hand, to carry gun over shoulder. Add 10 degrees gear pose to avoid collision
 06 2x4 Brick
 07 Gun revolver
 08 Magnifying glass
 09 Samurai sword
 10 Lion knights large shield. For left hand use
 11 Pirate flint gun
 12 Drink cup
 13 Photo camera
 14 Light sabre
 15 whip
 
 
 To add new gear: 
 Make a model in MLCAD containing the gear. 
 Let LPUB draw the model through POV-ray, with LPBU setting 'erase generated POV-file' off. 
 Fetch the produced POV-file and edit it. Remove the scene drawing and call the final created object 'this_object'. Add a translate line to this_object if the gear does not match up with the fig. See supplied gear files for comparison. 
 Rename the file to .inc
 If you run Johnny Walker after you have run LPUB, don't forget to erase the POV-Ray command line parameters set by LPUB.