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

// Function: entry_00144394
// Address: 0x144394 - 0x1443a4
void entry_00144394_0x144394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144394_0x144394");
#endif

    switch (ctx->pc) {
        case 0x14439cu: goto label_14439c;
        default: break;
    }

    ctx->pc = 0x144394u;

    // 0x144394: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x144394u;
    SET_GPR_U32(ctx, 31, 0x14439Cu);
    ctx->pc = 0x144398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144394u;
    // 0x144398: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x144394u, 0x14439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14439Cu;
label_14439c:
    // 0x14439c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x14439Cu;
    SET_GPR_U32(ctx, 31, 0x1443A4u);
    ctx->pc = 0x1443A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14439Cu;
    // 0x1443a0: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x14439Cu, 0x1443A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443A4u;
}
