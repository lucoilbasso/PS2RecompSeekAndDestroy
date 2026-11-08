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

// Function: ApCqpart_RRScrew_Proc__FP9ApcCqpartP17CQ2PartsSequencer
// Address: 0x169110 - 0x169460
void ApCqpart_RRScrew_Proc__FP9ApcCqpartP17CQ2PartsSequencer_0x169110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCqpart_RRScrew_Proc__FP9ApcCqpartP17CQ2PartsSequencer_0x169110");
#endif

    switch (ctx->pc) {
        case 0x169188u: goto label_169188;
        case 0x1691f0u: goto label_1691f0;
        case 0x169214u: goto label_169214;
        case 0x169250u: goto label_169250;
        case 0x1692a0u: goto label_1692a0;
        case 0x1692e4u: goto label_1692e4;
        case 0x169300u: goto label_169300;
        case 0x16930cu: goto label_16930c;
        case 0x169324u: goto label_169324;
        case 0x169358u: goto label_169358;
        case 0x1693a8u: goto label_1693a8;
        case 0x1693f0u: goto label_1693f0;
        case 0x16940cu: goto label_16940c;
        case 0x169418u: goto label_169418;
        case 0x169430u: goto label_169430;
        default: break;
    }

    ctx->pc = 0x169110u;

    // 0x169110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x169110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x169114: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x169114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x169118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16911c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x16911cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x169120: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x169120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169124: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x169124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x169128: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x169128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16912c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16912cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x169130: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x169130u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x169134: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x169134u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x169138: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x169138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16913c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x16913cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x169140: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x169140u;
    {
        const bool branch_taken_0x169140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169140u;
        // 0x169144: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169140) {
            ctx->pc = 0x169220u;
            goto label_169220;
        }
    }
    ctx->pc = 0x169148u;
    // 0x169148: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x169148u;
    {
        const bool branch_taken_0x169148 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x16914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169148u;
        // 0x16914c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169148) {
            ctx->pc = 0x169168u;
            goto label_169168;
        }
    }
    ctx->pc = 0x169150u;
    // 0x169150: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x169150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x169154: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x169154u;
    {
        const bool branch_taken_0x169154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x169154) {
            ctx->pc = 0x169158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169154u;
            // 0x169158: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169180u;
            goto label_169180;
        }
    }
    ctx->pc = 0x16915Cu;
    // 0x16915c: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x16915Cu;
    {
        const bool branch_taken_0x16915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16915Cu;
        // 0x169160: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16915c) {
            ctx->pc = 0x169444u;
            goto label_169444;
        }
    }
    ctx->pc = 0x169164u;
    // 0x169164: 0x0  nop
    ctx->pc = 0x169164u;
    // NOP
label_169168:
    // 0x169168: 0x10620051  beq         $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x169168u;
    {
        const bool branch_taken_0x169168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169168u;
        // 0x16916c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169168) {
            ctx->pc = 0x1692B0u;
            goto label_1692b0;
        }
    }
    ctx->pc = 0x169170u;
    // 0x169170: 0x5062008f  beql        $v1, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x169170u;
    {
        const bool branch_taken_0x169170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x169170) {
            ctx->pc = 0x169174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169170u;
            // 0x169174: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1693B0u;
            goto label_1693b0;
        }
    }
    ctx->pc = 0x169178u;
    // 0x169178: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x169178u;
    {
        const bool branch_taken_0x169178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169178u;
        // 0x16917c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169178) {
            ctx->pc = 0x169444u;
            goto label_169444;
        }
    }
    ctx->pc = 0x169180u;
label_169180:
    // 0x169180: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x169180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x169184: 0x0  nop
    ctx->pc = 0x169184u;
    // NOP
