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

// Function: ApH_Point2Cylin__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork
// Address: 0x158328 - 0x158448
void ApH_Point2Cylin__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork_0x158328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApH_Point2Cylin__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork_0x158328");
#endif

    switch (ctx->pc) {
        case 0x158328u: goto label_158328;
        case 0x15832cu: goto label_15832c;
        case 0x158330u: goto label_158330;
        case 0x158334u: goto label_158334;
        case 0x158338u: goto label_158338;
        case 0x15833cu: goto label_15833c;
        case 0x158340u: goto label_158340;
        case 0x158344u: goto label_158344;
        case 0x158348u: goto label_158348;
        case 0x15834cu: goto label_15834c;
        case 0x158350u: goto label_158350;
        case 0x158354u: goto label_158354;
        case 0x158358u: goto label_158358;
        case 0x15835cu: goto label_15835c;
        case 0x158360u: goto label_158360;
        case 0x158364u: goto label_158364;
        case 0x158368u: goto label_158368;
        case 0x15836cu: goto label_15836c;
        case 0x158370u: goto label_158370;
        case 0x158374u: goto label_158374;
        case 0x158378u: goto label_158378;
        case 0x15837cu: goto label_15837c;
        case 0x158380u: goto label_158380;
        case 0x158384u: goto label_158384;
        case 0x158388u: goto label_158388;
        case 0x15838cu: goto label_15838c;
        case 0x158390u: goto label_158390;
        case 0x158394u: goto label_158394;
        case 0x158398u: goto label_158398;
        case 0x15839cu: goto label_15839c;
        case 0x1583a0u: goto label_1583a0;
        case 0x1583a4u: goto label_1583a4;
        case 0x1583a8u: goto label_1583a8;
        case 0x1583acu: goto label_1583ac;
        case 0x1583b0u: goto label_1583b0;
        case 0x1583b4u: goto label_1583b4;
        case 0x1583b8u: goto label_1583b8;
        case 0x1583bcu: goto label_1583bc;
        case 0x1583c0u: goto label_1583c0;
        case 0x1583c4u: goto label_1583c4;
        case 0x1583c8u: goto label_1583c8;
        case 0x1583ccu: goto label_1583cc;
        case 0x1583d0u: goto label_1583d0;
        case 0x1583d4u: goto label_1583d4;
        case 0x1583d8u: goto label_1583d8;
        case 0x1583dcu: goto label_1583dc;
        case 0x1583e0u: goto label_1583e0;
        case 0x1583e4u: goto label_1583e4;
        case 0x1583e8u: goto label_1583e8;
        case 0x1583ecu: goto label_1583ec;
        case 0x1583f0u: goto label_1583f0;
        case 0x1583f4u: goto label_1583f4;
        case 0x1583f8u: goto label_1583f8;
        case 0x1583fcu: goto label_1583fc;
        case 0x158400u: goto label_158400;
        case 0x158404u: goto label_158404;
        case 0x158408u: goto label_158408;
        case 0x15840cu: goto label_15840c;
        case 0x158410u: goto label_158410;
        case 0x158414u: goto label_158414;
        case 0x158418u: goto label_158418;
        case 0x15841cu: goto label_15841c;
        case 0x158420u: goto label_158420;
        case 0x158424u: goto label_158424;
        case 0x158428u: goto label_158428;
        case 0x15842cu: goto label_15842c;
        case 0x158430u: goto label_158430;
        case 0x158434u: goto label_158434;
        case 0x158438u: goto label_158438;
        case 0x15843cu: goto label_15843c;
        case 0x158440u: goto label_158440;
        case 0x158444u: goto label_158444;
        default: break;
    }

    ctx->pc = 0x158328u;

label_158328:
    // 0x158328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15832c:
    // 0x15832c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15832cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_158330:
    // 0x158330: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x158330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_158334:
    // 0x158334: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x158334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_158338:
    // 0x158338: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x158338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15833c:
    // 0x15833c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15833cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_158340:
    // 0x158340: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x158340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_158344:
    // 0x158344: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x158344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_158348:
    // 0x158348: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x158348u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15834c:
    // 0x15834c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15834cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_158350:
    // 0x158350: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x158350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_158354:
    // 0x158354: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x158354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_158358:
    // 0x158358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15835c:
    // 0x15835c: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x15835cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158360:
    // 0x158360: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x158360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_158364:
    // 0x158364: 0xe6000470  swc1        $f0, 0x470($s0)
    ctx->pc = 0x158364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1136), bits); }
