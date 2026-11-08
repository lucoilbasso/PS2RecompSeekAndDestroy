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

// Function: entry_001a83b8
// Address: 0x1a83b8 - 0x1a83c4
void entry_001a83b8_0x1a83b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a83b8_0x1a83b8");
#endif

    switch (ctx->pc) {
        case 0x1a83c0u: goto label_1a83c0;
        default: break;
    }

    ctx->pc = 0x1a83b8u;

    // 0x1a83b8: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A83B8u;
    SET_GPR_U32(ctx, 31, 0x1A83C0u);
    ctx->pc = 0x1A83BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83B8u;
    // 0x1a83bc: 0x266494a8  addiu       $a0, $s3, -0x6B58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A83B8u, 0x1A83C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83C0u;
label_1a83c0:
    // 0x1a83c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x1a83c4u;
}
