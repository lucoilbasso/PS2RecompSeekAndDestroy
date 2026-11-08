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

// Function: entry_001e1700
// Address: 0x1e1700 - 0x1e1724
void entry_001e1700_0x1e1700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1700_0x1e1700");
#endif

    switch (ctx->pc) {
        case 0x1e171cu: goto label_1e171c;
        default: break;
    }

    ctx->pc = 0x1e1700u;

label_1e1700:
    // 0x1e1700: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1e1700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e1704:
    // 0x1e1704: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1e1704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1e1708:
    // 0x1e1708: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1e1708u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e170c:
    // 0x1e170c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1e170cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1710:
    // 0x1e1710: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e1710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e1714:
    // 0x1e1714: 0x60f809  jalr        $v1
label_1e1718:
    if (ctx->pc == 0x1E1718u) {
        ctx->pc = 0x1E1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1714u;
        // 0x1e1718: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E171Cu;
        goto label_1e171c;
    }
    ctx->pc = 0x1E1714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E171Cu);
        ctx->pc = 0x1E1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1714u;
        // 0x1e1718: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1714u, 0x1E171Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E171Cu;
label_1e171c:
    // 0x1e171c: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_1e1720:
    if (ctx->pc == 0x1E1720u) {
        ctx->pc = 0x1E1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E171Cu;
        // 0x1e1720: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1724u;
        goto label_fallthrough_0x1e171c;
    }
    ctx->pc = 0x1E171Cu;
    {
        const bool branch_taken_0x1e171c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e171c) {
            ctx->pc = 0x1E1720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E171Cu;
            // 0x1e1720: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1700;
        }
    }
label_fallthrough_0x1e171c:
    ctx->pc = 0x1E1724u;
}
