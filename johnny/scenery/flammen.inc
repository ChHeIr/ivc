#local D = 0.00001;
// ---------------------------------------------------------------
#local Flame__Shape =
merge{    // egg
intersection{
   sphere{<0,0,0>,1}  box{<-1,-D,-1>,< 1,1  ,1>} scale <1,2.5,1>}
intersection{
   sphere{<0,0,0>,1}  box{<-1,-1 ,-1>,< 1,0+0.01,1>} }
}

#local C__Flame =
object{

  Flame__Shape
  hollow
  #if( 1 = 0)
  no_shadow
  #end
  pigment { color rgbf<1, 1, 1, 1> } // fully transparent !!!
  finish { ambient 0 diffuse 0 }
  interior {
    media {
  #if( 1 > 0)
       absorption rgb< 0.51, 0.85, 0.95>*5*1
  #end
      emission    color rgb < 1.0, 0.85, 0.1>*2.75*1.2
      intervals 9*1/ 0.7
      samples 5, 20
      confidence 0.9999
      variance 1/100
      density{ spherical
               ramp_wave
               turbulence 0.15
               color_map {
                  [0.0 color rgb <0.0, 0.0, 0.0>]
                  [0.6 color rgb <0.8, 0.3, 0.0>]
                  [0.9 color rgb <1.0, 0.8, 0.3>]
                  [1.0 color rgb <1.0, 1.0, 0.1>]
               }
               scale <1,2.5,1>
             } // end density
     }//end of media

    media {
      emission color rgb < 1.0, 0.8, 0.1>*2.75*1.2
      intervals 5
      samples 30,50
      method 3
      aa_threshold 0.1 aa_level 5
      density{ crackle  turbulence 0.3
               scale 1.75 translate<0,14,0>
               color_map {
                  [0.00 rgb 0]
                  [0.07 rgb 1]
                  [0.10 rgb 1]
                  [0.12 rgb 0]
                  [1.00 rgb 0]
               }
             } // end density
      density{ spherical
               color_map {
                  [0 rgb 0]
                  [0.7 rgb 1]
                  [1 rgb 1]
               }
             } // end density
           scale <1,1.5,1>*0.5
       translate<0,0.01,0>
     }// end media

 }//end of interior
 scale <1,1.5,1>*0.5

} // end Flame__Shape




object{C__Flame translate<0,0.5,0> scale 0.75
       scale 0.7  translate<0,1.0+0.15,0> }
       
       
#if(1>0)
light_source { <0,0,0>
               color rgb <0.8, 0.3, 0.0>*0.5*1
               area_light            // kind of light source (Art der Lichtquelle)
               <-0.25, -0.25, 0> <0.25, 0.5, 0> // lights spread out across this distance (x * z)
               4, 15                // total number of lights in grid (4x*4z = 16 lights)
               adaptive 1          // 0,1,2,3...
               //jitter              // adds random softening of light
               translate<0,1+0.25+0.350,0>
  fade_distance 3  // 3
  fade_power 4 // 4
             } //---------------- end of area_light

light_source { <0,0,0>
               color rgb <0.8, 0.3, 0.0>*0.5*1
               area_light            // kind of light source (Art der Lichtquelle)
               <0, -0.25,-0.25> <0, 0.5, 0.25> // lights spread out across this distance (x * z)
               4, 15                // total number of lights in grid (4x*4z = 16 lights)
               adaptive 1          // 0,1,2,3...
               //jitter              // adds random softening of light
               translate<0,1+0.25+0.350,0>
  fade_distance  3  // 3
  fade_power 4 // 4
             } //---------------- end of area_light


#end

