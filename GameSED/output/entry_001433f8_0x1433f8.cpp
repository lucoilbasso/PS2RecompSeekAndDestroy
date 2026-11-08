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

// Function: entry_001433f8
// Address: 0x1433f8 - 0x143404
void entry_001433f8_0x1433f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001433f8_0x1433f8");
#endif

    ctx->pc = 0x1433f8u;

    // 0x1433f8: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x1433f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1433fc: 0xc060e88  jal         func_183A20
    ctx->pc = 0x1433FCu;
    SET_GPR_U32(ctx, 31, 0x143404u);
    ctx->pc = 0x143400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1433FCu;
    // 0x143400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x1433FCu, 0x143404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143404u;
}
