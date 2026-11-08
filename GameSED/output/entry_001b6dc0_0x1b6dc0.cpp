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

// Function: entry_001b6dc0
// Address: 0x1b6dc0 - 0x1b6dd8
void entry_001b6dc0_0x1b6dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6dc0_0x1b6dc0");
#endif

    switch (ctx->pc) {
        case 0x1b6dd0u: goto label_1b6dd0;
        default: break;
    }

    ctx->pc = 0x1b6dc0u;

    // 0x1b6dc0: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1b6dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1b6dc4: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1b6dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1b6dc8: 0xc06db34  jal         func_1B6CD0
    ctx->pc = 0x1B6DC8u;
    SET_GPR_U32(ctx, 31, 0x1B6DD0u);
    ctx->pc = 0x1B6DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6DC8u;
    // 0x1b6dcc: 0x26866c58  addiu       $a2, $s4, 0x6C58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 27736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CD0u, 0x1B6DC8u, 0x1B6DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DD0u;
label_1b6dd0:
    // 0x1b6dd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b6dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6dd4: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x1b6dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    ctx->pc = 0x1b6dd8u;
}
