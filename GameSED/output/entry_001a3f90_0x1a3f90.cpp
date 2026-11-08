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

// Function: entry_001a3f90
// Address: 0x1a3f90 - 0x1a3fa8
void entry_001a3f90_0x1a3f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3f90_0x1a3f90");
#endif

    switch (ctx->pc) {
        case 0x1a3fa0u: goto label_1a3fa0;
        default: break;
    }

    ctx->pc = 0x1a3f90u;

label_1a3f90:
    // 0x1a3f90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a3f94:
    if (ctx->pc == 0x1A3F94u) {
        ctx->pc = 0x1A3F98u;
        goto label_1a3f98;
    }
    ctx->pc = 0x1A3F90u;
    {
        const bool branch_taken_0x1a3f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f90) {
            ctx->pc = 0x1A3FB0u;
            return;
        }
    }
    ctx->pc = 0x1A3F98u;
label_1a3f98:
    // 0x1a3f98: 0x40f809  jalr        $v0
label_1a3f9c:
    if (ctx->pc == 0x1A3F9Cu) {
        ctx->pc = 0x1A3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F98u;
        // 0x1a3f9c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3FA0u;
        goto label_1a3fa0;
    }
    ctx->pc = 0x1A3F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3FA0u);
        ctx->pc = 0x1A3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F98u;
        // 0x1a3f9c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3F98u, 0x1A3FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3FA0u;
label_1a3fa0:
    // 0x1a3fa0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a3fa4:
    if (ctx->pc == 0x1A3FA4u) {
        ctx->pc = 0x1A3FA8u;
        goto label_fallthrough_0x1a3fa0;
    }
    ctx->pc = 0x1A3FA0u;
    {
        const bool branch_taken_0x1a3fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3fa0) {
            ctx->pc = 0x1A3FB0u;
            return;
        }
    }
label_fallthrough_0x1a3fa0:
    ctx->pc = 0x1A3FA8u;
}
