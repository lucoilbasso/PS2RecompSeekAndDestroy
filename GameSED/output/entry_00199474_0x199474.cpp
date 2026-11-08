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

// Function: entry_00199474
// Address: 0x199474 - 0x199488
void entry_00199474_0x199474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199474_0x199474");
#endif

    ctx->pc = 0x199474u;

    // 0x199474: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x199474u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x199478: 0x5600ffef  bnel        $s0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x199478u;
    {
        const bool branch_taken_0x199478 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x199478) {
            ctx->pc = 0x19947Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199478u;
            // 0x19947c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199438u;
            return;
        }
    }
    ctx->pc = 0x199480u;
    // 0x199480: 0xc05dd1c  jal         func_177470
    ctx->pc = 0x199480u;
    SET_GPR_U32(ctx, 31, 0x199488u);
    ctx->pc = 0x177470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177470u, 0x199480u, 0x199488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199488u;
}
