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

// Function: entry_00166330
// Address: 0x166330 - 0x166364
void entry_00166330_0x166330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166330_0x166330");
#endif

    switch (ctx->pc) {
        case 0x166354u: goto label_166354;
        default: break;
    }

    ctx->pc = 0x166330u;

label_166330:
    // 0x166330: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x166330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x166334: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x166334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x166338: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x166338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16633c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16633cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x166340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166344: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x166348: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x166348u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x16634c: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x16634Cu;
    SET_GPR_U32(ctx, 31, 0x166354u);
    ctx->pc = 0x166350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16634Cu;
    // 0x166350: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x16634Cu, 0x166354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166354u;
label_166354:
    // 0x166354: 0x8e2211e0  lw          $v0, 0x11E0($s1)
    ctx->pc = 0x166354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
    // 0x166358: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x166358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16635c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x16635Cu;
    {
        const bool branch_taken_0x16635c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16635c) {
            ctx->pc = 0x166360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16635Cu;
            // 0x166360: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166330;
        }
    }
    ctx->pc = 0x166364u;
}
