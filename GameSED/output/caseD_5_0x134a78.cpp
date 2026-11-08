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

// Function: caseD_5
// Address: 0x134a78 - 0x134ab0
void caseD_5_0x134a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x134a78");
#endif

    switch (ctx->pc) {
        case 0x134a90u: goto label_134a90;
        case 0x134aa4u: goto label_134aa4;
        default: break;
    }

    ctx->pc = 0x134a78u;

    // 0x134a78: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x134a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x134a7c: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x134a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x134a80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a88: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x134A88u;
    SET_GPR_U32(ctx, 31, 0x134A90u);
    ctx->pc = 0x134A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A88u;
    // 0x134a8c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x134A88u, 0x134A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A90u;
label_134a90:
    // 0x134a90: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x134a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x134a94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a98: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x134a98u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x134a9c: 0xc04e592  jal         func_139648
    ctx->pc = 0x134A9Cu;
    SET_GPR_U32(ctx, 31, 0x134AA4u);
    ctx->pc = 0x134AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A9Cu;
    // 0x134aa0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139648u, 0x134A9Cu, 0x134AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AA4u;
label_134aa4:
    // 0x134aa4: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x134AA4u;
    {
        const bool branch_taken_0x134aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AA4u;
        // 0x134aa8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134aa4) {
            ctx->pc = 0x134E48u;
            return;
        }
    }
    ctx->pc = 0x134AACu;
    // 0x134aac: 0x0  nop
    ctx->pc = 0x134aacu;
    // NOP
    ctx->pc = 0x134ab0u;
}
