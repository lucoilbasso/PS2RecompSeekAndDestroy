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

// Function: entry_001db6c0
// Address: 0x1db6c0 - 0x1db6d4
void entry_001db6c0_0x1db6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db6c0_0x1db6c0");
#endif

    switch (ctx->pc) {
        case 0x1db6d0u: goto label_1db6d0;
        default: break;
    }

    ctx->pc = 0x1db6c0u;

    // 0x1db6c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db6c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1db6c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db6c8: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DB6C8u;
    SET_GPR_U32(ctx, 31, 0x1DB6D0u);
    ctx->pc = 0x1DB6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB6C8u;
    // 0x1db6cc: 0x24a57538  addiu       $a1, $a1, 0x7538 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DB6C8u, 0x1DB6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB6D0u;
label_1db6d0:
    // 0x1db6d0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1db6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1db6d4u;
}
