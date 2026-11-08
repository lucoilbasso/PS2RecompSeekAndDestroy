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

// Function: caseD_b
// Address: 0x134d60 - 0x134d70
void caseD_b_0x134d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x134d60");
#endif

    switch (ctx->pc) {
        case 0x134d68u: goto label_134d68;
        default: break;
    }

    ctx->pc = 0x134d60u;

    // 0x134d60: 0xc04eb3e  jal         func_13ACF8
    ctx->pc = 0x134D60u;
    SET_GPR_U32(ctx, 31, 0x134D68u);
    ctx->pc = 0x134D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D60u;
    // 0x134d64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ACF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ACF8u, 0x134D60u, 0x134D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D68u;
label_134d68:
    // 0x134d68: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x134D68u;
    {
        const bool branch_taken_0x134d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D68u;
        // 0x134d6c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d68) {
            ctx->pc = 0x134E48u;
            return;
        }
    }
    ctx->pc = 0x134D70u;
}
