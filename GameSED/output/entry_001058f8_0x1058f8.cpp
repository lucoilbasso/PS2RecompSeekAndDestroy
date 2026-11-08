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

// Function: entry_001058f8
// Address: 0x1058f8 - 0x10590c
void entry_001058f8_0x1058f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001058f8_0x1058f8");
#endif

    switch (ctx->pc) {
        case 0x105908u: goto label_105908;
        default: break;
    }

    ctx->pc = 0x1058f8u;

    // 0x1058f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1058f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1058fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1058fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x105900: 0xc060dde  jal         func_183778
    ctx->pc = 0x105900u;
    SET_GPR_U32(ctx, 31, 0x105908u);
    ctx->pc = 0x105904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105900u;
    // 0x105904: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183778u, 0x105900u, 0x105908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105908u;
label_105908:
    // 0x105908: 0x24021605  addiu       $v0, $zero, 0x1605
    ctx->pc = 0x105908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5637));
    ctx->pc = 0x10590cu;
}
