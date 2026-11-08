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

// Function: entry_0013d7d0
// Address: 0x13d7d0 - 0x13d7f0
void entry_0013d7d0_0x13d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d7d0_0x13d7d0");
#endif

    ctx->pc = 0x13d7d0u;

    // 0x13d7d0: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x13d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x13d7d4: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x13d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13d7d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d7dc: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x13d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x13d7e0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13d7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13d7e4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x13d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x13d7e8: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x13d7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x13d7ec: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x13d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x13d7f0u;
}
