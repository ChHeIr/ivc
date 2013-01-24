// Persistence of Vision RayTracer version 3.1 Scene description file
// File: JohnnyW.pov
// Description: A walking minifig, customizable animation
// Author: Algorithm Eric Brok using body parts by Anton Raves and LDRAW converted parts for gear
// Version: 2.0 Beta
// http://legomind.ericbrok.com/
// http://legomind.ericbrok.com/index.htm?s=cad

// See readme.txt and website on how to use this file


//----------------------------------------------------------------------------------------        
// SETTINGS
//----------------------------------------------------------------------------------------

// FIXED SIZES
#declare fix_length_leg=11;
#declare fix_length_toe=11.81;
#declare fix_length_heel=11.543;
#declare fix_angle_toe=21.35;
#declare fix_angle_heel=17.65;
#declare fix_forefoot=3.5;
#declare fix_footsole=7.8;
#declare fix_foot_width=7.8;
#declare fix_max_angle=45;

//----------------------------------------------------------------------------------------        
// INCLUDE FILES
//----------------------------------------------------------------------------------------

// PARTS BY ANTON RAVES
#include concat(lib_dir, "man_006.lib")  //minifig
#include  concat(lib_dir,"Candle_2.inc")


//----------------------------------------------------------------------------------------
// JOHNNY WALKER MACRO
//----------------------------------------------------------------------------------------

#macro johnny(
    caption,                    //name tag
    face_expression,                    //1 = indy smile
    set_talk,                   //0:smiley, 1:talking mouth
    phase_shift,                //pace difference to other walkers
    set_move_body_factors,      //array. relative motion of body parts, e.g. 0.5
    set_move_gait_factors,      //array. relative swaying of hips, e.g. 0.5
    set_poses,                  //array. start pose of body parts, e.g. 10 degrees
    set_body_colors,            //array. color textures of body parts
    set_shirt_print_file,       //pallet gif file
    set_shirt_print_colors,     //array. texture colors in order of palette in gif file. 
    set_gear_parts,             //array. filenames: headgear, neckgear, left hand acc, right hand acc
    set_gear_colors,            //array.  texture colors
    set_path                    //array. path settings
    set_jump
)

//PARSE THE PARAMETERS 
//(arrays are used because total nr of params of a macro is limited)
#local set_move_head=set_move_body_factors [0];
#local set_move_torso=set_move_body_factors [1];
#local set_move_arm_left=set_move_body_factors [2];
#local set_move_arm_right=set_move_body_factors [3];
#local set_move_hand_left=set_move_body_factors [4];
#local set_move_hand_right=set_move_body_factors [5];
#local set_move_gear_left=set_move_body_factors [6];
#local set_move_gear_right=set_move_body_factors [7];
#local set_move_legs=set_move_body_factors [8];

#local set_pose_head=set_poses [0];
#local set_pose_torso=set_poses [1];
#local set_pose_arm_left=set_poses [2];//nog
#local set_pose_arm_right=set_poses [3];//nog
#local set_pose_hand_left=set_poses [4];
#local set_pose_hand_right=set_poses [5];
#local set_pose_gear_left=set_poses [6];
#local set_pose_gear_right=set_poses [7];

#local set_move_fig=set_path [0];
#local set_start_x=set_path [1];
#local set_start_y=set_path [5];
#local set_start_z=set_path [2];
#local set_start_direction=set_path [3];
#local set_curve_direction=set_path [4];

#local set_move_sideways=set_move_gait_factors [0];
#local set_move_attitude=set_move_gait_factors [1];
#local set_move_jump=set_move_gait_factors [2];

#local set_head_tex=set_body_colors[0]
#local set_hands_tex=set_body_colors[1]
#local set_pants_tex=set_body_colors[2]                                  
#local set_shirt_tex=set_body_colors[3]
#local set_shirt_arms_tex=set_body_colors[4]

#local set_headgear=set_gear_parts [0]
#local set_neckgear=set_gear_parts [1]
#local set_handgear_left=set_gear_parts [2]
#local set_handgear_right=set_gear_parts [3] //note to self, do not put semicolon at end of string/file declarations!!!

#local set_headgear_color=set_gear_colors [0]
#local set_neckgear_color=set_gear_colors [1]
#local set_handgear_left_color=set_gear_colors [2]
#local set_handgear_right_color=set_gear_colors [3]
#local move_jump = set_jump;

//CLOCK
#local local_clock=clock;
#local local_clock=local_clock+phase_shift;
#local before=int(local_clock/4); //aantal reeds afgelegde cycli
#local step_time=mod(local_clock,4); //klok binnen huidige cyclus


