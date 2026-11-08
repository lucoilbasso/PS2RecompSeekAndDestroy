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

// Function: entry_001102dc
// Address: 0x1102dc - 0x1102e8
void entry_001102dc_0x1102dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001102dc_0x1102dc");
#endif

    ctx->pc = 0x1102dcu;

    // 0x1102dc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1102dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1102e0: 0xc064ec6  jal         func_193B18
    ctx->pc = 0x1102E0u;
    SET_GPR_U32(ctx, 31, 0x1102E8u);
    ctx->pc = 0x1102E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102E0u;
    // 0x1102e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B18u, 0x1102E0u, 0x1102E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102E8u;
}
