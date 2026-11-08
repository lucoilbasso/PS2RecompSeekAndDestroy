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

// Function: entry_001b8110
// Address: 0x1b8110 - 0x1b8124
void entry_001b8110_0x1b8110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8110_0x1b8110");
#endif

    switch (ctx->pc) {
        case 0x1b8120u: goto label_1b8120;
        default: break;
    }

    ctx->pc = 0x1b8110u;

    // 0x1b8110: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1b8110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1b8114: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b8114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8118: 0xc06bc48  jal         func_1AF120
    ctx->pc = 0x1B8118u;
    SET_GPR_U32(ctx, 31, 0x1B8120u);
    ctx->pc = 0x1B811Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8118u;
    // 0x1b811c: 0x24a587c0  addiu       $a1, $a1, -0x7840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF120u, 0x1B8118u, 0x1B8120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8120u;
label_1b8120:
    // 0x1b8120: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b8120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b8124u;
}
