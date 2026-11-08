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

// Function: entry_0014aa50
// Address: 0x14aa50 - 0x14aa5c
void entry_0014aa50_0x14aa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aa50_0x14aa50");
#endif

    switch (ctx->pc) {
        case 0x14aa58u: goto label_14aa58;
        default: break;
    }

    ctx->pc = 0x14aa50u;

    // 0x14aa50: 0xc0532c8  jal         func_14CB20
    ctx->pc = 0x14AA50u;
    SET_GPR_U32(ctx, 31, 0x14AA58u);
    ctx->pc = 0x14AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA50u;
    // 0x14aa54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CB20u, 0x14AA50u, 0x14AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA58u;
label_14aa58:
    // 0x14aa58: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x14aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
    ctx->pc = 0x14aa5cu;
}
