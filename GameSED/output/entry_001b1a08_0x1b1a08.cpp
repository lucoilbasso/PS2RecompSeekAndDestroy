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

// Function: entry_001b1a08
// Address: 0x1b1a08 - 0x1b1a1c
void entry_001b1a08_0x1b1a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1a08_0x1b1a08");
#endif

    switch (ctx->pc) {
        case 0x1b1a10u: goto label_1b1a10;
        case 0x1b1a18u: goto label_1b1a18;
        default: break;
    }

    ctx->pc = 0x1b1a08u;

    // 0x1b1a08: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B1A08u;
    SET_GPR_U32(ctx, 31, 0x1B1A10u);
    ctx->pc = 0x1B1A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A08u;
    // 0x1b1a0c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B1A08u, 0x1B1A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A10u;
label_1b1a10:
    // 0x1b1a10: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B1A10u;
    SET_GPR_U32(ctx, 31, 0x1B1A18u);
    ctx->pc = 0x1B1A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A10u;
    // 0x1b1a14: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B1A10u, 0x1B1A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A18u;
label_1b1a18:
    // 0x1b1a18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b1a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b1a1cu;
}
