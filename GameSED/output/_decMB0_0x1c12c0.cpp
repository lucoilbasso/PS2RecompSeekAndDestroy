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

// Function: _decMB0
// Address: 0x1c12c0 - 0x1c1768
void _decMB0_0x1c12c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decMB0_0x1c12c0");
#endif

    switch (ctx->pc) {
        case 0x1c133cu: goto label_1c133c;
        case 0x1c1358u: goto label_1c1358;
        case 0x1c139cu: goto label_1c139c;
        case 0x1c1458u: goto label_1c1458;
        case 0x1c1484u: goto label_1c1484;
        case 0x1c14f4u: goto label_1c14f4;
        case 0x1c1520u: goto label_1c1520;
        case 0x1c1580u: goto label_1c1580;
        case 0x1c15acu: goto label_1c15ac;
        case 0x1c15dcu: goto label_1c15dc;
        case 0x1c1604u: goto label_1c1604;
        case 0x1c160cu: goto label_1c160c;
        case 0x1c1650u: goto label_1c1650;
        default: break;
    }

    ctx->pc = 0x1c12c0u;

    // 0x1c12c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1c12c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1c12c4: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x1c12c4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x1c12c8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1c12c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x1c12cc: 0x356b2010  ori         $t3, $t3, 0x2010
    ctx->pc = 0x1c12ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)8208);
    // 0x1c12d0: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x1c12d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x1c12d4: 0x3c02f8ff  lui         $v0, 0xF8FF
    ctx->pc = 0x1c12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63743 << 16));
    // 0x1c12d8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1c12d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1c12dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c12dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c12e0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1c12e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x1c12e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c12e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c12e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c12ec: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1c12ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12f0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1c12f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1c12f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c12f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12f8: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x1c12f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x1c12fc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1c12fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1300: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x1c1300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x1c1304: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1c1304u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1308: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1c1308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1c130c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c130cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1310: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x1c1310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x1c1314: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x1c1314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1c1318: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1c1318u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c131c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1c131cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c1320: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c1320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c1324: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c1324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c1328: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x1c1328u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x1c132c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c132cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1330: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x1c1330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x1c1334: 0xc07071a  jal         func_1C1C68
    ctx->pc = 0x1C1334u;
    SET_GPR_U32(ctx, 31, 0x1C133Cu);
    ctx->pc = 0x1C1338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1334u;
    // 0x1c1338: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1C68u, 0x1C1334u, 0x1C133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C133Cu;
label_1c133c:
    // 0x1c133c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c133cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1340: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C1340u;
    {
        const bool branch_taken_0x1c1340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1340u;
        // 0x1c1344: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1340) {
            ctx->pc = 0x1C1368u;
            goto label_1c1368;
        }
    }
    ctx->pc = 0x1C1348u;
    // 0x1c1348: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1c1348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1c134c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c134cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1350: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C1350u;
    SET_GPR_U32(ctx, 31, 0x1C1358u);
    ctx->pc = 0x1C1354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1350u;
    // 0x1c1354: 0x24a5b600  addiu       $a1, $a1, -0x4A00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C1350u, 0x1C1358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1358u;
label_1c1358:
    // 0x1c1358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c135c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c135cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1360: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x1C1360u;
    {
        const bool branch_taken_0x1c1360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1360u;
        // 0x1c1364: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1360) {
            ctx->pc = 0x1C1738u;
            goto label_1c1738;
        }
    }
    ctx->pc = 0x1C1368u;
