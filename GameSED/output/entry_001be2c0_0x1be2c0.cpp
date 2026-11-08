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

// Function: entry_001be2c0
// Address: 0x1be2c0 - 0x1be2cc
void entry_001be2c0_0x1be2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be2c0_0x1be2c0");
#endif

    switch (ctx->pc) {
        case 0x1be2c8u: goto label_1be2c8;
        default: break;
    }

    ctx->pc = 0x1be2c0u;

    // 0x1be2c0: 0xc06f88e  jal         func_1BE238
    ctx->pc = 0x1BE2C0u;
    SET_GPR_U32(ctx, 31, 0x1BE2C8u);
    ctx->pc = 0x1BE2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE2C0u;
    // 0x1be2c4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE238u, 0x1BE2C0u, 0x1BE2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE2C8u;
label_1be2c8:
    // 0x1be2c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1be2ccu;
}
