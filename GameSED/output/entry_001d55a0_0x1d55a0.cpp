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

// Function: entry_001d55a0
// Address: 0x1d55a0 - 0x1d55d0
void entry_001d55a0_0x1d55a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d55a0_0x1d55a0");
#endif

    switch (ctx->pc) {
        case 0x1d55b8u: goto label_1d55b8;
        default: break;
    }

    ctx->pc = 0x1d55a0u;

label_1d55a0:
    // 0x1d55a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d55a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d55a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d55a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d55a8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d55a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d55ac: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x1d55acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x1d55b0: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D55B0u;
    SET_GPR_U32(ctx, 31, 0x1D55B8u);
    ctx->pc = 0x1D55B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D55B0u;
    // 0x1d55b4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D55B0u, 0x1D55B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D55B8u;
label_1d55b8:
    // 0x1d55b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d55b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d55bc: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1d55bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d55c0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D55C0u;
    {
        const bool branch_taken_0x1d55c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d55c0) {
            ctx->pc = 0x1D55C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D55C0u;
            // 0x1d55c4: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D55A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d55a0;
        }
    }
    ctx->pc = 0x1D55C8u;
    // 0x1d55c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D55C8u;
    {
        const bool branch_taken_0x1d55c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55C8u;
        // 0x1d55cc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d55c8) {
            ctx->pc = 0x1D55D4u;
            return;
        }
    }
    ctx->pc = 0x1D55D0u;
}
