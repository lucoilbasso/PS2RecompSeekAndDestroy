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

// Function: entry_001cb3c8
// Address: 0x1cb3c8 - 0x1cb3f0
void entry_001cb3c8_0x1cb3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb3c8_0x1cb3c8");
#endif

    switch (ctx->pc) {
        case 0x1cb3d0u: goto label_1cb3d0;
        default: break;
    }

    ctx->pc = 0x1cb3c8u;

label_1cb3c8:
    // 0x1cb3c8: 0xc072c32  jal         func_1CB0C8
    ctx->pc = 0x1CB3C8u;
    SET_GPR_U32(ctx, 31, 0x1CB3D0u);
    ctx->pc = 0x1CB3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3C8u;
    // 0x1cb3cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB0C8u, 0x1CB3C8u, 0x1CB3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3D0u;
label_1cb3d0:
    // 0x1cb3d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb3d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3d4: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB3D4u;
    {
        const bool branch_taken_0x1cb3d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3D4u;
        // 0x1cb3d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb3d4) {
            ctx->pc = 0x1CB3FCu;
            return;
        }
    }
    ctx->pc = 0x1CB3DCu;
    // 0x1cb3dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb3e0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CB3E0u;
    {
        const bool branch_taken_0x1cb3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3E0u;
        // 0x1cb3e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb3e0) {
            ctx->pc = 0x1CB3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb3c8;
        }
    }
    ctx->pc = 0x1CB3E8u;
    // 0x1cb3e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB3E8u;
    {
        const bool branch_taken_0x1cb3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb3e8) {
            ctx->pc = 0x1CB3FCu;
            return;
        }
    }
    ctx->pc = 0x1CB3F0u;
}
