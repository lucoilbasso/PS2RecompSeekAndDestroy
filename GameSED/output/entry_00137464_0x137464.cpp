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

// Function: entry_00137464
// Address: 0x137464 - 0x137488
void entry_00137464_0x137464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137464_0x137464");
#endif

    ctx->pc = 0x137464u;

    // 0x137464: 0x5a800013  blezl       $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x137464u;
    {
        const bool branch_taken_0x137464 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x137464) {
            ctx->pc = 0x137468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137464u;
            // 0x137468: 0x42140  sll         $a0, $a0, 5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1374B4u;
            return;
        }
    }
    ctx->pc = 0x13746Cu;
    // 0x13746c: 0x141140  sll         $v0, $s4, 5
    ctx->pc = 0x13746cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x137470: 0x94182a  slt         $v1, $a0, $s4
    ctx->pc = 0x137470u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x137474: 0x3c22821  addu        $a1, $fp, $v0
    ctx->pc = 0x137474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x137478: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x137478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13747c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13747Cu;
    {
        const bool branch_taken_0x13747c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13747Cu;
        // 0x137480: 0x24a6ffe0  addiu       $a2, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13747c) {
            ctx->pc = 0x1374B0u;
            return;
        }
    }
    ctx->pc = 0x137484u;
    // 0x137484: 0x0  nop
    ctx->pc = 0x137484u;
    // NOP
    ctx->pc = 0x137488u;
}
