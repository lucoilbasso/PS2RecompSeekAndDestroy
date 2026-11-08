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

// Function: caseD_17
// Address: 0x18c8a8 - 0x18c8c8
void caseD_17_0x18c8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_17_0x18c8a8");
#endif

    switch (ctx->pc) {
        case 0x18c8b8u: goto label_18c8b8;
        default: break;
    }

    ctx->pc = 0x18c8a8u;

    // 0x18c8a8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18c8ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x18c8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18c8b0: 0xc05f238  jal         func_17C8E0
    ctx->pc = 0x18C8B0u;
    SET_GPR_U32(ctx, 31, 0x18C8B8u);
    ctx->pc = 0x18C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8B0u;
    // 0x18c8b4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C8E0u, 0x18C8B0u, 0x18C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C8B8u;
label_18c8b8:
    // 0x18c8b8: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x18c8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18c8bc: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x18c8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18c8c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18C8C0u;
    {
        const bool branch_taken_0x18c8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8C0u;
        // 0x18c8c4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8c0) {
            ctx->pc = 0x18C8E4u;
            return;
        }
    }
    ctx->pc = 0x18C8C8u;
}
