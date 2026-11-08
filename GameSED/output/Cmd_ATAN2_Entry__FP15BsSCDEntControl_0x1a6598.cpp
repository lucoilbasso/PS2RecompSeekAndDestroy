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

// Function: Cmd_ATAN2_Entry__FP15BsSCDEntControl
// Address: 0x1a6598 - 0x1a6684
void Cmd_ATAN2_Entry__FP15BsSCDEntControl_0x1a6598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ATAN2_Entry__FP15BsSCDEntControl_0x1a6598");
#endif

    switch (ctx->pc) {
        case 0x1a65ccu: goto label_1a65cc;
        case 0x1a6600u: goto label_1a6600;
        case 0x1a6648u: goto label_1a6648;
        case 0x1a6664u: goto label_1a6664;
        default: break;
    }

    ctx->pc = 0x1a6598u;

    // 0x1a6598: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a659c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a659cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a65a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a65a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a65a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a65a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a65a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a65a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a65ac: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x1a65acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a65b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a65b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a65b4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a65b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a65b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a65b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a65bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a65bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a65c0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a65c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a65c4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A65C4u;
    SET_GPR_U32(ctx, 31, 0x1A65CCu);
    ctx->pc = 0x1A65C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A65C4u;
    // 0x1a65c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A65C4u, 0x1A65CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A65CCu;
label_1a65cc:
    // 0x1a65cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a65ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a65d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a65d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a65d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a65d8: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a65d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a65dc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a65dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a65e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a65e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a65e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a65e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a65e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a65ec: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a65ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a65f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A65F0u;
    {
        const bool branch_taken_0x1a65f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65F0u;
        // 0x1a65f4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65f0) {
            ctx->pc = 0x1A6604u;
            goto label_1a6604;
        }
    }
    ctx->pc = 0x1A65F8u;
    // 0x1a65f8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A65F8u;
    SET_GPR_U32(ctx, 31, 0x1A6600u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A65F8u, 0x1A6600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6600u;
label_1a6600:
    // 0x1a6600: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6604:
    // 0x1a6604: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x1a6604u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1a6608: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a6608u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a660c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a660cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a6610: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1a6610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a6614: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6618: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x1a6618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a661c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a661cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6620: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a6620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a6624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6628: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a6628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a662c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6630: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a6630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a6634: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a6634u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a6638: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6638u;
    {
        const bool branch_taken_0x1a6638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6638u;
        // 0x1a663c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6638) {
            ctx->pc = 0x1A664Cu;
            goto label_1a664c;
        }
    }
    ctx->pc = 0x1A6640u;
    // 0x1a6640: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6640u;
    SET_GPR_U32(ctx, 31, 0x1A6648u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6640u, 0x1A6648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6648u;
label_1a6648:
    // 0x1a6648: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a664c:
    // 0x1a664c: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x1a664cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1a6650: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a6650u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a6654: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a6654u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a6658: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a6658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a665c: 0xc067a02  jal         func_19E808
    ctx->pc = 0x1A665Cu;
    SET_GPR_U32(ctx, 31, 0x1A6664u);
    ctx->pc = 0x1A6660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A665Cu;
    // 0x1a6660: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x1A665Cu, 0x1A6664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6664u;
label_1a6664:
    // 0x1a6664: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a6664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a6668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a666c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a666cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6670: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6674: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a6674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6678: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a6678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a667c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A667Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A667Cu;
        // 0x1a6680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A667Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6684u;
}
