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

// Function: caseD_10
// Address: 0x12fea0 - 0x12feb0
void caseD_10_0x12fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x12fea0");
#endif

    ctx->pc = 0x12fea0u;

    // 0x12fea0: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fea4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fea8: 0xc0483ee  jal         func_120FB8
    ctx->pc = 0x12FEA8u;
    SET_GPR_U32(ctx, 31, 0x12FEB0u);
    ctx->pc = 0x12FEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FEA8u;
    // 0x12feac: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120FB8u, 0x12FEA8u, 0x12FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FEB0u;
}
