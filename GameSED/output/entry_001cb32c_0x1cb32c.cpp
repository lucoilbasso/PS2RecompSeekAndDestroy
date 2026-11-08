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

// Function: entry_001cb32c
// Address: 0x1cb32c - 0x1cb33c
void entry_001cb32c_0x1cb32c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb32c_0x1cb32c");
#endif

    switch (ctx->pc) {
        case 0x1cb334u: goto label_1cb334;
        default: break;
    }

    ctx->pc = 0x1cb32cu;

    // 0x1cb32c: 0xc072c48  jal         func_1CB120
    ctx->pc = 0x1CB32Cu;
    SET_GPR_U32(ctx, 31, 0x1CB334u);
    ctx->pc = 0x1CB330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB32Cu;
    // 0x1cb330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB120u, 0x1CB32Cu, 0x1CB334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB334u;
label_1cb334:
    // 0x1cb334: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cb334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb338: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1cb338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1cb33cu;
}
