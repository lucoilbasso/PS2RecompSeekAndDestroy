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

// Function: BMotionLinerMove__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1a23d0 - 0x1a25b8
void BMotionLinerMove__FP11BMotionCtrlP11BMotionWorki_0x1a23d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionLinerMove__FP11BMotionCtrlP11BMotionWorki_0x1a23d0");
#endif

    switch (ctx->pc) {
        case 0x1a23d0u: goto label_1a23d0;
        case 0x1a23d4u: goto label_1a23d4;
        case 0x1a23d8u: goto label_1a23d8;
        case 0x1a23dcu: goto label_1a23dc;
        case 0x1a23e0u: goto label_1a23e0;
        case 0x1a23e4u: goto label_1a23e4;
        case 0x1a23e8u: goto label_1a23e8;
        case 0x1a23ecu: goto label_1a23ec;
        case 0x1a23f0u: goto label_1a23f0;
        case 0x1a23f4u: goto label_1a23f4;
        case 0x1a23f8u: goto label_1a23f8;
        case 0x1a23fcu: goto label_1a23fc;
        case 0x1a2400u: goto label_1a2400;
        case 0x1a2404u: goto label_1a2404;
        case 0x1a2408u: goto label_1a2408;
        case 0x1a240cu: goto label_1a240c;
        case 0x1a2410u: goto label_1a2410;
        case 0x1a2414u: goto label_1a2414;
        case 0x1a2418u: goto label_1a2418;
        case 0x1a241cu: goto label_1a241c;
        case 0x1a2420u: goto label_1a2420;
        case 0x1a2424u: goto label_1a2424;
        case 0x1a2428u: goto label_1a2428;
        case 0x1a242cu: goto label_1a242c;
        case 0x1a2430u: goto label_1a2430;
        case 0x1a2434u: goto label_1a2434;
        case 0x1a2438u: goto label_1a2438;
        case 0x1a243cu: goto label_1a243c;
        case 0x1a2440u: goto label_1a2440;
        case 0x1a2444u: goto label_1a2444;
        case 0x1a2448u: goto label_1a2448;
        case 0x1a244cu: goto label_1a244c;
        case 0x1a2450u: goto label_1a2450;
        case 0x1a2454u: goto label_1a2454;
        case 0x1a2458u: goto label_1a2458;
        case 0x1a245cu: goto label_1a245c;
        case 0x1a2460u: goto label_1a2460;
        case 0x1a2464u: goto label_1a2464;
        case 0x1a2468u: goto label_1a2468;
        case 0x1a246cu: goto label_1a246c;
        case 0x1a2470u: goto label_1a2470;
        case 0x1a2474u: goto label_1a2474;
        case 0x1a2478u: goto label_1a2478;
        case 0x1a247cu: goto label_1a247c;
        case 0x1a2480u: goto label_1a2480;
        case 0x1a2484u: goto label_1a2484;
        case 0x1a2488u: goto label_1a2488;
        case 0x1a248cu: goto label_1a248c;
        case 0x1a2490u: goto label_1a2490;
        case 0x1a2494u: goto label_1a2494;
        case 0x1a2498u: goto label_1a2498;
        case 0x1a249cu: goto label_1a249c;
        case 0x1a24a0u: goto label_1a24a0;
        case 0x1a24a4u: goto label_1a24a4;
        case 0x1a24a8u: goto label_1a24a8;
        case 0x1a24acu: goto label_1a24ac;
        case 0x1a24b0u: goto label_1a24b0;
        case 0x1a24b4u: goto label_1a24b4;
        case 0x1a24b8u: goto label_1a24b8;
        case 0x1a24bcu: goto label_1a24bc;
        case 0x1a24c0u: goto label_1a24c0;
        case 0x1a24c4u: goto label_1a24c4;
        case 0x1a24c8u: goto label_1a24c8;
        case 0x1a24ccu: goto label_1a24cc;
        case 0x1a24d0u: goto label_1a24d0;
        case 0x1a24d4u: goto label_1a24d4;
        case 0x1a24d8u: goto label_1a24d8;
        case 0x1a24dcu: goto label_1a24dc;
        case 0x1a24e0u: goto label_1a24e0;
        case 0x1a24e4u: goto label_1a24e4;
        case 0x1a24e8u: goto label_1a24e8;
        case 0x1a24ecu: goto label_1a24ec;
        case 0x1a24f0u: goto label_1a24f0;
        case 0x1a24f4u: goto label_1a24f4;
        case 0x1a24f8u: goto label_1a24f8;
        case 0x1a24fcu: goto label_1a24fc;
        case 0x1a2500u: goto label_1a2500;
        case 0x1a2504u: goto label_1a2504;
        case 0x1a2508u: goto label_1a2508;
        case 0x1a250cu: goto label_1a250c;
        case 0x1a2510u: goto label_1a2510;
        case 0x1a2514u: goto label_1a2514;
        case 0x1a2518u: goto label_1a2518;
        case 0x1a251cu: goto label_1a251c;
        case 0x1a2520u: goto label_1a2520;
        case 0x1a2524u: goto label_1a2524;
        case 0x1a2528u: goto label_1a2528;
        case 0x1a252cu: goto label_1a252c;
        case 0x1a2530u: goto label_1a2530;
        case 0x1a2534u: goto label_1a2534;
        case 0x1a2538u: goto label_1a2538;
        case 0x1a253cu: goto label_1a253c;
        case 0x1a2540u: goto label_1a2540;
        case 0x1a2544u: goto label_1a2544;
        case 0x1a2548u: goto label_1a2548;
        case 0x1a254cu: goto label_1a254c;
        case 0x1a2550u: goto label_1a2550;
        case 0x1a2554u: goto label_1a2554;
        case 0x1a2558u: goto label_1a2558;
        case 0x1a255cu: goto label_1a255c;
        case 0x1a2560u: goto label_1a2560;
        case 0x1a2564u: goto label_1a2564;
        case 0x1a2568u: goto label_1a2568;
        case 0x1a256cu: goto label_1a256c;
        case 0x1a2570u: goto label_1a2570;
        case 0x1a2574u: goto label_1a2574;
        case 0x1a2578u: goto label_1a2578;
        case 0x1a257cu: goto label_1a257c;
        case 0x1a2580u: goto label_1a2580;
        case 0x1a2584u: goto label_1a2584;
        case 0x1a2588u: goto label_1a2588;
        case 0x1a258cu: goto label_1a258c;
        case 0x1a2590u: goto label_1a2590;
        case 0x1a2594u: goto label_1a2594;
        case 0x1a2598u: goto label_1a2598;
        case 0x1a259cu: goto label_1a259c;
        case 0x1a25a0u: goto label_1a25a0;
        case 0x1a25a4u: goto label_1a25a4;
        case 0x1a25a8u: goto label_1a25a8;
        case 0x1a25acu: goto label_1a25ac;
        case 0x1a25b0u: goto label_1a25b0;
        case 0x1a25b4u: goto label_1a25b4;
        default: break;
    }

    ctx->pc = 0x1a23d0u;

