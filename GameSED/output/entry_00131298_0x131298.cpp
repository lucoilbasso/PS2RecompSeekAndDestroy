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

// Function: entry_00131298
// Address: 0x131298 - 0x1312c8
void entry_00131298_0x131298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131298_0x131298");
#endif

    switch (ctx->pc) {
        case 0x1312c0u: goto label_1312c0;
        default: break;
    }

    ctx->pc = 0x131298u;

    // 0x131298: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x131298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13129c: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x13129cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x1312a0: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1312a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1312a4: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x1312a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1312a8: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x1312a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1312ac: 0x14e60006  bne         $a3, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1312ACu;
    {
        const bool branch_taken_0x1312ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x1312B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312ACu;
        // 0x1312b0: 0x8cb002f8  lw          $s0, 0x2F8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312ac) {
            ctx->pc = 0x1312C8u;
            return;
        }
    }
    ctx->pc = 0x1312B4u;
    // 0x1312b4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1312b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1312b8: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x1312B8u;
    SET_GPR_U32(ctx, 31, 0x1312C0u);
    ctx->pc = 0x1312BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1312B8u;
    // 0x1312bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x1312B8u, 0x1312C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312C0u;
label_1312c0:
    // 0x1312c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1312C0u;
    {
        const bool branch_taken_0x1312c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1312C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312C0u;
        // 0x1312c4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312c0) {
            ctx->pc = 0x1312F0u;
            return;
        }
    }
    ctx->pc = 0x1312C8u;
}
