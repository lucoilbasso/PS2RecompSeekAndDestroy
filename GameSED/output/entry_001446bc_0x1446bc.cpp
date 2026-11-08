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

// Function: entry_001446bc
// Address: 0x1446bc - 0x1446cc
void entry_001446bc_0x1446bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001446bc_0x1446bc");
#endif

    switch (ctx->pc) {
        case 0x1446c4u: goto label_1446c4;
        default: break;
    }

    ctx->pc = 0x1446bcu;

    // 0x1446bc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1446BCu;
    SET_GPR_U32(ctx, 31, 0x1446C4u);
    ctx->pc = 0x1446C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1446BCu;
    // 0x1446c0: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1446BCu, 0x1446C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446C4u;
label_1446c4:
    // 0x1446c4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1446C4u;
    SET_GPR_U32(ctx, 31, 0x1446CCu);
    ctx->pc = 0x1446C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1446C4u;
    // 0x1446c8: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1446C4u, 0x1446CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446CCu;
}
