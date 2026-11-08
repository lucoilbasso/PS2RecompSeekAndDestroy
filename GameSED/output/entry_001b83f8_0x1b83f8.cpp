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

// Function: entry_001b83f8
// Address: 0x1b83f8 - 0x1b8420
void entry_001b83f8_0x1b83f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b83f8_0x1b83f8");
#endif

    switch (ctx->pc) {
        case 0x1b8410u: goto label_1b8410;
        default: break;
    }

    ctx->pc = 0x1b83f8u;

label_1b83f8:
    // 0x1b83f8: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1b83f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b83fc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1b83fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b8400: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1b8400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b8404: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1b8404u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b8408: 0xc06e0a2  jal         func_1B8288
    ctx->pc = 0x1B8408u;
    SET_GPR_U32(ctx, 31, 0x1B8410u);
    ctx->pc = 0x1B840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8408u;
    // 0x1b840c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8288u, 0x1B8408u, 0x1B8410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8410u;
label_1b8410:
    // 0x1b8410: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1b8410u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1b8414: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1b8414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b8418: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B8418u;
    {
        const bool branch_taken_0x1b8418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8418) {
            ctx->pc = 0x1B841Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8418u;
            // 0x1b841c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B83F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b83f8;
        }
    }
    ctx->pc = 0x1B8420u;
}
