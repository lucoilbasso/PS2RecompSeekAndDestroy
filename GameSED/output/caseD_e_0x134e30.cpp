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

// Function: caseD_e
// Address: 0x134e30 - 0x134e44
void caseD_e_0x134e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x134e30");
#endif

    ctx->pc = 0x134e30u;

    // 0x134e30: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x134e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x134e34: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x134e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x134e38: 0x8c46b830  lw          $a2, -0x47D0($v0)
    ctx->pc = 0x134e38u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x1FB830u));
    // 0x134e3c: 0xc04ea76  jal         func_13A9D8
    ctx->pc = 0x134E3Cu;
    SET_GPR_U32(ctx, 31, 0x134E44u);
    ctx->pc = 0x134E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E3Cu;
    // 0x134e40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A9D8u, 0x134E3Cu, 0x134E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E44u;
}
