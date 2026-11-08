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

// Function: entry_00148ccc
// Address: 0x148ccc - 0x148cec
void entry_00148ccc_0x148ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148ccc_0x148ccc");
#endif

    switch (ctx->pc) {
        case 0x148ce4u: goto label_148ce4;
        default: break;
    }

    ctx->pc = 0x148cccu;

    // 0x148ccc: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x148cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x148cd0: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x148cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x148cd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148cd8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x148cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x148cdc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x148CDCu;
    SET_GPR_U32(ctx, 31, 0x148CE4u);
    ctx->pc = 0x148CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148CDCu;
    // 0x148ce0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x148CDCu, 0x148CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148CE4u;
label_148ce4:
    // 0x148ce4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x148CE4u;
    SET_GPR_U32(ctx, 31, 0x148CECu);
    ctx->pc = 0x148CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148CE4u;
    // 0x148ce8: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x148CE4u, 0x148CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148CECu;
}
