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

// Function: entry_001d01e0
// Address: 0x1d01e0 - 0x1d01f0
void entry_001d01e0_0x1d01e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d01e0_0x1d01e0");
#endif

    switch (ctx->pc) {
        case 0x1d01e8u: goto label_1d01e8;
        default: break;
    }

    ctx->pc = 0x1d01e0u;

    // 0x1d01e0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1D01E0u;
    SET_GPR_U32(ctx, 31, 0x1D01E8u);
    ctx->pc = 0x1D01E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D01E0u;
    // 0x1d01e4: 0x8c44aa40  lw          $a0, -0x55C0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1D01E0u, 0x1D01E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D01E8u;
label_1d01e8:
    // 0x1d01e8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1d01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1d01ec: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1d01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x1d01f0u;
}
