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

// Function: entry_001702e0
// Address: 0x1702e0 - 0x1702ec
void entry_001702e0_0x1702e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001702e0_0x1702e0");
#endif

    switch (ctx->pc) {
        case 0x1702e8u: goto label_1702e8;
        default: break;
    }

    ctx->pc = 0x1702e0u;

    // 0x1702e0: 0xc05c342  jal         func_170D08
    ctx->pc = 0x1702E0u;
    SET_GPR_U32(ctx, 31, 0x1702E8u);
    ctx->pc = 0x1702E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1702E0u;
    // 0x1702e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170D08u, 0x1702E0u, 0x1702E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702E8u;
label_1702e8:
    // 0x1702e8: 0x2d0b023  subu        $s6, $s6, $s0
    ctx->pc = 0x1702e8u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    ctx->pc = 0x1702ecu;
}
