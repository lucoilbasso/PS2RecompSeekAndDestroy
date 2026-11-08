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

// Function: SeqFrameExec__9ApcGameDr
// Address: 0x11b838 - 0x11b868
void SeqFrameExec__9ApcGameDr_0x11b838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeqFrameExec__9ApcGameDr_0x11b838");
#endif

    switch (ctx->pc) {
        case 0x11b85cu: goto label_11b85c;
        default: break;
    }

    ctx->pc = 0x11b838u;

    // 0x11b838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b83c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b840: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11b840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11b844: 0x8c85008c  lw          $a1, 0x8C($a0)
    ctx->pc = 0x11b844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x11b848: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B848u;
    {
        const bool branch_taken_0x11b848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B848u;
        // 0x11b84c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b848) {
            ctx->pc = 0x11B85Cu;
            goto label_11b85c;
        }
    }
    ctx->pc = 0x11B850u;
    // 0x11b850: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x11b850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11b854: 0xc060e56  jal         func_183958
    ctx->pc = 0x11B854u;
    SET_GPR_U32(ctx, 31, 0x11B85Cu);
    ctx->pc = 0x11B858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B854u;
    // 0x11b858: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x11B854u, 0x11B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B85Cu;
label_11b85c:
    // 0x11b85c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b860: 0x3e00008  jr          $ra
    ctx->pc = 0x11B860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B860u;
        // 0x11b864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B868u;
}
