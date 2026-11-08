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

// Function: caseD_6
// Address: 0x16c148 - 0x16c168
void caseD_6_0x16c148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x16c148");
#endif

    switch (ctx->pc) {
        case 0x16c148u: goto label_16c148;
        case 0x16c14cu: goto label_16c14c;
        case 0x16c150u: goto label_16c150;
        case 0x16c154u: goto label_16c154;
        case 0x16c158u: goto label_16c158;
        case 0x16c15cu: goto label_16c15c;
        case 0x16c160u: goto label_16c160;
        case 0x16c164u: goto label_16c164;
        default: break;
    }

    ctx->pc = 0x16c148u;

label_16c148:
    // 0x16c148: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x16c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_16c14c:
    // 0x16c14c: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x16c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_16c150:
    // 0x16c150: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16c150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16c154:
    // 0x16c154: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16c154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16c158:
    // 0x16c158: 0x60f809  jalr        $v1
label_16c15c:
    if (ctx->pc == 0x16C15Cu) {
        ctx->pc = 0x16C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C158u;
        // 0x16c15c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C160u;
        goto label_16c160;
    }
    ctx->pc = 0x16C158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16C160u);
        ctx->pc = 0x16C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C158u;
        // 0x16c15c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C158u, 0x16C160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C160u;
label_16c160:
    // 0x16c160: 0x100000ca  b           . + 4 + (0xCA << 2)
label_16c164:
    if (ctx->pc == 0x16C164u) {
        ctx->pc = 0x16C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C160u;
        // 0x16c164: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C168u;
        goto label_fallthrough_0x16c160;
    }
    ctx->pc = 0x16C160u;
    {
        const bool branch_taken_0x16c160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C160u;
        // 0x16c164: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c160) {
            ctx->pc = 0x16C48Cu;
            return;
        }
    }
label_fallthrough_0x16c160:
    ctx->pc = 0x16C168u;
}
