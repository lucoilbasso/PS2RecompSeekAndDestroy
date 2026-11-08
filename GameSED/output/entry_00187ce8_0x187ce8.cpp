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

// Function: entry_00187ce8
// Address: 0x187ce8 - 0x187d0c
void entry_00187ce8_0x187ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187ce8_0x187ce8");
#endif

    ctx->pc = 0x187ce8u;

    // 0x187ce8: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x187ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x187cec: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x187cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x187cf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187cf4: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x187cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x187cf8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x187cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x187cfc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x187cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x187d00: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x187d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x187d04: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x187d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x187d08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x187d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x187d0cu;
}
