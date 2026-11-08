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

// Function: entry_0010b6a8
// Address: 0x10b6a8 - 0x10b6c8
void entry_0010b6a8_0x10b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b6a8_0x10b6a8");
#endif

    switch (ctx->pc) {
        case 0x10b6b0u: goto label_10b6b0;
        default: break;
    }

    ctx->pc = 0x10b6a8u;

label_10b6a8:
    // 0x10b6a8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x10B6A8u;
    SET_GPR_U32(ctx, 31, 0x10B6B0u);
    ctx->pc = 0x10B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6A8u;
    // 0x10b6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x10B6A8u, 0x10B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B6B0u;
label_10b6b0:
    // 0x10b6b0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10b6b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x10b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x10b6b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b6bc: 0x1452fffa  bne         $v0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B6BCu;
    {
        const bool branch_taken_0x10b6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x10B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6BCu;
        // 0x10b6c0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6bc) {
            ctx->pc = 0x10B6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b6a8;
        }
    }
    ctx->pc = 0x10B6C4u;
    // 0x10b6c4: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x10b6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x10b6c8u;
}
