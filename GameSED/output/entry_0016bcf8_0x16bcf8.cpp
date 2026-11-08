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

// Function: entry_0016bcf8
// Address: 0x16bcf8 - 0x16bd00
void entry_0016bcf8_0x16bcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bcf8_0x16bcf8");
#endif

    ctx->pc = 0x16bcf8u;

    // 0x16bcf8: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x16BCF8u;
    SET_GPR_U32(ctx, 31, 0x16BD00u);
    ctx->pc = 0x16BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BCF8u;
    // 0x16bcfc: 0x24841220  addiu       $a0, $a0, 0x1220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x16BCF8u, 0x16BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BD00u;
}