label_1c1368:
    // 0x1c1368: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x1c1368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x1c136c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C136Cu;
    {
        const bool branch_taken_0x1c136c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C136Cu;
        // 0x1c1370: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c136c) {
            ctx->pc = 0x1C13A4u;
            goto label_1c13a4;
        }
    }
    ctx->pc = 0x1C1374u;
    // 0x1c1374: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c1374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c1378: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1378u;
    {
        const bool branch_taken_0x1c1378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1378u;
        // 0x1c137c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1378) {
            ctx->pc = 0x1C1394u;
            goto label_1c1394;
        }
    }
    ctx->pc = 0x1C1380u;
    // 0x1c1380: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x1c1380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x1c1384: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1384u;
    {
        const bool branch_taken_0x1c1384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1384u;
        // 0x1c1388: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1384) {
            ctx->pc = 0x1C1394u;
            goto label_1c1394;
        }
    }
    ctx->pc = 0x1C138Cu;
    // 0x1c138c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C138Cu;
    {
        const bool branch_taken_0x1c138c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C138Cu;
        // 0x1c1390: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c138c) {
            ctx->pc = 0x1C13D0u;
            goto label_1c13d0;
        }
    }
    ctx->pc = 0x1C1394u;
label_1c1394:
    // 0x1c1394: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C1394u;
    SET_GPR_U32(ctx, 31, 0x1C139Cu);
    ctx->pc = 0x1C1398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1394u;
    // 0x1c1398: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C1394u, 0x1C139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C139Cu;
label_1c139c:
    // 0x1c139c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C139Cu;
    {
        const bool branch_taken_0x1c139c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C13A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C139Cu;
        // 0x1c13a0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c139c) {
            ctx->pc = 0x1C13D0u;
            goto label_1c13d0;
        }
    }
    ctx->pc = 0x1C13A4u;
label_1c13a4:
    // 0x1c13a4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c13a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c13a8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C13A8u;
    {
        const bool branch_taken_0x1c13a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c13a8) {
            ctx->pc = 0x1C13ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C13A8u;
            // 0x1c13ac: 0x8e060174  lw          $a2, 0x174($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C13D4u;
            goto label_1c13d4;
        }
    }
    ctx->pc = 0x1C13B0u;
    // 0x1c13b0: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x1c13b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1c13b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C13B4u;
    {
        const bool branch_taken_0x1c13b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13B4u;
        // 0x1c13b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13b4) {
            ctx->pc = 0x1C13D0u;
            goto label_1c13d0;
        }
    }
    ctx->pc = 0x1C13BCu;
    // 0x1c13bc: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c13bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c13c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c13c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c13c4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1c13c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1c13c8: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1c13c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1c13cc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1c13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_1c13d0:
    // 0x1c13d0: 0x8e060174  lw          $a2, 0x174($s0)
    ctx->pc = 0x1c13d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1c13d4:
    // 0x1c13d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c13d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c13d8: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C13D8u;
    {
        const bool branch_taken_0x1c13d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13D8u;
        // 0x1c13dc: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13d8) {
            ctx->pc = 0x1C13FCu;
            goto label_1c13fc;
        }
    }
    ctx->pc = 0x1C13E0u;
    // 0x1c13e0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1c13e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c13e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c13e8: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x1c13e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x1c13ec: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x1c13ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x1c13f0: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x1c13f0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x1c13f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C13F4u;
    {
        const bool branch_taken_0x1c13f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13F4u;
        // 0x1c13f8: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13f4) {
            ctx->pc = 0x1C1410u;
            goto label_1c1410;
        }
    }
    ctx->pc = 0x1C13FCu;
label_1c13fc:
    // 0x1c13fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c13fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1400: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1c1400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1404: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c1404u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1408: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x1c1408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x1c140c: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x1c140cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_1c1410:
    // 0x1c1410: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x1c1410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x1c1414: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1c1414u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1418: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1418u;
    {
        const bool branch_taken_0x1c1418 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1418u;
        // 0x1c141c: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1418) {
            ctx->pc = 0x1C1428u;
            goto label_1c1428;
        }
    }
    ctx->pc = 0x1C1420u;
    // 0x1c1420: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x1c1420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x1c1424: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x1c1424u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1c1428:
    // 0x1c1428: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c142c: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C142Cu;
    {
        const bool branch_taken_0x1c142c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C142Cu;
        // 0x1c1430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c142c) {
            ctx->pc = 0x1C1464u;
            goto label_1c1464;
        }
    }
    ctx->pc = 0x1C1434u;
    // 0x1c1434: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x1c1434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x1c1438: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C1438u;
    {
        const bool branch_taken_0x1c1438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1438u;
        // 0x1c143c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1438) {
            ctx->pc = 0x1C1464u;
            goto label_1c1464;
        }
    }
    ctx->pc = 0x1C1440u;
    // 0x1c1440: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c1440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c1444: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1c1444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1c1448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1448u;
    {
        const bool branch_taken_0x1c1448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1448u;
        // 0x1c144c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1448) {
            ctx->pc = 0x1C1460u;
            goto label_1c1460;
        }
    }
    ctx->pc = 0x1C1450u;
    // 0x1c1450: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C1450u;
    SET_GPR_U32(ctx, 31, 0x1C1458u);
    ctx->pc = 0x1C1454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1450u;
    // 0x1c1454: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C1450u, 0x1C1458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1458u;
