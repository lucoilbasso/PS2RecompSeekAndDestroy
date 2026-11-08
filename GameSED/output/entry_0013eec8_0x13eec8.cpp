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

// Function: entry_0013eec8
// Address: 0x13eec8 - 0x13eee4
void entry_0013eec8_0x13eec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eec8_0x13eec8");
#endif

    switch (ctx->pc) {
        case 0x13eed4u: goto label_13eed4;
        default: break;
    }

    ctx->pc = 0x13eec8u;

    // 0x13eec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13eec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eecc: 0xc0618c2  jal         func_186308
    ctx->pc = 0x13EECCu;
    SET_GPR_U32(ctx, 31, 0x13EED4u);
    ctx->pc = 0x13EED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EECCu;
    // 0x13eed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13EECCu, 0x13EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EED4u;
label_13eed4:
    // 0x13eed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13eed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eed8: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x13eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x13eedc: 0xc0618da  jal         func_186368
    ctx->pc = 0x13EEDCu;
    SET_GPR_U32(ctx, 31, 0x13EEE4u);
    ctx->pc = 0x13EEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EEDCu;
    // 0x13eee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13EEDCu, 0x13EEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EEE4u;
}
