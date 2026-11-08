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

// Function: entry_00134b28
// Address: 0x134b28 - 0x134b44
void entry_00134b28_0x134b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134b28_0x134b28");
#endif

    switch (ctx->pc) {
        case 0x134b40u: goto label_134b40;
        default: break;
    }

    ctx->pc = 0x134b28u;

    // 0x134b28: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x134b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x134b2c: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x134b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x134b30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b38: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x134B38u;
    SET_GPR_U32(ctx, 31, 0x134B40u);
    ctx->pc = 0x134B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B38u;
    // 0x134b3c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x134B38u, 0x134B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B40u;
label_134b40:
    // 0x134b40: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x134b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->pc = 0x134b44u;
}
