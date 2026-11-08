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

// Function: entry_001c6658
// Address: 0x1c6658 - 0x1c6688
void entry_001c6658_0x1c6658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6658_0x1c6658");
#endif

    switch (ctx->pc) {
        case 0x1c6660u: goto label_1c6660;
        default: break;
    }

    ctx->pc = 0x1c6658u;

    // 0x1c6658: 0xc0719c8  jal         func_1C6720
    ctx->pc = 0x1C6658u;
    SET_GPR_U32(ctx, 31, 0x1C6660u);
    ctx->pc = 0x1C665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6658u;
    // 0x1c665c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6720u, 0x1C6658u, 0x1C6660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6660u;
label_1c6660:
    // 0x1c6660: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c6660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6664: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x1c6664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1c6668: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6668u;
    {
        const bool branch_taken_0x1c6668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6668u;
        // 0x1c666c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6668) {
            ctx->pc = 0x1C66B0u;
            return;
        }
    }
    ctx->pc = 0x1C6670u;
    // 0x1c6670: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6670u;
    {
        const bool branch_taken_0x1c6670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6670) {
            ctx->pc = 0x1C6674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6670u;
            // 0x1c6674: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6688u;
            return;
        }
    }
    ctx->pc = 0x1C6678u;
    // 0x1c6678: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6678u;
    {
        const bool branch_taken_0x1c6678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6678) {
            ctx->pc = 0x1C6698u;
            return;
        }
    }
    ctx->pc = 0x1C6680u;
    // 0x1c6680: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6680u;
    {
        const bool branch_taken_0x1c6680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6680) {
            ctx->pc = 0x1C66F0u;
            return;
        }
    }
    ctx->pc = 0x1C6688u;
}
