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

// Function: entry_0018ce58
// Address: 0x18ce58 - 0x18ce74
void entry_0018ce58_0x18ce58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ce58_0x18ce58");
#endif

    ctx->pc = 0x18ce58u;

    // 0x18ce58: 0x11800006  beqz        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CE58u;
    {
        const bool branch_taken_0x18ce58 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE58u;
        // 0x18ce5c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce58) {
            ctx->pc = 0x18CE74u;
            return;
        }
    }
    ctx->pc = 0x18CE60u;
    // 0x18ce60: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x18ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x18ce64: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x18ce64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18ce6c: 0x1821026  xor         $v0, $t4, $v0
    ctx->pc = 0x18ce6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 2));
    // 0x18ce70: 0x1e2400b  movn        $t0, $t7, $v0
    ctx->pc = 0x18ce70u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 15));
    ctx->pc = 0x18ce74u;
}
