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

// Function: entry_001cb188
// Address: 0x1cb188 - 0x1cb194
void entry_001cb188_0x1cb188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb188_0x1cb188");
#endif

    switch (ctx->pc) {
        case 0x1cb190u: goto label_1cb190;
        default: break;
    }

    ctx->pc = 0x1cb188u;

    // 0x1cb188: 0xc072bfe  jal         func_1CAFF8
    ctx->pc = 0x1CB188u;
    SET_GPR_U32(ctx, 31, 0x1CB190u);
    ctx->pc = 0x1CB18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB188u;
    // 0x1cb18c: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAFF8u, 0x1CB188u, 0x1CB190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB190u;
label_1cb190:
    // 0x1cb190: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cb194u;
}
