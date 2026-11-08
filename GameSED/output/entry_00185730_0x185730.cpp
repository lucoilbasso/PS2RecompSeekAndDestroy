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

// Function: entry_00185730
// Address: 0x185730 - 0x185748
void entry_00185730_0x185730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185730_0x185730");
#endif

    switch (ctx->pc) {
        case 0x185740u: goto label_185740;
        default: break;
    }

    ctx->pc = 0x185730u;

    // 0x185730: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x185730u;
    {
        const bool branch_taken_0x185730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185730u;
        // 0x185734: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185730) {
            ctx->pc = 0x185748u;
            return;
        }
    }
    ctx->pc = 0x185738u;
    // 0x185738: 0xc069268  jal         func_1A49A0
    ctx->pc = 0x185738u;
    SET_GPR_U32(ctx, 31, 0x185740u);
    ctx->pc = 0x18573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185738u;
    // 0x18573c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A49A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A49A0u, 0x185738u, 0x185740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185740u;
label_185740:
    // 0x185740: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x185740u;
    {
        const bool branch_taken_0x185740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185740u;
        // 0x185744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185740) {
            ctx->pc = 0x18574Cu;
            return;
        }
    }
    ctx->pc = 0x185748u;
}
