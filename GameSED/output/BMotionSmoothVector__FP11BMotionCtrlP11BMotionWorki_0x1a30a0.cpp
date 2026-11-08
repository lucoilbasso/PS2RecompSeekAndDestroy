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

// Function: BMotionSmoothVector__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1a30a0 - 0x1a3204
void BMotionSmoothVector__FP11BMotionCtrlP11BMotionWorki_0x1a30a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionSmoothVector__FP11BMotionCtrlP11BMotionWorki_0x1a30a0");
#endif

    switch (ctx->pc) {
        case 0x1a30a0u: goto label_1a30a0;
        case 0x1a30a4u: goto label_1a30a4;
        case 0x1a30a8u: goto label_1a30a8;
        case 0x1a30acu: goto label_1a30ac;
        case 0x1a30b0u: goto label_1a30b0;
        case 0x1a30b4u: goto label_1a30b4;
        case 0x1a30b8u: goto label_1a30b8;
        case 0x1a30bcu: goto label_1a30bc;
        case 0x1a30c0u: goto label_1a30c0;
        case 0x1a30c4u: goto label_1a30c4;
        case 0x1a30c8u: goto label_1a30c8;
        case 0x1a30ccu: goto label_1a30cc;
        case 0x1a30d0u: goto label_1a30d0;
        case 0x1a30d4u: goto label_1a30d4;
        case 0x1a30d8u: goto label_1a30d8;
        case 0x1a30dcu: goto label_1a30dc;
        case 0x1a30e0u: goto label_1a30e0;
        case 0x1a30e4u: goto label_1a30e4;
        case 0x1a30e8u: goto label_1a30e8;
        case 0x1a30ecu: goto label_1a30ec;
        case 0x1a30f0u: goto label_1a30f0;
        case 0x1a30f4u: goto label_1a30f4;
        case 0x1a30f8u: goto label_1a30f8;
        case 0x1a30fcu: goto label_1a30fc;
        case 0x1a3100u: goto label_1a3100;
        case 0x1a3104u: goto label_1a3104;
        case 0x1a3108u: goto label_1a3108;
        case 0x1a310cu: goto label_1a310c;
        case 0x1a3110u: goto label_1a3110;
        case 0x1a3114u: goto label_1a3114;
        case 0x1a3118u: goto label_1a3118;
        case 0x1a311cu: goto label_1a311c;
        case 0x1a3120u: goto label_1a3120;
        case 0x1a3124u: goto label_1a3124;
        case 0x1a3128u: goto label_1a3128;
        case 0x1a312cu: goto label_1a312c;
        case 0x1a3130u: goto label_1a3130;
        case 0x1a3134u: goto label_1a3134;
        case 0x1a3138u: goto label_1a3138;
        case 0x1a313cu: goto label_1a313c;
        case 0x1a3140u: goto label_1a3140;
        case 0x1a3144u: goto label_1a3144;
        case 0x1a3148u: goto label_1a3148;
        case 0x1a314cu: goto label_1a314c;
        case 0x1a3150u: goto label_1a3150;
        case 0x1a3154u: goto label_1a3154;
        case 0x1a3158u: goto label_1a3158;
        case 0x1a315cu: goto label_1a315c;
        case 0x1a3160u: goto label_1a3160;
        case 0x1a3164u: goto label_1a3164;
        case 0x1a3168u: goto label_1a3168;
        case 0x1a316cu: goto label_1a316c;
        case 0x1a3170u: goto label_1a3170;
        case 0x1a3174u: goto label_1a3174;
        case 0x1a3178u: goto label_1a3178;
        case 0x1a317cu: goto label_1a317c;
        case 0x1a3180u: goto label_1a3180;
        case 0x1a3184u: goto label_1a3184;
        case 0x1a3188u: goto label_1a3188;
        case 0x1a318cu: goto label_1a318c;
        case 0x1a3190u: goto label_1a3190;
        case 0x1a3194u: goto label_1a3194;
        case 0x1a3198u: goto label_1a3198;
        case 0x1a319cu: goto label_1a319c;
        case 0x1a31a0u: goto label_1a31a0;
        case 0x1a31a4u: goto label_1a31a4;
        case 0x1a31a8u: goto label_1a31a8;
        case 0x1a31acu: goto label_1a31ac;
        case 0x1a31b0u: goto label_1a31b0;
        case 0x1a31b4u: goto label_1a31b4;
        case 0x1a31b8u: goto label_1a31b8;
        case 0x1a31bcu: goto label_1a31bc;
        case 0x1a31c0u: goto label_1a31c0;
        case 0x1a31c4u: goto label_1a31c4;
        case 0x1a31c8u: goto label_1a31c8;
        case 0x1a31ccu: goto label_1a31cc;
        case 0x1a31d0u: goto label_1a31d0;
        case 0x1a31d4u: goto label_1a31d4;
        case 0x1a31d8u: goto label_1a31d8;
        case 0x1a31dcu: goto label_1a31dc;
        case 0x1a31e0u: goto label_1a31e0;
        case 0x1a31e4u: goto label_1a31e4;
        case 0x1a31e8u: goto label_1a31e8;
        case 0x1a31ecu: goto label_1a31ec;
        case 0x1a31f0u: goto label_1a31f0;
        case 0x1a31f4u: goto label_1a31f4;
        case 0x1a31f8u: goto label_1a31f8;
        case 0x1a31fcu: goto label_1a31fc;
        case 0x1a3200u: goto label_1a3200;
        default: break;
    }

    ctx->pc = 0x1a30a0u;

