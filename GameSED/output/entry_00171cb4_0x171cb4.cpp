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

// Function: entry_00171cb4
// Address: 0x171cb4 - 0x171cbc
void entry_00171cb4_0x171cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171cb4_0x171cb4");
#endif

    ctx->pc = 0x171cb4u;

    // 0x171cb4: 0xc05d590  jal         func_175640
    ctx->pc = 0x171CB4u;
    SET_GPR_U32(ctx, 31, 0x171CBCu);
    ctx->pc = 0x171CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171CB4u;
    // 0x171cb8: 0x248413b0  addiu       $a0, $a0, 0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175640u, 0x171CB4u, 0x171CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171CBCu;
}
