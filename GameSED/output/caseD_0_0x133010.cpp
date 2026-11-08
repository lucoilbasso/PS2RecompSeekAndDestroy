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

// Function: caseD_0
// Address: 0x133010 - 0x133028
void caseD_0_0x133010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x133010");
#endif

    switch (ctx->pc) {
        case 0x133024u: goto label_133024;
        default: break;
    }

    ctx->pc = 0x133010u;

    // 0x133010: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x133010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x133014: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x133014u;
    {
        const bool branch_taken_0x133014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x133014) {
            ctx->pc = 0x133018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133014u;
            // 0x133018: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133028u;
            return;
        }
    }
    ctx->pc = 0x13301Cu;
    // 0x13301c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x13301Cu;
    SET_GPR_U32(ctx, 31, 0x133024u);
    ctx->pc = 0x133020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13301Cu;
    // 0x133020: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x13301Cu, 0x133024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133024u;
label_133024:
    // 0x133024: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x133024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x133028u;
}
