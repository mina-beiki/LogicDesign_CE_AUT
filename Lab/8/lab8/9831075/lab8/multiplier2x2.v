/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce.aut.ac.ir
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
---  Module Name: Multiplexer 4bit 4 to 1
---  Description: Lab 08 Part 1
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module multiplier2x2 (
	input [1:0] A ,
	input [1:0] B ,
	output [3:0] f
);
wire [3:0] c; 
and 
	g1(f[0],A[0],B[0]),
	g2(c[0],A[1],B[0]),
	g3(c[1],A[0],B[1]),
	g4(c[2],B[1],A[1]);
	
assign {c[3],f[1]} = c[0] + c[1] ; 
assign {f[3],f[2]} = c[3] + c[2] ; //c[3] is the carry 
endmodule