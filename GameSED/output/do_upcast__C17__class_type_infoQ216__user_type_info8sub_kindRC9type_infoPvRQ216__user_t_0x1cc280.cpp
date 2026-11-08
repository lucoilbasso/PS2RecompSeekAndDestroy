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

// Function: do_upcast__C17__class_type_infoQ216__user_type_info8sub_kindRC9type_infoPvRQ216__user_type_info13upcast_result
// Address: 0x1cc280 - 0x1cc4bc
void do_upcast__C17__class_type_infoQ216__user_type_info8sub_kindRC9type_infoPvRQ216__user_type_info13upcast_result_0x1cc280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("do_upcast__C17__class_type_infoQ216__user_type_info8sub_kindRC9type_infoPvRQ216__user_type_info13upcast_result_0x1cc280");
#endif

    switch (ctx->pc) {
        case 0x1cc280u: goto label_1cc280;
        case 0x1cc284u: goto label_1cc284;
        case 0x1cc288u: goto label_1cc288;
        case 0x1cc28cu: goto label_1cc28c;
        case 0x1cc290u: goto label_1cc290;
        case 0x1cc294u: goto label_1cc294;
        case 0x1cc298u: goto label_1cc298;
        case 0x1cc29cu: goto label_1cc29c;
        case 0x1cc2a0u: goto label_1cc2a0;
        case 0x1cc2a4u: goto label_1cc2a4;
        case 0x1cc2a8u: goto label_1cc2a8;
        case 0x1cc2acu: goto label_1cc2ac;
        case 0x1cc2b0u: goto label_1cc2b0;
        case 0x1cc2b4u: goto label_1cc2b4;
        case 0x1cc2b8u: goto label_1cc2b8;
        case 0x1cc2bcu: goto label_1cc2bc;
        case 0x1cc2c0u: goto label_1cc2c0;
        case 0x1cc2c4u: goto label_1cc2c4;
        case 0x1cc2c8u: goto label_1cc2c8;
        case 0x1cc2ccu: goto label_1cc2cc;
        case 0x1cc2d0u: goto label_1cc2d0;
        case 0x1cc2d4u: goto label_1cc2d4;
        case 0x1cc2d8u: goto label_1cc2d8;
        case 0x1cc2dcu: goto label_1cc2dc;
        case 0x1cc2e0u: goto label_1cc2e0;
        case 0x1cc2e4u: goto label_1cc2e4;
        case 0x1cc2e8u: goto label_1cc2e8;
        case 0x1cc2ecu: goto label_1cc2ec;
        case 0x1cc2f0u: goto label_1cc2f0;
        case 0x1cc2f4u: goto label_1cc2f4;
        case 0x1cc2f8u: goto label_1cc2f8;
        case 0x1cc2fcu: goto label_1cc2fc;
        case 0x1cc300u: goto label_1cc300;
        case 0x1cc304u: goto label_1cc304;
        case 0x1cc308u: goto label_1cc308;
        case 0x1cc30cu: goto label_1cc30c;
        case 0x1cc310u: goto label_1cc310;
        case 0x1cc314u: goto label_1cc314;
        case 0x1cc318u: goto label_1cc318;
        case 0x1cc31cu: goto label_1cc31c;
        case 0x1cc320u: goto label_1cc320;
        case 0x1cc324u: goto label_1cc324;
        case 0x1cc328u: goto label_1cc328;
        case 0x1cc32cu: goto label_1cc32c;
        case 0x1cc330u: goto label_1cc330;
        case 0x1cc334u: goto label_1cc334;
        case 0x1cc338u: goto label_1cc338;
        case 0x1cc33cu: goto label_1cc33c;
        case 0x1cc340u: goto label_1cc340;
        case 0x1cc344u: goto label_1cc344;
        case 0x1cc348u: goto label_1cc348;
        case 0x1cc34cu: goto label_1cc34c;
        case 0x1cc350u: goto label_1cc350;
        case 0x1cc354u: goto label_1cc354;
        case 0x1cc358u: goto label_1cc358;
        case 0x1cc35cu: goto label_1cc35c;
        case 0x1cc360u: goto label_1cc360;
        case 0x1cc364u: goto label_1cc364;
        case 0x1cc368u: goto label_1cc368;
        case 0x1cc36cu: goto label_1cc36c;
        case 0x1cc370u: goto label_1cc370;
        case 0x1cc374u: goto label_1cc374;
        case 0x1cc378u: goto label_1cc378;
        case 0x1cc37cu: goto label_1cc37c;
        case 0x1cc380u: goto label_1cc380;
        case 0x1cc384u: goto label_1cc384;
        case 0x1cc388u: goto label_1cc388;
        case 0x1cc38cu: goto label_1cc38c;
        case 0x1cc390u: goto label_1cc390;
        case 0x1cc394u: goto label_1cc394;
        case 0x1cc398u: goto label_1cc398;
        case 0x1cc39cu: goto label_1cc39c;
        case 0x1cc3a0u: goto label_1cc3a0;
        case 0x1cc3a4u: goto label_1cc3a4;
        case 0x1cc3a8u: goto label_1cc3a8;
        case 0x1cc3acu: goto label_1cc3ac;
        case 0x1cc3b0u: goto label_1cc3b0;
        case 0x1cc3b4u: goto label_1cc3b4;
        case 0x1cc3b8u: goto label_1cc3b8;
        case 0x1cc3bcu: goto label_1cc3bc;
        case 0x1cc3c0u: goto label_1cc3c0;
        case 0x1cc3c4u: goto label_1cc3c4;
        case 0x1cc3c8u: goto label_1cc3c8;
        case 0x1cc3ccu: goto label_1cc3cc;
        case 0x1cc3d0u: goto label_1cc3d0;
        case 0x1cc3d4u: goto label_1cc3d4;
        case 0x1cc3d8u: goto label_1cc3d8;
        case 0x1cc3dcu: goto label_1cc3dc;
        case 0x1cc3e0u: goto label_1cc3e0;
        case 0x1cc3e4u: goto label_1cc3e4;
        case 0x1cc3e8u: goto label_1cc3e8;
        case 0x1cc3ecu: goto label_1cc3ec;
        case 0x1cc3f0u: goto label_1cc3f0;
        case 0x1cc3f4u: goto label_1cc3f4;
        case 0x1cc3f8u: goto label_1cc3f8;
        case 0x1cc3fcu: goto label_1cc3fc;
        case 0x1cc400u: goto label_1cc400;
        case 0x1cc404u: goto label_1cc404;
        case 0x1cc408u: goto label_1cc408;
        case 0x1cc40cu: goto label_1cc40c;
        case 0x1cc410u: goto label_1cc410;
        case 0x1cc414u: goto label_1cc414;
        case 0x1cc418u: goto label_1cc418;
        case 0x1cc41cu: goto label_1cc41c;
        case 0x1cc420u: goto label_1cc420;
        case 0x1cc424u: goto label_1cc424;
        case 0x1cc428u: goto label_1cc428;
        case 0x1cc42cu: goto label_1cc42c;
        case 0x1cc430u: goto label_1cc430;
        case 0x1cc434u: goto label_1cc434;
        case 0x1cc438u: goto label_1cc438;
        case 0x1cc43cu: goto label_1cc43c;
        case 0x1cc440u: goto label_1cc440;
        case 0x1cc444u: goto label_1cc444;
        case 0x1cc448u: goto label_1cc448;
        case 0x1cc44cu: goto label_1cc44c;
        case 0x1cc450u: goto label_1cc450;
        case 0x1cc454u: goto label_1cc454;
        case 0x1cc458u: goto label_1cc458;
        case 0x1cc45cu: goto label_1cc45c;
        case 0x1cc460u: goto label_1cc460;
        case 0x1cc464u: goto label_1cc464;
        case 0x1cc468u: goto label_1cc468;
        case 0x1cc46cu: goto label_1cc46c;
        case 0x1cc470u: goto label_1cc470;
        case 0x1cc474u: goto label_1cc474;
        case 0x1cc478u: goto label_1cc478;
        case 0x1cc47cu: goto label_1cc47c;
        case 0x1cc480u: goto label_1cc480;
        case 0x1cc484u: goto label_1cc484;
        case 0x1cc488u: goto label_1cc488;
        case 0x1cc48cu: goto label_1cc48c;
        case 0x1cc490u: goto label_1cc490;
        case 0x1cc494u: goto label_1cc494;
        case 0x1cc498u: goto label_1cc498;
        case 0x1cc49cu: goto label_1cc49c;
        case 0x1cc4a0u: goto label_1cc4a0;
        case 0x1cc4a4u: goto label_1cc4a4;
        case 0x1cc4a8u: goto label_1cc4a8;
        case 0x1cc4acu: goto label_1cc4ac;
        case 0x1cc4b0u: goto label_1cc4b0;
        case 0x1cc4b4u: goto label_1cc4b4;
        case 0x1cc4b8u: goto label_1cc4b8;
        default: break;
    }

    ctx->pc = 0x1cc280u;

