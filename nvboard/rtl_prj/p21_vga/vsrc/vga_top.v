module vga_top(
     clk
    ,rst_n
    ,hsync
    ,vsync
    ,rgb
);
    input   wire   clk, rst_n;
    output  wire  hsync,vsync;
    output  wire  [15:0]  rgb;

    wire              vga_clk;
    wire    [9:0] pix_x,pix_y;
    wire    [15:0]  pix_data ;

    clk_div2 u_clk_div2 (
    .clk        (clk    ),
    .rst_n      (rst_n  ),
    .clk_out    (vga_clk)
);

    vga_pic u_vga_pic (
    .vga_clk     (vga_clk),
    .rst_n       (rst_n),
    .pix_x       (pix_x),
    .pix_y       (pix_y),
    .pix_data    (pix_data)
);

    vga_ctrl u_vga_ctrl (
    .vga_clk     (vga_clk),
    .rst_n       (rst_n),
    .pix_data    (pix_data),
    .pix_x       (pix_x),
    .pix_y       (pix_y),
    .hsync       (hsync),
    .vsync       (vsync),
    .rgb         (rgb)
);

endmodule