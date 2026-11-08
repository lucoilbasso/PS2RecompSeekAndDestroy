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

// Function: entry_00178dc0
// Address: 0x178dc0 - 0x178dc8
void entry_00178dc0_0x178dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178dc0_0x178dc0");
#endif

    ctx->pc = 0x178dc0u;

    // 0x178dc0: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x178DC0u;
    SET_GPR_U32(ctx, 31, 0x178DC8u);
    ctx->pc = 0x178DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DC0u;
    // 0x178dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x178DC0u, 0x178DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DC8u;
}
