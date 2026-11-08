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

// Function: BMotionMomentVector__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1a3208 - 0x1a33fc
void BMotionMomentVector__FP11BMotionCtrlP11BMotionWorki_0x1a3208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionMomentVector__FP11BMotionCtrlP11BMotionWorki_0x1a3208");
#endif

    switch (ctx->pc) {
        case 0x1a3208u: goto label_1a3208;
        case 0x1a320cu: goto label_1a320c;
        case 0x1a3210u: goto label_1a3210;
        case 0x1a3214u: goto label_1a3214;
        case 0x1a3218u: goto label_1a3218;
        case 0x1a321cu: goto label_1a321c;
        case 0x1a3220u: goto label_1a3220;
        case 0x1a3224u: goto label_1a3224;
        case 0x1a3228u: goto label_1a3228;
        case 0x1a322cu: goto label_1a322c;
        case 0x1a3230u: goto label_1a3230;
        case 0x1a3234u: goto label_1a3234;
        case 0x1a3238u: goto label_1a3238;
        case 0x1a323cu: goto label_1a323c;
        case 0x1a3240u: goto label_1a3240;
        case 0x1a3244u: goto label_1a3244;
        case 0x1a3248u: goto label_1a3248;
        case 0x1a324cu: goto label_1a324c;
        case 0x1a3250u: goto label_1a3250;
        case 0x1a3254u: goto label_1a3254;
        case 0x1a3258u: goto label_1a3258;
        case 0x1a325cu: goto label_1a325c;
        case 0x1a3260u: goto label_1a3260;
        case 0x1a3264u: goto label_1a3264;
        case 0x1a3268u: goto label_1a3268;
        case 0x1a326cu: goto label_1a326c;
        case 0x1a3270u: goto label_1a3270;
        case 0x1a3274u: goto label_1a3274;
        case 0x1a3278u: goto label_1a3278;
        case 0x1a327cu: goto label_1a327c;
        case 0x1a3280u: goto label_1a3280;
        case 0x1a3284u: goto label_1a3284;
        case 0x1a3288u: goto label_1a3288;
        case 0x1a328cu: goto label_1a328c;
        case 0x1a3290u: goto label_1a3290;
        case 0x1a3294u: goto label_1a3294;
        case 0x1a3298u: goto label_1a3298;
        case 0x1a329cu: goto label_1a329c;
        case 0x1a32a0u: goto label_1a32a0;
        case 0x1a32a4u: goto label_1a32a4;
        case 0x1a32a8u: goto label_1a32a8;
        case 0x1a32acu: goto label_1a32ac;
        case 0x1a32b0u: goto label_1a32b0;
        case 0x1a32b4u: goto label_1a32b4;
        case 0x1a32b8u: goto label_1a32b8;
        case 0x1a32bcu: goto label_1a32bc;
        case 0x1a32c0u: goto label_1a32c0;
        case 0x1a32c4u: goto label_1a32c4;
        case 0x1a32c8u: goto label_1a32c8;
        case 0x1a32ccu: goto label_1a32cc;
        case 0x1a32d0u: goto label_1a32d0;
        case 0x1a32d4u: goto label_1a32d4;
        case 0x1a32d8u: goto label_1a32d8;
        case 0x1a32dcu: goto label_1a32dc;
        case 0x1a32e0u: goto label_1a32e0;
        case 0x1a32e4u: goto label_1a32e4;
        case 0x1a32e8u: goto label_1a32e8;
        case 0x1a32ecu: goto label_1a32ec;
        case 0x1a32f0u: goto label_1a32f0;
        case 0x1a32f4u: goto label_1a32f4;
        case 0x1a32f8u: goto label_1a32f8;
        case 0x1a32fcu: goto label_1a32fc;
        case 0x1a3300u: goto label_1a3300;
        case 0x1a3304u: goto label_1a3304;
        case 0x1a3308u: goto label_1a3308;
        case 0x1a330cu: goto label_1a330c;
        case 0x1a3310u: goto label_1a3310;
        case 0x1a3314u: goto label_1a3314;
        case 0x1a3318u: goto label_1a3318;
        case 0x1a331cu: goto label_1a331c;
        case 0x1a3320u: goto label_1a3320;
        case 0x1a3324u: goto label_1a3324;
        case 0x1a3328u: goto label_1a3328;
        case 0x1a332cu: goto label_1a332c;
        case 0x1a3330u: goto label_1a3330;
        case 0x1a3334u: goto label_1a3334;
        case 0x1a3338u: goto label_1a3338;
        case 0x1a333cu: goto label_1a333c;
        case 0x1a3340u: goto label_1a3340;
        case 0x1a3344u: goto label_1a3344;
        case 0x1a3348u: goto label_1a3348;
        case 0x1a334cu: goto label_1a334c;
        case 0x1a3350u: goto label_1a3350;
        case 0x1a3354u: goto label_1a3354;
        case 0x1a3358u: goto label_1a3358;
        case 0x1a335cu: goto label_1a335c;
        case 0x1a3360u: goto label_1a3360;
        case 0x1a3364u: goto label_1a3364;
        case 0x1a3368u: goto label_1a3368;
        case 0x1a336cu: goto label_1a336c;
        case 0x1a3370u: goto label_1a3370;
        case 0x1a3374u: goto label_1a3374;
        case 0x1a3378u: goto label_1a3378;
        case 0x1a337cu: goto label_1a337c;
        case 0x1a3380u: goto label_1a3380;
        case 0x1a3384u: goto label_1a3384;
        case 0x1a3388u: goto label_1a3388;
        case 0x1a338cu: goto label_1a338c;
        case 0x1a3390u: goto label_1a3390;
        case 0x1a3394u: goto label_1a3394;
        case 0x1a3398u: goto label_1a3398;
        case 0x1a339cu: goto label_1a339c;
        case 0x1a33a0u: goto label_1a33a0;
        case 0x1a33a4u: goto label_1a33a4;
        case 0x1a33a8u: goto label_1a33a8;
        case 0x1a33acu: goto label_1a33ac;
        case 0x1a33b0u: goto label_1a33b0;
        case 0x1a33b4u: goto label_1a33b4;
        case 0x1a33b8u: goto label_1a33b8;
        case 0x1a33bcu: goto label_1a33bc;
        case 0x1a33c0u: goto label_1a33c0;
        case 0x1a33c4u: goto label_1a33c4;
        case 0x1a33c8u: goto label_1a33c8;
        case 0x1a33ccu: goto label_1a33cc;
        case 0x1a33d0u: goto label_1a33d0;
        case 0x1a33d4u: goto label_1a33d4;
        case 0x1a33d8u: goto label_1a33d8;
        case 0x1a33dcu: goto label_1a33dc;
        case 0x1a33e0u: goto label_1a33e0;
        case 0x1a33e4u: goto label_1a33e4;
        case 0x1a33e8u: goto label_1a33e8;
        case 0x1a33ecu: goto label_1a33ec;
        case 0x1a33f0u: goto label_1a33f0;
        case 0x1a33f4u: goto label_1a33f4;
        case 0x1a33f8u: goto label_1a33f8;
        default: break;
    }

    ctx->pc = 0x1a3208u;

