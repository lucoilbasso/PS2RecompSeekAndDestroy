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

// Function: entry_001a6fb8
// Address: 0x1a6fb8 - 0x1a6fcc
void entry_001a6fb8_0x1a6fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6fb8_0x1a6fb8");
#endif

    ctx->pc = 0x1a6fb8u;

    // 0x1a6fb8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A6FB8u;
    {
        const bool branch_taken_0x1a6fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FB8u;
        // 0x1a6fbc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fb8) {
            ctx->pc = 0x1A7054u;
            return;
        }
    }
    ctx->pc = 0x1A6FC0u;
    // 0x1a6fc0: 0x5600ffd7  bnel        $s0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1A6FC0u;
    {
        const bool branch_taken_0x1a6fc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6fc0) {
            ctx->pc = 0x1A6FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6FC0u;
            // 0x1a6fc4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6F20u;
            return;
        }
    }
    ctx->pc = 0x1A6FC8u;
    // 0x1a6fc8: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1a6fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    ctx->pc = 0x1a6fccu;
}
