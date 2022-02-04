/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2019-2020
--  *******************************************************
--  Student ID  : 9831075
--  Student Name: Mina Beiki
--  Student Mail: 
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: Function Implementation usin Mux 4 to 16
---  Description: Lab 05 Part 3
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module function4x1 (
	input a ,
	input b ,
	input c ,
	input d ,
	output f	
);
	wire [15:0] dout;
	wire [3:0] inputs;
	assign inputs[0]=a;
	assign inputs[1]=b;
	assign inputs[2]=c;
	assign inputs[3]=d;
	decoder4x16 decoder(inputs[3:0],1,dout[15:0]);
	or g(f,dout[2],dout[3],dout[5],dout[7],dout[11],dout[13]);
	
	

endmodule