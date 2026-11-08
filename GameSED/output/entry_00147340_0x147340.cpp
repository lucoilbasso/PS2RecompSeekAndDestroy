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

// Function: entry_00147340
// Address: 0x147340 - 0x147388
void entry_00147340_0x147340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147340_0x147340");
#endif

    ctx->pc = 0x147340u;

    // 0x147340: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x147340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x147344: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x147344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x147348: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x147348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x14734c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14734cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x147350: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x147350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x147354: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x147354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x147358: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x147358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x14735c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x14735cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147360: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x147360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x147364: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x147364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147368: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x147368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14736c: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x14736cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x147370: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x147370u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x147374: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x147374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x147378: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x147378u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14737c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x14737cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x147380: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x147380u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x147384: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x147384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->pc = 0x147388u;
}
