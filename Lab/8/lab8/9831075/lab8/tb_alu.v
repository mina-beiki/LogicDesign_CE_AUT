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


module tb_alu ();


reg [1:0] A;
reg [1:0] B;
reg [1:0] sel;
wire [3:0] Y;

	alu test_alu (.A(A), .B(B), .sel(sel), .Y(Y));

	initial 
		begin
		////////A=0 : 
      A<=2'b00;
		B<=2'b00;
		
		sel<=2'b00; 
		#50;
		sel<=2'b01; 
		#50;
		sel<=2'b10; 
		#50;
		sel<=2'b11; 
		#50;
		
		////////
		
		A<=2'b00;
		B<=2'b01;
		
		sel<=2'b00; 
		#50;
		sel<=2'b01; 
		#50;
		sel<=2'b10; 
		#50;
		sel<=2'b11; 
		#50;
		
		/////
		
		A<=2'b00;
		B<=2'b10;
		
		sel<=2'b00; 
		#50;
		sel<=2'b01; 
		#50;
		sel<=2'b10; 
		#50;
		sel<=2'b11; 
		#50;
		
		/////
		
		
		A<=2'b00;
		B<=2'b11;
		
		sel<=2'b00; 
		#50;
		sel<=2'b01; 
		#50;
		sel<=2'b10; 
		#50;
		sel<=2'b11; 
		#50;
		
		////////A=1 : 
      A<=2'b01;
		B<=2'b00;
		
		sel<=2'b00; 
		#50;
		sel<=2'b01; 
		#50;
		sel<=2'b10; 
		#50;
		sel<=2'b11; 
		#50;
		
		////////
		
		A<=2'b01;
		B<=2'b01;
		
		sel<=2'b00; 
		#50;
		sel<=2'b01; 
		#50;
		sel<=2'b10; 
		#50;
		sel<=2'b11; 
		#50;
		
		/////
		
		A<=2'b01;
		B<=2'b10;
		
		sel<=2'b00; 
		#50;
		sel<=2'b01; 
		#50;
		sel<=2'b10; 
		#50;
		sel<=2'b11; 
		#50;
		
		/////
		
		
		A<=2'b01;
		B<=2'b11;
		
		sel<=2'b00; 
		#50;
		sel<=2'b01; 
		#50;
		sel<=2'b10; 
		#50;
		sel<=2'b11; 
		#50;
		
		////////A=2 : 
      A<=2'b10;
		B<=2'b00;
		
		sel<=2'b00; 
		#50;
		sel<=2'b01; 
		#50;
		sel<=2'b10; 
		#50;
		sel<=2'b11; 
		#50;
		
		////////
		
		A<=2'b10;
		B<=2'b01;
		
		sel<=2'b00; 
		#50;
		sel<=2'b01; 
		#50;
		sel<=2'b10; 
		#50;
		sel<=2'b11; 
		#50;
		
		/////
		
		A<=2'b10;
		B<=2'b10;
		
		sel<=2'b00; 
		#50;
		sel<=2'b01; 
		#50;
		sel<=2'b10; 
		#50;
		sel<=2'b11; 
		#50;
		
		/////
		
		
		A<=2'b10;
		B<=2'b11;
		
		sel<=2'b00; 
		#50;
		sel<=2'b01; 
		#50;
		sel<=2'b10; 
		#50;
		sel<=2'b11; 
		#50;
		
		////////A=3 : 
      A<=2'b11;
		B<=2'b00;
		
		sel<=2'b00; 
		#50;
		sel<=2'b01; 
		#50;
		sel<=2'b10; 
		#50;
		sel<=2'b11; 
		#50;
		
		////////
		
		A<=2'b11;
		B<=2'b01;
		
		sel<=2'b00; 
		#50;
		sel<=2'b01; 
		#50;
		sel<=2'b10; 
		#50;
		sel<=2'b11; 
		#50;
		
		/////
		
		A<=2'b11;
		B<=2'b10;
		
		sel<=2'b00; 
		#50;
		sel<=2'b01; 
		#50;
		sel<=2'b10; 
		#50;
		sel<=2'b11; 
		#50;
		
		/////
		
		
		A<=2'b11;
		B<=2'b11;
		
		sel<=2'b00; 
		#50;
		sel<=2'b01; 
		#50;
		sel<=2'b10; 
		#50;
		sel<=2'b11; 
		#50;
		
		
		end
		endmodule
		