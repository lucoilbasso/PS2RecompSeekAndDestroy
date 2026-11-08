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

// Function: entry_0019a63c
// Address: 0x19a63c - 0x19a654
void entry_0019a63c_0x19a63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a63c_0x19a63c");
#endif

    switch (ctx->pc) {
        case 0x19a644u: goto label_19a644;
        default: break;
    }

    ctx->pc = 0x19a63cu;

    // 0x19a63c: 0xc06674c  jal         func_199D30
    ctx->pc = 0x19A63Cu;
    SET_GPR_U32(ctx, 31, 0x19A644u);
    ctx->pc = 0x19A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A63Cu;
    // 0x19a640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199D30u, 0x19A63Cu, 0x19A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A644u;
label_19a644:
    // 0x19a644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a648: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19a648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a64c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A64Cu;
        // 0x19a650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A654u;
}
