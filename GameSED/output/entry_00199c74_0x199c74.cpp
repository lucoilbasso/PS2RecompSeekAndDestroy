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

// Function: entry_00199c74
// Address: 0x199c74 - 0x199c88
void entry_00199c74_0x199c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199c74_0x199c74");
#endif

    ctx->pc = 0x199c74u;

    // 0x199c74: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x199c74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x199c78: 0x5600ffef  bnel        $s0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x199C78u;
    {
        const bool branch_taken_0x199c78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x199c78) {
            ctx->pc = 0x199C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199C78u;
            // 0x199c7c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199C38u;
            return;
        }
    }
    ctx->pc = 0x199C80u;
    // 0x199c80: 0xc05dd1c  jal         func_177470
    ctx->pc = 0x199C80u;
    SET_GPR_U32(ctx, 31, 0x199C88u);
    ctx->pc = 0x177470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177470u, 0x199C80u, 0x199C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C88u;
}
