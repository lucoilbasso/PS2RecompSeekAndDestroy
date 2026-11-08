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

// Function: entry_00134d4c
// Address: 0x134d4c - 0x134d60
void entry_00134d4c_0x134d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134d4c_0x134d4c");
#endif

    switch (ctx->pc) {
        case 0x134d58u: goto label_134d58;
        default: break;
    }

    ctx->pc = 0x134d4cu;

    // 0x134d4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d50: 0xc04eb1a  jal         func_13AC68
    ctx->pc = 0x134D50u;
    SET_GPR_U32(ctx, 31, 0x134D58u);
    ctx->pc = 0x134D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D50u;
    // 0x134d54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC68u, 0x134D50u, 0x134D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D58u;
label_134d58:
    // 0x134d58: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x134D58u;
    {
        const bool branch_taken_0x134d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D58u;
        // 0x134d5c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d58) {
            ctx->pc = 0x134E48u;
            return;
        }
    }
    ctx->pc = 0x134D60u;
}
