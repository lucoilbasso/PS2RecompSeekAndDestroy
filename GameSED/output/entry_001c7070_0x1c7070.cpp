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

// Function: entry_001c7070
// Address: 0x1c7070 - 0x1c7090
void entry_001c7070_0x1c7070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7070_0x1c7070");
#endif

    switch (ctx->pc) {
        case 0x1c7080u: goto label_1c7080;
        default: break;
    }

    ctx->pc = 0x1c7070u;

    // 0x1c7070: 0x6020007  bltzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7070u;
    {
        const bool branch_taken_0x1c7070 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1c7070) {
            ctx->pc = 0x1C7074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7070u;
            // 0x1c7074: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7090u;
            return;
        }
    }
    ctx->pc = 0x1C7078u;
    // 0x1c7078: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1C7078u;
    SET_GPR_U32(ctx, 31, 0x1C7080u);
    ctx->pc = 0x1C707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7078u;
    // 0x1c707c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1C7078u, 0x1C7080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7080u;
label_1c7080:
    // 0x1c7080: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1c7080u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x1c7084: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7084u;
    {
        const bool branch_taken_0x1c7084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7084u;
        // 0x1c7088: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7084) {
            ctx->pc = 0x1C7098u;
            return;
        }
    }
    ctx->pc = 0x1C708Cu;
    // 0x1c708c: 0x0  nop
    ctx->pc = 0x1c708cu;
    // NOP
    ctx->pc = 0x1c7090u;
}
