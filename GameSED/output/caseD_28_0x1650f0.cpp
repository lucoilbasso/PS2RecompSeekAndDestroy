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

// Function: caseD_28
// Address: 0x1650f0 - 0x165124
void caseD_28_0x1650f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_28_0x1650f0");
#endif

    switch (ctx->pc) {
        case 0x1650f0u: goto label_1650f0;
        case 0x1650f4u: goto label_1650f4;
        case 0x1650f8u: goto label_1650f8;
        case 0x1650fcu: goto label_1650fc;
        case 0x165100u: goto label_165100;
        case 0x165104u: goto label_165104;
        case 0x165108u: goto label_165108;
        case 0x16510cu: goto label_16510c;
        case 0x165110u: goto label_165110;
        case 0x165114u: goto label_165114;
        case 0x165118u: goto label_165118;
        case 0x16511cu: goto label_16511c;
        case 0x165120u: goto label_165120;
        default: break;
    }

    ctx->pc = 0x1650f0u;

label_1650f0:
    // 0x1650f0: 0x261110fc  addiu       $s1, $s0, 0x10FC
    ctx->pc = 0x1650f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4348));
label_1650f4:
    // 0x1650f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1650f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1650f8:
    // 0x1650f8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1650fc:
    if (ctx->pc == 0x1650FCu) {
        ctx->pc = 0x1650FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650F8u;
        // 0x1650fc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165100u;
        goto label_165100;
    }
    ctx->pc = 0x1650F8u;
    {
        const bool branch_taken_0x1650f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1650f8) {
            ctx->pc = 0x1650FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1650F8u;
            // 0x1650fc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165124u;
            return;
        }
    }
    ctx->pc = 0x165100u;
label_165100:
    // 0x165100: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x165100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_165104:
    // 0x165104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165108:
    // 0x165108: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x165108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16510c:
    // 0x16510c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x16510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_165110:
    // 0x165110: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x165110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_165114:
    // 0x165114: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x165114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_165118:
    // 0x165118: 0x60f809  jalr        $v1
label_16511c:
    if (ctx->pc == 0x16511Cu) {
        ctx->pc = 0x16511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165118u;
        // 0x16511c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165120u;
        goto label_165120;
    }
    ctx->pc = 0x165118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x165120u);
        ctx->pc = 0x16511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165118u;
        // 0x16511c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165118u, 0x165120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x165120u;
label_165120:
    // 0x165120: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x165120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x165124u;
}
