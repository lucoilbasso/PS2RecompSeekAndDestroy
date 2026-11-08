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

// Function: entry_0019a818
// Address: 0x19a818 - 0x19a82c
void entry_0019a818_0x19a818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a818_0x19a818");
#endif

    ctx->pc = 0x19a818u;

    // 0x19a818: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x19a818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x19a81c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a820: 0x24a584f0  addiu       $a1, $a1, -0x7B10
    ctx->pc = 0x19a820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935792));
    // 0x19a824: 0xc068186  jal         func_1A0618
    ctx->pc = 0x19A824u;
    SET_GPR_U32(ctx, 31, 0x19A82Cu);
    ctx->pc = 0x19A828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A824u;
    // 0x19a828: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x19A824u, 0x19A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A82Cu;
}
