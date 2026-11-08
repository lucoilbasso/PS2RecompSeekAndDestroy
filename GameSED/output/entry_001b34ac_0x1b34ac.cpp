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

// Function: entry_001b34ac
// Address: 0x1b34ac - 0x1b34d8
void entry_001b34ac_0x1b34ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b34ac_0x1b34ac");
#endif

    switch (ctx->pc) {
        case 0x1b34b4u: goto label_1b34b4;
        default: break;
    }

    ctx->pc = 0x1b34acu;

    // 0x1b34ac: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B34ACu;
    SET_GPR_U32(ctx, 31, 0x1B34B4u);
    ctx->pc = 0x1B34B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B34ACu;
    // 0x1b34b0: 0x8e04aa14  lw          $a0, -0x55EC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B34ACu, 0x1B34B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B34B4u;
label_1b34b4:
    // 0x1b34b4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1b34b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1b34b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b34b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34bc: 0x8ca3a980  lw          $v1, -0x5680($a1)
    ctx->pc = 0x1b34bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24A980u));
    // 0x1b34c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b34c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b34c4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B34C4u;
    {
        const bool branch_taken_0x1b34c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B34C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B34C4u;
        // 0x1b34c8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34c4) {
            ctx->pc = 0x1B34F4u;
            return;
        }
    }
    ctx->pc = 0x1B34CCu;
    // 0x1b34cc: 0x24a3a980  addiu       $v1, $a1, -0x5680
    ctx->pc = 0x1b34ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945152));
    // 0x1b34d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b34d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b34d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b34d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1b34d8u;
}
