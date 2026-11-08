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

// Function: _request_end
// Address: 0x1b1320 - 0x1b13d4
void _request_end_0x1b1320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_end_0x1b1320");
#endif

    switch (ctx->pc) {
        case 0x1b1320u: goto label_1b1320;
        case 0x1b1324u: goto label_1b1324;
        case 0x1b1328u: goto label_1b1328;
        case 0x1b132cu: goto label_1b132c;
        case 0x1b1330u: goto label_1b1330;
        case 0x1b1334u: goto label_1b1334;
        case 0x1b1338u: goto label_1b1338;
        case 0x1b133cu: goto label_1b133c;
        case 0x1b1340u: goto label_1b1340;
        case 0x1b1344u: goto label_1b1344;
        case 0x1b1348u: goto label_1b1348;
        case 0x1b134cu: goto label_1b134c;
        case 0x1b1350u: goto label_1b1350;
        case 0x1b1354u: goto label_1b1354;
        case 0x1b1358u: goto label_1b1358;
        case 0x1b135cu: goto label_1b135c;
        case 0x1b1360u: goto label_1b1360;
        case 0x1b1364u: goto label_1b1364;
        case 0x1b1368u: goto label_1b1368;
        case 0x1b136cu: goto label_1b136c;
        case 0x1b1370u: goto label_1b1370;
        case 0x1b1374u: goto label_1b1374;
        case 0x1b1378u: goto label_1b1378;
        case 0x1b137cu: goto label_1b137c;
        case 0x1b1380u: goto label_1b1380;
        case 0x1b1384u: goto label_1b1384;
        case 0x1b1388u: goto label_1b1388;
        case 0x1b138cu: goto label_1b138c;
        case 0x1b1390u: goto label_1b1390;
        case 0x1b1394u: goto label_1b1394;
        case 0x1b1398u: goto label_1b1398;
        case 0x1b139cu: goto label_1b139c;
        case 0x1b13a0u: goto label_1b13a0;
        case 0x1b13a4u: goto label_1b13a4;
        case 0x1b13a8u: goto label_1b13a8;
        case 0x1b13acu: goto label_1b13ac;
        case 0x1b13b0u: goto label_1b13b0;
        case 0x1b13b4u: goto label_1b13b4;
        case 0x1b13b8u: goto label_1b13b8;
        case 0x1b13bcu: goto label_1b13bc;
        case 0x1b13c0u: goto label_1b13c0;
        case 0x1b13c4u: goto label_1b13c4;
        case 0x1b13c8u: goto label_1b13c8;
        case 0x1b13ccu: goto label_1b13cc;
        case 0x1b13d0u: goto label_1b13d0;
        default: break;
    }

    ctx->pc = 0x1b1320u;

label_1b1320:
    // 0x1b1320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b1324:
    // 0x1b1324: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b1324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1b1328:
    // 0x1b1328: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b1328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1b132c:
    // 0x1b132c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x1b132cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_1b1330:
    // 0x1b1330: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b1330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b1334:
    // 0x1b1334: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b1334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b1338:
    // 0x1b1338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b133c:
    // 0x1b133c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1b133cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1b1340:
    // 0x1b1340: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1b1344:
    if (ctx->pc == 0x1B1344u) {
        ctx->pc = 0x1B1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1340u;
        // 0x1b1344: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1348u;
        goto label_1b1348;
    }
    ctx->pc = 0x1B1340u;
    {
        const bool branch_taken_0x1b1340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1340u;
        // 0x1b1344: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1340) {
            ctx->pc = 0x1B1368u;
            goto label_1b1368;
        }
    }
    ctx->pc = 0x1B1348u;
label_1b1348:
    // 0x1b1348: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_1b134c:
    if (ctx->pc == 0x1B134Cu) {
        ctx->pc = 0x1B134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1348u;
        // 0x1b134c: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1350u;
        goto label_1b1350;
    }
    ctx->pc = 0x1B1348u;
    {
        const bool branch_taken_0x1b1348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1348) {
            ctx->pc = 0x1B134Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1348u;
            // 0x1b134c: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B13A0u;
            goto label_1b13a0;
        }
    }
    ctx->pc = 0x1B1350u;
label_1b1350:
    // 0x1b1350: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b1350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1b1354:
    // 0x1b1354: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1b1354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_1b1358:
    // 0x1b1358: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_1b135c:
    if (ctx->pc == 0x1B135Cu) {
        ctx->pc = 0x1B135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1358u;
        // 0x1b135c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1360u;
        goto label_1b1360;
    }
    ctx->pc = 0x1B1358u;
    {
        const bool branch_taken_0x1b1358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b1358) {
            ctx->pc = 0x1B135Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1358u;
            // 0x1b135c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1388u;
            goto label_1b1388;
        }
    }
    ctx->pc = 0x1B1360u;