label_158368:
    // 0x158368: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x158368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15836c:
    // 0x15836c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15836cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_158370:
    // 0x158370: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x158370u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_158374:
    // 0x158374: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_158378:
    if (ctx->pc == 0x158378u) {
        ctx->pc = 0x158378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158374u;
        // 0x158378: 0xe6010474  swc1        $f1, 0x474($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15837Cu;
        goto label_15837c;
    }
    ctx->pc = 0x158374u;
    {
        const bool branch_taken_0x158374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158374u;
        // 0x158378: 0xe6010474  swc1        $f1, 0x474($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158374) {
            ctx->pc = 0x158390u;
            goto label_158390;
        }
    }
    ctx->pc = 0x15837Cu;
label_15837c:
    // 0x15837c: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x15837cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_158380:
    // 0x158380: 0xc056112  jal         func_158448
label_158384:
    if (ctx->pc == 0x158384u) {
        ctx->pc = 0x158384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158380u;
        // 0x158384: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158388u;
        goto label_158388;
    }
    ctx->pc = 0x158380u;
    SET_GPR_U32(ctx, 31, 0x158388u);
    ctx->pc = 0x158384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158380u;
    // 0x158384: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158448u, 0x158380u, 0x158388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158388u;
label_158388:
    // 0x158388: 0x1000001e  b           . + 4 + (0x1E << 2)
label_15838c:
    if (ctx->pc == 0x15838Cu) {
        ctx->pc = 0x158390u;
        goto label_158390;
    }
    ctx->pc = 0x158388u;
    {
        const bool branch_taken_0x158388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158388) {
            ctx->pc = 0x158404u;
            goto label_158404;
        }
    }
    ctx->pc = 0x158390u;
label_158390:
    // 0x158390: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x158390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_158394:
    // 0x158394: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_158398:
    if (ctx->pc == 0x158398u) {
        ctx->pc = 0x158398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158394u;
        // 0x158398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15839Cu;
        goto label_15839c;
    }
    ctx->pc = 0x158394u;
    {
        const bool branch_taken_0x158394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158394u;
        // 0x158398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158394) {
            ctx->pc = 0x1583F0u;
            goto label_1583f0;
        }
    }
    ctx->pc = 0x15839Cu;
label_15839c:
    // 0x15839c: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x15839cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_1583a0:
    // 0x1583a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1583a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1583a4:
    // 0x1583a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1583a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1583a8:
    // 0x1583a8: 0xc056112  jal         func_158448
label_1583ac:
    if (ctx->pc == 0x1583ACu) {
        ctx->pc = 0x1583ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583A8u;
        // 0x1583ac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583B0u;
        goto label_1583b0;
    }
    ctx->pc = 0x1583A8u;
    SET_GPR_U32(ctx, 31, 0x1583B0u);
    ctx->pc = 0x1583ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583A8u;
    // 0x1583ac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158448u, 0x1583A8u, 0x1583B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583B0u;
label_1583b0:
    // 0x1583b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1583b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1583b4:
    // 0x1583b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1583b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1583b8:
    // 0x1583b8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1583b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1583bc:
    // 0x1583bc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1583c0:
    if (ctx->pc == 0x1583C0u) {
        ctx->pc = 0x1583C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583BCu;
        // 0x1583c0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583C4u;
        goto label_1583c4;
    }
    ctx->pc = 0x1583BCu;
    {
        const bool branch_taken_0x1583bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1583C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583BCu;
        // 0x1583c0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583bc) {
            ctx->pc = 0x15840Cu;
            goto label_15840c;
        }
    }
    ctx->pc = 0x1583C4u;
label_1583c4:
    // 0x1583c4: 0xc056112  jal         func_158448
label_1583c8:
    if (ctx->pc == 0x1583C8u) {
        ctx->pc = 0x1583C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583C4u;
        // 0x1583c8: 0x8e250160  lw          $a1, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583CCu;
        goto label_1583cc;
    }
    ctx->pc = 0x1583C4u;
    SET_GPR_U32(ctx, 31, 0x1583CCu);
    ctx->pc = 0x1583C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583C4u;
    // 0x1583c8: 0x8e250160  lw          $a1, 0x160($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158448u, 0x1583C4u, 0x1583CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583CCu;