label_1a23d0:
    // 0x1a23d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a23d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a23d4:
    // 0x1a23d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a23d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a23d8:
    // 0x1a23d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a23d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a23dc:
    // 0x1a23dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a23dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a23e0:
    // 0x1a23e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a23e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a23e4:
    // 0x1a23e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a23e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a23e8:
    // 0x1a23e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a23e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a23ec:
    // 0x1a23ec: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1a23ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1a23f0:
    // 0x1a23f0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a23f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a23f4:
    // 0x1a23f4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a23f8:
    // 0x1a23f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a23fc:
    if (ctx->pc == 0x1A23FCu) {
        ctx->pc = 0x1A23FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23F8u;
        // 0x1a23fc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2400u;
        goto label_1a2400;
    }
    ctx->pc = 0x1A23F8u;
    {
        const bool branch_taken_0x1a23f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A23FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23F8u;
        // 0x1a23fc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a23f8) {
            ctx->pc = 0x1A2418u;
            goto label_1a2418;
        }
    }
    ctx->pc = 0x1A2400u;
label_1a2400:
    // 0x1a2400: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a2400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a2404:
    // 0x1a2404: 0x40f809  jalr        $v0
label_1a2408:
    if (ctx->pc == 0x1A2408u) {
        ctx->pc = 0x1A2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2404u;
        // 0x1a2408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A240Cu;
        goto label_1a240c;
    }
    ctx->pc = 0x1A2404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A240Cu);
        ctx->pc = 0x1A2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2404u;
        // 0x1a2408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2404u, 0x1A240Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A240Cu;