label_1c1458:
    // 0x1c1458: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1458u;
    {
        const bool branch_taken_0x1c1458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1458u;
        // 0x1c145c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1458) {
            ctx->pc = 0x1C1468u;
            goto label_1c1468;
        }
    }
    ctx->pc = 0x1C1460u;
label_1c1460:
    // 0x1c1460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c1460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1464:
    // 0x1c1464: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c1464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1468:
    // 0x1c1468: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c1468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c146c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c1470: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1c1470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c1474: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1474u;
    {
        const bool branch_taken_0x1c1474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1474u;
        // 0x1c1478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1474) {
            ctx->pc = 0x1C148Cu;
            goto label_1c148c;
        }
    }
    ctx->pc = 0x1C147Cu;
    // 0x1c147c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C147Cu;
    SET_GPR_U32(ctx, 31, 0x1C1484u);
    ctx->pc = 0x1C1480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C147Cu;
    // 0x1c1480: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C147Cu, 0x1C1484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1484u;
label_1c1484:
    // 0x1c1484: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x1c1484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x1c1488: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c1488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c148c:
    // 0x1c148c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1c148cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1c1490: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1490u;
    {
        const bool branch_taken_0x1c1490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1490) {
            ctx->pc = 0x1C1494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1490u;
            // 0x1c1494: 0x8e020848  lw          $v0, 0x848($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C14B4u;
            goto label_1c14b4;
        }
    }
    ctx->pc = 0x1C1498u;
    // 0x1c1498: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c1498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c149c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C149Cu;
    {
        const bool branch_taken_0x1c149c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c149c) {
            ctx->pc = 0x1C14A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C149Cu;
            // 0x1c14a0: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1524u;
            goto label_1c1524;
        }
    }
    ctx->pc = 0x1C14A4u;
    // 0x1c14a4: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x1c14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1c14a8: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C14A8u;
    {
        const bool branch_taken_0x1c14a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c14a8) {
            ctx->pc = 0x1C14ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C14A8u;
            // 0x1c14ac: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1524u;
            goto label_1c1524;
        }
    }
    ctx->pc = 0x1C14B0u;
    // 0x1c14b0: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x1c14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_1c14b4:
    // 0x1c14b4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C14B4u;
    {
        const bool branch_taken_0x1c14b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14B4u;
        // 0x1c14b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c14b4) {
            ctx->pc = 0x1C14FCu;
            goto label_1c14fc;
        }
    }
    ctx->pc = 0x1C14BCu;
    // 0x1c14bc: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x1c14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x1c14c0: 0x8e0b0164  lw          $t3, 0x164($s0)
    ctx->pc = 0x1c14c0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x1c14c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c14c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c14c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c14cc: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x1c14ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1c14d0: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x1c14d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x1c14d4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1c14d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1c14d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c14d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c14dc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1c14dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c14e0: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x1c14e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x1c14e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c14e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c14e8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1c14e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c14ec: 0xc0705fc  jal         func_1C17F0
    ctx->pc = 0x1C14ECu;
    SET_GPR_U32(ctx, 31, 0x1C14F4u);
    ctx->pc = 0x1C14F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14ECu;
    // 0x1c14f0: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17F0u, 0x1C14ECu, 0x1C14F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14F4u;