// ACCESSORY INCLUDE FILES

//Headgear or hair
#if(strlen(set_headgear)>0)
  #include concat(gear_dir,set_headgear)  
  #local headgear= object { this_object texture { set_headgear_color }
  scale <0.4,0.4,0.4>
  rotate <0,0,180>
  translate <0,10,0>}
#end 
//Neckgear, backpack, harness
#if(strlen(set_neckgear)>0) 
  #include concat(gear_dir,set_neckgear) 
  #local neckgear= object { this_object texture { set_neckgear_color }
  scale <0.4,0.4,0.4>
  rotate <0,0,180>
  translate <0,0,0>}
#end
//Left hand accessory
#if(strlen(set_handgear_left)>0) 
  #include concat(gear_dir,set_handgear_left)  
  #local handgear_left= object { this_object texture { set_handgear_left_color }
  scale <0.4,0.4,0.4>
  rotate <0,0,180>
  translate <0,0,0> }
#end
//Right hand accessory
#if(strlen(set_handgear_right)>0) 
  #include concat(gear_dir,set_handgear_right) 
  #local handgear_right= object { this_object texture { set_handgear_right_color } 
  scale <0.4,0.4,0.4>
  rotate <0,0,180>
  translate <0,0,0>}
#end


          
//MOUTH OPEN OR SHUT                       
#if (set_talk)
  #local mouth = str(1+int(step_time),0,0)   
//  #warning concat("Local_clock is:",str(local_clock,2,2),"\n")
#else
  #local mouth = str(0,0,0)
#end
                   
                   
 #if (face_expression = 1)
 
#local head06_tex =
texture {
  material_map { gif concat(pics_dir,"mouth_indi_",mouth,".gif") once interpolate 4
    texture { black_tex }
    texture { black_tex }
    texture { set_head_tex }
  }
  translate <-0.5, -0.1, 0>
  scale <12, 12, 1>
} 
#end       


 #if (face_expression = 2)
 
#local head06_tex =
texture {
  material_map { gif concat(pics_dir,"mouth_astonished_indi_",mouth,".gif")  once interpolate 4
       texture { black_tex }
    texture { set_head_tex }
  }
  translate <-0.5, -0.1, 0>
  scale <12, 12, 1>
} 

#else
#local head06_tex = texture {
  material_map { gif concat(pics_dir,"mouth_",mouth,".gif") once interpolate 4
    texture { black_tex }
    texture { black_tex }
    texture { set_head_tex }
  }
  translate <-0.5, -0.1, 0>
  scale <12, 12, 1>
} 
#end       
      
// SHIRT PRINT                  
#if (strlen(set_shirt_print_file)>0)

        #local shirt06_tex = texture {
        	pigment{
                 image_map{ gif concat(pics_dir,set_shirt_print_file)
                            map_type 0
                            once
                          }
                  scale <13, 13, 1>                       
        translate <-6.5, 0, 0>     
                 }
              
                //	 gif concat(pics_dir,set_shirt_print_file) once interpolate 4
   

        }
#else
        #local shirt06_tex = texture  { set_shirt_tex }
#end
      

// CALCULATE POSE AND POSITION
// 0,0,0 of figure runs through leg hinges

//Fix_max_angle defines maximum degree of turn for body parts
//e.g. if set_move_legs=1, and fix_max_angle=45 degrees, then maximum spread of legs is 45
#local step_angle=fix_max_angle*set_move_legs;                                          
                                          
// Calculate distance heel-toe during leg spread
#local hoogte=fix_length_toe*(cos(radians((step_angle)-fix_angle_toe))); //hoogte tijdens spreidstand
#local teentotloodlijn=fix_length_toe*(sin(radians((step_angle)-fix_angle_toe)));
#local haktotloodlijn=hoogte*(tan(radians((step_angle)-fix_angle_toe)));
#local spreidafstand=teentotloodlijn+haktotloodlijn;


// Calculate direction
#local set_start_direction=set_start_direction+(local_clock * set_curve_direction);
//#local set_move_attitude=set_move_attitude+set_curve_direction;

// Calculate passed distance in long walks
#local startz=fix_forefoot+before*(spreidafstand+fix_footsole)*2;

