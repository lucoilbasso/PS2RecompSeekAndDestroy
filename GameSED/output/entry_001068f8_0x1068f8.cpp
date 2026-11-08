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

// Function: entry_001068f8
// Address: 0x1068f8 - 0x106904
void entry_001068f8_0x1068f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001068f8_0x1068f8");
#endif

    ctx->pc = 0x1068f8u;

    // 0x1068f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1068f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1068fc: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x1068FCu;
    SET_GPR_U32(ctx, 31, 0x106904u);
    ctx->pc = 0x106900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1068FCu;
    // 0x106900: 0x2484015c  addiu       $a0, $a0, 0x15C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x1068FCu, 0x106904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106904u;
}
