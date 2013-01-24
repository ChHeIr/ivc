#include "colors.inc"
#include "LMM_A01.inc"
background {Cyan}

plane{y, 0
	pigment{
		checker colour Yellow color Green
		scale 20
		}
		finish {
			ambient 0.2
			diffuse 0.8
		}
}
	
	
camera{
	location <20,3,3>
	look_at<1,1,1>
	angle 36
	
	}
	
	light_source{<500,500,-1000> White}
	
//	object {
//		merge{
//			sphere{<0,2,25 * clock>,1.5
//	pigment{Red}
//	translate+.5*x * clock}
//sphere{<0,1.5,25 * clock>,1.5
//	pigment{Blue}
//	translate+.5*x * clock}
//		
//		}}
//		object {merge{
			//fu§
//box{<0,0,0>,<2,0.5,0.5>
//    pigment{color Yellow}
//  }
  //Bein
//  box{<0,0,0>,<1,1.5,0.5>
//    pigment{color Yellow}
//    translate <0,0.5,0>
//  }
  
  //fu§
//  box{<0,0,0.6>,<2,0.5,1.1>
//    pigment{color Yellow}
//  }
  //Bein
//  box{<0,0,0.6>,<1,1.5,1.1 >
//    pigment{color Yellow}
//    translate <0,0.5,0>
//  }
//  cylinder{<0,0,0>,<0,0,1>,0.5
//    pigment{color Red}
//     translate <1,2,0>
//  }
//		}
//		}
		
	