// Lichaamshouding en positie berekenen
#switch (step_time)
#range (0.0,1.0) //spreidfase linksvoor. hoekt neemt toe
  #local hoekt=(step_time*(step_angle));
  #local refz=0; //positie van teen achterblijvend been: rechts)
  #local refy=0;
  #local gradenlinks=-hoekt;
  #local gradenrechts=hoekt;
  #local posz=-startz+refz+(fix_length_toe*sin(radians(gradenlinks+fix_angle_toe)));
  #local posy=refy+fix_length_toe*cos(radians(gradenlinks+fix_angle_toe));
  #local wankel=set_move_sideways*((step_angle)-hoekt);
  #local wankel_y=sin(radians(wankel))*fix_foot_width;
  #local attitude=set_move_attitude*(hoekt);
  #local attitude_corr_x=-spreidafstand*0.5*sin(radians(attitude));
  #local posy=posy+set_move_jump-(step_time*set_move_jump);
#break
#range (1.0,2.0) //sluitfase linksvoor. hoekt neemt af
  //nieuw referentiepunt berekenen (hak van vooruitgestoken been: links)
  #local refz=0-spreidafstand; //hakpositie
  #local refy=0; //teen-hak-hoogteverschil corrigeren (boem)
  //stap berekenen
  #local hoekt=(step_angle)-((step_time-1)*(step_angle)); //hoekt vermindert
  #local gradenlinks=-hoekt;
  #local gradenrechts=hoekt;
  #local posz=-startz+refz-(fix_length_heel*sin(radians(gradenlinks+fix_angle_heel)));
  #local posy=refy+fix_length_heel*cos(radians(gradenlinks+fix_angle_heel));
  #local wankel=set_move_sideways*(-(step_angle)+hoekt);
  #local wankel_y=-sin(radians(wankel))*fix_foot_width;
  #local attitude=set_move_attitude*(hoekt);
  #local attitude_corr_x=(-spreidafstand*0.5*sin(radians(set_move_attitude*((step_angle)))));
  #local posy=posy+((step_time-1)*set_move_jump);
#break
#range (2.0,3.0)  //spreidfase rechtsvoor. hoekt neemt toe
  //nieuw referentiepunt berekenen (teen van achterblijvend been: links)
  #local refz=0-(2*spreidafstand-fix_forefoot); //teenpositie
  #local refy=0;
  //stap berekenen
  #local hoekt=((step_time-2)*(step_angle));
  #local gradenlinks=hoekt;
  #local gradenrechts=-hoekt;
  #local posz=-startz+refz+(fix_length_toe*sin(radians(gradenrechts+fix_angle_toe)));
  #local posy=refy+fix_length_toe*cos(radians(gradenrechts+fix_angle_toe));
  #local wankel=set_move_sideways*(-(step_angle)+hoekt);
  #local wankel_y=-sin(radians(wankel))*fix_foot_width;
  #local attitude=set_move_attitude*(-hoekt);
  #local attitude_corr_x=(-spreidafstand*0.5*sin(radians(set_move_attitude*((step_angle)))))-spreidafstand*0.5*sin(radians(attitude));
  #local posy=posy+set_move_jump-((step_time-2)*set_move_jump);  
#break
#range (3.0,4.0)  //sluitfase rechtsvoor. hoekt neemt af
  //nieuw referentiepunt berekenen (hak van vooruitgestoken been: rechts)
  #local refz=0-(3*spreidafstand-fix_forefoot); //hakpositie
  #local refy=0; //teen-hak-hoogteverschil corrigeren (boem)
  //stap berekenen
  #local hoekt=(step_angle)-((step_time-3)*(step_angle)); //hoekt vermindert
  #local gradenlinks=hoekt;
  #local gradenrechts=-hoekt;
  #local posz=-startz+refz-(fix_length_heel*sin(radians(gradenrechts+fix_angle_heel)));
  #local posy=refy+fix_length_heel*cos(radians(gradenrechts+fix_angle_heel));
  #local wankel=set_move_sideways*((step_angle)-hoekt);
  #local wankel_y=sin(radians(wankel))*fix_foot_width;
  #local attitude=set_move_attitude*(-hoekt);
  #local attitude_corr_x=0;
  #local posy=posy+((step_time-3)*set_move_jump);
#break
#end
#if (set_move_fig)
#else
  #local posz=set_start_z;
#end
    

// Extra attitude
  #local set_start_direction=set_start_direction+attitude;
  #local attitude_corr_z=(spreidafstand*0.5)-(spreidafstand*0.5*cos(radians(attitude)));
                  

// BUILD UP BODY
        