label_1c14f4:
    // 0x1c14f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C14F4u;
    {
        const bool branch_taken_0x1c14f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14F4u;
        // 0x1c14f8: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c14f4) {
            ctx->pc = 0x1C1524u;
            goto label_1c1524;
        }
    }
    ctx->pc = 0x1C14FCu;
label_1c14fc:
    // 0x1c14fc: 0x8e070158  lw          $a3, 0x158($s0)
    ctx->pc = 0x1c14fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x1c1500: 0x8e0b0154  lw          $t3, 0x154($s0)
    ctx->pc = 0x1c1500u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x1c1504: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1508: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c1508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c150c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1c150cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1510: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c1510u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1514: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1c1514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1518: 0xc070664  jal         func_1C1990
    ctx->pc = 0x1C1518u;
    SET_GPR_U32(ctx, 31, 0x1C1520u);
    ctx->pc = 0x1C151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1518u;
    // 0x1c151c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1990u, 0x1C1518u, 0x1C1520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1520u;
label_1c1520:
    // 0x1c1520: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x1c1520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1c1524:
    // 0x1c1524: 0x14600084  bnez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x1C1524u;
    {
        const bool branch_taken_0x1c1524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1524u;
        // 0x1c1528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1524) {
            ctx->pc = 0x1C1738u;
            goto label_1c1738;
        }
    }
    ctx->pc = 0x1C152Cu;
    // 0x1c152c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c1530: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c1530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c1534: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C1534u;
    {
        const bool branch_taken_0x1c1534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1534) {
            ctx->pc = 0x1C15B0u;
            goto label_1c15b0;
        }
    }
    ctx->pc = 0x1C153Cu;
    // 0x1c153c: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x1c153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x1c1540: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C1540u;
    {
        const bool branch_taken_0x1c1540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1540u;
        // 0x1c1544: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1540) {
            ctx->pc = 0x1C1588u;
            goto label_1c1588;
        }
    }
    ctx->pc = 0x1C1548u;
    // 0x1c1548: 0x8e020170  lw          $v0, 0x170($s0)
    ctx->pc = 0x1c1548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x1c154c: 0x8e0b016c  lw          $t3, 0x16C($s0)
    ctx->pc = 0x1c154cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x1c1550: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1c1550u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1554: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c1554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c1558: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x1c1558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1c155c: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x1c155cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x1c1560: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1c1560u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1564: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c1564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c1568: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1c1568u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1c156c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c156cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1c1570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1574: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1578: 0xc0705fc  jal         func_1C17F0
    ctx->pc = 0x1C1578u;
    SET_GPR_U32(ctx, 31, 0x1C1580u);
    ctx->pc = 0x1C157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1578u;
    // 0x1c157c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17F0u, 0x1C1578u, 0x1C1580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1580u;
label_1c1580:
    // 0x1c1580: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C1580u;
    {
        const bool branch_taken_0x1c1580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1580u;
        // 0x1c1584: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1580) {
            ctx->pc = 0x1C15B0u;
            goto label_1c15b0;
        }
    }
    ctx->pc = 0x1C1588u;
label_1c1588:
    // 0x1c1588: 0x8e070160  lw          $a3, 0x160($s0)
    ctx->pc = 0x1c1588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1c158c: 0x8e0b015c  lw          $t3, 0x15C($s0)
    ctx->pc = 0x1c158cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x1c1590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1594: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c1594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c1598: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x1c1598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1c159c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c159cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c15a0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1c15a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c15a4: 0xc070664  jal         func_1C1990
    ctx->pc = 0x1C15A4u;
    SET_GPR_U32(ctx, 31, 0x1C15ACu);
    ctx->pc = 0x1C15A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15A4u;
    // 0x1c15a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1990u, 0x1C15A4u, 0x1C15ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15ACu;
