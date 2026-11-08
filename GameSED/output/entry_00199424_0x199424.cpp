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

// Function: entry_00199424
// Address: 0x199424 - 0x199438
void entry_00199424_0x199424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199424_0x199424");
#endif

    switch (ctx->pc) {
        case 0x199430u: goto label_199430;
        default: break;
    }

    ctx->pc = 0x199424u;

    // 0x199424: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x199424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199428: 0xc05dd1a  jal         func_177468
    ctx->pc = 0x199428u;
    SET_GPR_U32(ctx, 31, 0x199430u);
    ctx->pc = 0x19942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199428u;
    // 0x19942c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177468u, 0x199428u, 0x199430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199430u;
label_199430:
    // 0x199430: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x199430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199434: 0x0  nop
    ctx->pc = 0x199434u;
    // NOP
    ctx->pc = 0x199438u;
}
