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

// Function: ApHitstGroundCheck__FP9WcHitpolyP7ApcUnitP9FVector32ib
// Address: 0x157828 - 0x1579e0
void ApHitstGroundCheck__FP9WcHitpolyP7ApcUnitP9FVector32ib_0x157828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApHitstGroundCheck__FP9WcHitpolyP7ApcUnitP9FVector32ib_0x157828");
#endif

    switch (ctx->pc) {
        case 0x1578e0u: goto label_1578e0;
        case 0x1578f4u: goto label_1578f4;
        case 0x157978u: goto label_157978;
        case 0x15798cu: goto label_15798c;
        default: break;
    }

    ctx->pc = 0x157828u;

    // 0x157828: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x157828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x15782c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x15782cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x157830: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x157830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157834: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x157834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x157838: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x157838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15783c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x15783cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x157840: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x157840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157844: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x157844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x157848: 0x2e530002  sltiu       $s3, $s2, 0x2
    ctx->pc = 0x157848u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15784c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x15784cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x157850: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x157850u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157854: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x157854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x157858: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x157858u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15785c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x15785cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x157860: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x157860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x157864: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x157864u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x157868: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x157868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15786c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x15786cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x157870: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x157870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157874: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x157874u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x157878: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x157878u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x15787c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x15787cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157880: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x157880u;
    {
        const bool branch_taken_0x157880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157880u;
        // 0x157884: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157880) {
            ctx->pc = 0x1578A0u;
            goto label_1578a0;
        }
    }
    ctx->pc = 0x157888u;
    // 0x157888: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x157888u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15788c: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x15788cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157890: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x157890u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157894: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x157894u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157898: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x157898u;
    {
        const bool branch_taken_0x157898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157898u;
        // 0x15789c: 0x8e0200d8  lw          $v0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157898) {
            ctx->pc = 0x1578B0u;
            goto label_1578b0;
        }
    }
    ctx->pc = 0x1578A0u;
label_1578a0:
    // 0x1578a0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1578a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1578a4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1578a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1578a8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1578a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1578ac: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x1578acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_1578b0:
    // 0x1578b0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1578b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1578b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1578b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1578b8: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x1578b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x1578bc: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1578bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1578c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1578C0u;
    {
        const bool branch_taken_0x1578c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1578C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578C0u;
        // 0x1578c4: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578c0) {
            ctx->pc = 0x1578D0u;
            goto label_1578d0;
        }
    }
    ctx->pc = 0x1578C8u;
    // 0x1578c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1578c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1578cc: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1578ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_1578d0:
    // 0x1578d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1578d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1578d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1578d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1578d8: 0xc0605e6  jal         func_181798
    ctx->pc = 0x1578D8u;
    SET_GPR_U32(ctx, 31, 0x1578E0u);
    ctx->pc = 0x1578DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1578D8u;
    // 0x1578dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181798u, 0x1578D8u, 0x1578E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1578E0u;
label_1578e0:
    // 0x1578e0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1578E0u;
    {
        const bool branch_taken_0x1578e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1578E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578E0u;
        // 0x1578e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578e0) {
            ctx->pc = 0x1579BCu;
            goto label_1579bc;
        }
    }
    ctx->pc = 0x1578E8u;
    // 0x1578e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1578e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1578ec: 0xc055dd8  jal         func_157760
    ctx->pc = 0x1578ECu;
    SET_GPR_U32(ctx, 31, 0x1578F4u);
    ctx->pc = 0x1578F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1578ECu;
    // 0x1578f0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157760u, 0x1578ECu, 0x1578F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1578F4u;
label_1578f4:
    // 0x1578f4: 0x12800030  beqz        $s4, . + 4 + (0x30 << 2)
    ctx->pc = 0x1578F4u;
    {
        const bool branch_taken_0x1578f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1578F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578F4u;
        // 0x1578f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578f4) {
            ctx->pc = 0x1579B8u;
            goto label_1579b8;
        }
    }
    ctx->pc = 0x1578FCu;
    // 0x1578fc: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x1578fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x157900: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x157900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157904: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x157904u;
    {
        const bool branch_taken_0x157904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x157908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157904u;
        // 0x157908: 0x24820070  addiu       $v0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157904) {
            ctx->pc = 0x157940u;
            goto label_157940;
        }
    }
    ctx->pc = 0x15790Cu;
    // 0x15790c: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x15790cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x157910: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x157910u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x157914: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x157914u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157918: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x157918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15791c: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x15791cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157920: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x157920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x157924: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x157924u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157928: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x157928u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15792c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15792cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157930: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x157930u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157934: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x157934u;
    {
        const bool branch_taken_0x157934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157934u;
        // 0x157938: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157934) {
            ctx->pc = 0x15796Cu;
            goto label_15796c;
        }
    }
    ctx->pc = 0x15793Cu;
    // 0x15793c: 0x0  nop
    ctx->pc = 0x15793cu;
    // NOP
label_157940:
    // 0x157940: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x157940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x157944: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x157944u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157948: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x157948u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15794c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15794cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157950: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x157950u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157954: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x157954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x157958: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x157958u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15795c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x15795cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157960: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x157960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157964: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x157964u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157968: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15796c:
    // 0x15796c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15796cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157970: 0xc0605e6  jal         func_181798
    ctx->pc = 0x157970u;
    SET_GPR_U32(ctx, 31, 0x157978u);
    ctx->pc = 0x157974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157970u;
    // 0x157974: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181798u, 0x157970u, 0x157978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157978u;
label_157978:
    // 0x157978: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x157978u;
    {
        const bool branch_taken_0x157978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157978u;
        // 0x15797c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157978) {
            ctx->pc = 0x1579B8u;
            goto label_1579b8;
        }
    }
    ctx->pc = 0x157980u;
    // 0x157980: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157984: 0xc055dd8  jal         func_157760
    ctx->pc = 0x157984u;
    SET_GPR_U32(ctx, 31, 0x15798Cu);
    ctx->pc = 0x157988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157984u;
    // 0x157988: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157760u, 0x157984u, 0x15798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15798Cu;
label_15798c:
    // 0x15798c: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x15798cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x157990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157994: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x157994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157998: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x157998u;
    {
        const bool branch_taken_0x157998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x157998) {
            ctx->pc = 0x15799Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157998u;
            // 0x15799c: 0x26020150  addiu       $v0, $s0, 0x150 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1579A4u;
            goto label_1579a4;
        }
    }
    ctx->pc = 0x1579A0u;
    // 0x1579a0: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x1579a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_1579a4:
    // 0x1579a4: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x1579a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1579a8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1579a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1579ac: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1579acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1579b0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1579b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1579b4: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1579b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1579b8:
    // 0x1579b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1579b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1579bc:
    // 0x1579bc: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1579bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1579c0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1579c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1579c4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1579c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1579c8: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1579c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1579cc: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1579ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1579d0: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x1579d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1579d4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1579d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1579d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1579D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1579DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579D8u;
        // 0x1579dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1579D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1579E0u;
}
