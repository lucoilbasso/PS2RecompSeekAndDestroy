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

// Function: WObjectVColorJobProc__FP8WcObjectP10WcSequence
// Address: 0x195598 - 0x1955d0
void WObjectVColorJobProc__FP8WcObjectP10WcSequence_0x195598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WObjectVColorJobProc__FP8WcObjectP10WcSequence_0x195598");
#endif

    switch (ctx->pc) {
        case 0x1955c4u: goto label_1955c4;
        default: break;
    }

    ctx->pc = 0x195598u;

    // 0x195598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19559c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19559cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1955a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1955a4: 0x8c8201ac  lw          $v0, 0x1AC($a0)
    ctx->pc = 0x1955a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 428)));
    // 0x1955a8: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x1955a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1955ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1955acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955b0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1955b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1955b4: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1955B4u;
    {
        const bool branch_taken_0x1955b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1955B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955B4u;
        // 0x1955b8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1955b4) {
            ctx->pc = 0x1955C4u;
            goto label_1955c4;
        }
    }
    ctx->pc = 0x1955BCu;
    // 0x1955bc: 0xc064ffa  jal         func_193FE8
    ctx->pc = 0x1955BCu;
    SET_GPR_U32(ctx, 31, 0x1955C4u);
    ctx->pc = 0x193FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FE8u, 0x1955BCu, 0x1955C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955C4u;
label_1955c4:
    // 0x1955c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1955c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1955c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1955C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1955CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955C8u;
        // 0x1955cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1955C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1955D0u;
}
