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

// Function: default
// Address: 0x16a080 - 0x16a0a0
void ps2_default_0x16a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x16a080");
#endif

    ctx->pc = 0x16a080u;

    // 0x16a080: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16a080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a084: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x16a084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16a088: 0x1480fe73  bnez        $a0, . + 4 + (-0x18D << 2)
    ctx->pc = 0x16A088u;
    {
        const bool branch_taken_0x16a088 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A088u;
        // 0x16a08c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a088) {
            ctx->pc = 0x169A58u;
            return;
        }
    }
    ctx->pc = 0x16A090u;
    // 0x16a090: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x16a090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a098: 0x26c310d0  addiu       $v1, $s6, 0x10D0
    ctx->pc = 0x16a098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4304));
    // 0x16a09c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x16a09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x16a0a0u;
}