label_1c15ac:
    // 0x1c15ac: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x1c15acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1c15b0:
    // 0x1c15b0: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x1C15B0u;
    {
        const bool branch_taken_0x1c15b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15B0u;
        // 0x1c15b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15b0) {
            ctx->pc = 0x1C1738u;
            goto label_1c1738;
        }
    }
    ctx->pc = 0x1C15B8u;
    // 0x1c15b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c15b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c15bc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c15bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c15c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C15C0u;
    {
        const bool branch_taken_0x1c15c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15C0u;
        // 0x1c15c4: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15c0) {
            ctx->pc = 0x1C15E4u;
            goto label_1c15e4;
        }
    }
    ctx->pc = 0x1C15C8u;
    // 0x1c15c8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x1c15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1c15cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C15CCu;
    {
        const bool branch_taken_0x1c15cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15CCu;
        // 0x1c15d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15cc) {
            ctx->pc = 0x1C15E0u;
            goto label_1c15e0;
        }
    }
    ctx->pc = 0x1C15D4u;
    // 0x1c15d4: 0xc0707ba  jal         func_1C1EE8
    ctx->pc = 0x1C15D4u;
    SET_GPR_U32(ctx, 31, 0x1C15DCu);
    ctx->pc = 0x1C15D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15D4u;
    // 0x1c15d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EE8u, 0x1C15D4u, 0x1C15DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15DCu;
label_1c15dc:
    // 0x1c15dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c15e0:
    // 0x1c15e0: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1c15e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1c15e4:
    // 0x1c15e4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C15E4u;
    {
        const bool branch_taken_0x1c15e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15E4u;
        // 0x1c15e8: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15e4) {
            ctx->pc = 0x1C1658u;
            goto label_1c1658;
        }
    }
    ctx->pc = 0x1C15ECu;
    // 0x1c15ec: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x1c15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1c15f0: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x1c15f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1c15f4: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1c15f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c15f8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1c15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1c15fc: 0xc070dfa  jal         func_1C37E8
    ctx->pc = 0x1C15FCu;
    SET_GPR_U32(ctx, 31, 0x1C1604u);
    ctx->pc = 0x1C1600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15FCu;
    // 0x1c1600: 0x8c440594  lw          $a0, 0x594($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C37E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C37E8u, 0x1C15FCu, 0x1C1604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1604u;
label_1c1604:
    // 0x1c1604: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1C1604u;
    SET_GPR_U32(ctx, 31, 0x1C160Cu);
    ctx->pc = 0x1C1608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1604u;
    // 0x1c1608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1C1604u, 0x1C160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C160Cu;
label_1c160c:
    // 0x1c160c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1c160cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c1610: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x1c1610u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x1c1614: 0x8e0601b4  lw          $a2, 0x1B4($s0)
    ctx->pc = 0x1c1614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1c1618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c161c: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x1c161cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x1c1620: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1c1620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1c1624: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x1c1624u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1628: 0x52ec0  sll         $a1, $a1, 27
    ctx->pc = 0x1c1628u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 27));
    // 0x1c162c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1c162cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1c1630: 0x31e80  sll         $v1, $v1, 26
    ctx->pc = 0x1c1630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
    // 0x1c1634: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1c1634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c1638: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1c1638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1c163c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1c163cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1c1640: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1c1640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1c1644: 0x21640  sll         $v0, $v0, 25
    ctx->pc = 0x1c1644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 25));
    // 0x1c1648: 0xc0706b8  jal         func_1C1AE0
    ctx->pc = 0x1C1648u;
    SET_GPR_U32(ctx, 31, 0x1C1650u);
    ctx->pc = 0x1C164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1648u;
    // 0x1c164c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AE0u, 0x1C1648u, 0x1C1650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1650u;
label_1c1650:
    // 0x1c1650: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1650u;
    {
        const bool branch_taken_0x1c1650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1650u;
        // 0x1c1654: 0x8e02011c  lw          $v0, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1650) {
            ctx->pc = 0x1C1670u;
            goto label_1c1670;
        }
    }
    ctx->pc = 0x1C1658u;
