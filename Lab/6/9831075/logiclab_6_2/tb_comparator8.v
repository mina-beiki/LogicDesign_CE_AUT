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
---  Module Name: Decoder Testbench
---  Description: Lab 05 Part 1 Testbench
-----------------------------------------------------------*/
`timescale 1 ns/1 ns


module tb_comparator8 ();

reg [7:0] A;
reg [7:0] B;
reg l;
reg e;
reg g;
wire lt;
wire et;
wire gt;

	comparator8 test_comparator8 (.A(A), .B(B), .l(l), .e(e), .g(g), .lt(lt), .et(et), .gt(gt));


	initial 
		begin
		//equal
		A <= 8'b00000001;
		B <= 8'b00000001;
		
		l <= 1'b0;
		e <= 1'b1;
		g <= 1'b0;
		# 10 ;
		l <= 1'b1;
		e <= 1'b0;
		g <= 1'b0;
		# 10 ;
		l <= 1'b0;
		e <= 1'b0;
		g <= 1'b1;
		# 20 ;
		//A greater than B
		A <= 8'b00000010;
		B <= 8'b00000001;
		
		l <= 1'b0;
		e <= 1'b1;
		g <= 1'b0;
		# 10 ;
		l <= 1'b1;
		e <= 1'b0;
		g <= 1'b0;
		# 10 ;
		l <= 1'b0;
		e <= 1'b0;
		g <= 1'b1;
		# 20;
		//A less than B
		A <= 8'b00000001;
		B <= 8'b00000010;
		
		l <= 1'b0;
		e <= 1'b1;
		g <= 1'b0;
		# 10 ;
		l <= 1'b1;
		e <= 1'b0;
		g <= 1'b0;
		# 10 ;
		l <= 1'b0;
		e <= 1'b0;
		g <= 1'b1;
		# 20;
		
		
	end

endmodule
