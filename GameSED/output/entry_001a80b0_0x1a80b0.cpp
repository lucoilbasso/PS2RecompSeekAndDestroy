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

// Function: entry_001a80b0
// Address: 0x1a80b0 - 0x1a80d4
void entry_001a80b0_0x1a80b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a80b0_0x1a80b0");
#endif

    switch (ctx->pc) {
        case 0x1a80d0u: goto label_1a80d0;
        default: break;
    }

    ctx->pc = 0x1a80b0u;

    // 0x1a80b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a80b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a80b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a80b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a80b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a80bc: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x1a80bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a80c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A80C0u;
    {
        const bool branch_taken_0x1a80c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80C0u;
        // 0x1a80c4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80c0) {
            ctx->pc = 0x1A80D4u;
            return;
        }
    }
    ctx->pc = 0x1A80C8u;
    // 0x1a80c8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A80C8u;
    SET_GPR_U32(ctx, 31, 0x1A80D0u);
    ctx->pc = 0x1A80CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80C8u;
    // 0x1a80cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A80C8u, 0x1A80D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A80D0u;
label_1a80d0:
    // 0x1a80d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a80d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a80d4u;
}