label_1c1658:
    // 0x1c1658: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x1c1658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1c165c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1660: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1c1660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c1664: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1c1664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1c1668: 0xac4406cc  sw          $a0, 0x6CC($v0)
    ctx->pc = 0x1c1668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 4));
    // 0x1c166c: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x1c166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1c1670:
    // 0x1c1670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1670u;
    {
        const bool branch_taken_0x1c1670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1670u;
        // 0x1c1674: 0xae0001b0  sw          $zero, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1670) {
            ctx->pc = 0x1C1680u;
            goto label_1c1680;
        }
    }
    ctx->pc = 0x1C1678u;
    // 0x1c1678: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1C1678u;
    {
        const bool branch_taken_0x1c1678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1678u;
        // 0x1c167c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1678) {
            ctx->pc = 0x1C1738u;
            goto label_1c1738;
        }
    }
    ctx->pc = 0x1C1680u;
label_1c1680:
    // 0x1c1680: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c1680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c1684: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c1684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c1688: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1688u;
    {
        const bool branch_taken_0x1c1688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1688) {
            ctx->pc = 0x1C168Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1688u;
            // 0x1c168c: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C16ACu;
            goto label_1c16ac;
        }
    }
    ctx->pc = 0x1C1690u;
    // 0x1c1690: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1694: 0xae0301b0  sw          $v1, 0x1B0($s0)
    ctx->pc = 0x1c1694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
    // 0x1c1698: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c1698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c169c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c169cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c16a0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C16A0u;
    {
        const bool branch_taken_0x1c16a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c16a0) {
            ctx->pc = 0x1C16A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C16A0u;
            // 0x1c16a4: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C16D8u;
            goto label_1c16d8;
        }
    }
    ctx->pc = 0x1C16A8u;
    // 0x1c16a8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x1c16a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_1c16ac:
    // 0x1c16ac: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C16ACu;
    {
        const bool branch_taken_0x1c16ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c16ac) {
            ctx->pc = 0x1C16B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C16ACu;
            // 0x1c16b0: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C16D8u;
            goto label_1c16d8;
        }
    }
    ctx->pc = 0x1C16B4u;
    // 0x1c16b4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1c16b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1c16b8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1c16b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1c16bc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c16bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1c16c0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c16c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c16c4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1c16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1c16c8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1c16c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1c16cc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1c16ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1c16d0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1c16d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1c16d4: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x1c16d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1c16d8:
    // 0x1c16d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c16d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c16dc: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C16DCu;
    {
        const bool branch_taken_0x1c16dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16DCu;
        // 0x1c16e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16dc) {
            ctx->pc = 0x1C1738u;
            goto label_1c1738;
        }
    }
    ctx->pc = 0x1C16E4u;
    // 0x1c16e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c16e8: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x1c16e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x1c16ec: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C16ECu;
    {
        const bool branch_taken_0x1c16ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16ECu;
        // 0x1c16f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16ec) {
            ctx->pc = 0x1C1738u;
            goto label_1c1738;
        }
    }
    ctx->pc = 0x1C16F4u;
    // 0x1c16f4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c16f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c16f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c16fc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1c16fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1c1700: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1c1700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1c1704: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c1704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1c1708: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c1708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c170c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C170Cu;
    {
        const bool branch_taken_0x1c170c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C170Cu;
        // 0x1c1710: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c170c) {
            ctx->pc = 0x1C171Cu;
            goto label_1c171c;
        }
    }
    ctx->pc = 0x1C1714u;
    // 0x1c1714: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1714u;
    {
        const bool branch_taken_0x1c1714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1714u;
        // 0x1c1718: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1714) {
            ctx->pc = 0x1C1734u;
            goto label_1c1734;
        }
    }
    ctx->pc = 0x1C171Cu;
label_1c171c:
    // 0x1c171c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1c171cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1c1720: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c1720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c1724: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x1c1724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1c1728: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1c1728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1c172c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c172cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c1730: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1c1730u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_1c1734:
    // 0x1c1734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1738:
    // 0x1c1738: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1c1738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c173c: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x1c173cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c1740: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x1c1740u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c1744: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1c1744u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c1748: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x1c1748u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c174c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1c174cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c1750: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x1c1750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c1754: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1c1754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1758: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1c1758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c175c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c175cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1760: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1760u;
        // 0x1c1764: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1768u;
}