label_1a30a0:
    // 0x1a30a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a30a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a30a4:
    // 0x1a30a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a30a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a30a8:
    // 0x1a30a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a30a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a30ac:
    // 0x1a30ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a30acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a30b0:
    // 0x1a30b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a30b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1a30b4:
    // 0x1a30b4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a30b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1a30b8:
    // 0x1a30b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a30bc:
    // 0x1a30bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a30c0:
    if (ctx->pc == 0x1A30C0u) {
        ctx->pc = 0x1A30C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30BCu;
        // 0x1a30c0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30C4u;
        goto label_1a30c4;
    }
    ctx->pc = 0x1A30BCu;
    {
        const bool branch_taken_0x1a30bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A30C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30BCu;
        // 0x1a30c0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a30bc) {
            ctx->pc = 0x1A30D8u;
            goto label_1a30d8;
        }
    }
    ctx->pc = 0x1A30C4u;
label_1a30c4:
    // 0x1a30c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a30c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a30c8:
    // 0x1a30c8: 0x40f809  jalr        $v0
label_1a30cc:
    if (ctx->pc == 0x1A30CCu) {
        ctx->pc = 0x1A30CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30C8u;
        // 0x1a30cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30D0u;
        goto label_1a30d0;
    }
    ctx->pc = 0x1A30C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A30D0u);
        ctx->pc = 0x1A30CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30C8u;
        // 0x1a30cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A30C8u, 0x1A30D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A30D0u;
label_1a30d0:
    // 0x1a30d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a30d4:
    if (ctx->pc == 0x1A30D4u) {
        ctx->pc = 0x1A30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30D0u;
        // 0x1a30d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30D8u;
        goto label_1a30d8;
    }
    ctx->pc = 0x1A30D0u;
    {
        const bool branch_taken_0x1a30d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30D0u;
        // 0x1a30d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a30d0) {
            ctx->pc = 0x1A30F0u;
            goto label_1a30f0;
        }
    }
    ctx->pc = 0x1A30D8u;
label_1a30d8:
    // 0x1a30d8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a30d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a30dc:
    // 0x1a30dc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a30dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a30e0:
    // 0x1a30e0: 0x24a59250  addiu       $a1, $a1, -0x6DB0
    ctx->pc = 0x1a30e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
label_1a30e4:
    // 0x1a30e4: 0xc068186  jal         func_1A0618
