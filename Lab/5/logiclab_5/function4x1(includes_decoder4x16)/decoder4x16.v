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
---  Module Name: Decoder 4 to 16
---  Description: Lab 05 Part 2
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module decoder4x16 (
	input [3:0] in ,
	input 		en ,
	output [15:0] dout
);
	wire [3:0] wires;
	wire f;
	decoder2x4 deco1(in[1:0],en,wires[3:0]);
	decoder2x4 deco2(in[3:2],wires[0],dout[3:0]);
	decoder2x4 deco3(in[3:2],wires[1],dout[7:4]);
	decoder2x4 deco4(in[3:2],wires[2],dout[11:8]);
	decoder2x4 deco5(in[3:2],wires[3],dout[15:12]);
	assign f={dout[15:0]};

endmodule