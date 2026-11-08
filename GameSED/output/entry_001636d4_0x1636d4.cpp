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

// Function: entry_001636d4
// Address: 0x1636d4 - 0x1636e4
void entry_001636d4_0x1636d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001636d4_0x1636d4");
#endif

    switch (ctx->pc) {
        case 0x1636dcu: goto label_1636dc;
        default: break;
    }

    ctx->pc = 0x1636d4u;

    // 0x1636d4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1636D4u;
    SET_GPR_U32(ctx, 31, 0x1636DCu);
    ctx->pc = 0x1636D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1636D4u;
    // 0x1636d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1636D4u, 0x1636DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636DCu;
label_1636dc:
    // 0x1636dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1636dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1636e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1636e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x1636e4u;
}