label_1cc280:
    // 0x1cc280: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cc280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1cc284:
    // 0x1cc284: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1cc284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1cc288:
    // 0x1cc288: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1cc288u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cc28c:
    // 0x1cc28c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1cc28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1cc290:
    // 0x1cc290: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1cc290u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cc294:
    // 0x1cc294: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cc294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cc298:
    // 0x1cc298: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cc298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1cc29c:
    // 0x1cc29c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1cc29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1cc2a0:
    // 0x1cc2a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cc2a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc2a4:
    // 0x1cc2a4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1cc2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1cc2a8:
    // 0x1cc2a8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1cc2a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cc2ac:
    // 0x1cc2ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1cc2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1cc2b0:
    // 0x1cc2b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cc2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1cc2b4:
    // 0x1cc2b4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1cc2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_1cc2b8:
    // 0x1cc2b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1cc2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1cc2bc:
    // 0x1cc2bc: 0xc072f28  jal         func_1CBCA0
label_1cc2c0:
    if (ctx->pc == 0x1CC2C0u) {
        ctx->pc = 0x1CC2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2BCu;
        // 0x1cc2c0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC2C4u;
        goto label_1cc2c4;
    }
    ctx->pc = 0x1CC2BCu;
    SET_GPR_U32(ctx, 31, 0x1CC2C4u);
    ctx->pc = 0x1CC2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC2BCu;
    // 0x1cc2c0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CC2BCu, 0x1CC2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC2C4u;
