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

// Function: caseD_9
// Address: 0x1343f0 - 0x134408
void caseD_9_0x1343f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1343f0");
#endif

    switch (ctx->pc) {
        case 0x134400u: goto label_134400;
        default: break;
    }

    ctx->pc = 0x1343f0u;

    // 0x1343f0: 0x8f918a30  lw          $s1, -0x75D0($gp)
    ctx->pc = 0x1343f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x1343f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1343f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343f8: 0xc066810  jal         func_19A040
    ctx->pc = 0x1343F8u;
    SET_GPR_U32(ctx, 31, 0x134400u);
    ctx->pc = 0x1343FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343F8u;
    // 0x1343fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A040u, 0x1343F8u, 0x134400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134400u;
label_134400:
    // 0x134400: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x134400u;
    {
        const bool branch_taken_0x134400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134400u;
        // 0x134404: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134400) {
            ctx->pc = 0x134684u;
            return;
        }
    }
    ctx->pc = 0x134408u;
}