label_1a240c:
    // 0x1a240c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a2410:
    if (ctx->pc == 0x1A2410u) {
        ctx->pc = 0x1A2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A240Cu;
        // 0x1a2410: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2414u;
        goto label_1a2414;
    }
    ctx->pc = 0x1A240Cu;
    {
        const bool branch_taken_0x1a240c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A240Cu;
        // 0x1a2410: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a240c) {
            ctx->pc = 0x1A2448u;
            goto label_1a2448;
        }
    }
    ctx->pc = 0x1A2414u;
label_1a2414:
    // 0x1a2414: 0x0  nop
    ctx->pc = 0x1a2414u;
    // NOP
label_1a2418:
    // 0x1a2418: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x1a2418u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_1a241c:
    // 0x1a241c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a2420:
    if (ctx->pc == 0x1A2420u) {
        ctx->pc = 0x1A2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A241Cu;
        // 0x1a2420: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2424u;
        goto label_1a2424;
    }
    ctx->pc = 0x1A241Cu;
    {
        const bool branch_taken_0x1a241c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A241Cu;
        // 0x1a2420: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a241c) {
            ctx->pc = 0x1A2430u;
            goto label_1a2430;
        }
    }
    ctx->pc = 0x1A2424u;
label_1a2424:
    // 0x1a2424: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1a2424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1a2428:
    // 0x1a2428: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a242c:
    if (ctx->pc == 0x1A242Cu) {
        ctx->pc = 0x1A242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2428u;
        // 0x1a242c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2430u;
        goto label_1a2430;
    }
    ctx->pc = 0x1A2428u;
    {
        const bool branch_taken_0x1a2428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2428u;
        // 0x1a242c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2428) {
            ctx->pc = 0x1A2444u;
            goto label_1a2444;
        }
    }
    ctx->pc = 0x1A2430u;
label_1a2430:
    // 0x1a2430: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a2430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a2434:
    // 0x1a2434: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a2434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
label_1a2438:
    // 0x1a2438: 0xc068186  jal         func_1A0618
label_1a243c:
    if (ctx->pc == 0x1A243Cu) {
        ctx->pc = 0x1A243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2438u;
        // 0x1a243c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2440u;
        goto label_1a2440;
    }
    ctx->pc = 0x1A2438u;
    SET_GPR_U32(ctx, 31, 0x1A2440u);
    ctx->pc = 0x1A243Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2438u;
    // 0x1a243c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2438u, 0x1A2440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2440u;
label_1a2440:
    // 0x1a2440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2444:
    // 0x1a2444: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a2444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1a2448:
    // 0x1a2448: 0x16420012  bne         $s2, $v0, . + 4 + (0x12 << 2)
label_1a244c:
    if (ctx->pc == 0x1A244Cu) {
        ctx->pc = 0x1A244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2448u;
        // 0x1a244c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2450u;
        goto label_1a2450;
    }
    ctx->pc = 0x1A2448u;
    {
        const bool branch_taken_0x1a2448 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2448u;
        // 0x1a244c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2448) {
            ctx->pc = 0x1A2494u;
            goto label_1a2494;
        }
    }
    ctx->pc = 0x1A2450u;
label_1a2450:
    // 0x1a2450: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1a2450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1a2454:
    // 0x1a2454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2458:
    // 0x1a2458: 0xe6140008  swc1        $f20, 0x8($s0)
    ctx->pc = 0x1a2458u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1a245c:
    // 0x1a245c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a245cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1a2460:
    // 0x1a2460: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1a2460u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_1a2464:
    // 0x1a2464: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a2464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_1a2468:
    // 0x1a2468: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a2468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a246c:
    // 0x1a246c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2470:
    // 0x1a2470: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1a2470u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_1a2474:
    // 0x1a2474: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a2474u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_1a2478:
    // 0x1a2478: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1a2478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1a247c:
    // 0x1a247c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a247cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a2480:
    // 0x1a2480: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a2480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a2484:
    // 0x1a2484: 0x0  nop
    ctx->pc = 0x1a2484u;
    // NOP