label_1a3208:
    // 0x1a3208: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a3208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a320c:
    // 0x1a320c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a320cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1a3210:
    // 0x1a3210: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a3210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1a3214:
    // 0x1a3214: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a3214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3218:
    // 0x1a3218: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a3218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a321c:
    // 0x1a321c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a321cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1a3220:
    // 0x1a3220: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a3220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1a3224:
    // 0x1a3224: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a3228:
    if (ctx->pc == 0x1A3228u) {
        ctx->pc = 0x1A3228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3224u;
        // 0x1a3228: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A322Cu;
        goto label_1a322c;
    }
    ctx->pc = 0x1A3224u;
    {
        const bool branch_taken_0x1a3224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3224u;
        // 0x1a3228: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3224) {
            ctx->pc = 0x1A3240u;
            goto label_1a3240;
        }
    }
    ctx->pc = 0x1A322Cu;
label_1a322c:
    // 0x1a322c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a322cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3230:
    // 0x1a3230: 0x40f809  jalr        $v0
label_1a3234:
    if (ctx->pc == 0x1A3234u) {
        ctx->pc = 0x1A3234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3230u;
        // 0x1a3234: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3238u;
        goto label_1a3238;
    }
    ctx->pc = 0x1A3230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3238u);
        ctx->pc = 0x1A3234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3230u;
        // 0x1a3234: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3230u, 0x1A3238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3238u;
