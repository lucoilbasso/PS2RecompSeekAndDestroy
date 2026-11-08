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

// Function: entry_00109a70
// Address: 0x109a70 - 0x109aa8
void entry_00109a70_0x109a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109a70_0x109a70");
#endif

    switch (ctx->pc) {
        case 0x109a84u: goto label_109a84;
        case 0x109a98u: goto label_109a98;
        default: break;
    }

    ctx->pc = 0x109a70u;

label_109a70:
    // 0x109a70: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x109a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x109a74: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x109a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a7c: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x109A7Cu;
    SET_GPR_U32(ctx, 31, 0x109A84u);
    ctx->pc = 0x109A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A7Cu;
    // 0x109a80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x109A7Cu, 0x109A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A84u;
label_109a84:
    // 0x109a84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x109a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x109a8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a90: 0xc0640ca  jal         func_190328
    ctx->pc = 0x109A90u;
    SET_GPR_U32(ctx, 31, 0x109A98u);
    ctx->pc = 0x109A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A90u;
    // 0x109a94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x109A90u, 0x109A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A98u;
label_109a98:
    // 0x109a98: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x109a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x109a9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109aa0: 0x1473fff3  bne         $v1, $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x109AA0u;
    {
        const bool branch_taken_0x109aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x109aa0) {
            ctx->pc = 0x109A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109a70;
        }
    }
    ctx->pc = 0x109AA8u;
}
