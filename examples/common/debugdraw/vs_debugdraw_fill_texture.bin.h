static const uint8_t vs_debugdraw_fill_texture_glsl[355] =
{
	0x56, 0x53, 0x48, 0x09, 0x00, 0x00, 0x00, 0x00, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0f, 0x75, // VSH............u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, // _modelViewProj..
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x38, 0x01, 0x00, 0x00, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, // ......8...in vec
	0x34, 0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x69, 0x6e, 0x20, 0x76, // 4 a_color0;.in v
	0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, // ec3 a_position;.
	0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // in vec2 a_texcoo
	0x72, 0x64, 0x30, 0x3b, 0x0a, 0x6f, 0x75, 0x74, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, // rd0;.out vec4 v_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x6f, 0x75, 0x74, 0x20, 0x76, 0x65, 0x63, 0x32, // color0;.out vec2
	0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, //  v_texcoord0;.un
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // iform mat4 u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, // elViewProj;.void
	0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, //  main ().{.  vec
	0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // 4 tmpvar_1;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, // pvar_1.w = 1.0;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, //   tmpvar_1.xyz =
	0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x67, //  a_position;.  g
	0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, // l_Position = (u_
	0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, // modelViewProj * 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, // tmpvar_1);.  v_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, // excoord0 = a_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // coord0;.  v_colo
	0x72, 0x30, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x7d, // r0 = a_color0;.}
	0x0a, 0x0a, 0x00,                                                                               // ...
};
static const uint8_t vs_debugdraw_fill_texture_spv[1268] =
{
	0x56, 0x53, 0x48, 0x09, 0x00, 0x00, 0x00, 0x00, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0f, 0x75, // VSH............u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, // _modelViewProj..
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xc0, 0x04, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, // ............#...
	0x01, 0x00, 0x0a, 0x00, 0x08, 0x00, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, // ......r.........
	0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, // ..............GL
	0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, // SL.std.450......
	0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0b, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x37, 0x00, // ......main....7.
	0x00, 0x00, 0x3b, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x4d, 0x00, // ..;...?...J...M.
	0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, // ..Q.............
	0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, // ..........main..
	0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x26, 0x00, 0x00, 0x00, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, // ......&...Unifor
	0x6d, 0x42, 0x6c, 0x6f, 0x63, 0x6b, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0x26, 0x00, // mBlock........&.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, // ......u_modelVie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x05, 0x00, 0x03, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, // wProj.....(.....
	0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x37, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // ......7...a_colo
	0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x3b, 0x00, 0x00, 0x00, 0x61, 0x5f, // r0........;...a_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x3f, 0x00, // position......?.
	0x00, 0x00, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, // ..a_texcoord0...
	0x0a, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, // ..J...@entryPoin
	0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, // tOutput.gl_Posit
	0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x05, 0x00, 0x09, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x40, 0x65, // ion.......M...@e
	0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, // ntryPointOutput.
	0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x05, 0x00, 0x0a, 0x00, 0x51, 0x00, // v_color0......Q.
	0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, // ..@entryPointOut
	0x70, 0x75, 0x74, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, // put.v_texcoord0.
	0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, // ..H...&.........
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, // ..H...&.......#.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, // ......H...&.....
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x26, 0x00, // ..........G...&.
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x22, 0x00, // ......G...(...".
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x21, 0x00, // ......G...(...!.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x37, 0x00, 0x00, 0x00, 0x1e, 0x00, // ......G...7.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x3b, 0x00, 0x00, 0x00, 0x1e, 0x00, // ......G...;.....
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x1e, 0x00, // ......G...?.....
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x0b, 0x00, // ......G...J.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x1e, 0x00, // ......G...M.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x51, 0x00, 0x00, 0x00, 0x1e, 0x00, // ......G...Q.....
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, // ..............!.
	0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x06, 0x00, // ................
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x06, 0x00, // .. .............
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00, 0x06, 0x00, // ................
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x06, 0x00, // ................
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x16, 0x00, 0x00, 0x00, 0x20, 0x00, // .............. .
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x18, 0x00, // ......+.........
	0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x2b, 0x00, 0x04, 0x00, 0x16, 0x00, 0x00, 0x00, 0x1f, 0x00, // .....?+.........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x07, 0x00, // ..........%.....
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0x26, 0x00, 0x00, 0x00, 0x25, 0x00, // ..........&...%.
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x26, 0x00, // .. ...'.......&.
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x02, 0x00, // ..;...'...(.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x29, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x25, 0x00, // .. ...).......%.
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x36, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, // .. ...6.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x36, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0x01, 0x00, // ..;...6...7.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, // .. ...:.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x00, 0x00, 0x01, 0x00, // ..;...:...;.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, // .. ...>.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x01, 0x00, // ..;...>...?.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x49, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, // .. ...I.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x49, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x03, 0x00, // ..;...I...J.....
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x49, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x03, 0x00, // ..;...I...M.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x50, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0b, 0x00, // .. ...P.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x50, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x03, 0x00, // ..;...P...Q.....
	0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // ..6.............
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, // ..............=.
	0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0x3d, 0x00, // ......8...7...=.
	0x04, 0x00, 0x09, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x00, 0x00, 0x3d, 0x00, // ......<...;...=.
	0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x51, 0x00, // ......@...?...Q.
	0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, // ......k...<.....
	0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x3c, 0x00, // ..Q.......l...<.
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x6d, 0x00, // ......Q.......m.
	0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x07, 0x00, // ..<.......P.....
	0x00, 0x00, 0x6e, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x6d, 0x00, // ..n...k...l...m.
	0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x29, 0x00, 0x00, 0x00, 0x6f, 0x00, // ......A...)...o.
	0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x25, 0x00, // ..(.......=...%.
	0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x07, 0x00, // ..p...o.........
	0x00, 0x00, 0x71, 0x00, 0x00, 0x00, 0x6e, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x3e, 0x00, // ..q...n...p...>.
	0x03, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x4d, 0x00, // ..J...q...>...M.
	0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x51, 0x00, 0x00, 0x00, 0x40, 0x00, // ..8...>...Q...@.
	0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x03, 0x05, 0x00, 0x01, 0x00, // ......8.........
	0x10, 0x00, 0x40, 0x00,                                                                         // ..@.
};
static const uint8_t vs_debugdraw_fill_texture_dx9[355] =
{
	0x56, 0x53, 0x48, 0x09, 0x00, 0x00, 0x00, 0x00, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0f, 0x75, // VSH............u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, // _modelViewProj..
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x38, 0x01, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0xfe, 0xff, // ......8.........
	0x21, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x00, 0x03, // !.CTAB....W.....
	0xfe, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x50, 0x00, // ..............P.
	0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, // ..0...........@.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, // ......u_modelVie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x00, // wProj...........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, // ......vs_3_0.Mic
	0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, // rosoft (R) HLSL 
	0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, // Shader Compiler 
	0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, // 10.1............
	0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, // ................
	0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x02, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x01, 0x00, // ................
	0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x02, 0x00, 0x03, 0xe0, 0x05, 0x00, // ................
	0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x55, 0x90, 0x04, 0x00, // ............U...
	0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x90, 0x00, 0x00, // ................
	0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x02, 0x00, 0xe4, 0xa0, 0x01, 0x00, // ................
	0xaa, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, // ................
	0xe4, 0x80, 0x03, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x01, 0x00, 0x0f, 0xe0, 0x00, 0x00, // ................
	0xe4, 0x90, 0x01, 0x00, 0x00, 0x02, 0x02, 0x00, 0x03, 0xe0, 0x02, 0x00, 0xe4, 0x90, 0xff, 0xff, // ................
	0x00, 0x00, 0x00,                                                                               // ...
};
static const uint8_t vs_debugdraw_fill_texture_dx11[628] =
{
	0x56, 0x53, 0x48, 0x09, 0x00, 0x00, 0x00, 0x00, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0f, 0x75, // VSH............u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, // _modelViewProj..
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x25, 0x0b, // ......@...DXBC%.
	0xbc, 0xf2, 0xf1, 0x2f, 0x13, 0x1a, 0x84, 0x83, 0x08, 0xf9, 0x08, 0xa1, 0x2c, 0x84, 0x01, 0x00, // .../........,...
	0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x9c, 0x00, // ..@.......,.....
	0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x68, 0x00, 0x00, 0x00, 0x03, 0x00, // ......ISGNh.....
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......P.........
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x56, 0x00, // ..............V.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......_.........
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x43, 0x4f, // ..............CO
	0x4c, 0x4f, 0x52, 0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, // LOR.POSITION.TEX
	0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0x4f, 0x53, 0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, // COORD.OSGNl.....
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // ......P.........
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......b.........
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x53, 0x56, // ..............SV
	0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, // _POSITION.COLOR.
	0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0x53, 0x48, 0x44, 0x52, 0x28, 0x01, // TEXCOORD..SHDR(.
	0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, // ..@...J...Y...F.
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0xf2, 0x10, //  ........._.....
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x01, 0x00, // ......_...r.....
	0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x67, 0x00, // .._...2.......g.
	0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, // ... ..........e.
	0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x32, 0x20, // ... ......e...2 
	0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, // ......h.......8.
	0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x01, 0x00, // ..........V.....
	0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, // ..F. .........2.
	0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, // ..........F. ...
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, // ..............F.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, // ......2.........
	0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xa6, 0x1a, // ..F. ...........
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......F.........
	0x00, 0x08, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, // ... ......F.....
	0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, // ..F. .........6.
	0x00, 0x05, 0xf2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x1e, 0x10, 0x00, 0x00, 0x00, // ... ......F.....
	0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x32, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x10, // ..6...2 ......F.
	0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x03, 0x05, 0x00, 0x01, 0x00, // ......>.........
	0x10, 0x00, 0x40, 0x00,                                                                         // ..@.
};
static const uint8_t vs_debugdraw_fill_texture_mtl[840] =
{
	0x56, 0x53, 0x48, 0x09, 0x00, 0x00, 0x00, 0x00, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0f, 0x75, // VSH............u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, // _modelViewProj..
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x14, 0x03, 0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, // ..........#inclu
	0x64, 0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, // de <metal_stdlib
	0x3e, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, // >.#include <simd
	0x2f, 0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, 0x3e, 0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, // /simd.h>..using 
	0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, // namespace metal;
	0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, // ..struct _Global
	0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, // .{.    float4x4 
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, // u_modelViewProj;
	0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // .};..struct xlat
	0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x0a, 0x7b, 0x0a, 0x20, 0x20, // MtlMain_out.{.  
	0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, //   float4 _entryP
	0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x63, 0x6f, 0x6c, // ointOutput_v_col
	0x6f, 0x72, 0x30, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x30, // or0 [[user(locn0
	0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, // )]];.    float2 
	0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, // _entryPointOutpu
	0x74, 0x5f, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x5b, 0x5b, // t_v_texcoord0 [[
	0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, // user(locn1)]];. 
	0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, //    float4 gl_Pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, // ition [[position
	0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, // ]];.};..struct x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x0a, 0x7b, 0x0a, // latMtlMain_in.{.
	0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, //     float4 a_col
	0x6f, 0x72, 0x30, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, // or0 [[attribute(
	0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, // 0)]];.    float3
	0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x61, 0x74, //  a_position [[at
	0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, // tribute(1)]];.  
	0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, //   float2 a_texco
	0x6f, 0x72, 0x64, 0x30, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, // ord0 [[attribute
	0x28, 0x32, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x76, 0x65, 0x72, 0x74, 0x65, // (2)]];.};..verte
	0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, // x xlatMtlMain_ou
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, 0x78, 0x6c, // t xlatMtlMain(xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, 0x6e, 0x20, // atMtlMain_in in 
	0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, // [[stage_in]], co
	0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x26, 0x20, // nstant _Global& 
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, // _mtl_u [[buffer(
	0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, // 0)]]).{.    xlat
	0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x75, 0x74, 0x20, // MtlMain_out out 
	0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x67, 0x6c, // = {};.    out.gl
	0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // _Position = _mtl
	0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, // _u.u_modelViewPr
	0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x69, 0x6e, 0x2e, 0x61, // oj * float4(in.a
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, // _position, 1.0);
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, // .    out._entryP
	0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x63, 0x6f, 0x6c, // ointOutput_v_col
	0x6f, 0x72, 0x30, 0x20, 0x3d, 0x20, 0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // or0 = in.a_color
	0x30, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x5f, 0x65, 0x6e, 0x74, 0x72, // 0;.    out._entr
	0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x74, // yPointOutput_v_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x69, 0x6e, 0x2e, 0x61, 0x5f, // excoord0 = in.a_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, // texcoord0;.    r
	0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x03, // eturn out;.}....
	0x05, 0x00, 0x01, 0x00, 0x10, 0x00, 0x40, 0x00,                                                 // ......@.
};
extern const uint8_t* vs_debugdraw_fill_texture_pssl;
extern const uint32_t vs_debugdraw_fill_texture_pssl_size;
