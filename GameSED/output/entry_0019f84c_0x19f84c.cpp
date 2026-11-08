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

// Function: entry_0019f84c
// Address: 0x19f84c - 0x19f86c
void entry_0019f84c_0x19f84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f84c_0x19f84c");
#endif

    ctx->pc = 0x19f84cu;

    // 0x19f84c: 0x0  nop
    ctx->pc = 0x19f84cu;
    // NOP
    // 0x19f850: 0x0  nop
    ctx->pc = 0x19f850u;
    // NOP
    // 0x19f854: 0x0  nop
    ctx->pc = 0x19f854u;
    // NOP
    // 0x19f858: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x19F858u;
    {
        const bool branch_taken_0x19f858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f858) {
            ctx->pc = 0x19F85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F858u;
            // 0x19f85c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F828u;
            return;
        }
    }
    ctx->pc = 0x19F860u;
    // 0x19f860: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x19f860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x19f864: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f868: 0x2465d668  addiu       $a1, $v1, -0x2998
    ctx->pc = 0x19f868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956648));
    ctx->pc = 0x19f86cu;
}
