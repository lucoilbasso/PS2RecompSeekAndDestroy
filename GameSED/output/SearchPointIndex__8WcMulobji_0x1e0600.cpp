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

// Function: SearchPointIndex__8WcMulobji
// Address: 0x1e0600 - 0x1e0640
void SearchPointIndex__8WcMulobji_0x1e0600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchPointIndex__8WcMulobji_0x1e0600");
#endif

    switch (ctx->pc) {
        case 0x1e0610u: goto label_1e0610;
        default: break;
    }

    ctx->pc = 0x1e0600u;

    // 0x1e0600: 0x8c8401b0  lw          $a0, 0x1B0($a0)
    ctx->pc = 0x1e0600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x1e0604: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E0604u;
    {
        const bool branch_taken_0x1e0604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0604u;
        // 0x1e0608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0604) {
            ctx->pc = 0x1E0638u;
            goto label_1e0638;
        }
    }
    ctx->pc = 0x1E060Cu;
    // 0x1e060c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e060cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e0610:
    // 0x1e0610: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0610u;
    {
        const bool branch_taken_0x1e0610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0610u;
        // 0x1e0614: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0610) {
            ctx->pc = 0x1E0638u;
            goto label_1e0638;
        }
    }
    ctx->pc = 0x1E0618u;
    // 0x1e0618: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1e0618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e061c: 0x0  nop
    ctx->pc = 0x1e061cu;
    // NOP
    // 0x1e0620: 0x0  nop
    ctx->pc = 0x1e0620u;
    // NOP
    // 0x1e0624: 0x0  nop
    ctx->pc = 0x1e0624u;
    // NOP
    // 0x1e0628: 0x0  nop
    ctx->pc = 0x1e0628u;
    // NOP
    // 0x1e062c: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E062Cu;
    {
        const bool branch_taken_0x1e062c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e062c) {
            ctx->pc = 0x1E0630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E062Cu;
            // 0x1e0630: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0610;
        }
    }
    ctx->pc = 0x1E0634u;
    // 0x1e0634: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0638:
    // 0x1e0638: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0640u;
}
