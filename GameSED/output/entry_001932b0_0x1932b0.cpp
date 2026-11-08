#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001932b0
// Address: 0x1932b0 - 0x193300
void entry_001932b0_0x1932b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001932b0_0x1932b0");
#endif

    ctx->pc = 0x1932b0u;

    // 0x1932b0: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x1932b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x1932b4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1932b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1932b8: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1932b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1932bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1932bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1932c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1932c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1932c4: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1932c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1932c8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1932c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1932cc: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x1932ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1932d0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1932d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1932d4: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x1932d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1932d8: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x1932d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1932dc: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x1932dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x1932e0: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x1932e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1932e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1932e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1932e8: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x1932e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1932ec: 0xdfb50158  ld          $s5, 0x158($sp)
    ctx->pc = 0x1932ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1932f0: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x1932f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1932f4: 0xdfb70168  ld          $s7, 0x168($sp)
    ctx->pc = 0x1932f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1932f8: 0xdfbe0170  ld          $fp, 0x170($sp)
    ctx->pc = 0x1932f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1932fc: 0xdfbf0178  ld          $ra, 0x178($sp)
    ctx->pc = 0x1932fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    ctx->pc = 0x193300u;
}
