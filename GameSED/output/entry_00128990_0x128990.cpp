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

// Function: entry_00128990
// Address: 0x128990 - 0x1289c8
void entry_00128990_0x128990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128990_0x128990");
#endif

    ctx->pc = 0x128990u;

    // 0x128990: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x128990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x128994: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x128994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x128998: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x128998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12899c: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x12899cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1289a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1289a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1289a4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1289a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1289a8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1289a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1289ac: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1289acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1289b0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1289b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1289b4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1289b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1289b8: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x1289b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x1289bc: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1289bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1289c0: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1289c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x1289c4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1289c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1289c8u;
}
