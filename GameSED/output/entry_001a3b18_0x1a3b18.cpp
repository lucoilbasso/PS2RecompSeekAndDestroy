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

// Function: entry_001a3b18
// Address: 0x1a3b18 - 0x1a3b30
void entry_001a3b18_0x1a3b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3b18_0x1a3b18");
#endif

    switch (ctx->pc) {
        case 0x1a3b2cu: goto label_1a3b2c;
        default: break;
    }

    ctx->pc = 0x1a3b18u;

    // 0x1a3b18: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1a3b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a3b1c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a3b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a3b20: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a3b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a3b24: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A3B24u;
    SET_GPR_U32(ctx, 31, 0x1A3B2Cu);
    ctx->pc = 0x1A3B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B24u;
    // 0x1a3b28: 0x24a59250  addiu       $a1, $a1, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A3B24u, 0x1A3B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3B2Cu;
label_1a3b2c:
    // 0x1a3b2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a3b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a3b30u;
}
