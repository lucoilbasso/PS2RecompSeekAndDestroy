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

// Function: entry_001d0438
// Address: 0x1d0438 - 0x1d045c
void entry_001d0438_0x1d0438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0438_0x1d0438");
#endif

    switch (ctx->pc) {
        case 0x1d044cu: goto label_1d044c;
        default: break;
    }

    ctx->pc = 0x1d0438u;

    // 0x1d0438: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x1d0438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x1d043c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D043Cu;
    {
        const bool branch_taken_0x1d043c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D043Cu;
        // 0x1d0440: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d043c) {
            ctx->pc = 0x1D045Cu;
            return;
        }
    }
    ctx->pc = 0x1D0444u;
    // 0x1d0444: 0xc0740e4  jal         func_1D0390
    ctx->pc = 0x1D0444u;
    SET_GPR_U32(ctx, 31, 0x1D044Cu);
    ctx->pc = 0x1D0390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0390u, 0x1D0444u, 0x1D044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D044Cu;
label_1d044c:
    // 0x1d044c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D044Cu;
    {
        const bool branch_taken_0x1d044c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D044Cu;
        // 0x1d0450: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d044c) {
            ctx->pc = 0x1D0468u;
            return;
        }
    }
    ctx->pc = 0x1D0454u;
    // 0x1d0454: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x1d0454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x1d0458: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1d0458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x1d045cu;
}
