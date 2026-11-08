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

// Function: entry_0012e1b4
// Address: 0x12e1b4 - 0x12e1c0
void entry_0012e1b4_0x12e1b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e1b4_0x12e1b4");
#endif

    ctx->pc = 0x12e1b4u;

    // 0x12e1b4: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x12e1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x12e1b8: 0xc04c04c  jal         func_130130
    ctx->pc = 0x12E1B8u;
    SET_GPR_U32(ctx, 31, 0x12E1C0u);
    ctx->pc = 0x12E1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1B8u;
    // 0x12e1bc: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130130u, 0x12E1B8u, 0x12E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1C0u;
}
