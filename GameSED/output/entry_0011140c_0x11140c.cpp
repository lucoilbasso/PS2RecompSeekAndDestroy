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

// Function: entry_0011140c
// Address: 0x11140c - 0x111424
void entry_0011140c_0x11140c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011140c_0x11140c");
#endif

    switch (ctx->pc) {
        case 0x111420u: goto label_111420;
        default: break;
    }

    ctx->pc = 0x11140cu;

    // 0x11140c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11140cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x111410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111414: 0x24a53ee0  addiu       $a1, $a1, 0x3EE0
    ctx->pc = 0x111414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16096));
    // 0x111418: 0xc068186  jal         func_1A0618
    ctx->pc = 0x111418u;
    SET_GPR_U32(ctx, 31, 0x111420u);
    ctx->pc = 0x11141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111418u;
    // 0x11141c: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x111418u, 0x111420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111420u;
label_111420:
    // 0x111420: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x111420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111424u;
}
