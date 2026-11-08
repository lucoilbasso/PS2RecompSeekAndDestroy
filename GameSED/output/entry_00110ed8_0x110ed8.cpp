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

// Function: entry_00110ed8
// Address: 0x110ed8 - 0x110ef0
void entry_00110ed8_0x110ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110ed8_0x110ed8");
#endif

    switch (ctx->pc) {
        case 0x110ee8u: goto label_110ee8;
        default: break;
    }

    ctx->pc = 0x110ed8u;

    // 0x110ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110edc: 0x24a53ea0  addiu       $a1, $a1, 0x3EA0
    ctx->pc = 0x110edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16032));
    // 0x110ee0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x110EE0u;
    SET_GPR_U32(ctx, 31, 0x110EE8u);
    ctx->pc = 0x110EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110EE0u;
    // 0x110ee4: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x110EE0u, 0x110EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EE8u;
label_110ee8:
    // 0x110ee8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x110ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110eec: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x110eecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110ef0u;
}
