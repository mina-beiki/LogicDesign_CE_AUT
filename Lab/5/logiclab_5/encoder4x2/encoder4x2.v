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
---  Module Name: Encoder 4 to 2 Gate Level
---  Description: Lab 05 Part 1
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module encoder4x2 (
	input [3:0] din ,
	output [1:0] qout
);
	wire x ,y ;
	or g1(qout[1],din[3],din[2]);
	not g2(x,din[2]);
	and g3(y,x,din[1]);
	or g4(qout[0],y,din[3]);
	
endmodule