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

// Function: entry_00106a70
// Address: 0x106a70 - 0x106a98
void entry_00106a70_0x106a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106a70_0x106a70");
#endif

    switch (ctx->pc) {
        case 0x106a90u: goto label_106a90;
        default: break;
    }

    ctx->pc = 0x106a70u;

    // 0x106a70: 0xae290014  sw          $t1, 0x14($s1)
    ctx->pc = 0x106a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 9));
    // 0x106a74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x106a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x106a78: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x106a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x106a7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x106a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106a80: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106A80u;
    {
        const bool branch_taken_0x106a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x106a80) {
            ctx->pc = 0x106A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106A80u;
            // 0x106a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106A98u;
            return;
        }
    }
    ctx->pc = 0x106A88u;
    // 0x106a88: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x106A88u;
    SET_GPR_U32(ctx, 31, 0x106A90u);
    ctx->pc = 0x106A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A88u;
    // 0x106a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x106A88u, 0x106A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A90u;
label_106a90:
    // 0x106a90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106A90u;
    {
        const bool branch_taken_0x106a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A90u;
        // 0x106a94: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a90) {
            ctx->pc = 0x106A9Cu;
            return;
        }
    }
    ctx->pc = 0x106A98u;
}