label_1a3238:
    // 0x1a3238: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a323c:
    if (ctx->pc == 0x1A323Cu) {
        ctx->pc = 0x1A323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3238u;
        // 0x1a323c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3240u;
        goto label_1a3240;
    }
    ctx->pc = 0x1A3238u;
    {
        const bool branch_taken_0x1a3238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3238u;
        // 0x1a323c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3238) {
            ctx->pc = 0x1A3258u;
            goto label_1a3258;
        }
    }
    ctx->pc = 0x1A3240u;
label_1a3240:
    // 0x1a3240: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1a3240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1a3244:
    // 0x1a3244: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a3244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a3248:
    // 0x1a3248: 0x24a59250  addiu       $a1, $a1, -0x6DB0
    ctx->pc = 0x1a3248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
label_1a324c:
    // 0x1a324c: 0xc068186  jal         func_1A0618
label_1a3250:
    if (ctx->pc == 0x1A3250u) {
        ctx->pc = 0x1A3250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A324Cu;
        // 0x1a3250: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3254u;
        goto label_1a3254;
    }
    ctx->pc = 0x1A324Cu;
    SET_GPR_U32(ctx, 31, 0x1A3254u);
    ctx->pc = 0x1A3250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A324Cu;
    // 0x1a3250: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A324Cu, 0x1A3254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3254u;
label_1a3254:
    // 0x1a3254: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a3254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3258:
    // 0x1a3258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a325c:
    // 0x1a325c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a325cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3260:
    // 0x1a3260: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a3260u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3264:
    // 0x1a3264: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1a3264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a3268:
    // 0x1a3268: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1a3268u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1a326c:
    // 0x1a326c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1a326cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a3270:
    // 0x1a3270: 0x4a0002ff  vnop
    ctx->pc = 0x1a3270u;
    // NOP operation, no action needed for VU0
label_1a3274:
    // 0x1a3274: 0x4a0002ff  vnop
    ctx->pc = 0x1a3274u;
    // NOP operation, no action needed for VU0
label_1a3278:
    // 0x1a3278: 0x4a0002ff  vnop
    ctx->pc = 0x1a3278u;
    // NOP operation, no action needed for VU0
label_1a327c:
    // 0x1a327c: 0x4a0002ff  vnop
    ctx->pc = 0x1a327cu;
    // NOP operation, no action needed for VU0
label_1a3280:
    // 0x1a3280: 0x4a0002ff  vnop
    ctx->pc = 0x1a3280u;
    // NOP operation, no action needed for VU0
label_1a3284:
    // 0x1a3284: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1a3284u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
label_1a3288:
    // 0x1a3288: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1a3288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
label_1a328c:
    // 0x1a328c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1a328cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
label_1a3290:
    // 0x1a3290: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_1a3294:
    if (ctx->pc == 0x1A3294u) {
        ctx->pc = 0x1A3294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3290u;
        // 0x1a3294: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3298u;
        goto label_1a3298;
    }
    ctx->pc = 0x1A3290u;
    {
        const bool branch_taken_0x1a3290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3290) {
            ctx->pc = 0x1A3294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3290u;
            // 0x1a3294: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A32CCu;
            goto label_1a32cc;
        }
    }
    ctx->pc = 0x1A3298u;
label_1a3298:
    // 0x1a3298: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1a3298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a329c:
    // 0x1a329c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1a329cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a32a0:
    // 0x1a32a0: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x1a32a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a32a4:
    // 0x1a32a4: 0x4a0002ff  vnop
    ctx->pc = 0x1a32a4u;
    // NOP operation, no action needed for VU0
label_1a32a8:
    // 0x1a32a8: 0x4a0002ff  vnop
    ctx->pc = 0x1a32a8u;
    // NOP operation, no action needed for VU0
