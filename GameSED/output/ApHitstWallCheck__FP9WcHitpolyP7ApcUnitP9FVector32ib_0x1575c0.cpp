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

// Function: ApHitstWallCheck__FP9WcHitpolyP7ApcUnitP9FVector32ib
// Address: 0x1575c0 - 0x157760
void ApHitstWallCheck__FP9WcHitpolyP7ApcUnitP9FVector32ib_0x1575c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApHitstWallCheck__FP9WcHitpolyP7ApcUnitP9FVector32ib_0x1575c0");
#endif

    switch (ctx->pc) {
        case 0x157660u: goto label_157660;
        case 0x157674u: goto label_157674;
        case 0x1576f8u: goto label_1576f8;
        case 0x15770cu: goto label_15770c;
        default: break;
    }

    ctx->pc = 0x1575c0u;

    // 0x1575c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1575c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1575c4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1575c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1575c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1575c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575cc: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1575ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1575d0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x1575d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575d4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1575d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1575d8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1575d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575dc: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1575dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x1575e0: 0x2e530002  sltiu       $s3, $s2, 0x2
    ctx->pc = 0x1575e0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1575e4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1575e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1575e8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1575e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575ec: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x1575ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x1575f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1575f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575f4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1575f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1575f8: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x1575f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x1575fc: 0x2c480001  sltiu       $t0, $v0, 0x1
    ctx->pc = 0x1575fcu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x157600: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x157600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157604: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x157604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x157608: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x157608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15760c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x15760cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x157610: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x157610u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x157614: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x157614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157618: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x157618u;
    {
        const bool branch_taken_0x157618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157618u;
        // 0x15761c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157618) {
            ctx->pc = 0x157638u;
            goto label_157638;
        }
    }
    ctx->pc = 0x157620u;
    // 0x157620: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x157620u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x157624: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x157624u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157628: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x157628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15762c: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x15762cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157630: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x157630u;
    {
        const bool branch_taken_0x157630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157630u;
        // 0x157634: 0xe4e00020  swc1        $f0, 0x20($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157630) {
            ctx->pc = 0x157648u;
            goto label_157648;
        }
    }
    ctx->pc = 0x157638u;
label_157638:
    // 0x157638: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x157638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15763c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x15763cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157640: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x157640u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x157644: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x157644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_157648:
    // 0x157648: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15764c: 0xace80024  sw          $t0, 0x24($a3)
    ctx->pc = 0x15764cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 8));
    // 0x157650: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157654: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x157654u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x157658: 0xc060994  jal         func_182650
    ctx->pc = 0x157658u;
    SET_GPR_U32(ctx, 31, 0x157660u);
    ctx->pc = 0x15765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157658u;
    // 0x15765c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182650u, 0x157658u, 0x157660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157660u;
label_157660:
    // 0x157660: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x157660u;
    {
        const bool branch_taken_0x157660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157660u;
        // 0x157664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157660) {
            ctx->pc = 0x15773Cu;
            goto label_15773c;
        }
    }
    ctx->pc = 0x157668u;
    // 0x157668: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15766c: 0xc055d3e  jal         func_1574F8
    ctx->pc = 0x15766Cu;
    SET_GPR_U32(ctx, 31, 0x157674u);
    ctx->pc = 0x157670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15766Cu;
    // 0x157670: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1574F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1574F8u, 0x15766Cu, 0x157674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157674u;
label_157674:
    // 0x157674: 0x12800030  beqz        $s4, . + 4 + (0x30 << 2)
    ctx->pc = 0x157674u;
    {
        const bool branch_taken_0x157674 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x157678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157674u;
        // 0x157678: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157674) {
            ctx->pc = 0x157738u;
            goto label_157738;
        }
    }
    ctx->pc = 0x15767Cu;
    // 0x15767c: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x15767cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x157680: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x157680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157684: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x157684u;
    {
        const bool branch_taken_0x157684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x157688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157684u;
        // 0x157688: 0x24820070  addiu       $v0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157684) {
            ctx->pc = 0x1576C0u;
            goto label_1576c0;
        }
    }
    ctx->pc = 0x15768Cu;
    // 0x15768c: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x15768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x157690: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x157690u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x157694: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x157694u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157698: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x157698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15769c: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x15769cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1576a0: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x1576a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x1576a4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1576a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1576a8: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1576a8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1576ac: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1576acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1576b0: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1576b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1576b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1576B4u;
    {
        const bool branch_taken_0x1576b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1576B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576B4u;
        // 0x1576b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576b4) {
            ctx->pc = 0x1576ECu;
            goto label_1576ec;
        }
    }
    ctx->pc = 0x1576BCu;
    // 0x1576bc: 0x0  nop
    ctx->pc = 0x1576bcu;
    // NOP
label_1576c0:
    // 0x1576c0: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1576c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1576c4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1576c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1576c8: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1576c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1576cc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1576ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1576d0: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1576d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1576d4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x1576d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1576d8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1576d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1576dc: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1576dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1576e0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1576e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1576e4: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1576e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1576e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1576e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1576ec:
    // 0x1576ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1576ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576f0: 0xc060994  jal         func_182650
    ctx->pc = 0x1576F0u;
    SET_GPR_U32(ctx, 31, 0x1576F8u);
    ctx->pc = 0x1576F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1576F0u;
    // 0x1576f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182650u, 0x1576F0u, 0x1576F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1576F8u;
label_1576f8:
    // 0x1576f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1576F8u;
    {
        const bool branch_taken_0x1576f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1576FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576F8u;
        // 0x1576fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576f8) {
            ctx->pc = 0x157738u;
            goto label_157738;
        }
    }
    ctx->pc = 0x157700u;
    // 0x157700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157704: 0xc055d3e  jal         func_1574F8
    ctx->pc = 0x157704u;
    SET_GPR_U32(ctx, 31, 0x15770Cu);
    ctx->pc = 0x157708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157704u;
    // 0x157708: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1574F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1574F8u, 0x157704u, 0x15770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15770Cu;
label_15770c:
    // 0x15770c: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x15770cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x157710: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157714: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x157714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157718: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x157718u;
    {
        const bool branch_taken_0x157718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x157718) {
            ctx->pc = 0x15771Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157718u;
            // 0x15771c: 0x26020150  addiu       $v0, $s0, 0x150 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157724u;
            goto label_157724;
        }
    }
    ctx->pc = 0x157720u;
    // 0x157720: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x157720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_157724:
    // 0x157724: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x157724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x157728: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x157728u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15772c: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x15772cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157730: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x157730u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157734: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x157734u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_157738:
    // 0x157738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15773c:
    // 0x15773c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x15773cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x157740: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x157740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x157744: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x157744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x157748: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x157748u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x15774c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x15774cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x157750: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x157750u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x157754: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x157754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x157758: 0x3e00008  jr          $ra
    ctx->pc = 0x157758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157758u;
        // 0x15775c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157760u;
}
