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

// Function: entry_001a3e30
// Address: 0x1a3e30 - 0x1a3e48
void entry_001a3e30_0x1a3e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3e30_0x1a3e30");
#endif

    switch (ctx->pc) {
        case 0x1a3e44u: goto label_1a3e44;
        default: break;
    }

    ctx->pc = 0x1a3e30u;

    // 0x1a3e30: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1a3e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a3e34: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a3e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a3e38: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a3e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a3e3c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A3E3Cu;
    SET_GPR_U32(ctx, 31, 0x1A3E44u);
    ctx->pc = 0x1A3E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E3Cu;
    // 0x1a3e40: 0x24a59250  addiu       $a1, $a1, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A3E3Cu, 0x1A3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E44u;
label_1a3e44:
    // 0x1a3e44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a3e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a3e48u;
}
