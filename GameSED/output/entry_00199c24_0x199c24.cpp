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

// Function: entry_00199c24
// Address: 0x199c24 - 0x199c38
void entry_00199c24_0x199c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199c24_0x199c24");
#endif

    switch (ctx->pc) {
        case 0x199c30u: goto label_199c30;
        default: break;
    }

    ctx->pc = 0x199c24u;

    // 0x199c24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x199c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c28: 0xc05dd1a  jal         func_177468
    ctx->pc = 0x199C28u;
    SET_GPR_U32(ctx, 31, 0x199C30u);
    ctx->pc = 0x199C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C28u;
    // 0x199c2c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177468u, 0x199C28u, 0x199C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C30u;
label_199c30:
    // 0x199c30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x199c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199c34: 0x0  nop
    ctx->pc = 0x199c34u;
    // NOP
    ctx->pc = 0x199c38u;
}
