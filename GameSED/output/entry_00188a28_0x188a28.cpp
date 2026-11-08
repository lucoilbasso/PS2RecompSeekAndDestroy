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

// Function: entry_00188a28
// Address: 0x188a28 - 0x188a54
void entry_00188a28_0x188a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188a28_0x188a28");
#endif

    switch (ctx->pc) {
        case 0x188a44u: goto label_188a44;
        default: break;
    }

    ctx->pc = 0x188a28u;

label_188a28:
    // 0x188a28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x188a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_188a2c:
    // 0x188a2c: 0x8cd00120  lw          $s0, 0x120($a2)
    ctx->pc = 0x188a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
label_188a30:
    // 0x188a30: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x188a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_188a34:
    // 0x188a34: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x188a34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_188a38:
    // 0x188a38: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x188a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_188a3c:
    // 0x188a3c: 0x60f809  jalr        $v1
label_188a40:
    if (ctx->pc == 0x188A40u) {
        ctx->pc = 0x188A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A3Cu;
        // 0x188a40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A44u;
        goto label_188a44;
    }
    ctx->pc = 0x188A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x188A44u);
        ctx->pc = 0x188A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A3Cu;
        // 0x188a40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188A3Cu, 0x188A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188A44u;
label_188a44:
    // 0x188a44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x188a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_188a48:
    // 0x188a48: 0x54c0fff7  bnel        $a2, $zero, . + 4 + (-0x9 << 2)
label_188a4c:
    if (ctx->pc == 0x188A4Cu) {
        ctx->pc = 0x188A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A48u;
        // 0x188a4c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A50u;
        goto label_188a50;
    }
    ctx->pc = 0x188A48u;
    {
        const bool branch_taken_0x188a48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x188a48) {
            ctx->pc = 0x188A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188A48u;
            // 0x188a4c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188a28;
        }
    }
    ctx->pc = 0x188A50u;
label_188a50:
    // 0x188a50: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x188a50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->pc = 0x188a54u;
}
