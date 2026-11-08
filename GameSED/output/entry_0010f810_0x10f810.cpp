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

// Function: entry_0010f810
// Address: 0x10f810 - 0x10f830
void entry_0010f810_0x10f810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f810_0x10f810");
#endif

    switch (ctx->pc) {
        case 0x10f824u: goto label_10f824;
        default: break;
    }

    ctx->pc = 0x10f810u;

    // 0x10f810: 0x6200007  bltz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F810u;
    {
        const bool branch_taken_0x10f810 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x10F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F810u;
        // 0x10f814: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f810) {
            ctx->pc = 0x10F830u;
            return;
        }
    }
    ctx->pc = 0x10F818u;
    // 0x10f818: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10f818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10f81c: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F81Cu;
    SET_GPR_U32(ctx, 31, 0x10F824u);
    ctx->pc = 0x10F820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F81Cu;
    // 0x10f820: 0x2484d170  addiu       $a0, $a0, -0x2E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F81Cu, 0x10F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F824u;
label_10f824:
    // 0x10f824: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10F824u;
    {
        const bool branch_taken_0x10f824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f824) {
            ctx->pc = 0x10F840u;
            return;
        }
    }
    ctx->pc = 0x10F82Cu;
    // 0x10f82c: 0x0  nop
    ctx->pc = 0x10f82cu;
    // NOP
    ctx->pc = 0x10f830u;
}