label_1a32ac:
    // 0x1a32ac: 0x4a0002ff  vnop
    ctx->pc = 0x1a32acu;
    // NOP operation, no action needed for VU0
label_1a32b0:
    // 0x1a32b0: 0x4a0002ff  vnop
    ctx->pc = 0x1a32b0u;
    // NOP operation, no action needed for VU0
label_1a32b4:
    // 0x1a32b4: 0x4a0002ff  vnop
    ctx->pc = 0x1a32b4u;
    // NOP operation, no action needed for VU0
label_1a32b8:
    // 0x1a32b8: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1a32b8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
label_1a32bc:
    // 0x1a32bc: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1a32bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
label_1a32c0:
    // 0x1a32c0: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1a32c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
label_1a32c4:
    // 0x1a32c4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a32c8:
    if (ctx->pc == 0x1A32C8u) {
        ctx->pc = 0x1A32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32C4u;
        // 0x1a32c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A32CCu;
        goto label_1a32cc;
    }
    ctx->pc = 0x1A32C4u;
    {
        const bool branch_taken_0x1a32c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a32c4) {
            ctx->pc = 0x1A32C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A32C4u;
            // 0x1a32c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A32CCu;
            goto label_1a32cc;
        }
    }
    ctx->pc = 0x1A32CCu;
label_1a32cc:
    // 0x1a32cc: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
label_1a32d0:
    if (ctx->pc == 0x1A32D0u) {
        ctx->pc = 0x1A32D4u;
        goto label_1a32d4;
    }
    ctx->pc = 0x1A32CCu;
    {
        const bool branch_taken_0x1a32cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a32cc) {
            ctx->pc = 0x1A33D8u;
            goto label_1a33d8;
        }
    }
    ctx->pc = 0x1A32D4u;
label_1a32d4:
    // 0x1a32d4: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1a32d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1a32d8:
    // 0x1a32d8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a32d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a32dc:
    // 0x1a32dc: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_1a32e0:
    if (ctx->pc == 0x1A32E0u) {
        ctx->pc = 0x1A32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32DCu;
        // 0x1a32e0: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A32E4u;
        goto label_1a32e4;
    }
    ctx->pc = 0x1A32DCu;
    {
        const bool branch_taken_0x1a32dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32DCu;
        // 0x1a32e0: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32dc) {
            ctx->pc = 0x1A33D8u;
            goto label_1a33d8;
        }
    }
    ctx->pc = 0x1A32E4u;
label_1a32e4:
    // 0x1a32e4: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1a32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a32e8:
    // 0x1a32e8: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1a32e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1a32ec:
    // 0x1a32ec: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x1a32ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a32f0:
    // 0x1a32f0: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a32f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a32f4:
    // 0x1a32f4: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1a32f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a32f8:
    // 0x1a32f8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a32f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a32fc:
    // 0x1a32fc: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1a32fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a3300:
    // 0x1a3300: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1a3300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a3304:
    // 0x1a3304: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1a3304u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a3308:
    // 0x1a3308: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1a3308u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a330c:
    // 0x1a330c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a330cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a3310:
    // 0x1a3310: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a3310u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a3314:
    // 0x1a3314: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x1a3314u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_1a3318:
    // 0x1a3318: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x1a3318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1a331c:
    // 0x1a331c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a331cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a3320:
    // 0x1a3320: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a3324:
    if (ctx->pc == 0x1A3324u) {
        ctx->pc = 0x1A3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3320u;
        // 0x1a3324: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3328u;
        goto label_1a3328;
    }
    ctx->pc = 0x1A3320u;
    {
        const bool branch_taken_0x1a3320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3320u;
        // 0x1a3324: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3320) {
            ctx->pc = 0x1A3330u;
            goto label_1a3330;
        }
    }
    ctx->pc = 0x1A3328u;
label_1a3328:
    // 0x1a3328: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x1a3328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_1a332c:
    // 0x1a332c: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x1a332cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a3330:
    // 0x1a3330: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1a3334:
    if (ctx->pc == 0x1A3334u) {
        ctx->pc = 0x1A3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3330u;
        // 0x1a3334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3338u;
        goto label_1a3338;
    }
    ctx->pc = 0x1A3330u;
    {
        const bool branch_taken_0x1a3330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3330u;
        // 0x1a3334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3330) {
            ctx->pc = 0x1A3350u;
            goto label_1a3350;
        }
    }
    ctx->pc = 0x1A3338u;