label_1a30e8:
    if (ctx->pc == 0x1A30E8u) {
        ctx->pc = 0x1A30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30E4u;
        // 0x1a30e8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30ECu;
        goto label_1a30ec;
    }
    ctx->pc = 0x1A30E4u;
    SET_GPR_U32(ctx, 31, 0x1A30ECu);
    ctx->pc = 0x1A30E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30E4u;
    // 0x1a30e8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A30E4u, 0x1A30ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30ECu;
label_1a30ec:
    // 0x1a30ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a30ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a30f0:
    // 0x1a30f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a30f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a30f4:
    // 0x1a30f4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1a30f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1a30f8:
    // 0x1a30f8: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1a30f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1a30fc:
    // 0x1a30fc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1a30fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a3100:
    // 0x1a3100: 0x4a0002ff  vnop
    ctx->pc = 0x1a3100u;
    // NOP operation, no action needed for VU0
label_1a3104:
    // 0x1a3104: 0x4a0002ff  vnop
    ctx->pc = 0x1a3104u;
    // NOP operation, no action needed for VU0
label_1a3108:
    // 0x1a3108: 0x4a0002ff  vnop
    ctx->pc = 0x1a3108u;
    // NOP operation, no action needed for VU0
label_1a310c:
    // 0x1a310c: 0x4a0002ff  vnop
    ctx->pc = 0x1a310cu;
    // NOP operation, no action needed for VU0
label_1a3110:
    // 0x1a3110: 0x4a0002ff  vnop
    ctx->pc = 0x1a3110u;
    // NOP operation, no action needed for VU0
label_1a3114:
    // 0x1a3114: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1a3114u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
label_1a3118:
    // 0x1a3118: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1a3118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
label_1a311c:
    // 0x1a311c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1a311cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
label_1a3120:
    // 0x1a3120: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1a3120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a3124:
    // 0x1a3124: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_1a3128:
    if (ctx->pc == 0x1A3128u) {
        ctx->pc = 0x1A312Cu;
        goto label_1a312c;
    }
    ctx->pc = 0x1A3124u;
    {
        const bool branch_taken_0x1a3124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3124) {
            ctx->pc = 0x1A31E0u;
            goto label_1a31e0;
        }
    }
    ctx->pc = 0x1A312Cu;
label_1a312c:
    // 0x1a312c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1a312cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1a3130:
    // 0x1a3130: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a3130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a3134:
    // 0x1a3134: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_1a3138:
    if (ctx->pc == 0x1A3138u) {
        ctx->pc = 0x1A3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3134u;
        // 0x1a3138: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A313Cu;
        goto label_1a313c;
    }
    ctx->pc = 0x1A3134u;
    {
        const bool branch_taken_0x1a3134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3134u;
        // 0x1a3138: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3134) {
            ctx->pc = 0x1A31E0u;
            goto label_1a31e0;
        }
    }
    ctx->pc = 0x1A313Cu;
label_1a313c:
    // 0x1a313c: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x1a313cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1a3140:
    // 0x1a3140: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x1a3140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1a3144:
    // 0x1a3144: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a3144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a3148:
    // 0x1a3148: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a314c:
    if (ctx->pc == 0x1A314Cu) {
        ctx->pc = 0x1A314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3148u;
        // 0x1a314c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3150u;
        goto label_1a3150;
    }
    ctx->pc = 0x1A3148u;
    {
        const bool branch_taken_0x1a3148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3148u;
        // 0x1a314c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3148) {
            ctx->pc = 0x1A3158u;
            goto label_1a3158;
        }
    }
    ctx->pc = 0x1A3150u;
label_1a3150:
    // 0x1a3150: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x1a3150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_1a3154:
    // 0x1a3154: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x1a3154u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a3158:
    // 0x1a3158: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1a315c:
    if (ctx->pc == 0x1A315Cu) {
        ctx->pc = 0x1A315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3158u;
        // 0x1a315c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3160u;
        goto label_1a3160;
    }
    ctx->pc = 0x1A3158u;
    {
        const bool branch_taken_0x1a3158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3158u;
        // 0x1a315c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3158) {
            ctx->pc = 0x1A3178u;
            goto label_1a3178;
        }
    }
    ctx->pc = 0x1A3160u;