label_169188:
    // 0x169188: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x169188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16918c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16918cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x169190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169194: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x169194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x169198: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x169198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x16919c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1691a0: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x1691a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1691a4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1691A4u;
    {
        const bool branch_taken_0x1691a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1691A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691A4u;
        // 0x1691a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691a4) {
            ctx->pc = 0x169188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169188;
        }
    }
    ctx->pc = 0x1691ACu;
    // 0x1691ac: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1691acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1691b0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1691b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1691b4: 0x2463d360  addiu       $v1, $v1, -0x2CA0
    ctx->pc = 0x1691b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955872));
    // 0x1691b8: 0xc7808420  lwc1        $f0, -0x7BE0($gp)
    ctx->pc = 0x1691b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1691bc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1691bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x20D360u));
    // 0x1691c0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1691c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1691c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1691c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1691c8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1691c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1691cc: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x1691ccu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1691d0: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1691d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1691d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1691d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1691d8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1691d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1691dc: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x1691dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1691e0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1691e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1691e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1691e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1691e8: 0xc0618da  jal         func_186368
    ctx->pc = 0x1691E8u;
    SET_GPR_U32(ctx, 31, 0x1691F0u);
    ctx->pc = 0x1691ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1691E8u;
    // 0x1691ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1691E8u, 0x1691F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1691F0u;
label_1691f0:
    // 0x1691f0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1691f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1691f4: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x1691f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1691f8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1691f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1691fc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1691fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x169200: 0x24a5d370  addiu       $a1, $a1, -0x2C90
    ctx->pc = 0x169200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955888));
    // 0x169204: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x169204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16920c: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x16920Cu;
    SET_GPR_U32(ctx, 31, 0x169214u);
    ctx->pc = 0x169210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16920Cu;
    // 0x169210: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x16920Cu, 0x169214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169214u;
label_169214:
    // 0x169214: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x169214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x169218: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x169218u;
    {
        const bool branch_taken_0x169218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169218u;
        // 0x16921c: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169218) {
            ctx->pc = 0x169440u;
            goto label_169440;
        }
    }
    ctx->pc = 0x169220u;
label_169220:
    // 0x169220: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x169220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x169224: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x169224u;
    {
        const bool branch_taken_0x169224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169224) {
            ctx->pc = 0x169228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169224u;
            // 0x169228: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1693B8u;
            goto label_1693b8;
        }
    }
    ctx->pc = 0x16922Cu;
    // 0x16922c: 0x10800084  beqz        $a0, . + 4 + (0x84 << 2)
    ctx->pc = 0x16922Cu;
    {
        const bool branch_taken_0x16922c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16922Cu;
        // 0x169230: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16922c) {
            ctx->pc = 0x169440u;
            goto label_169440;
        }
    }
    ctx->pc = 0x169234u;
    // 0x169234: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x169234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x169238: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x169238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x16923c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x16923cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x169240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169244: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x169244u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169248: 0xc06164c  jal         func_185930
    ctx->pc = 0x169248u;
    SET_GPR_U32(ctx, 31, 0x169250u);
    ctx->pc = 0x16924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169248u;
    // 0x16924c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x169248u, 0x169250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169250u;
label_169250:
    // 0x169250: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x169250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x169254: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169258: 0x2484d350  addiu       $a0, $a0, -0x2CB0
    ctx->pc = 0x169258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955856));
    // 0x16925c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x16925cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x169260: 0xc7808424  lwc1        $f0, -0x7BDC($gp)
    ctx->pc = 0x169260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169264: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x169264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x20D350u));
    // 0x169268: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x169268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16926c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16926cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x169270: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x169270u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x169274: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x169274u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x169278: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x169278u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16927c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x16927cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169280: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x169280u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x169284: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x169284u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x169288: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x169288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16928c: 0xc78c8428  lwc1        $f12, -0x7BD8($gp)
    ctx->pc = 0x16928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169294: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x169294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x169298: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x169298u;
    SET_GPR_U32(ctx, 31, 0x1692A0u);
    ctx->pc = 0x16929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169298u;
    // 0x16929c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x169298u, 0x1692A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1692A0u;
label_1692a0:
    // 0x1692a0: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x1692a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x1692a4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1692a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1692a8: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1692A8u;
    {
        const bool branch_taken_0x1692a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1692ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692A8u;
        // 0x1692ac: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692a8) {
            ctx->pc = 0x16943Cu;
            goto label_16943c;
        }
    }
    ctx->pc = 0x1692B0u;