label_1a3338:
    // 0x1a3338: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a3338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a333c:
    // 0x1a333c: 0xc067858  jal         func_19E160
label_1a3340:
    if (ctx->pc == 0x1A3340u) {
        ctx->pc = 0x1A3340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A333Cu;
        // 0x1a3340: 0xc62d0020  lwc1        $f13, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3344u;
        goto label_1a3344;
    }
    ctx->pc = 0x1A333Cu;
    SET_GPR_U32(ctx, 31, 0x1A3344u);
    ctx->pc = 0x1A3340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A333Cu;
    // 0x1a3340: 0xc62d0020  lwc1        $f13, 0x20($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E160u, 0x1A333Cu, 0x1A3344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3344u;
label_1a3344:
    // 0x1a3344: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a3348:
    if (ctx->pc == 0x1A3348u) {
        ctx->pc = 0x1A3348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3344u;
        // 0x1a3348: 0xc6210024  lwc1        $f1, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A334Cu;
        goto label_1a334c;
    }
    ctx->pc = 0x1A3344u;
    {
        const bool branch_taken_0x1a3344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3344u;
        // 0x1a3348: 0xc6210024  lwc1        $f1, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3344) {
            ctx->pc = 0x1A3360u;
            goto label_1a3360;
        }
    }
    ctx->pc = 0x1A334Cu;
label_1a334c:
    // 0x1a334c: 0x0  nop
    ctx->pc = 0x1a334cu;
    // NOP
label_1a3350:
    // 0x1a3350: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a3350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a3354:
    // 0x1a3354: 0xc067804  jal         func_19E010
label_1a3358:
    if (ctx->pc == 0x1A3358u) {
        ctx->pc = 0x1A3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3354u;
        // 0x1a3358: 0xc62d0020  lwc1        $f13, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A335Cu;
        goto label_1a335c;
    }
    ctx->pc = 0x1A3354u;
    SET_GPR_U32(ctx, 31, 0x1A335Cu);
    ctx->pc = 0x1A3358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3354u;
    // 0x1a3358: 0xc62d0020  lwc1        $f13, 0x20($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E010u, 0x1A3354u, 0x1A335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A335Cu;
label_1a335c:
    // 0x1a335c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x1a335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3360:
    // 0x1a3360: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1a3360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a3364:
    // 0x1a3364: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3368:
    // 0x1a3368: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a336c:
    // 0x1a336c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a336cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a3370:
    // 0x1a3370: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a3370u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a3374:
    // 0x1a3374: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a3374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a3378:
    // 0x1a3378: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1a3378u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1a337c:
    // 0x1a337c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1a337cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a3380:
    // 0x1a3380: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a3380u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a3384:
    // 0x1a3384: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a3384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1a3388:
    // 0x1a3388: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a338c:
    if (ctx->pc == 0x1A338Cu) {
        ctx->pc = 0x1A338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3388u;
        // 0x1a338c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3390u;
        goto label_1a3390;
    }
    ctx->pc = 0x1A3388u;
    {
        const bool branch_taken_0x1a3388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3388u;
        // 0x1a338c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3388) {
            ctx->pc = 0x1A33A8u;
            goto label_1a33a8;
        }
    }
    ctx->pc = 0x1A3390u;
label_1a3390:
    // 0x1a3390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a3390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3394:
    // 0x1a3394: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a3394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3398:
    // 0x1a3398: 0x40f809  jalr        $v0
label_1a339c:
    if (ctx->pc == 0x1A339Cu) {
        ctx->pc = 0x1A339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3398u;
        // 0x1a339c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33A0u;
        goto label_1a33a0;
    }
    ctx->pc = 0x1A3398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A33A0u);
        ctx->pc = 0x1A339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3398u;
        // 0x1a339c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3398u, 0x1A33A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A33A0u;
