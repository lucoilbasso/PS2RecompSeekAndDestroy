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

// Function: entry_00184bf8
// Address: 0x184bf8 - 0x184c04
void entry_00184bf8_0x184bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184bf8_0x184bf8");
#endif

    ctx->pc = 0x184bf8u;

    // 0x184bf8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x184bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184bfc: 0xc06182a  jal         func_1860A8
    ctx->pc = 0x184BFCu;
    SET_GPR_U32(ctx, 31, 0x184C04u);
    ctx->pc = 0x184C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184BFCu;
    // 0x184c00: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1860A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1860A8u, 0x184BFCu, 0x184C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C04u;
}