label_1a2488:
    // 0x1a2488: 0x0  nop
    ctx->pc = 0x1a2488u;
    // NOP
label_1a248c:
    // 0x1a248c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a248cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1a2490:
    // 0x1a2490: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1a2490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1a2494:
    // 0x1a2494: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a2494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2498:
    // 0x1a2498: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1a2498u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a249c:
    // 0x1a249c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a24a0:
    if (ctx->pc == 0x1A24A0u) {
        ctx->pc = 0x1A24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A249Cu;
        // 0x1a24a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A24A4u;
        goto label_1a24a4;
    }
    ctx->pc = 0x1A249Cu;
    {
        const bool branch_taken_0x1a249c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A249Cu;
        // 0x1a24a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a249c) {
            ctx->pc = 0x1A24A8u;
            goto label_1a24a8;
        }
    }
    ctx->pc = 0x1A24A4u;
label_1a24a4:
    // 0x1a24a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a24a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a24a8:
    // 0x1a24a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1a24ac:
    if (ctx->pc == 0x1A24ACu) {
        ctx->pc = 0x1A24B0u;
        goto label_1a24b0;
    }
    ctx->pc = 0x1A24A8u;
    {
        const bool branch_taken_0x1a24a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a24a8) {
            ctx->pc = 0x1A24BCu;
            goto label_1a24bc;
        }
    }
    ctx->pc = 0x1A24B0u;
label_1a24b0:
    // 0x1a24b0: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1a24b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_1a24b4:
    // 0x1a24b4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a24b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a24b8:
    // 0x1a24b8: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x1a24b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_1a24bc:
    // 0x1a24bc: 0x6400036  bltz        $s2, . + 4 + (0x36 << 2)
label_1a24c0:
    if (ctx->pc == 0x1A24C0u) {
        ctx->pc = 0x1A24C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24BCu;
        // 0x1a24c0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A24C4u;
        goto label_1a24c4;
    }
    ctx->pc = 0x1A24BCu;
    {
        const bool branch_taken_0x1a24bc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1A24C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24BCu;
        // 0x1a24c0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24bc) {
            ctx->pc = 0x1A2598u;
            goto label_1a2598;
        }
    }
    ctx->pc = 0x1A24C4u;
label_1a24c4:
    // 0x1a24c4: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
label_1a24c8:
    if (ctx->pc == 0x1A24C8u) {
        ctx->pc = 0x1A24C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24C4u;
        // 0x1a24c8: 0x86020004  lh          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A24CCu;
        goto label_1a24cc;
    }
    ctx->pc = 0x1A24C4u;
    {
        const bool branch_taken_0x1a24c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a24c4) {
            ctx->pc = 0x1A24C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A24C4u;
            // 0x1a24c8: 0x86020004  lh          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2500u;
            goto label_1a2500;
        }
    }
    ctx->pc = 0x1A24CCu;
label_1a24cc:
    // 0x1a24cc: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x1a24ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_1a24d0:
    // 0x1a24d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a24d4:
    // 0x1a24d4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a24d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a24d8:
    // 0x1a24d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1a24dc:
    if (ctx->pc == 0x1A24DCu) {
        ctx->pc = 0x1A24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24D8u;
        // 0x1a24dc: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A24E0u;
        goto label_1a24e0;
    }
    ctx->pc = 0x1A24D8u;
    {
        const bool branch_taken_0x1a24d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24D8u;
        // 0x1a24dc: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24d8) {
            ctx->pc = 0x1A24E8u;
            goto label_1a24e8;
        }
    }
    ctx->pc = 0x1A24E0u;
label_1a24e0:
    // 0x1a24e0: 0x10000011  b           . + 4 + (0x11 << 2)
label_1a24e4:
    if (ctx->pc == 0x1A24E4u) {
        ctx->pc = 0x1A24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24E0u;
        // 0x1a24e4: 0xc6140000  lwc1        $f20, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A24E8u;
        goto label_1a24e8;
    }
    ctx->pc = 0x1A24E0u;
    {
        const bool branch_taken_0x1a24e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24E0u;
        // 0x1a24e4: 0xc6140000  lwc1        $f20, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24e0) {
            ctx->pc = 0x1A2528u;
            goto label_1a2528;
        }
    }
    ctx->pc = 0x1A24E8u;