// Head        
#local fig_head =
union {
  difference {
    object { head texture { set_head_tex } }
    box { <-10, -1, -10> <10, 20, 0.000001> }
  }
  difference {
    object { head texture { head06_tex } }
    box { <-10, -1, -0.000001> <10, 20, 10> }
  }
}
  
  
//left hand
#local left_hand = 
union {
  object { hand  
            texture { set_hands_tex }
         }
  #if(strlen(set_handgear_left)>0)
    object { handgear_left 
    rotate <0,set_pose_gear_left+set_move_gear_left*gradenlinks,0>
    rotate <-15,0,0>
    translate <0, 0, -4>} //general placement, fine tune within each hand gear file
  #end         
  }          
            
//right hand
#local right_hand = 
union {
  object { hand  
            texture { set_hands_tex }
         }
  #if(strlen(set_handgear_right)>0)
    object { handgear_right 
    rotate <0,set_pose_gear_right+set_move_gear_right*gradenrechts,0>
    rotate <-15,0,0>
    translate <0, 0, -4>} //general placement, fine tune within each hand gear file
  #end         
  }          
  
// Left arm  
#local fig_larm =
union {
  object { left_arm texture { set_shirt_arms_tex } }
  object { left_hand 
            rotate <0,0,set_pose_hand_left+(gradenlinks*set_move_hand_left)>
            rotate -45*x
            translate <2.15, -7.5, -3.5> 
            texture { set_hands_tex } 
         }
}

// Right arm  
#local fig_rarm =
union {
  object { right_arm texture { set_shirt_arms_tex } }
  object { right_hand 
            rotate <0,0,set_pose_hand_right+(gradenrechts*set_move_hand_right)>
            rotate -45*x
            translate <-2.15, -7.5, -3.5> 
            texture { set_hands_tex } 
         }
}
          

// Upper body        
#local fig_upper =
union {
  object { leg_joiner texture { set_pants_tex } }
  merge {
    object { body translate <0, 5.05, 0> texture { set_shirt_tex } }
    object { body_paint texture { shirt06_tex } translate <0, 5.05, 0> }
  }
  #if(strlen(set_neckgear)>0)
    object {neckgear translate <0, 18.5, 0>}
  #end
  object { fig_larm
    rotate <set_pose_arm_left+gradenlinks*set_move_arm_left,0,10>
  translate <6.15, 14.05, 0>
  }
  object { fig_rarm
    rotate <set_pose_arm_right+gradenrechts*set_move_arm_right,0,-10>
  translate <-6.15, 14.05, 0>
  }
  union{
    object { fig_head}
    #if(strlen(set_headgear)>0)
        object { headgear}
        rotate <0,set_pose_head+gradenlinks*set_move_head,0>
    #end 
    translate <0, 17.55, 0>
    #if(strlen(set_neckgear)>0)     //lift head for neckgear
      translate <0, 0.5, 0>
    #end
    texture { set_head_tex }
  } 
  
}

// Build minifig
#local fig_whole =
union {
    #if (strlen(caption)>0 & set_show_captions) //text caption
        text { ttf concat(fonts_dir,set_font_file) caption 0.1, 0 
        pigment { set_captions_color }
        scale 6
        translate <-10,45,0>
        }
    #end
    object { left_leg 
        rotate gradenlinks*x 
        translate <0, posy, posz> texture { set_pants_tex } }
    object { right_leg 
        rotate gradenrechts*x 
        translate <0, posy, posz> texture { set_pants_tex } }
    object { fig_upper
        rotate <set_pose_torso+gradenrechts*set_move_torso,0,0>
        translate <0, posy, posz> }
        rotate <0,0,wankel>
  
}

// DRAW MINIFIG
object { fig_whole
  rotate <0,set_start_direction,0>
  //  translate <set_start_x, clock*move_jump, set_start_z>
  translate <set_start_x, set_start_y + clock*move_jump, set_start_z>
//#if (clock)
//#end
//translate <set_start_x, (-((clock-7)*(clock-7))* 0.1 + 6), set_start_z>
  translate <0,wankel_y,0>
  translate <attitude_corr_x, 0, attitude_corr_z>
  texture { red_tex } 
  }
  






#end //end of Johnny macro

//-----------------------------------------------------------------------------------
// END OF JOHNNY WALKER MACRO
//-----------------------------------------------------------------------------------



//-----------------------------------------------------------------------------------
// DRAWING THE SCENE
//-----------------------------------------------------------------------------------

// FLOOR  
#if (set_floor)
box
{
  <-200, 0, -200>  // one corner position <X1 Y1 Z1>
  < 200, -0.5,  200>  // other corner position <X2 Y2 Z2>
  pigment {color set_floor_color}
}            
#end
           
