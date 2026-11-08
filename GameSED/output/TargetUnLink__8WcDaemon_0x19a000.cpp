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

// Function: TargetUnLink__8WcDaemon
// Address: 0x19a000 - 0x19a03c
void TargetUnLink__8WcDaemon_0x19a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TargetUnLink__8WcDaemon_0x19a000");
#endif

    switch (ctx->pc) {
        case 0x19a028u: goto label_19a028;
        default: break;
    }

    ctx->pc = 0x19a000u;

    // 0x19a000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19a000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a008: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a00c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19a00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19a010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a014: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x19a014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x19a018: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A018u;
    {
        const bool branch_taken_0x19a018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A018u;
        // 0x19a01c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a018) {
            ctx->pc = 0x19A02Cu;
            goto label_19a02c;
        }
    }
    ctx->pc = 0x19A020u;
    // 0x19a020: 0xc066844  jal         func_19A110
    ctx->pc = 0x19A020u;
    SET_GPR_U32(ctx, 31, 0x19A028u);
    ctx->pc = 0x19A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A110u, 0x19A020u, 0x19A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A028u;
label_19a028:
    // 0x19a028: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x19a028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_19a02c:
    // 0x19a02c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a02cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a030: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19a030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a034: 0x3e00008  jr          $ra
    ctx->pc = 0x19A034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A034u;
        // 0x19a038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A03Cu;
}
