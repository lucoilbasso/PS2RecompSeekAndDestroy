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

// Function: entry_00193ab0
// Address: 0x193ab0 - 0x193abc
void entry_00193ab0_0x193ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193ab0_0x193ab0");
#endif

    switch (ctx->pc) {
        case 0x193ab8u: goto label_193ab8;
        default: break;
    }

    ctx->pc = 0x193ab0u;

    // 0x193ab0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x193AB0u;
    SET_GPR_U32(ctx, 31, 0x193AB8u);
    ctx->pc = 0x193AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AB0u;
    // 0x193ab4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x193AB0u, 0x193AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AB8u;
label_193ab8:
    // 0x193ab8: 0x26110160  addiu       $s1, $s0, 0x160
    ctx->pc = 0x193ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    ctx->pc = 0x193abcu;
}
