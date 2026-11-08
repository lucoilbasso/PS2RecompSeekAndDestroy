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

// Function: caseD_c
// Address: 0x134d70 - 0x134d80
void caseD_c_0x134d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x134d70");
#endif

    switch (ctx->pc) {
        case 0x134d78u: goto label_134d78;
        default: break;
    }

    ctx->pc = 0x134d70u;

    // 0x134d70: 0xc04e93e  jal         func_13A4F8
    ctx->pc = 0x134D70u;
    SET_GPR_U32(ctx, 31, 0x134D78u);
    ctx->pc = 0x134D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D70u;
    // 0x134d74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A4F8u, 0x134D70u, 0x134D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D78u;
label_134d78:
    // 0x134d78: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x134D78u;
    {
        const bool branch_taken_0x134d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D78u;
        // 0x134d7c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d78) {
            ctx->pc = 0x134E48u;
            return;
        }
    }
    ctx->pc = 0x134D80u;
}
