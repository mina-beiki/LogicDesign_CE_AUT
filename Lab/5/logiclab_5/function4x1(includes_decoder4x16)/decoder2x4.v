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
---  Module Name: Decoder 2 to 4 Gate Level
---  Description: Lab 05 Part 1
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module decoder2x4 (
	input [1:0] in ,
	input 		en ,
	output [3:0] dout	
);
	wire I0not,I1not;
	not
		no(I0not,in[0]),
		n1(I1not,in[1]);
	and
		g1(dout[0],I0not,I1not,en),
		g2(dout[1],I0not,in[1],en),
		g3(dout[2],in[0],I1not,en),
		g4(dout[3],in[0],in[1],en);

endmodule
