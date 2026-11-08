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

// Function: entry_00124ff8
// Address: 0x124ff8 - 0x125030
void entry_00124ff8_0x124ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124ff8_0x124ff8");
#endif

    ctx->pc = 0x124ff8u;

    // 0x124ff8: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x124ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x124ffc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x124ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x125000: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x125000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x125004: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x125004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x125008: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x125008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12500c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x12500cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x125010: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x125010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x125014: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x125014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x125018: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x125018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x12501c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12501cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x125020: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x125020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x125024: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x125024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x125028: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x125028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x12502c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12502cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x125030u;
}