label_1692b0:
    // 0x1692b0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1692b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1692b4: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1692B4u;
    {
        const bool branch_taken_0x1692b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1692B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692B4u;
        // 0x1692b8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692b4) {
            ctx->pc = 0x1693B8u;
            goto label_1693b8;
        }
    }
    ctx->pc = 0x1692BCu;
    // 0x1692bc: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1692BCu;
    {
        const bool branch_taken_0x1692bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1692C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692BCu;
        // 0x1692c0: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692bc) {
            ctx->pc = 0x169338u;
            goto label_169338;
        }
    }
    ctx->pc = 0x1692C4u;
    // 0x1692c4: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1692c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1692c8: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x1692c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1692cc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1692ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1692d0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1692d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1692d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1692d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1692d8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1692d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1692dc: 0xc06164c  jal         func_185930
    ctx->pc = 0x1692DCu;
    SET_GPR_U32(ctx, 31, 0x1692E4u);
    ctx->pc = 0x1692E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1692DCu;
    // 0x1692e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1692DCu, 0x1692E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1692E4u;
label_1692e4:
    // 0x1692e4: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1692e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1692e8: 0xc78c842c  lwc1        $f12, -0x7BD4($gp)
    ctx->pc = 0x1692e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1692ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1692ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1692f0: 0x24c6d380  addiu       $a2, $a2, -0x2C80
    ctx->pc = 0x1692f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955904));
    // 0x1692f4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1692f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1692f8: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1692F8u;
    SET_GPR_U32(ctx, 31, 0x169300u);
    ctx->pc = 0x1692FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1692F8u;
    // 0x1692fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1692F8u, 0x169300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169300u;
label_169300:
    // 0x169300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169304: 0xc06164c  jal         func_185930
    ctx->pc = 0x169304u;
    SET_GPR_U32(ctx, 31, 0x16930Cu);
    ctx->pc = 0x169308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169304u;
    // 0x169308: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x169304u, 0x16930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16930Cu;
label_16930c:
    // 0x16930c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169310: 0xc78d8430  lwc1        $f13, -0x7BD0($gp)
    ctx->pc = 0x169310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x169314: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169318: 0xc78e8434  lwc1        $f14, -0x7BCC($gp)
    ctx->pc = 0x169318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x16931c: 0xc0694d2  jal         func_1A5348
    ctx->pc = 0x16931Cu;
    SET_GPR_U32(ctx, 31, 0x169324u);
    ctx->pc = 0x169320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16931Cu;
    // 0x169320: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x16931Cu, 0x169324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169324u;
label_169324:
    // 0x169324: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x169324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x169328: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x169328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16932c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x16932Cu;
    {
        const bool branch_taken_0x16932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16932Cu;
        // 0x169330: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16932c) {
            ctx->pc = 0x16943Cu;
            goto label_16943c;
        }
    }
    ctx->pc = 0x169334u;
    // 0x169334: 0x0  nop
    ctx->pc = 0x169334u;
    // NOP
label_169338:
    // 0x169338: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x169338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x16933c: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x16933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x169340: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x169340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x169344: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x169344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x169348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16934c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x16934cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169350: 0xc06164c  jal         func_185930
    ctx->pc = 0x169350u;
    SET_GPR_U32(ctx, 31, 0x169358u);
    ctx->pc = 0x169354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169350u;
    // 0x169354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x169350u, 0x169358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169358u;
label_169358:
    // 0x169358: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x169358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x16935c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16935cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169360: 0x2484d360  addiu       $a0, $a0, -0x2CA0
    ctx->pc = 0x169360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955872));
    // 0x169364: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x169364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x169368: 0xc7808438  lwc1        $f0, -0x7BC8($gp)
    ctx->pc = 0x169368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16936c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16936cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x20D360u));
    // 0x169370: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x169370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x169374: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x169374u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x169378: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x169378u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16937c: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x16937cu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x169380: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x169380u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169384: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x169384u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169388: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x169388u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16938c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x16938cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x169390: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x169390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169394: 0xc78c843c  lwc1        $f12, -0x7BC4($gp)
    ctx->pc = 0x169394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16939c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x16939cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1693a0: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1693A0u;
    SET_GPR_U32(ctx, 31, 0x1693A8u);
    ctx->pc = 0x1693A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1693A0u;
    // 0x1693a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1693A0u, 0x1693A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1693A8u;
