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

// Function: entry_00157198
// Address: 0x157198 - 0x1571a8
void entry_00157198_0x157198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157198_0x157198");
#endif

    ctx->pc = 0x157198u;

    // 0x157198: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x157198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x15719c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x15719cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1571a0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1571A0u;
    SET_GPR_U32(ctx, 31, 0x1571A8u);
    ctx->pc = 0x1571A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1571A0u;
    // 0x1571a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1571A0u, 0x1571A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1571A8u;
}