label_1a33a0:
    // 0x1a33a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a33a4:
    if (ctx->pc == 0x1A33A4u) {
        ctx->pc = 0x1A33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33A0u;
        // 0x1a33a4: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33A8u;
        goto label_1a33a8;
    }
    ctx->pc = 0x1A33A0u;
    {
        const bool branch_taken_0x1a33a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33A0u;
        // 0x1a33a4: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a33a0) {
            ctx->pc = 0x1A33C0u;
            goto label_1a33c0;
        }
    }
    ctx->pc = 0x1A33A8u;
label_1a33a8:
    // 0x1a33a8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a33a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a33ac:
    // 0x1a33ac: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1a33acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1a33b0:
    // 0x1a33b0: 0x24a59268  addiu       $a1, $a1, -0x6D98
    ctx->pc = 0x1a33b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939240));
label_1a33b4:
    // 0x1a33b4: 0xc068186  jal         func_1A0618
label_1a33b8:
    if (ctx->pc == 0x1A33B8u) {
        ctx->pc = 0x1A33B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33B4u;
        // 0x1a33b8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33BCu;
        goto label_1a33bc;
    }
    ctx->pc = 0x1A33B4u;
    SET_GPR_U32(ctx, 31, 0x1A33BCu);
    ctx->pc = 0x1A33B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A33B4u;
    // 0x1a33b8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A33B4u, 0x1A33BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A33BCu;
label_1a33bc:
    // 0x1a33bc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1a33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1a33c0:
    // 0x1a33c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a33c4:
    if (ctx->pc == 0x1A33C4u) {
        ctx->pc = 0x1A33C8u;
        goto label_1a33c8;
    }
    ctx->pc = 0x1A33C0u;
    {
        const bool branch_taken_0x1a33c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a33c0) {
            ctx->pc = 0x1A33E0u;
            goto label_1a33e0;
        }
    }
    ctx->pc = 0x1A33C8u;
label_1a33c8:
    // 0x1a33c8: 0x40f809  jalr        $v0
label_1a33cc:
    if (ctx->pc == 0x1A33CCu) {
        ctx->pc = 0x1A33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33C8u;
        // 0x1a33cc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33D0u;
        goto label_1a33d0;
    }
    ctx->pc = 0x1A33C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A33D0u);
        ctx->pc = 0x1A33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33C8u;
        // 0x1a33cc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A33C8u, 0x1A33D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A33D0u;
label_1a33d0:
    // 0x1a33d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a33d4:
    if (ctx->pc == 0x1A33D4u) {
        ctx->pc = 0x1A33D8u;
        goto label_1a33d8;
    }
    ctx->pc = 0x1A33D0u;
    {
        const bool branch_taken_0x1a33d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a33d0) {
            ctx->pc = 0x1A33E0u;
            goto label_1a33e0;
        }
    }
    ctx->pc = 0x1A33D8u;
label_1a33d8:
    // 0x1a33d8: 0xc06881e  jal         func_1A2078
label_1a33dc:
    if (ctx->pc == 0x1A33DCu) {
        ctx->pc = 0x1A33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33D8u;
        // 0x1a33dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33E0u;
        goto label_1a33e0;
    }
    ctx->pc = 0x1A33D8u;
    SET_GPR_U32(ctx, 31, 0x1A33E0u);
    ctx->pc = 0x1A33DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A33D8u;
    // 0x1a33dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A33D8u, 0x1A33E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A33E0u;
label_1a33e0:
    // 0x1a33e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a33e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a33e4:
    // 0x1a33e4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a33e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a33e8:
    // 0x1a33e8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a33e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a33ec:
    // 0x1a33ec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a33ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a33f0:
    // 0x1a33f0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a33f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1a33f4:
    // 0x1a33f4: 0x3e00008  jr          $ra
label_1a33f8:
    if (ctx->pc == 0x1A33F8u) {
        ctx->pc = 0x1A33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33F4u;
        // 0x1a33f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33FCu;
        goto label_fallthrough_0x1a33f4;
    }
    ctx->pc = 0x1A33F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33F4u;
        // 0x1a33f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A33F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a33f4:
    ctx->pc = 0x1A33FCu;
}
