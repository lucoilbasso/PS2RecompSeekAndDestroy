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

// Function: entry_00171e20
// Address: 0x171e20 - 0x171e3c
void entry_00171e20_0x171e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171e20_0x171e20");
#endif

    switch (ctx->pc) {
        case 0x171e28u: goto label_171e28;
        case 0x171e38u: goto label_171e38;
        default: break;
    }

    ctx->pc = 0x171e20u;

    // 0x171e20: 0xc074009  jal         func_1D0024
    ctx->pc = 0x171E20u;
    SET_GPR_U32(ctx, 31, 0x171E28u);
    ctx->pc = 0x171E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E20u;
    // 0x171e24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x171E20u, 0x171E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E28u;
label_171e28:
    // 0x171e28: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x171e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x171e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e30: 0xc074009  jal         func_1D0024
    ctx->pc = 0x171E30u;
    SET_GPR_U32(ctx, 31, 0x171E38u);
    ctx->pc = 0x171E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E30u;
    // 0x171e34: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x171E30u, 0x171E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E38u;
label_171e38:
    // 0x171e38: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x171e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171e3cu;
}