label_1cc2c4:
    // 0x1cc2c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1cc2c8:
    if (ctx->pc == 0x1CC2C8u) {
        ctx->pc = 0x1CC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2C4u;
        // 0x1cc2c8: 0x32820006  andi        $v0, $s4, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC2CCu;
        goto label_1cc2cc;
    }
    ctx->pc = 0x1CC2C4u;
    {
        const bool branch_taken_0x1cc2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2C4u;
        // 0x1cc2c8: 0x32820006  andi        $v0, $s4, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2c4) {
            ctx->pc = 0x1CC2F8u;
            goto label_1cc2f8;
        }
    }
    ctx->pc = 0x1CC2CCu;
label_1cc2cc:
    // 0x1cc2cc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1cc2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cc2d0:
    // 0x1cc2d0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1cc2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_1cc2d4:
    // 0x1cc2d4: 0xae160000  sw          $s6, 0x0($s0)
    ctx->pc = 0x1cc2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
label_1cc2d8:
    // 0x1cc2d8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1cc2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1cc2dc:
    // 0x1cc2dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1cc2dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1cc2e0:
    // 0x1cc2e0: 0x1000006b  b           . + 4 + (0x6B << 2)
label_1cc2e4:
    if (ctx->pc == 0x1CC2E4u) {
        ctx->pc = 0x1CC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2E0u;
        // 0x1cc2e4: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC2E8u;
        goto label_1cc2e8;
    }
    ctx->pc = 0x1CC2E0u;
    {
        const bool branch_taken_0x1cc2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2E0u;
        // 0x1cc2e4: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2e0) {
            ctx->pc = 0x1CC490u;
            goto label_1cc490;
        }
    }
    ctx->pc = 0x1CC2E8u;
label_1cc2e8:
    // 0x1cc2e8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1cc2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1cc2ec:
    // 0x1cc2ec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1cc2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1cc2f0:
    // 0x1cc2f0: 0x10000067  b           . + 4 + (0x67 << 2)
label_1cc2f4:
    if (ctx->pc == 0x1CC2F4u) {
        ctx->pc = 0x1CC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2F0u;
        // 0x1cc2f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC2F8u;
        goto label_1cc2f8;
    }
    ctx->pc = 0x1CC2F0u;
    {
        const bool branch_taken_0x1cc2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2F0u;
        // 0x1cc2f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2f0) {
            ctx->pc = 0x1CC490u;
            goto label_1cc490;
        }
    }
    ctx->pc = 0x1CC2F8u;
