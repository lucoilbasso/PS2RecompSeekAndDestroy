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

// Function: ApMotionActorMovement__FP7WcActorP9FVector32
// Address: 0x1393c8 - 0x1394bc
void ApMotionActorMovement__FP7WcActorP9FVector32_0x1393c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionActorMovement__FP7WcActorP9FVector32_0x1393c8");
#endif

    switch (ctx->pc) {
        case 0x1393c8u: goto label_1393c8;
        case 0x1393ccu: goto label_1393cc;
        case 0x1393d0u: goto label_1393d0;
        case 0x1393d4u: goto label_1393d4;
        case 0x1393d8u: goto label_1393d8;
        case 0x1393dcu: goto label_1393dc;
        case 0x1393e0u: goto label_1393e0;
        case 0x1393e4u: goto label_1393e4;
        case 0x1393e8u: goto label_1393e8;
        case 0x1393ecu: goto label_1393ec;
        case 0x1393f0u: goto label_1393f0;
        case 0x1393f4u: goto label_1393f4;
        case 0x1393f8u: goto label_1393f8;
        case 0x1393fcu: goto label_1393fc;
        case 0x139400u: goto label_139400;
        case 0x139404u: goto label_139404;
        case 0x139408u: goto label_139408;
        case 0x13940cu: goto label_13940c;
        case 0x139410u: goto label_139410;
        case 0x139414u: goto label_139414;
        case 0x139418u: goto label_139418;
        case 0x13941cu: goto label_13941c;
        case 0x139420u: goto label_139420;
        case 0x139424u: goto label_139424;
        case 0x139428u: goto label_139428;
        case 0x13942cu: goto label_13942c;
        case 0x139430u: goto label_139430;
        case 0x139434u: goto label_139434;
        case 0x139438u: goto label_139438;
        case 0x13943cu: goto label_13943c;
        case 0x139440u: goto label_139440;
        case 0x139444u: goto label_139444;
        case 0x139448u: goto label_139448;
        case 0x13944cu: goto label_13944c;
        case 0x139450u: goto label_139450;
        case 0x139454u: goto label_139454;
        case 0x139458u: goto label_139458;
        case 0x13945cu: goto label_13945c;
        case 0x139460u: goto label_139460;
        case 0x139464u: goto label_139464;
        case 0x139468u: goto label_139468;
        case 0x13946cu: goto label_13946c;
        case 0x139470u: goto label_139470;
        case 0x139474u: goto label_139474;
        case 0x139478u: goto label_139478;
        case 0x13947cu: goto label_13947c;
        case 0x139480u: goto label_139480;
        case 0x139484u: goto label_139484;
        case 0x139488u: goto label_139488;
        case 0x13948cu: goto label_13948c;
        case 0x139490u: goto label_139490;
        case 0x139494u: goto label_139494;
        case 0x139498u: goto label_139498;
        case 0x13949cu: goto label_13949c;
        case 0x1394a0u: goto label_1394a0;
        case 0x1394a4u: goto label_1394a4;
        case 0x1394a8u: goto label_1394a8;
        case 0x1394acu: goto label_1394ac;
        case 0x1394b0u: goto label_1394b0;
        case 0x1394b4u: goto label_1394b4;
        case 0x1394b8u: goto label_1394b8;
        default: break;
    }

    ctx->pc = 0x1393c8u;

label_1393c8:
    // 0x1393c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1393c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1393cc:
    // 0x1393cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1393ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1393d0:
    // 0x1393d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1393d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1393d4:
    // 0x1393d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1393d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1393d8:
    // 0x1393d8: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x1393d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_1393dc:
    // 0x1393dc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1393dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1393e0:
    // 0x1393e0: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x1393e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1393e4:
    // 0x1393e4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1393e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1393e8:
    // 0x1393e8: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1393e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1393ec:
    // 0x1393ec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1393ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1393f0:
    // 0x1393f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1393f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1393f4:
    // 0x1393f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1393f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1393f8:
    // 0x1393f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1393fc:
    if (ctx->pc == 0x1393FCu) {
        ctx->pc = 0x1393FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393F8u;
        // 0x1393fc: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139400u;
        goto label_139400;
    }
    ctx->pc = 0x1393F8u;
    {
        const bool branch_taken_0x1393f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1393FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393F8u;
        // 0x1393fc: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1393f8) {
            ctx->pc = 0x139410u;
            goto label_139410;
        }
    }
    ctx->pc = 0x139400u;
label_139400:
    // 0x139400: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x139400u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_139404:
    // 0x139404: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x139404u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_139408:
    // 0x139408: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x139408u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13940c:
    // 0x13940c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x13940cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_139410:
    // 0x139410: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x139410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_139414:
    // 0x139414: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x139414u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_139418:
    // 0x139418: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x139418u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_13941c:
    // 0x13941c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x13941cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_139420:
    // 0x139420: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x139420u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_139424:
    // 0x139424: 0x4a0002ff  vnop
    ctx->pc = 0x139424u;
    // NOP operation, no action needed for VU0
