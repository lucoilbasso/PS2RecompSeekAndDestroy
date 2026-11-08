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

// Function: entry_00199f70
// Address: 0x199f70 - 0x199f84
void entry_00199f70_0x199f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199f70_0x199f70");
#endif

    ctx->pc = 0x199f70u;

    // 0x199f70: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x199f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x199f74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199F74u;
    {
        const bool branch_taken_0x199f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F74u;
        // 0x199f78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f74) {
            ctx->pc = 0x199F84u;
            return;
        }
    }
    ctx->pc = 0x199F7Cu;
    // 0x199f7c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x199F7Cu;
    SET_GPR_U32(ctx, 31, 0x199F84u);
    ctx->pc = 0x199F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F7Cu;
    // 0x199f80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x199F7Cu, 0x199F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F84u;
}
