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

// Function: entry_0010f3d0
// Address: 0x10f3d0 - 0x10f440
void entry_0010f3d0_0x10f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f3d0_0x10f3d0");
#endif

    switch (ctx->pc) {
        case 0x10f3e4u: goto label_10f3e4;
        case 0x10f400u: goto label_10f400;
        case 0x10f418u: goto label_10f418;
        case 0x10f420u: goto label_10f420;
        case 0x10f434u: goto label_10f434;
        default: break;
    }

    ctx->pc = 0x10f3d0u;

    // 0x10f3d0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x10f3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10f3d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10f3d8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10f3dc: 0xc04110c  jal         func_104430
    ctx->pc = 0x10F3DCu;
    SET_GPR_U32(ctx, 31, 0x10F3E4u);
    ctx->pc = 0x10F3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3DCu;
    // 0x10f3e0: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10F3DCu, 0x10F3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F3E4u;
label_10f3e4:
    // 0x10f3e4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10f3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10f3e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10f3e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3ec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10f3f0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10F3F0u;
    {
        const bool branch_taken_0x10f3f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10f3f0) {
            ctx->pc = 0x10F440u;
            return;
        }
    }
    ctx->pc = 0x10F3F8u;
    // 0x10f3f8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10F3F8u;
    SET_GPR_U32(ctx, 31, 0x10F400u);
    ctx->pc = 0x10F3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3F8u;
    // 0x10f3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10F3F8u, 0x10F400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F400u;
label_10f400:
    // 0x10f400: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10f400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f404: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10f404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10f408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f40c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f410: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x10F410u;
    SET_GPR_U32(ctx, 31, 0x10F418u);
    ctx->pc = 0x10F414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F410u;
    // 0x10f414: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x10F410u, 0x10F418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F418u;
label_10f418:
    // 0x10f418: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10F418u;
    SET_GPR_U32(ctx, 31, 0x10F420u);
    ctx->pc = 0x10F41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F418u;
    // 0x10f41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10F418u, 0x10F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F420u;
label_10f420:
    // 0x10f420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f424: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10f424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f428: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x10f428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f42c: 0xc064a4a  jal         func_192928
    ctx->pc = 0x10F42Cu;
    SET_GPR_U32(ctx, 31, 0x10F434u);
    ctx->pc = 0x10F430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F42Cu;
    // 0x10f430: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x192928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192928u, 0x10F42Cu, 0x10F434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F434u;
label_10f434:
    // 0x10f434: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x10F434u;
    {
        const bool branch_taken_0x10f434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F434u;
        // 0x10f438: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f434) {
            ctx->pc = 0x10F4BCu;
            return;
        }
    }
    ctx->pc = 0x10F43Cu;
    // 0x10f43c: 0x0  nop
    ctx->pc = 0x10f43cu;
    // NOP
    ctx->pc = 0x10f440u;
}
