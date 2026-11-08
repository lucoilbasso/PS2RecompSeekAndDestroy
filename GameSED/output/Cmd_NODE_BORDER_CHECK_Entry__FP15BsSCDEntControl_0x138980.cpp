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

// Function: Cmd_NODE_BORDER_CHECK_Entry__FP15BsSCDEntControl
// Address: 0x138980 - 0x138a44
void Cmd_NODE_BORDER_CHECK_Entry__FP15BsSCDEntControl_0x138980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_NODE_BORDER_CHECK_Entry__FP15BsSCDEntControl_0x138980");
#endif

    switch (ctx->pc) {
        case 0x1389a8u: goto label_1389a8;
        case 0x1389b0u: goto label_1389b0;
        case 0x1389bcu: goto label_1389bc;
        case 0x1389d4u: goto label_1389d4;
        case 0x138a08u: goto label_138a08;
        default: break;
    }

    ctx->pc = 0x138980u;

    // 0x138980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138984: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x138988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13898c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x13898cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138990: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x138990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x138994: 0x2451b840  addiu       $s1, $v0, -0x47C0
    ctx->pc = 0x138994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x138998: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x138998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13899c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13899cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1389a0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1389A0u;
    SET_GPR_U32(ctx, 31, 0x1389A8u);
    ctx->pc = 0x1389A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389A0u;
    // 0x1389a4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1389A0u, 0x1389A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389A8u;
label_1389a8:
    // 0x1389a8: 0xc04db4e  jal         func_136D38
    ctx->pc = 0x1389A8u;
    SET_GPR_U32(ctx, 31, 0x1389B0u);
    ctx->pc = 0x1389ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389A8u;
    // 0x1389ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x1389A8u, 0x1389B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389B0u;
label_1389b0:
    // 0x1389b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1389b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1389b4: 0xc04e1ee  jal         func_1387B8
    ctx->pc = 0x1389B4u;
    SET_GPR_U32(ctx, 31, 0x1389BCu);
    ctx->pc = 0x1389B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389B4u;
    // 0x1389b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1387B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1387B8u, 0x1389B4u, 0x1389BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389BCu;
label_1389bc:
    // 0x1389bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1389bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1389c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1389c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1389c4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1389C4u;
    {
        const bool branch_taken_0x1389c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1389c4) {
            ctx->pc = 0x1389C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1389C4u;
            // 0x1389c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1389CCu;
            goto label_1389cc;
        }
    }
    ctx->pc = 0x1389CCu;
label_1389cc:
    // 0x1389cc: 0xc04171a  jal         func_105C68
    ctx->pc = 0x1389CCu;
    SET_GPR_U32(ctx, 31, 0x1389D4u);
    ctx->pc = 0x1389D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389CCu;
    // 0x1389d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x1389CCu, 0x1389D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389D4u;
label_1389d4:
    // 0x1389d4: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1389D4u;
    {
        const bool branch_taken_0x1389d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389D4u;
        // 0x1389d8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389d4) {
            ctx->pc = 0x138A2Cu;
            goto label_138a2c;
        }
    }
    ctx->pc = 0x1389DCu;
    // 0x1389dc: 0x8e230404  lw          $v1, 0x404($s1)
    ctx->pc = 0x1389dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
    // 0x1389e0: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x1389e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x1389e4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1389e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1389e8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1389e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1389ec: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1389ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1389f0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1389f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1389f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1389f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1389f8: 0x1065000c  beq         $v1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1389F8u;
    {
        const bool branch_taken_0x1389f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1389FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389F8u;
        // 0x1389fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389f8) {
            ctx->pc = 0x138A2Cu;
            goto label_138a2c;
        }
    }
    ctx->pc = 0x138A00u;
    // 0x138a00: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x138A00u;
    SET_GPR_U32(ctx, 31, 0x138A08u);
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x138A00u, 0x138A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138A08u;
label_138a08:
    // 0x138a08: 0xc6200408  lwc1        $f0, 0x408($s1)
    ctx->pc = 0x138a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138a0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x138a0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a10: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x138a10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x138a14: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x138a14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x138a18: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x138a18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x138a1c: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x138a1cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x138a20: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x138a20u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x138a24: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x138a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x138a28: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x138a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_138a2c:
    // 0x138a2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x138a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138a30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x138a30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138a34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x138a34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138a38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x138a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x138a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x138A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A3Cu;
        // 0x138a40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138A44u;
}
