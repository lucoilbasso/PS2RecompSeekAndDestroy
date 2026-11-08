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

// Function: SeqPresetFrame__9ApcGameDr
// Address: 0x11b868 - 0x11b89c
void SeqPresetFrame__9ApcGameDr_0x11b868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeqPresetFrame__9ApcGameDr_0x11b868");
#endif

    switch (ctx->pc) {
        case 0x11b890u: goto label_11b890;
        default: break;
    }

    ctx->pc = 0x11b868u;

    // 0x11b868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b86c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11b86cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b874: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x11b874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x11b878: 0x8c45008c  lw          $a1, 0x8C($v0)
    ctx->pc = 0x11b878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x11b87c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x11b87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b880: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B880u;
    {
        const bool branch_taken_0x11b880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B880u;
        // 0x11b884: 0x8c4640a4  lw          $a2, 0x40A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b880) {
            ctx->pc = 0x11B890u;
            goto label_11b890;
        }
    }
    ctx->pc = 0x11B888u;
    // 0x11b888: 0xc060e56  jal         func_183958
    ctx->pc = 0x11B888u;
    SET_GPR_U32(ctx, 31, 0x11B890u);
    ctx->pc = 0x11B88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B888u;
    // 0x11b88c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x11B888u, 0x11B890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B890u;
label_11b890:
    // 0x11b890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b894: 0x3e00008  jr          $ra
    ctx->pc = 0x11B894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B894u;
        // 0x11b898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B89Cu;
}
