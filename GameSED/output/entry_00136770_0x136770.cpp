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

// Function: entry_00136770
// Address: 0x136770 - 0x1367c4
void entry_00136770_0x136770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136770_0x136770");
#endif

    switch (ctx->pc) {
        case 0x1367a8u: goto label_1367a8;
        case 0x1367b0u: goto label_1367b0;
        case 0x1367c0u: goto label_1367c0;
        default: break;
    }

    ctx->pc = 0x136770u;

    // 0x136770: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x136770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x136774: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x136774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x136778: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x136778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x13677c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x13677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x136780: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x136780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x136784: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x136784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x136788: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x136788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x13678c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x136790: 0x1445000c  bne         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x136790u;
    {
        const bool branch_taken_0x136790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x136794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136790u;
        // 0x136794: 0x8c740040  lw          $s4, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136790) {
            ctx->pc = 0x1367C4u;
            return;
        }
    }
    ctx->pc = 0x136798u;
    // 0x136798: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x136798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13679c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x13679cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1367a0: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x1367A0u;
    SET_GPR_U32(ctx, 31, 0x1367A8u);
    ctx->pc = 0x1367A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1367A0u;
    // 0x1367a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x1367A0u, 0x1367A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1367A8u;
label_1367a8:
    // 0x1367a8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1367A8u;
    SET_GPR_U32(ctx, 31, 0x1367B0u);
    ctx->pc = 0x1367ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1367A8u;
    // 0x1367ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1367A8u, 0x1367B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1367B0u;
label_1367b0:
    // 0x1367b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1367b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1367b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1367b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1367b8: 0xc066894  jal         func_19A250
    ctx->pc = 0x1367B8u;
    SET_GPR_U32(ctx, 31, 0x1367C0u);
    ctx->pc = 0x1367BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1367B8u;
    // 0x1367bc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A250u, 0x1367B8u, 0x1367C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1367C0u;
label_1367c0:
    // 0x1367c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1367c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x1367c4u;
}