// CONVERTED LDRAW-SCENERY
#if(strlen(set_scenery_file)>0)
    #include concat(scenery_dir,set_scenery_file)
    object { scenery 
     //dummy material material { Color7 }
    rotate <0,0,180>
    scale <0.4,0.4,0.4>
    translate <0,-10,0> //feet on top of studs of baseplates
    translate set_scenery_align
    }
#end           
           

// REFERENCE MARKERS
#if (set_show_reference)
    object {text { ttf concat(fonts_dir,set_font_file) "[ - .... X-AXIS .... + ]" 0.1, 0}
        pigment { yellow }
        scale 6
        translate <0,40,0>
    }
    object {text { ttf concat(fonts_dir,set_font_file) "[ - .... Y-AXIS .... + ]" 0.1, 0}
        pigment { yellow }
        scale 6
        rotate z*90
        translate <0,60,0>
    }
    object {text { ttf concat(fonts_dir,set_font_file) "[ - .... Z-AXIS .... + ]" 0.1, 0}
        pigment { yellow }
        scale 6
        rotate y*-90
        translate <0,40,0>
    }
#end


//----------------------------------------------------------------------------------------        
// LIGHTS, CAMERA
//----------------------------------------------------------------------------------------

global_settings {
    assumed_gamma 2.2 // for most PC monitors                   
    max_trace_level 5
    ambient_light set_light_ambient
}
background { set_background_color}

#switch (set_light_nr)
#case (1) //from up front 
    light_source
        {
        0*x // light's position (translated below)
        color red 1.0  green 1.0  blue 1.0  // light's color
        translate <-100, 100, -100>
        #if (!set_shadows) shadowless #end
        }
    light_source
        {
        0*x // light's position (translated below)
        color red 1.0  green 1.0  blue 1.0  // light's color
        translate <100, 50, -100>
        #if (!set_shadows) shadowless #end
        }
#break
#case (2) //from up front 
    light_source
        {
        0*x // light's position (translated below)
        color red 1.0  green 1.0  blue 1.0  // light's color
        translate <-100, 50, -100>
        #if (!set_shadows) shadowless #end
        }
    #break
#else   //custom
  light_source {my_light} //defined in characters include file
#end


#switch (set_camera_nr)
#case (1) //straight from front 
camera {
	#if (set_camera_ortho) orthographic #end
  //#if (set_camera_follow) translate <set_start_x,0,posz> #end
  location  <0.0 , 20.0 ,-30.0>
  look_at   <0.0,  20.0, 30.0>
  translate <0,0,0>
  
  }
#break
#case (2) //straight from side
camera {
	 #if (set_camera_ortho) orthographic #end
  //#if (set_camera_follow) translate <set_start_x,0,posz> #end
  location  <50.0 , 20.0 , 0.0>
  look_at   <-50.0, 20.0,  0.0>
  translate <0,0,0>
   }
#break
#case (3) //straight from above
camera {
	 #if (set_camera_ortho) orthographic #end
  //#if (set_camera_follow) translate <set_start_x,0,posz> #end
  location  <0.0 , 200.0 , 0.0> //<0.0 , 150.0 , 0.0>
  look_at   <0.0, 0.0, 0.0>
  translate <0,0,0>
  }
#break
#case (4) //from an angle
  camera {
  	  #if (set_camera_ortho) orthographic #end
  //#if (set_camera_follow) translate <set_start_x,0,posz> #end
  location  <60.0 , 40.0 , -40.0>
  look_at   <0.0, 20.0,  0.0>
  }
#break
#case (5) //front portrait 3:4 aspect ratio width to height
    camera {
    	#if (set_camera_ortho) orthographic #end
        up <0,1,0>
        right  <0.75,0,0>             //for use with ini setting of 3:4 width to height
        location  <0 , 26.0 ,-28.0>
        look_at   <0,  26.0, 28.0>
        translate <0,0,0>
               }
#break     
#case (6) //front group portrait 16:9 aspect ratio width to height
    camera {
    	        #if (set_camera_ortho) orthographic #end
        up <0,1,0>
        right  <1.77,0,0>             //for use with ini setting of 16:9 width to height
        location  <50 , 25.0 ,-35.0>
        look_at   <50,  25.0, 35.0>
        translate <0,0,0>
       }
#break       

       #case (7) //SChräg oben hinten
  camera {
  	  #if (set_camera_ortho) orthographic #end
  //#if (set_camera_follow) translate <set_start_x,0,posz> #end
  location  <60.0 , 40.0 , -40.0>
  look_at   <0.0, 20.0,  0.0>
          angle 120
  }
#break   
#else   //custom
  camera {my_camera} //defined in Walker settings include file
#end


