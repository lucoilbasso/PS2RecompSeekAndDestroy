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

// Function: entry_00158b10
// Address: 0x158b10 - 0x158b2c
void entry_00158b10_0x158b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158b10_0x158b10");
#endif

    ctx->pc = 0x158b10u;

    // 0x158b10: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x158b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x158b14: 0x8e450160  lw          $a1, 0x160($s2)
    ctx->pc = 0x158b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x158b18: 0xae02047c  sw          $v0, 0x47C($s0)
    ctx->pc = 0x158b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1148), GPR_U32(ctx, 2));
    // 0x158b1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x158b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158b20: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x158b20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158b24: 0xc056314  jal         func_158C50
    ctx->pc = 0x158B24u;
    SET_GPR_U32(ctx, 31, 0x158B2Cu);
    ctx->pc = 0x158B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B24u;
    // 0x158b28: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158C50u, 0x158B24u, 0x158B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B2Cu;
}