label_1a24e8:
    // 0x1a24e8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1a24e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a24ec:
    // 0x1a24ec: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1a24ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a24f0:
    // 0x1a24f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a24f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a24f4:
    // 0x1a24f4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1a24f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1a24f8:
    // 0x1a24f8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a24fc:
    if (ctx->pc == 0x1A24FCu) {
        ctx->pc = 0x1A24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24F8u;
        // 0x1a24fc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2500u;
        goto label_1a2500;
    }
    ctx->pc = 0x1A24F8u;
    {
        const bool branch_taken_0x1a24f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24F8u;
        // 0x1a24fc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24f8) {
            ctx->pc = 0x1A2528u;
            goto label_1a2528;
        }
    }
    ctx->pc = 0x1A2500u;
label_1a2500:
    // 0x1a2500: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1a2500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_1a2504:
    // 0x1a2504: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2508:
    if (ctx->pc == 0x1A2508u) {
        ctx->pc = 0x1A250Cu;
        goto label_1a250c;
    }
    ctx->pc = 0x1A2504u;
    {
        const bool branch_taken_0x1a2504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2504) {
            ctx->pc = 0x1A2520u;
            goto label_1a2520;
        }
    }
    ctx->pc = 0x1A250Cu;
label_1a250c:
    // 0x1a250c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1a250cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_1a2510:
    // 0x1a2510: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a2510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a2514:
    // 0x1a2514: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a2518:
    if (ctx->pc == 0x1A2518u) {
        ctx->pc = 0x1A2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2514u;
        // 0x1a2518: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A251Cu;
        goto label_1a251c;
    }
    ctx->pc = 0x1A2514u;
    {
        const bool branch_taken_0x1a2514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2514u;
        // 0x1a2518: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2514) {
            ctx->pc = 0x1A2528u;
            goto label_1a2528;
        }
    }
    ctx->pc = 0x1A251Cu;
label_1a251c:
    // 0x1a251c: 0x0  nop
    ctx->pc = 0x1a251cu;
    // NOP
label_1a2520:
    // 0x1a2520: 0xc06881e  jal         func_1A2078
label_1a2524:
    if (ctx->pc == 0x1A2524u) {
        ctx->pc = 0x1A2524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2520u;
        // 0x1a2524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2528u;
        goto label_1a2528;
    }
    ctx->pc = 0x1A2520u;
    SET_GPR_U32(ctx, 31, 0x1A2528u);
    ctx->pc = 0x1A2524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2520u;
    // 0x1a2524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A2520u, 0x1A2528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2528u;
label_1a2528:
    // 0x1a2528: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1a2528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a252c:
    // 0x1a252c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1a252cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1a2530:
    // 0x1a2530: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a2530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a2534:
    // 0x1a2534: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2538:
    if (ctx->pc == 0x1A2538u) {
        ctx->pc = 0x1A2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2534u;
        // 0x1a2538: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A253Cu;
        goto label_1a253c;
    }
    ctx->pc = 0x1A2534u;
    {
        const bool branch_taken_0x1a2534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2534u;
        // 0x1a2538: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2534) {
            ctx->pc = 0x1A2550u;
            goto label_1a2550;
        }
    }
    ctx->pc = 0x1A253Cu;
label_1a253c:
    // 0x1a253c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a253cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2540:
    // 0x1a2540: 0x40f809  jalr        $v0
label_1a2544:
    if (ctx->pc == 0x1A2544u) {
        ctx->pc = 0x1A2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2540u;
        // 0x1a2544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2548u;
        goto label_1a2548;
    }
    ctx->pc = 0x1A2540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2548u);
        ctx->pc = 0x1A2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2540u;
        // 0x1a2544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2540u, 0x1A2548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2548u;
label_1a2548:
    // 0x1a2548: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a254c:
    if (ctx->pc == 0x1A254Cu) {
        ctx->pc = 0x1A254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2548u;
        // 0x1a254c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2550u;
        goto label_1a2550;
    }
    ctx->pc = 0x1A2548u;
    {
        const bool branch_taken_0x1a2548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2548u;
        // 0x1a254c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2548) {
            ctx->pc = 0x1A2580u;
            goto label_1a2580;
        }
    }
    ctx->pc = 0x1A2550u;
