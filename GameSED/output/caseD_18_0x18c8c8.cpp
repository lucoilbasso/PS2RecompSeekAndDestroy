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

// Function: caseD_18
// Address: 0x18c8c8 - 0x18c8e4
void caseD_18_0x18c8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_18_0x18c8c8");
#endif

    switch (ctx->pc) {
        case 0x18c8d8u: goto label_18c8d8;
        default: break;
    }

    ctx->pc = 0x18c8c8u;

    // 0x18c8c8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18c8cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18c8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18c8d0: 0xc05f238  jal         func_17C8E0
    ctx->pc = 0x18C8D0u;
    SET_GPR_U32(ctx, 31, 0x18C8D8u);
    ctx->pc = 0x18C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8D0u;
    // 0x18c8d4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C8E0u, 0x18C8D0u, 0x18C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C8D8u;
label_18c8d8:
    // 0x18c8d8: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x18c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18c8dc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x18c8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x18c8e0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x18c8e4u;
}
