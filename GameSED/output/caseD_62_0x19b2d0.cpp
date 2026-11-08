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

// Function: caseD_62
// Address: 0x19b2d0 - 0x19b300
void caseD_62_0x19b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_62_0x19b2d0");
#endif

    switch (ctx->pc) {
        case 0x19b2f4u: goto label_19b2f4;
        default: break;
    }

    ctx->pc = 0x19b2d0u;

    // 0x19b2d0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x19b2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19b2d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b2dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2e0: 0x73827  nor         $a3, $zero, $a3
    ctx->pc = 0x19b2e0u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x19b2e4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x19b2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b2e8: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x19b2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x19b2ec: 0xc066bd4  jal         func_19AF50
    ctx->pc = 0x19B2ECu;
    SET_GPR_U32(ctx, 31, 0x19B2F4u);
    ctx->pc = 0x19B2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B2ECu;
    // 0x19b2f0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19AF50u, 0x19B2ECu, 0x19B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2F4u;
label_19b2f4:
    // 0x19b2f4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x19B2F4u;
    {
        const bool branch_taken_0x19b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2F4u;
        // 0x19b2f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2f4) {
            ctx->pc = 0x19B448u;
            return;
        }
    }
    ctx->pc = 0x19B2FCu;
    // 0x19b2fc: 0x0  nop
    ctx->pc = 0x19b2fcu;
    // NOP
    ctx->pc = 0x19b300u;
}
