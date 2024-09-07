//========================================================================
// Integer Multiplier Single Cycle Implementation
//========================================================================

`ifndef IMUL_INT_MUL_SCYCLE_V2_V
`define IMUL_INT_MUL_SCYCLE_V2_V

`include "vc/trace.v"
`include "vc/regs.v"

module imul_IntMulScycleV2
(
  input  logic        clk,
  input  logic        reset,

  input  logic        in_val,
  input  logic [31:0] in0,
  input  logic [31:0] in1,

  output logic        out_val,
  output logic [31:0] out
);

  // ... implement your multiplier with valid bit below ...

  // Top Down, so always call it before
  logic [31:0] in0_reg;

  // `include "vc/regs.v"
  vc_ResetReg#(32,0) in0_reg_
  (
    .clk   (clk),
    .reset (reset),
    .d     (in0),
    .q     (in0_reg)
  );

  logic [31:0] in1_reg;

  vc_ResetReg#(32,0) in1_reg_
  (
    .clk   (clk),
    .reset (reset),
    .d     (in1),
    .q     (in1_reg)
  );

  logic [1:0] in_val_reg;

  vc_ResetReg#(2,0) in_val_reg_
  (
    .clk   (clk),
    .reset (reset),
    .d     (in_val),
    .q     (in_val_reg)
  );

  // MULTIPLICATION LOGIC 

  // always @(*) begin
  //   out = in0_reg * in1_reg;
  // end

  // OR below also works

  assign out = in0_reg * in1_reg;
  assign out_val = in_val_reg; 

  //----------------------------------------------------------------------
  // Line Tracing
  //----------------------------------------------------------------------

  `ifndef SYNTHESIS

  logic [`VC_TRACE_NBITS-1:0] str;
  `VC_TRACE_BEGIN
  begin

    $sformat( str, "%x|%x", in0, in1 );
    vc_trace.append_val_str( trace_str, in_val, str );

    vc_trace.append_str( trace_str, "(" );

    $sformat( str, "%x", in0_reg );
    vc_trace.append_val_str( trace_str, in_val_reg, str );
    vc_trace.append_str( trace_str, " " );

    $sformat( str, "%x", in1_reg );
    vc_trace.append_val_str( trace_str, in_val_reg, str );

    vc_trace.append_str( trace_str, ")" );

    $sformat( str, "%x", out );
    vc_trace.append_val_str( trace_str, out_val, str );

  end
  `VC_TRACE_END

  `endif /* SYNTHESIS */

endmodule

`endif /* IMUL_INT_MUL_SCYCLE_V2_V */

