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

// Function: caseD_5
// Address: 0x154918 - 0x154938
void caseD_5_0x154918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x154918");
#endif

    switch (ctx->pc) {
        case 0x154918u: goto label_154918;
        case 0x15491cu: goto label_15491c;
        case 0x154920u: goto label_154920;
        case 0x154924u: goto label_154924;
        case 0x154928u: goto label_154928;
        case 0x15492cu: goto label_15492c;
        case 0x154930u: goto label_154930;
        case 0x154934u: goto label_154934;
        default: break;
    }

    ctx->pc = 0x154918u;

label_154918:
    // 0x154918: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x154918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15491c:
    // 0x15491c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x15491cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_154920:
    // 0x154920: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x154920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_154924:
    // 0x154924: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x154924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_154928:
    // 0x154928: 0x60f809  jalr        $v1
label_15492c:
    if (ctx->pc == 0x15492Cu) {
        ctx->pc = 0x15492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154928u;
        // 0x15492c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154930u;
        goto label_154930;
    }
    ctx->pc = 0x154928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154930u);
        ctx->pc = 0x15492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154928u;
        // 0x15492c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154928u, 0x154930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154930u;
label_154930:
    // 0x154930: 0x1000027b  b           . + 4 + (0x27B << 2)
label_154934:
    if (ctx->pc == 0x154934u) {
        ctx->pc = 0x154934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154930u;
        // 0x154934: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154938u;
        goto label_fallthrough_0x154930;
    }
    ctx->pc = 0x154930u;
    {
        const bool branch_taken_0x154930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154930u;
        // 0x154934: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154930) {
            ctx->pc = 0x155320u;
            return;
        }
    }
label_fallthrough_0x154930:
    ctx->pc = 0x154938u;
}