label_1cc2f8:
    // 0x1cc2f8: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x1cc2f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1cc2fc:
    // 0x1cc2fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cc300:
    // 0x1cc300: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1cc300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1cc304:
    // 0x1cc304: 0x12420061  beq         $s2, $v0, . + 4 + (0x61 << 2)
label_1cc308:
    if (ctx->pc == 0x1CC308u) {
        ctx->pc = 0x1CC308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC304u;
        // 0x1cc308: 0x36970001  ori         $s7, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC30Cu;
        goto label_1cc30c;
    }
    ctx->pc = 0x1CC304u;
    {
        const bool branch_taken_0x1cc304 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC304u;
        // 0x1cc308: 0x36970001  ori         $s7, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc304) {
            ctx->pc = 0x1CC48Cu;
            goto label_1cc48c;
        }
    }
    ctx->pc = 0x1CC30Cu;
label_1cc30c:
    // 0x1cc30c: 0x8e690008  lw          $t1, 0x8($s3)
    ctx->pc = 0x1cc30cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1cc310:
    // 0x1cc310: 0x1288c0  sll         $s1, $s2, 3
    ctx->pc = 0x1cc310u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1cc314:
    // 0x1cc314: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cc314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1cc318:
    // 0x1cc318: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1cc318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cc31c:
    // 0x1cc31c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1cc31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1cc320:
    // 0x1cc320: 0x2291821  addu        $v1, $s1, $t1
    ctx->pc = 0x1cc320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
label_1cc324:
    // 0x1cc324: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cc324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1cc328:
    // 0x1cc328: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc32c:
    // 0x1cc32c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc330:
    // 0x1cc330: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cc330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cc334:
    // 0x1cc334: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x1cc334u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
label_1cc338:
    // 0x1cc338: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cc338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1cc33c:
    // 0x1cc33c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1cc340:
    if (ctx->pc == 0x1CC340u) {
        ctx->pc = 0x1CC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC33Cu;
        // 0x1cc340: 0x318c3  sra         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC344u;
        goto label_1cc344;
    }
    ctx->pc = 0x1CC33Cu;
    {
        const bool branch_taken_0x1cc33c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC33Cu;
        // 0x1cc340: 0x318c3  sra         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc33c) {
            ctx->pc = 0x1CC354u;
            goto label_1cc354;
        }
    }
    ctx->pc = 0x1CC344u;
label_1cc344:
    // 0x1cc344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1cc348:
    if (ctx->pc == 0x1CC348u) {
        ctx->pc = 0x1CC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC344u;
        // 0x1cc348: 0x833821  addu        $a3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC34Cu;
        goto label_1cc34c;
    }
    ctx->pc = 0x1CC344u;
    {
        const bool branch_taken_0x1cc344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC344u;
        // 0x1cc348: 0x833821  addu        $a3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc344) {
            ctx->pc = 0x1CC354u;
            goto label_1cc354;
        }
    }
    ctx->pc = 0x1CC34Cu;
label_1cc34c:
    // 0x1cc34c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1cc34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cc350:
    // 0x1cc350: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1cc350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cc354:
    // 0x1cc354: 0x2294821  addu        $t1, $s1, $t1
    ctx->pc = 0x1cc354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
label_1cc358:
    // 0x1cc358: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cc358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cc35c:
    // 0x1cc35c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x1cc35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1cc360:
    // 0x1cc360: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc364:
    // 0x1cc364: 0x21f42  srl         $v1, $v0, 29
    ctx->pc = 0x1cc364u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
label_1cc368:
    // 0x1cc368: 0x21782  srl         $v0, $v0, 30
    ctx->pc = 0x1cc368u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 30));
label_1cc36c:
    // 0x1cc36c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cc36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1cc370:
    // 0x1cc370: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_1cc374:
    if (ctx->pc == 0x1CC374u) {
        ctx->pc = 0x1CC374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC370u;
        // 0x1cc374: 0x2e3280b  movn        $a1, $s7, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC378u;
        goto label_1cc378;
    }
    ctx->pc = 0x1CC370u;
    {
        const bool branch_taken_0x1cc370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CC374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC370u;
        // 0x1cc374: 0x2e3280b  movn        $a1, $s7, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc370) {
            ctx->pc = 0x1CC380u;
            goto label_1cc380;
        }
    }
    ctx->pc = 0x1CC378u;