label_139428:
    // 0x139428: 0x4a0002ff  vnop
    ctx->pc = 0x139428u;
    // NOP operation, no action needed for VU0
label_13942c:
    // 0x13942c: 0x4a0002ff  vnop
    ctx->pc = 0x13942cu;
    // NOP operation, no action needed for VU0
label_139430:
    // 0x139430: 0x4a0002ff  vnop
    ctx->pc = 0x139430u;
    // NOP operation, no action needed for VU0
label_139434:
    // 0x139434: 0x4a0002ff  vnop
    ctx->pc = 0x139434u;
    // NOP operation, no action needed for VU0
label_139438:
    // 0x139438: 0x48448800  cfc2.ni     $a0, $vi17
    ctx->pc = 0x139438u;
    SET_GPR_U32(ctx, 4, ctx->vu0_mac_flags);
label_13943c:
    // 0x13943c: 0x3084000e  andi        $a0, $a0, 0xE
    ctx->pc = 0x13943cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)14);
label_139440:
    // 0x139440: 0x3884000e  xori        $a0, $a0, 0xE
    ctx->pc = 0x139440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)14);
label_139444:
    // 0x139444: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_139448:
    if (ctx->pc == 0x139448u) {
        ctx->pc = 0x139448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139444u;
        // 0x139448: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13944Cu;
        goto label_13944c;
    }
    ctx->pc = 0x139444u;
    {
        const bool branch_taken_0x139444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x139448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139444u;
        // 0x139448: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139444) {
            ctx->pc = 0x139490u;
            goto label_139490;
        }
    }
    ctx->pc = 0x13944Cu;
label_13944c:
    // 0x13944c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x13944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_139450:
    // 0x139450: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x139450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_139454:
    // 0x139454: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_139458:
    if (ctx->pc == 0x139458u) {
        ctx->pc = 0x139458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139454u;
        // 0x139458: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13945Cu;
        goto label_13945c;
    }
    ctx->pc = 0x139454u;
    {
        const bool branch_taken_0x139454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139454) {
            ctx->pc = 0x139458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139454u;
            // 0x139458: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139494u;
            goto label_139494;
        }
    }
    ctx->pc = 0x13945Cu;
label_13945c:
    // 0x13945c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_139460:
    // 0x139460: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x139460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_139464:
    // 0x139464: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_139468:
    if (ctx->pc == 0x139468u) {
        ctx->pc = 0x139468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139464u;
        // 0x139468: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13946Cu;
        goto label_13946c;
    }
    ctx->pc = 0x139464u;
    {
        const bool branch_taken_0x139464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139464) {
            ctx->pc = 0x139468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139464u;
            // 0x139468: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139494u;
            goto label_139494;
        }
    }
    ctx->pc = 0x13946Cu;
label_13946c:
    // 0x13946c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_139470:
    // 0x139470: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x139470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_139474:
    // 0x139474: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x139474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139478:
    // 0x139478: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x139478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13947c:
    // 0x13947c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x13947cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_139480:
    // 0x139480: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x139480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_139484:
    // 0x139484: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x139484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_139488:
    // 0x139488: 0x40f809  jalr        $v0
label_13948c:
    if (ctx->pc == 0x13948Cu) {
        ctx->pc = 0x13948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139488u;
        // 0x13948c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139490u;
        goto label_139490;
    }
    ctx->pc = 0x139488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x139490u);
        ctx->pc = 0x13948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139488u;
        // 0x13948c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139488u, 0x139490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139490u;
label_139490:
    // 0x139490: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x139490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
label_139494:
    // 0x139494: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x139494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_139498:
    // 0x139498: 0x24841130  addiu       $a0, $a0, 0x1130
    ctx->pc = 0x139498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4400));
label_13949c:
    // 0x13949c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13949cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1394a0:
    // 0x1394a0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1394a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_1394a4:
    // 0x1394a4: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1394a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1394a8:
    // 0x1394a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1394a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1394ac:
    // 0x1394ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1394acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1394b0:
    // 0x1394b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1394b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1394b4:
    // 0x1394b4: 0x3e00008  jr          $ra
label_1394b8:
    if (ctx->pc == 0x1394B8u) {
        ctx->pc = 0x1394B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394B4u;
        // 0x1394b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1394BCu;
        goto label_fallthrough_0x1394b4;
    }
    ctx->pc = 0x1394B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1394B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394B4u;
        // 0x1394b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1394B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1394b4:
    ctx->pc = 0x1394BCu;
}
