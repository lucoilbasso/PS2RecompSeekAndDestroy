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

// Function: entry_0012a6c0
// Address: 0x12a6c0 - 0x12a704
void entry_0012a6c0_0x12a6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a6c0_0x12a6c0");
#endif

    ctx->pc = 0x12a6c0u;

    // 0x12a6c0: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x12a6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x12a6c4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x12a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x12a6c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12a6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12a6cc: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x12a6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x12a6d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a6d4: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x12a6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x12a6d8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x12a6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x12a6dc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x12a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x12a6e0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x12a6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x12a6e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12a6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12a6e8: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x12a6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x12a6ec: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x12a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x12a6f0: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x12a6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x12a6f4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12a6f8: 0xaf8089f0  sw          $zero, -0x7610($gp)
    ctx->pc = 0x12a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U32(ctx, 0));
    // 0x12a6fc: 0xaf8089f4  sw          $zero, -0x760C($gp)
    ctx->pc = 0x12a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 0));
    // 0x12a700: 0xaf8089f8  sw          $zero, -0x7608($gp)
    ctx->pc = 0x12a700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937080), GPR_U32(ctx, 0));
    ctx->pc = 0x12a704u;
}