label_1a2550:
    // 0x1a2550: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a2550u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1a2554:
    // 0x1a2554: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2558:
    if (ctx->pc == 0x1A2558u) {
        ctx->pc = 0x1A2558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2554u;
        // 0x1a2558: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A255Cu;
        goto label_1a255c;
    }
    ctx->pc = 0x1A2554u;
    {
        const bool branch_taken_0x1a2554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2554u;
        // 0x1a2558: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2554) {
            ctx->pc = 0x1A2570u;
            goto label_1a2570;
        }
    }
    ctx->pc = 0x1A255Cu;
label_1a255c:
    // 0x1a255c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a2560:
    // 0x1a2560: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1a2560u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_1a2564:
    // 0x1a2564: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a2568:
    if (ctx->pc == 0x1A2568u) {
        ctx->pc = 0x1A2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2564u;
        // 0x1a2568: 0xe4540000  swc1        $f20, 0x0($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A256Cu;
        goto label_1a256c;
    }
    ctx->pc = 0x1A2564u;
    {
        const bool branch_taken_0x1a2564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2564u;
        // 0x1a2568: 0xe4540000  swc1        $f20, 0x0($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2564) {
            ctx->pc = 0x1A2580u;
            goto label_1a2580;
        }
    }
    ctx->pc = 0x1A256Cu;
label_1a256c:
    // 0x1a256c: 0x0  nop
    ctx->pc = 0x1a256cu;
    // NOP
label_1a2570:
    // 0x1a2570: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a2570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a2574:
    // 0x1a2574: 0x24a59238  addiu       $a1, $a1, -0x6DC8
    ctx->pc = 0x1a2574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939192));
label_1a2578:
    // 0x1a2578: 0xc068186  jal         func_1A0618
label_1a257c:
    if (ctx->pc == 0x1A257Cu) {
        ctx->pc = 0x1A257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2578u;
        // 0x1a257c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2580u;
        goto label_1a2580;
    }
    ctx->pc = 0x1A2578u;
    SET_GPR_U32(ctx, 31, 0x1A2580u);
    ctx->pc = 0x1A257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2578u;
    // 0x1a257c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2578u, 0x1A2580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2580u;
label_1a2580:
    // 0x1a2580: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a2580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a2584:
    // 0x1a2584: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a2588:
    if (ctx->pc == 0x1A2588u) {
        ctx->pc = 0x1A2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2584u;
        // 0x1a2588: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A258Cu;
        goto label_1a258c;
    }
    ctx->pc = 0x1A2584u;
    {
        const bool branch_taken_0x1a2584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2584u;
        // 0x1a2588: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2584) {
            ctx->pc = 0x1A2598u;
            goto label_1a2598;
        }
    }
    ctx->pc = 0x1A258Cu;
label_1a258c:
    // 0x1a258c: 0x40f809  jalr        $v0
label_1a2590:
    if (ctx->pc == 0x1A2590u) {
        ctx->pc = 0x1A2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A258Cu;
        // 0x1a2590: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2594u;
        goto label_1a2594;
    }
    ctx->pc = 0x1A258Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2594u);
        ctx->pc = 0x1A2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A258Cu;
        // 0x1a2590: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A258Cu, 0x1A2594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2594u;
label_1a2594:
    // 0x1a2594: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x1a2594u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_1a2598:
    // 0x1a2598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a259c:
    // 0x1a259c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a259cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a25a0:
    // 0x1a25a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a25a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a25a4:
    // 0x1a25a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a25a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a25a8:
    // 0x1a25a8: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1a25a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a25ac:
    // 0x1a25ac: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a25acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a25b0:
    // 0x1a25b0: 0x3e00008  jr          $ra
label_1a25b4:
    if (ctx->pc == 0x1A25B4u) {
        ctx->pc = 0x1A25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25B0u;
        // 0x1a25b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A25B8u;
        goto label_fallthrough_0x1a25b0;
    }
    ctx->pc = 0x1A25B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25B0u;
        // 0x1a25b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A25B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a25b0:
    ctx->pc = 0x1A25B8u;
}