label_1a3160:
    // 0x1a3160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3164:
    // 0x1a3164: 0xc4ac0014  lwc1        $f12, 0x14($a1)
    ctx->pc = 0x1a3164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a3168:
    // 0x1a3168: 0xc067858  jal         func_19E160
label_1a316c:
    if (ctx->pc == 0x1A316Cu) {
        ctx->pc = 0x1A316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3168u;
        // 0x1a316c: 0xc4ad0010  lwc1        $f13, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3170u;
        goto label_1a3170;
    }
    ctx->pc = 0x1A3168u;
    SET_GPR_U32(ctx, 31, 0x1A3170u);
    ctx->pc = 0x1A316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3168u;
    // 0x1a316c: 0xc4ad0010  lwc1        $f13, 0x10($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E160u, 0x1A3168u, 0x1A3170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3170u;
label_1a3170:
    // 0x1a3170: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a3174:
    if (ctx->pc == 0x1A3174u) {
        ctx->pc = 0x1A3174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3170u;
        // 0x1a3174: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3178u;
        goto label_1a3178;
    }
    ctx->pc = 0x1A3170u;
    {
        const bool branch_taken_0x1a3170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3170u;
        // 0x1a3174: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3170) {
            ctx->pc = 0x1A318Cu;
            goto label_1a318c;
        }
    }
    ctx->pc = 0x1A3178u;
label_1a3178:
    // 0x1a3178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a317c:
    // 0x1a317c: 0xc4ac0014  lwc1        $f12, 0x14($a1)
    ctx->pc = 0x1a317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a3180:
    // 0x1a3180: 0xc067804  jal         func_19E010
label_1a3184:
    if (ctx->pc == 0x1A3184u) {
        ctx->pc = 0x1A3184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3180u;
        // 0x1a3184: 0xc4ad0010  lwc1        $f13, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3188u;
        goto label_1a3188;
    }
    ctx->pc = 0x1A3180u;
    SET_GPR_U32(ctx, 31, 0x1A3188u);
    ctx->pc = 0x1A3184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3180u;
    // 0x1a3184: 0xc4ad0010  lwc1        $f13, 0x10($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E010u, 0x1A3180u, 0x1A3188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3188u;
label_1a3188:
    // 0x1a3188: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a3188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a318c:
    // 0x1a318c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a3190:
    if (ctx->pc == 0x1A3190u) {
        ctx->pc = 0x1A3190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A318Cu;
        // 0x1a3190: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3194u;
        goto label_1a3194;
    }
    ctx->pc = 0x1A318Cu;
    {
        const bool branch_taken_0x1a318c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A318Cu;
        // 0x1a3190: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a318c) {
            ctx->pc = 0x1A31B0u;
            goto label_1a31b0;
        }
    }
    ctx->pc = 0x1A3194u;
label_1a3194:
    // 0x1a3194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3198:
    // 0x1a3198: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a3198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a319c:
    // 0x1a319c: 0x40f809  jalr        $v0
label_1a31a0:
    if (ctx->pc == 0x1A31A0u) {
        ctx->pc = 0x1A31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A319Cu;
        // 0x1a31a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31A4u;
        goto label_1a31a4;
    }
    ctx->pc = 0x1A319Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A31A4u);
        ctx->pc = 0x1A31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A319Cu;
        // 0x1a31a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A319Cu, 0x1A31A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A31A4u;
label_1a31a4:
    // 0x1a31a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a31a8:
    if (ctx->pc == 0x1A31A8u) {
        ctx->pc = 0x1A31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31A4u;
        // 0x1a31a8: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31ACu;
        goto label_1a31ac;
    }
    ctx->pc = 0x1A31A4u;
    {
        const bool branch_taken_0x1a31a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31A4u;
        // 0x1a31a8: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a31a4) {
            ctx->pc = 0x1A31C8u;
            goto label_1a31c8;
        }
    }
    ctx->pc = 0x1A31ACu;
