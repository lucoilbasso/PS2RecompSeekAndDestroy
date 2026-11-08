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

// Function: entry_0016f6d0
// Address: 0x16f6d0 - 0x16f6f0
void entry_0016f6d0_0x16f6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f6d0_0x16f6d0");
#endif

    switch (ctx->pc) {
        case 0x16f6d8u: goto label_16f6d8;
        default: break;
    }

    ctx->pc = 0x16f6d0u;

label_16f6d0:
    // 0x16f6d0: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x16F6D0u;
    SET_GPR_U32(ctx, 31, 0x16F6D8u);
    ctx->pc = 0x16F6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F6D0u;
    // 0x16f6d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x16F6D0u, 0x16F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F6D8u;
label_16f6d8:
    // 0x16f6d8: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x16F6D8u;
    {
        const bool branch_taken_0x16f6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6D8u;
        // 0x16f6dc: 0xdfb10078  ld          $s1, 0x78($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6d8) {
            ctx->pc = 0x16F6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f6d0;
        }
    }
    ctx->pc = 0x16F6E0u;
    // 0x16f6e0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x16f6e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16f6e4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x16f6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16f6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x16F6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6E8u;
        // 0x16f6ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F6F0u;
}