label_1cc378:
    // 0x1cc378: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1cc378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1cc37c:
    // 0x1cc37c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1cc37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1cc380:
    // 0x1cc380: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x1cc380u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1cc384:
    // 0x1cc384: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1cc384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cc388:
    // 0x1cc388: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1cc388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cc38c:
    // 0x1cc38c: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1cc38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1cc390:
    // 0x1cc390: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1cc390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1cc394:
    // 0x1cc394: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cc394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc398:
    // 0x1cc398: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc39c:
    // 0x1cc39c: 0x40f809  jalr        $v0
label_1cc3a0:
    if (ctx->pc == 0x1CC3A0u) {
        ctx->pc = 0x1CC3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC39Cu;
        // 0x1cc3a0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC3A4u;
        goto label_1cc3a4;
    }
    ctx->pc = 0x1CC39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC3A4u);
        ctx->pc = 0x1CC3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC39Cu;
        // 0x1cc3a0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC39Cu, 0x1CC3A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC3A4u;
label_1cc3a4:
    // 0x1cc3a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1cc3a8:
    if (ctx->pc == 0x1CC3A8u) {
        ctx->pc = 0x1CC3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3A4u;
        // 0x1cc3a8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC3ACu;
        goto label_1cc3ac;
    }
    ctx->pc = 0x1CC3A4u;
    {
        const bool branch_taken_0x1cc3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3A4u;
        // 0x1cc3a8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3a4) {
            ctx->pc = 0x1CC3BCu;
            goto label_1cc3bc;
        }
    }
    ctx->pc = 0x1CC3ACu;
label_1cc3ac:
    // 0x1cc3ac: 0x30630005  andi        $v1, $v1, 0x5
    ctx->pc = 0x1cc3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)5);
label_1cc3b0:
    // 0x1cc3b0: 0x38630005  xori        $v1, $v1, 0x5
    ctx->pc = 0x1cc3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
label_1cc3b4:
    // 0x1cc3b4: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
label_1cc3b8:
    if (ctx->pc == 0x1CC3B8u) {
        ctx->pc = 0x1CC3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3B4u;
        // 0x1cc3b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC3BCu;
        goto label_1cc3bc;
    }
    ctx->pc = 0x1CC3B4u;
    {
        const bool branch_taken_0x1cc3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3B4u;
        // 0x1cc3b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3b4) {
            ctx->pc = 0x1CC490u;
            goto label_1cc490;
        }
    }
    ctx->pc = 0x1CC3BCu;
label_1cc3bc:
    // 0x1cc3bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1cc3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1cc3c0:
    // 0x1cc3c0: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_1cc3c4:
    if (ctx->pc == 0x1CC3C4u) {
        ctx->pc = 0x1CC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3C0u;
        // 0x1cc3c4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC3C8u;
        goto label_1cc3c8;
    }
    ctx->pc = 0x1CC3C0u;
    {
        const bool branch_taken_0x1cc3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3C0u;
        // 0x1cc3c4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3c0) {
            ctx->pc = 0x1CC47Cu;
            goto label_1cc47c;
        }
    }
    ctx->pc = 0x1CC3C8u;
label_1cc3c8:
    // 0x1cc3c8: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_1cc3cc:
    if (ctx->pc == 0x1CC3CCu) {
        ctx->pc = 0x1CC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3C8u;
        // 0x1cc3cc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC3D0u;
        goto label_1cc3d0;
    }
    ctx->pc = 0x1CC3C8u;
    {
        const bool branch_taken_0x1cc3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cc3c8) {
            ctx->pc = 0x1CC3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC3C8u;
            // 0x1cc3cc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC3F8u;
            goto label_1cc3f8;
        }
    }
    ctx->pc = 0x1CC3D0u;
label_1cc3d0:
    // 0x1cc3d0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1cc3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1cc3d4:
    // 0x1cc3d4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1cc3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1cc3d8:
    // 0x1cc3d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc3dc:
    // 0x1cc3dc: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x1cc3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
