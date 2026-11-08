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

// Function: entry_001cd918
// Address: 0x1cd918 - 0x1cd930
void entry_001cd918_0x1cd918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd918_0x1cd918");
#endif

    ctx->pc = 0x1cd918u;

label_1cd918:
    // 0x1cd918: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1cd918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1cd91c:
    // 0x1cd91c: 0x8c5d0008  lw          $sp, 0x8($v0)
    ctx->pc = 0x1cd91cu;
    SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cd920:
    // 0x1cd920: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1cd920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1cd924:
    // 0x1cd924: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cd924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1cd928:
    // 0x1cd928: 0x600008  jr          $v1
label_1cd92c:
    if (ctx->pc == 0x1CD92Cu) {
        ctx->pc = 0x1CD92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD928u;
        // 0x1cd92c: 0x8c5e0000  lw          $fp, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD930u;
        goto label_fallthrough_0x1cd928;
    }
    ctx->pc = 0x1CD928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = 0x1CD92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD928u;
        // 0x1cd92c: 0x8c5e0000  lw          $fp, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD928u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1cd928:
    ctx->pc = 0x1CD930u;
}
