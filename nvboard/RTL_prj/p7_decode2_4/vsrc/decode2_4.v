module decode2_4 (en,x,y);
    input en;
    input [1:0] x;
    output reg [3:0] y;
    always @(*) begin
        if (en) begin
            case (x)
                2'd0 : y = 4'b1000;
                2'd1 : y = 4'b0100;
                2'd2 : y = 4'b0010;
                2'd3 : y = 4'b0001;
                default: y = 4'b0000;
            endcase
        end else
            y = 4'b0000;
    end
endmodule
