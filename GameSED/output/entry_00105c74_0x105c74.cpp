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

// Function: entry_00105c74
// Address: 0x105c74 - 0x105c90
void entry_00105c74_0x105c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105c74_0x105c74");
#endif

    switch (ctx->pc) {
        case 0x105c84u: goto label_105c84;
        default: break;
    }

    ctx->pc = 0x105c74u;

    // 0x105c74: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105C74u;
    {
        const bool branch_taken_0x105c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C74u;
        // 0x105c78: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c74) {
            ctx->pc = 0x105C90u;
            return;
        }
    }
    ctx->pc = 0x105C7Cu;
    // 0x105c7c: 0xc06a1b0  jal         func_1A86C0
    ctx->pc = 0x105C7Cu;
    SET_GPR_U32(ctx, 31, 0x105C84u);
    ctx->pc = 0x105C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105C7Cu;
    // 0x105c80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A86C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A86C0u, 0x105C7Cu, 0x105C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C84u;
label_105c84:
    // 0x105c84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x105C84u;
    {
        const bool branch_taken_0x105c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C84u;
        // 0x105c88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c84) {
            ctx->pc = 0x105C9Cu;
            return;
        }
    }
    ctx->pc = 0x105C8Cu;
    // 0x105c8c: 0x0  nop
    ctx->pc = 0x105c8cu;
    // NOP
    ctx->pc = 0x105c90u;
}