label_1583cc:
    // 0x1583cc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1583d0:
    if (ctx->pc == 0x1583D0u) {
        ctx->pc = 0x1583D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583CCu;
        // 0x1583d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583D4u;
        goto label_1583d4;
    }
    ctx->pc = 0x1583CCu;
    {
        const bool branch_taken_0x1583cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1583D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583CCu;
        // 0x1583d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583cc) {
            ctx->pc = 0x15840Cu;
            goto label_15840c;
        }
    }
    ctx->pc = 0x1583D4u;
label_1583d4:
    // 0x1583d4: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x1583d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_1583d8:
    // 0x1583d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1583d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1583dc:
    // 0x1583dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1583dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1583e0:
    // 0x1583e0: 0xc056192  jal         func_158648
label_1583e4:
    if (ctx->pc == 0x1583E4u) {
        ctx->pc = 0x1583E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583E0u;
        // 0x1583e4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583E8u;
        goto label_1583e8;
    }
    ctx->pc = 0x1583E0u;
    SET_GPR_U32(ctx, 31, 0x1583E8u);
    ctx->pc = 0x1583E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583E0u;
    // 0x1583e4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158648u, 0x1583E0u, 0x1583E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583E8u;
label_1583e8:
    // 0x1583e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1583ec:
    if (ctx->pc == 0x1583ECu) {
        ctx->pc = 0x1583F0u;
        goto label_1583f0;
    }
    ctx->pc = 0x1583E8u;
    {
        const bool branch_taken_0x1583e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1583e8) {
            ctx->pc = 0x158404u;
            goto label_158404;
        }
    }
    ctx->pc = 0x1583F0u;
label_1583f0:
    // 0x1583f0: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x1583f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_1583f4:
    // 0x1583f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1583f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1583f8:
    // 0x1583f8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1583f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1583fc:
    // 0x1583fc: 0xc056112  jal         func_158448
label_158400:
    if (ctx->pc == 0x158400u) {
        ctx->pc = 0x158400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583FCu;
        // 0x158400: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158404u;
        goto label_158404;
    }
    ctx->pc = 0x1583FCu;
    SET_GPR_U32(ctx, 31, 0x158404u);
    ctx->pc = 0x158400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583FCu;
    // 0x158400: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158448u, 0x1583FCu, 0x158404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158404u;
label_158404:
    // 0x158404: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_158408:
    if (ctx->pc == 0x158408u) {
        ctx->pc = 0x158408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158404u;
        // 0x158408: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15840Cu;
        goto label_15840c;
    }
    ctx->pc = 0x158404u;
    {
        const bool branch_taken_0x158404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158404) {
            ctx->pc = 0x158408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158404u;
            // 0x158408: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158430u;
            goto label_158430;
        }
    }
    ctx->pc = 0x15840Cu;
label_15840c:
    // 0x15840c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15840cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_158410:
    // 0x158410: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x158410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158414:
    // 0x158414: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x158414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_158418:
    // 0x158418: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x158418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_15841c:
    // 0x15841c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15841cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_158420:
    // 0x158420: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x158420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_158424:
    // 0x158424: 0x60f809  jalr        $v1
label_158428:
    if (ctx->pc == 0x158428u) {
        ctx->pc = 0x158428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158424u;
        // 0x158428: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15842Cu;
        goto label_15842c;
    }
    ctx->pc = 0x158424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15842Cu);
        ctx->pc = 0x158428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158424u;
        // 0x158428: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158424u, 0x15842Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15842Cu;
label_15842c:
    // 0x15842c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15842cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158430:
    // 0x158430: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x158430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_158434:
    // 0x158434: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x158434u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_158438:
    // 0x158438: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x158438u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15843c:
    // 0x15843c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15843cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_158440:
    // 0x158440: 0x3e00008  jr          $ra
label_158444:
    if (ctx->pc == 0x158444u) {
        ctx->pc = 0x158444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158440u;
        // 0x158444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158448u;
        goto label_fallthrough_0x158440;
    }
    ctx->pc = 0x158440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158440u;
        // 0x158444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x158440:
    ctx->pc = 0x158448u;
}