label_1cc3e0:
    // 0x1cc3e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cc3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1cc3e4:
    // 0x1cc3e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1cc3e8:
    if (ctx->pc == 0x1CC3E8u) {
        ctx->pc = 0x1CC3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3E4u;
        // 0x1cc3e8: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC3ECu;
        goto label_1cc3ec;
    }
    ctx->pc = 0x1CC3E4u;
    {
        const bool branch_taken_0x1cc3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3e4) {
            ctx->pc = 0x1CC3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC3E4u;
            // 0x1cc3e8: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC3F8u;
            goto label_1cc3f8;
        }
    }
    ctx->pc = 0x1CC3ECu;
label_1cc3ec:
    // 0x1cc3ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cc3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc3f0:
    // 0x1cc3f0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1cc3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_1cc3f4:
    // 0x1cc3f4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1cc3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1cc3f8:
    // 0x1cc3f8: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
label_1cc3fc:
    if (ctx->pc == 0x1CC3FCu) {
        ctx->pc = 0x1CC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3F8u;
        // 0x1cc3fc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC400u;
        goto label_1cc400;
    }
    ctx->pc = 0x1CC3F8u;
    {
        const bool branch_taken_0x1cc3f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3f8) {
            ctx->pc = 0x1CC3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC3F8u;
            // 0x1cc3fc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC420u;
            goto label_1cc420;
        }
    }
    ctx->pc = 0x1CC400u;
label_1cc400:
    // 0x1cc400: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1cc400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1cc404:
    // 0x1cc404: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1cc404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1cc408:
    // 0x1cc408: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1cc408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1cc40c:
    // 0x1cc40c: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x1cc40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cc410:
    // 0x1cc410: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x1cc410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cc414:
    // 0x1cc414: 0x10000019  b           . + 4 + (0x19 << 2)
label_1cc418:
    if (ctx->pc == 0x1CC418u) {
        ctx->pc = 0x1CC418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC414u;
        // 0x1cc418: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC41Cu;
        goto label_1cc41c;
    }
    ctx->pc = 0x1CC414u;
    {
        const bool branch_taken_0x1cc414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC414u;
        // 0x1cc418: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc414) {
            ctx->pc = 0x1CC47Cu;
            goto label_1cc47c;
        }
    }
    ctx->pc = 0x1CC41Cu;
label_1cc41c:
    // 0x1cc41c: 0x0  nop
    ctx->pc = 0x1cc41cu;
    // NOP
label_1cc420:
    // 0x1cc420: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cc420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc424:
    // 0x1cc424: 0x1462ffb0  bne         $v1, $v0, . + 4 + (-0x50 << 2)
label_1cc428:
    if (ctx->pc == 0x1CC428u) {
        ctx->pc = 0x1CC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC424u;
        // 0x1cc428: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC42Cu;
        goto label_1cc42c;
    }
    ctx->pc = 0x1CC424u;
    {
        const bool branch_taken_0x1cc424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC424u;
        // 0x1cc428: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc424) {
            ctx->pc = 0x1CC2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc2e8;
        }
    }
    ctx->pc = 0x1CC42Cu;
label_1cc42c:
    // 0x1cc42c: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
label_1cc430:
    if (ctx->pc == 0x1CC430u) {
        ctx->pc = 0x1CC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC42Cu;
        // 0x1cc430: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC434u;
        goto label_1cc434;
    }
    ctx->pc = 0x1CC42Cu;
    {
        const bool branch_taken_0x1cc42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc42c) {
            ctx->pc = 0x1CC430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC42Cu;
            // 0x1cc430: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC470u;
            goto label_1cc470;
        }
    }
    ctx->pc = 0x1CC434u;
label_1cc434:
    // 0x1cc434: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1cc434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1cc438:
    // 0x1cc438: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1cc438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cc43c:
    // 0x1cc43c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_1cc440:
    if (ctx->pc == 0x1CC440u) {
        ctx->pc = 0x1CC440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC43Cu;
        // 0x1cc440: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC444u;
        goto label_1cc444;
    }
    ctx->pc = 0x1CC43Cu;
    {
        const bool branch_taken_0x1cc43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC43Cu;
        // 0x1cc440: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc43c) {
            ctx->pc = 0x1CC460u;
            goto label_1cc460;
        }
    }
    ctx->pc = 0x1CC444u;
label_1cc444:
    // 0x1cc444: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
