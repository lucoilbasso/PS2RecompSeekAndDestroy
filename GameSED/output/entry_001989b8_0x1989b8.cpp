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

// Function: entry_001989b8
// Address: 0x1989b8 - 0x1989c4
void entry_001989b8_0x1989b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001989b8_0x1989b8");
#endif

    switch (ctx->pc) {
        case 0x1989c0u: goto label_1989c0;
        default: break;
    }

    ctx->pc = 0x1989b8u;

    // 0x1989b8: 0xc0663b6  jal         func_198ED8
    ctx->pc = 0x1989B8u;
    SET_GPR_U32(ctx, 31, 0x1989C0u);
    ctx->pc = 0x1989BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989B8u;
    // 0x1989bc: 0x248463f0  addiu       $a0, $a0, 0x63F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198ED8u, 0x1989B8u, 0x1989C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1989C0u;
label_1989c0:
    // 0x1989c0: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x1989c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    ctx->pc = 0x1989c4u;
}