label_1b1360:
    // 0x1b1360: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b1364:
    if (ctx->pc == 0x1B1364u) {
        ctx->pc = 0x1B1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1360u;
        // 0x1b1364: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1368u;
        goto label_1b1368;
    }
    ctx->pc = 0x1B1360u;
    {
        const bool branch_taken_0x1b1360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1360u;
        // 0x1b1364: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1360) {
            ctx->pc = 0x1B13A0u;
            goto label_1b13a0;
        }
    }
    ctx->pc = 0x1B1368u;
label_1b1368:
    // 0x1b1368: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1b1368u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1b136c:
    // 0x1b136c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1b136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b1370:
    // 0x1b1370: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1b1374:
    if (ctx->pc == 0x1B1374u) {
        ctx->pc = 0x1B1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1370u;
        // 0x1b1374: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1378u;
        goto label_1b1378;
    }
    ctx->pc = 0x1B1370u;
    {
        const bool branch_taken_0x1b1370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1370) {
            ctx->pc = 0x1B1374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1370u;
            // 0x1b1374: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B13A4u;
            goto label_1b13a4;
        }
    }
    ctx->pc = 0x1B1378u;
label_1b1378:
    // 0x1b1378: 0x40f809  jalr        $v0
label_1b137c:
    if (ctx->pc == 0x1B137Cu) {
        ctx->pc = 0x1B137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1378u;
        // 0x1b137c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1380u;
        goto label_1b1380;
    }
    ctx->pc = 0x1B1378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1380u);
        ctx->pc = 0x1B137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1378u;
        // 0x1b137c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1378u, 0x1B1380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1380u;
label_1b1380:
    // 0x1b1380: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b1384:
    if (ctx->pc == 0x1B1384u) {
        ctx->pc = 0x1B1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1380u;
        // 0x1b1384: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1388u;
        goto label_1b1388;
    }
    ctx->pc = 0x1B1380u;
    {
        const bool branch_taken_0x1b1380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1380u;
        // 0x1b1384: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1380) {
            ctx->pc = 0x1B13A0u;
            goto label_1b13a0;
        }
    }
    ctx->pc = 0x1B1388u;
label_1b1388:
    // 0x1b1388: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1b1388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1b138c:
    // 0x1b138c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1b138cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1b1390:
    // 0x1b1390: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1b1390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1b1394:
    // 0x1b1394: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1b1394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_1b1398:
    // 0x1b1398: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1b1398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1b139c:
    // 0x1b139c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1b139cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_1b13a0:
    // 0x1b13a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b13a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b13a4:
    // 0x1b13a4: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_1b13a8:
    if (ctx->pc == 0x1B13A8u) {
        ctx->pc = 0x1B13ACu;
        goto label_1b13ac;
    }
    ctx->pc = 0x1B13A4u;
    {
        const bool branch_taken_0x1b13a4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1b13a4) {
            ctx->pc = 0x1B13B4u;
            goto label_1b13b4;
        }
    }
    ctx->pc = 0x1B13ACu;
label_1b13ac:
    // 0x1b13ac: 0xc06bd24  jal         func_1AF490
label_1b13b0:
    if (ctx->pc == 0x1B13B0u) {
        ctx->pc = 0x1B13B4u;
        goto label_1b13b4;
    }
    ctx->pc = 0x1B13ACu;
    SET_GPR_U32(ctx, 31, 0x1B13B4u);
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x1B13ACu, 0x1B13B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13B4u;
label_1b13b4:
    // 0x1b13b4: 0xc06c4a4  jal         func_1B1290
label_1b13b8:
    if (ctx->pc == 0x1B13B8u) {
        ctx->pc = 0x1B13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13B4u;
        // 0x1b13b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13BCu;
        goto label_1b13bc;
    }
    ctx->pc = 0x1B13B4u;
    SET_GPR_U32(ctx, 31, 0x1B13BCu);
    ctx->pc = 0x1B13B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13B4u;
    // 0x1b13b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1290u, 0x1B13B4u, 0x1B13BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13BCu;
label_1b13bc:
    // 0x1b13bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b13bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1b13c0:
    // 0x1b13c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b13c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b13c4:
    // 0x1b13c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b13c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b13c8:
    // 0x1b13c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b13c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b13cc:
    // 0x1b13cc: 0x3e00008  jr          $ra
label_1b13d0:
    if (ctx->pc == 0x1B13D0u) {
        ctx->pc = 0x1B13D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13CCu;
        // 0x1b13d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13D4u;
        goto label_fallthrough_0x1b13cc;
    }
    ctx->pc = 0x1B13CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B13D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13CCu;
        // 0x1b13d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B13CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b13cc:
    ctx->pc = 0x1B13D4u;
}
