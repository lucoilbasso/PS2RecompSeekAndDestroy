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

// Function: entry_001afaf0
// Address: 0x1afaf0 - 0x1afb00
void entry_001afaf0_0x1afaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afaf0_0x1afaf0");
#endif

    switch (ctx->pc) {
        case 0x1afaf8u: goto label_1afaf8;
        default: break;
    }

    ctx->pc = 0x1afaf0u;

    // 0x1afaf0: 0xc06c13c  jal         func_1B04F0
    ctx->pc = 0x1AFAF0u;
    SET_GPR_U32(ctx, 31, 0x1AFAF8u);
    ctx->pc = 0x1AFAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFAF0u;
    // 0x1afaf4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04F0u, 0x1AFAF0u, 0x1AFAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFAF8u;
label_1afaf8:
    // 0x1afaf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFAF8u;
    {
        const bool branch_taken_0x1afaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAF8u;
        // 0x1afafc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afaf8) {
            ctx->pc = 0x1AFB08u;
            return;
        }
    }
    ctx->pc = 0x1AFB00u;
}
