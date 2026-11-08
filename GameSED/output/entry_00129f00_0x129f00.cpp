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

// Function: entry_00129f00
// Address: 0x129f00 - 0x129f38
void entry_00129f00_0x129f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129f00_0x129f00");
#endif

    ctx->pc = 0x129f00u;

    // 0x129f00: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x129f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x129f04: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x129f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x129f08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x129f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x129f0c: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x129f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x129f10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x129f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x129f14: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x129f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x129f18: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x129f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x129f1c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x129f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x129f20: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x129f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x129f24: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x129f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x129f28: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x129f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x129f2c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x129f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x129f30: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x129f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x129f34: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x129f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x129f38u;
}