label_1693a8:
    // 0x1693a8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1693A8u;
    {
        const bool branch_taken_0x1693a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1693ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693A8u;
        // 0x1693ac: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693a8) {
            ctx->pc = 0x169434u;
            goto label_169434;
        }
    }
    ctx->pc = 0x1693B0u;
label_1693b0:
    // 0x1693b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1693B0u;
    {
        const bool branch_taken_0x1693b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1693B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693B0u;
        // 0x1693b4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693b0) {
            ctx->pc = 0x1693C0u;
            goto label_1693c0;
        }
    }
    ctx->pc = 0x1693B8u;
label_1693b8:
    // 0x1693b8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1693B8u;
    {
        const bool branch_taken_0x1693b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1693BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693B8u;
        // 0x1693bc: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693b8) {
            ctx->pc = 0x169440u;
            goto label_169440;
        }
    }
    ctx->pc = 0x1693C0u;
label_1693c0:
    // 0x1693c0: 0x54800020  bnel        $a0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1693C0u;
    {
        const bool branch_taken_0x1693c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1693c0) {
            ctx->pc = 0x1693C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1693C0u;
            // 0x1693c4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169444u;
            goto label_169444;
        }
    }
    ctx->pc = 0x1693C8u;
    // 0x1693c8: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1693c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1693cc: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1693ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1693d0: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x1693d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1693d4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1693d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1693d8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1693d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1693dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1693dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1693e0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1693e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1693e4: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1693e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1693e8: 0xc06164c  jal         func_185930
    ctx->pc = 0x1693E8u;
    SET_GPR_U32(ctx, 31, 0x1693F0u);
    ctx->pc = 0x1693ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1693E8u;
    // 0x1693ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1693E8u, 0x1693F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1693F0u;
label_1693f0:
    // 0x1693f0: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1693f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1693f4: 0xc78c8440  lwc1        $f12, -0x7BC0($gp)
    ctx->pc = 0x1693f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1693f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1693f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1693fc: 0x24c6d370  addiu       $a2, $a2, -0x2C90
    ctx->pc = 0x1693fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955888));
    // 0x169400: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x169400u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x169404: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x169404u;
    SET_GPR_U32(ctx, 31, 0x16940Cu);
    ctx->pc = 0x169408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169404u;
    // 0x169408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x169404u, 0x16940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16940Cu;
label_16940c:
    // 0x16940c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16940cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169410: 0xc06164c  jal         func_185930
    ctx->pc = 0x169410u;
    SET_GPR_U32(ctx, 31, 0x169418u);
    ctx->pc = 0x169414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169410u;
    // 0x169414: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x169410u, 0x169418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169418u;
label_169418:
    // 0x169418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16941c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16941cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x169420: 0xc78e8444  lwc1        $f14, -0x7BBC($gp)
    ctx->pc = 0x169420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x169424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169428: 0xc0694d2  jal         func_1A5348
    ctx->pc = 0x169428u;
    SET_GPR_U32(ctx, 31, 0x169430u);
    ctx->pc = 0x16942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169428u;
    // 0x16942c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x169428u, 0x169430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169430u;
label_169430:
    // 0x169430: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x169430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_169434:
    // 0x169434: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x169434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x169438: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x169438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_16943c:
    // 0x16943c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x16943cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_169440:
    // 0x169440: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x169440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_169444:
    // 0x169444: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x169444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x169448: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x169448u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16944c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16944cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x169450: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x169450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x169454: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x169454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x169458: 0x3e00008  jr          $ra
    ctx->pc = 0x169458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169458u;
        // 0x16945c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169460u;
}
