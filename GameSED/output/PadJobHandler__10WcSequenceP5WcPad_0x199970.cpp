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

// Function: PadJobHandler__10WcSequenceP5WcPad
// Address: 0x199970 - 0x199998
void PadJobHandler__10WcSequenceP5WcPad_0x199970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PadJobHandler__10WcSequenceP5WcPad_0x199970");
#endif

    switch (ctx->pc) {
        case 0x19998cu: goto label_19998c;
        default: break;
    }

    ctx->pc = 0x199970u;

    // 0x199970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199978: 0x94a20022  lhu         $v0, 0x22($a1)
    ctx->pc = 0x199978u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x19997c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19997Cu;
    {
        const bool branch_taken_0x19997c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19997c) {
            ctx->pc = 0x199980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19997Cu;
            // 0x199980: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199990u;
            goto label_199990;
        }
    }
    ctx->pc = 0x199984u;
    // 0x199984: 0xc05bebc  jal         func_16FAF0
    ctx->pc = 0x199984u;
    SET_GPR_U32(ctx, 31, 0x19998Cu);
    ctx->pc = 0x16FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FAF0u, 0x199984u, 0x19998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19998Cu;
label_19998c:
    // 0x19998c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19998cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_199990:
    // 0x199990: 0x3e00008  jr          $ra
    ctx->pc = 0x199990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199990u;
        // 0x199994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199998u;
}
