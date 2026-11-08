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

// Function: entry_00184cb8
// Address: 0x184cb8 - 0x184cd0
void entry_00184cb8_0x184cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184cb8_0x184cb8");
#endif

    switch (ctx->pc) {
        case 0x184cc4u: goto label_184cc4;
        default: break;
    }

    ctx->pc = 0x184cb8u;

    // 0x184cb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x184cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184cbc: 0xc06182a  jal         func_1860A8
    ctx->pc = 0x184CBCu;
    SET_GPR_U32(ctx, 31, 0x184CC4u);
    ctx->pc = 0x184CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184CBCu;
    // 0x184cc0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1860A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1860A8u, 0x184CBCu, 0x184CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184CC4u;
label_184cc4:
    // 0x184cc4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x184CC4u;
    {
        const bool branch_taken_0x184cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184cc4) {
            ctx->pc = 0x184C88u;
            return;
        }
    }
    ctx->pc = 0x184CCCu;
    // 0x184ccc: 0x0  nop
    ctx->pc = 0x184cccu;
    // NOP
    ctx->pc = 0x184cd0u;
}