label_1a31ac:
    // 0x1a31ac: 0x0  nop
    ctx->pc = 0x1a31acu;
    // NOP
label_1a31b0:
    // 0x1a31b0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a31b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a31b4:
    // 0x1a31b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a31b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a31b8:
    // 0x1a31b8: 0x24a59268  addiu       $a1, $a1, -0x6D98
    ctx->pc = 0x1a31b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939240));
label_1a31bc:
    // 0x1a31bc: 0xc068186  jal         func_1A0618
label_1a31c0:
    if (ctx->pc == 0x1A31C0u) {
        ctx->pc = 0x1A31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31BCu;
        // 0x1a31c0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31C4u;
        goto label_1a31c4;
    }
    ctx->pc = 0x1A31BCu;
    SET_GPR_U32(ctx, 31, 0x1A31C4u);
    ctx->pc = 0x1A31C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31BCu;
    // 0x1a31c0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A31BCu, 0x1A31C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31C4u;
label_1a31c4:
    // 0x1a31c4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1a31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1a31c8:
    // 0x1a31c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a31cc:
    if (ctx->pc == 0x1A31CCu) {
        ctx->pc = 0x1A31D0u;
        goto label_1a31d0;
    }
    ctx->pc = 0x1A31C8u;
    {
        const bool branch_taken_0x1a31c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a31c8) {
            ctx->pc = 0x1A31E8u;
            goto label_1a31e8;
        }
    }
    ctx->pc = 0x1A31D0u;
label_1a31d0:
    // 0x1a31d0: 0x40f809  jalr        $v0
label_1a31d4:
    if (ctx->pc == 0x1A31D4u) {
        ctx->pc = 0x1A31D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31D0u;
        // 0x1a31d4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31D8u;
        goto label_1a31d8;
    }
    ctx->pc = 0x1A31D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A31D8u);
        ctx->pc = 0x1A31D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31D0u;
        // 0x1a31d4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A31D0u, 0x1A31D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A31D8u;
label_1a31d8:
    // 0x1a31d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a31dc:
    if (ctx->pc == 0x1A31DCu) {
        ctx->pc = 0x1A31E0u;
        goto label_1a31e0;
    }
    ctx->pc = 0x1A31D8u;
    {
        const bool branch_taken_0x1a31d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a31d8) {
            ctx->pc = 0x1A31E8u;
            goto label_1a31e8;
        }
    }
    ctx->pc = 0x1A31E0u;
label_1a31e0:
    // 0x1a31e0: 0xc06881e  jal         func_1A2078
label_1a31e4:
    if (ctx->pc == 0x1A31E4u) {
        ctx->pc = 0x1A31E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31E0u;
        // 0x1a31e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31E8u;
        goto label_1a31e8;
    }
    ctx->pc = 0x1A31E0u;
    SET_GPR_U32(ctx, 31, 0x1A31E8u);
    ctx->pc = 0x1A31E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31E0u;
    // 0x1a31e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A31E0u, 0x1A31E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31E8u;
label_1a31e8:
    // 0x1a31e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a31e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a31ec:
    // 0x1a31ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a31ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a31f0:
    // 0x1a31f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a31f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a31f4:
    // 0x1a31f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a31f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a31f8:
    // 0x1a31f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a31f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a31fc:
    // 0x1a31fc: 0x3e00008  jr          $ra
label_1a3200:
    if (ctx->pc == 0x1A3200u) {
        ctx->pc = 0x1A3200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31FCu;
        // 0x1a3200: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3204u;
        goto label_fallthrough_0x1a31fc;
    }
    ctx->pc = 0x1A31FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31FCu;
        // 0x1a3200: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A31FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a31fc:
    ctx->pc = 0x1A3204u;
}