label_1cc448:
    if (ctx->pc == 0x1CC448u) {
        ctx->pc = 0x1CC448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC444u;
        // 0x1cc448: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC44Cu;
        goto label_1cc44c;
    }
    ctx->pc = 0x1CC444u;
    {
        const bool branch_taken_0x1cc444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC444u;
        // 0x1cc448: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc444) {
            ctx->pc = 0x1CC464u;
            goto label_1cc464;
        }
    }
    ctx->pc = 0x1CC44Cu;
label_1cc44c:
    // 0x1cc44c: 0xc072f28  jal         func_1CBCA0
label_1cc450:
    if (ctx->pc == 0x1CC450u) {
        ctx->pc = 0x1CC454u;
        goto label_1cc454;
    }
    ctx->pc = 0x1CC44Cu;
    SET_GPR_U32(ctx, 31, 0x1CC454u);
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CC44Cu, 0x1CC454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC454u;
label_1cc454:
    // 0x1cc454: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1cc458:
    if (ctx->pc == 0x1CC458u) {
        ctx->pc = 0x1CC458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC454u;
        // 0x1cc458: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC45Cu;
        goto label_1cc45c;
    }
    ctx->pc = 0x1CC454u;
    {
        const bool branch_taken_0x1cc454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc454) {
            ctx->pc = 0x1CC458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC454u;
            // 0x1cc458: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC470u;
            goto label_1cc470;
        }
    }
    ctx->pc = 0x1CC45Cu;
label_1cc45c:
    // 0x1cc45c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cc45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cc460:
    // 0x1cc460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc464:
    // 0x1cc464: 0x1000000a  b           . + 4 + (0xA << 2)
label_1cc468:
    if (ctx->pc == 0x1CC468u) {
        ctx->pc = 0x1CC468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC464u;
        // 0x1cc468: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC46Cu;
        goto label_1cc46c;
    }
    ctx->pc = 0x1CC464u;
    {
        const bool branch_taken_0x1cc464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC464u;
        // 0x1cc468: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc464) {
            ctx->pc = 0x1CC490u;
            goto label_1cc490;
        }
    }
    ctx->pc = 0x1CC46Cu;
label_1cc46c:
    // 0x1cc46c: 0x0  nop
    ctx->pc = 0x1cc46cu;
    // NOP
label_1cc470:
    // 0x1cc470: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1cc470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1cc474:
    // 0x1cc474: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cc474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1cc478:
    // 0x1cc478: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1cc478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1cc47c:
    // 0x1cc47c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1cc47cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1cc480:
    // 0x1cc480: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cc484:
    // 0x1cc484: 0x5642ffa2  bnel        $s2, $v0, . + 4 + (-0x5E << 2)
label_1cc488:
    if (ctx->pc == 0x1CC488u) {
        ctx->pc = 0x1CC488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC484u;
        // 0x1cc488: 0x8e690008  lw          $t1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC48Cu;
        goto label_1cc48c;
    }
    ctx->pc = 0x1CC484u;
    {
        const bool branch_taken_0x1cc484 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cc484) {
            ctx->pc = 0x1CC488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC484u;
            // 0x1cc488: 0x8e690008  lw          $t1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc310;
        }
    }
    ctx->pc = 0x1CC48Cu;
label_1cc48c:
    // 0x1cc48c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cc48cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc490:
    // 0x1cc490: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cc490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc494:
    // 0x1cc494: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1cc494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cc498:
    // 0x1cc498: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cc498u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc49c:
    // 0x1cc49c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1cc49cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1cc4a0:
    // 0x1cc4a0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1cc4a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cc4a4:
    // 0x1cc4a4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1cc4a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1cc4a8:
    // 0x1cc4a8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1cc4a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cc4ac:
    // 0x1cc4ac: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1cc4acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1cc4b0:
    // 0x1cc4b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1cc4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1cc4b4:
    // 0x1cc4b4: 0x3e00008  jr          $ra
label_1cc4b8:
    if (ctx->pc == 0x1CC4B8u) {
        ctx->pc = 0x1CC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4B4u;
        // 0x1cc4b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC4BCu;
        goto label_fallthrough_0x1cc4b4;
    }
    ctx->pc = 0x1CC4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4B4u;
        // 0x1cc4b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cc4b4:
    ctx->pc = 0x1CC4BCu;
}
