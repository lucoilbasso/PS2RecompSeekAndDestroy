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

// Function: _vfprintf_r
// Address: 0x1d12c8 - 0x1d2938
void _vfprintf_r_0x1d12c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_vfprintf_r_0x1d12c8");
#endif

    switch (ctx->pc) {
        case 0x1d1308u: goto label_1d1308;
        case 0x1d1338u: goto label_1d1338;
        case 0x1d1374u: goto label_1d1374;
        case 0x1d1398u: goto label_1d1398;
        case 0x1d13a0u: goto label_1d13a0;
        case 0x1d13c0u: goto label_1d13c0;
        case 0x1d1420u: goto label_1d1420;
        case 0x1d145cu: goto label_1d145c;
        case 0x1d1460u: goto label_1d1460;
        case 0x1d146cu: goto label_1d146c;
        case 0x1d1470u: goto label_1d1470;
        case 0x1d14dcu: goto label_1d14dc;
        case 0x1d1518u: goto label_1d1518;
        case 0x1d1528u: goto label_1d1528;
        case 0x1d1578u: goto label_1d1578;
        case 0x1d15d8u: goto label_1d15d8;
        case 0x1d1620u: goto label_1d1620;
        case 0x1d1640u: goto label_1d1640;
        case 0x1d1670u: goto label_1d1670;
        case 0x1d1688u: goto label_1d1688;
        case 0x1d16a4u: goto label_1d16a4;
        case 0x1d16bcu: goto label_1d16bc;
        case 0x1d16ecu: goto label_1d16ec;
        case 0x1d1728u: goto label_1d1728;
        case 0x1d1794u: goto label_1d1794;
        case 0x1d1860u: goto label_1d1860;
        case 0x1d18b8u: goto label_1d18b8;
        case 0x1d18d8u: goto label_1d18d8;
        case 0x1d1920u: goto label_1d1920;
        case 0x1d1934u: goto label_1d1934;
        case 0x1d1960u: goto label_1d1960;
        case 0x1d1988u: goto label_1d1988;
        case 0x1d19a8u: goto label_1d19a8;
        case 0x1d19c8u: goto label_1d19c8;
        case 0x1d1a1cu: goto label_1d1a1c;
        case 0x1d1a70u: goto label_1d1a70;
        case 0x1d1a78u: goto label_1d1a78;
        case 0x1d1ab8u: goto label_1d1ab8;
        case 0x1d1ac0u: goto label_1d1ac0;
        case 0x1d1adcu: goto label_1d1adc;
        case 0x1d1b08u: goto label_1d1b08;
        case 0x1d1b50u: goto label_1d1b50;
        case 0x1d1bd0u: goto label_1d1bd0;
        case 0x1d1c0cu: goto label_1d1c0c;
        case 0x1d1c74u: goto label_1d1c74;
        case 0x1d1cccu: goto label_1d1ccc;
        case 0x1d1d34u: goto label_1d1d34;
        case 0x1d1d80u: goto label_1d1d80;
        case 0x1d1dbcu: goto label_1d1dbc;
        case 0x1d1e24u: goto label_1d1e24;
        case 0x1d1e60u: goto label_1d1e60;
        case 0x1d1e9cu: goto label_1d1e9c;
        case 0x1d1f04u: goto label_1d1f04;
        case 0x1d1f58u: goto label_1d1f58;
        case 0x1d1fa4u: goto label_1d1fa4;
        case 0x1d2010u: goto label_1d2010;
        case 0x1d2048u: goto label_1d2048;
        case 0x1d2080u: goto label_1d2080;
        case 0x1d2124u: goto label_1d2124;
        case 0x1d2188u: goto label_1d2188;
        case 0x1d21c0u: goto label_1d21c0;
        case 0x1d21f8u: goto label_1d21f8;
        case 0x1d225cu: goto label_1d225c;
        case 0x1d22acu: goto label_1d22ac;
        case 0x1d2308u: goto label_1d2308;
        case 0x1d2348u: goto label_1d2348;
        case 0x1d2380u: goto label_1d2380;
        case 0x1d23e4u: goto label_1d23e4;
        case 0x1d2474u: goto label_1d2474;
        case 0x1d24d0u: goto label_1d24d0;
        case 0x1d2530u: goto label_1d2530;
        case 0x1d25b4u: goto label_1d25b4;
        case 0x1d25d4u: goto label_1d25d4;
        case 0x1d2624u: goto label_1d2624;
        case 0x1d2660u: goto label_1d2660;
        case 0x1d2698u: goto label_1d2698;
        case 0x1d26fcu: goto label_1d26fc;
        case 0x1d2748u: goto label_1d2748;
        case 0x1d2798u: goto label_1d2798;
        case 0x1d27e0u: goto label_1d27e0;
        case 0x1d2818u: goto label_1d2818;
        case 0x1d2878u: goto label_1d2878;
        case 0x1d28b4u: goto label_1d28b4;
        case 0x1d28d0u: goto label_1d28d0;
        case 0x1d28e4u: goto label_1d28e4;
        default: break;
    }

    ctx->pc = 0x1d12c8u;

    // 0x1d12c8: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1d12c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x1d12cc: 0xffb00240  sd          $s0, 0x240($sp)
    ctx->pc = 0x1d12ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 16));
    // 0x1d12d0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d12d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d12d4: 0xffb60270  sd          $s6, 0x270($sp)
    ctx->pc = 0x1d12d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 22));
    // 0x1d12d8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1d12d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d12dc: 0xafa401e4  sw          $a0, 0x1E4($sp)
    ctx->pc = 0x1d12dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
    // 0x1d12e0: 0xffb10248  sd          $s1, 0x248($sp)
    ctx->pc = 0x1d12e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 17));
    // 0x1d12e4: 0xffb20250  sd          $s2, 0x250($sp)
    ctx->pc = 0x1d12e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
    // 0x1d12e8: 0xffb30258  sd          $s3, 0x258($sp)
    ctx->pc = 0x1d12e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 19));
    // 0x1d12ec: 0xffb40260  sd          $s4, 0x260($sp)
    ctx->pc = 0x1d12ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 20));
    // 0x1d12f0: 0xffb50268  sd          $s5, 0x268($sp)
    ctx->pc = 0x1d12f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 21));
    // 0x1d12f4: 0xffb70278  sd          $s7, 0x278($sp)
    ctx->pc = 0x1d12f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 23));
    // 0x1d12f8: 0xffbe0280  sd          $fp, 0x280($sp)
    ctx->pc = 0x1d12f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 30));
    // 0x1d12fc: 0xffbf0288  sd          $ra, 0x288($sp)
    ctx->pc = 0x1d12fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
    // 0x1d1300: 0xc0753e4  jal         func_1D4F90
    ctx->pc = 0x1D1300u;
    SET_GPR_U32(ctx, 31, 0x1D1308u);
    ctx->pc = 0x1D1304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1300u;
    // 0x1d1304: 0xafa501e8  sw          $a1, 0x1E8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F90u, 0x1D1300u, 0x1D1308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1308u;
label_1d1308:
    // 0x1d1308: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d130c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1310: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x1d1310u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d1314: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x1d1314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
    // 0x1d1318: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1d1318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d131c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D131Cu;
    {
        const bool branch_taken_0x1d131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D131Cu;
        // 0x1d1320: 0xafa001d8  sw          $zero, 0x1D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d131c) {
            ctx->pc = 0x1D1330u;
            goto label_1d1330;
        }
    }
    ctx->pc = 0x1D1324u;
    // 0x1d1324: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1d1324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d1328: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1328u;
    {
        const bool branch_taken_0x1d1328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1328) {
            ctx->pc = 0x1D132Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1328u;
            // 0x1d132c: 0x3063001a  andi        $v1, $v1, 0x1A (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D134Cu;
            goto label_1d134c;
        }
    }
    ctx->pc = 0x1D1330u;
label_1d1330:
    // 0x1d1330: 0xc074b22  jal         func_1D2C88
    ctx->pc = 0x1D1330u;
    SET_GPR_U32(ctx, 31, 0x1D1338u);
    ctx->pc = 0x1D1334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1330u;
    // 0x1d1334: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2C88u, 0x1D1330u, 0x1D1338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1338u;
label_1d1338:
    // 0x1d1338: 0x14400573  bnez        $v0, . + 4 + (0x573 << 2)
    ctx->pc = 0x1D1338u;
    {
        const bool branch_taken_0x1d1338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1338u;
        // 0x1d133c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1338) {
            ctx->pc = 0x1D2908u;
            goto label_1d2908;
        }
    }
    ctx->pc = 0x1D1340u;
    // 0x1d1340: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x1d1340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1344: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x1d1344u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d1348: 0x3063001a  andi        $v1, $v1, 0x1A
    ctx->pc = 0x1d1348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
label_1d134c:
    // 0x1d134c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d1350: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D1350u;
    {
        const bool branch_taken_0x1d1350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1350u;
        // 0x1d1354: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1350) {
            ctx->pc = 0x1D1380u;
            goto label_1d1380;
        }
    }
    ctx->pc = 0x1D1358u;
    // 0x1d1358: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x1d1358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d135c: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x1d135cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x1d1360: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1360u;
    {
        const bool branch_taken_0x1d1360 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1360u;
        // 0x1d1364: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1360) {
            ctx->pc = 0x1D1380u;
            goto label_1d1380;
        }
    }
    ctx->pc = 0x1D1368u;
    // 0x1d1368: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1d1368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d136c: 0xc074466  jal         func_1D1198
    ctx->pc = 0x1D136Cu;
    SET_GPR_U32(ctx, 31, 0x1D1374u);
    ctx->pc = 0x1D1370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D136Cu;
    // 0x1d1370: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1198u, 0x1D136Cu, 0x1D1374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1374u;
label_1d1374:
    // 0x1d1374: 0x10000565  b           . + 4 + (0x565 << 2)
    ctx->pc = 0x1D1374u;
    {
        const bool branch_taken_0x1d1374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1374u;
        // 0x1d1378: 0xdfb00240  ld          $s0, 0x240($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1374) {
            ctx->pc = 0x1D290Cu;
            goto label_1d290c;
        }
    }
    ctx->pc = 0x1D137Cu;
    // 0x1d137c: 0x0  nop
    ctx->pc = 0x1d137cu;
    // NOP
label_1d1380:
    // 0x1d1380: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1d1380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1d1384: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1d1384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1d1388: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d1388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d138c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1d138cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1d1390: 0xafa001ec  sw          $zero, 0x1EC($sp)
    ctx->pc = 0x1d1390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 0));
    // 0x1d1394: 0x0  nop
    ctx->pc = 0x1d1394u;
    // NOP
label_1d1398:
    // 0x1d1398: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x1d1398u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d139c: 0x24110025  addiu       $s1, $zero, 0x25
    ctx->pc = 0x1d139cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_1d13a0:
    // 0x1d13a0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d13a4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1d13a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1d13a8: 0x8c44e1b0  lw          $a0, -0x1E50($v0)
    ctx->pc = 0x1d13a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x24E1B0u));
    // 0x1d13ac: 0x27a501d4  addiu       $a1, $sp, 0x1D4
    ctx->pc = 0x1d13acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x1d13b0: 0x8c67e618  lw          $a3, -0x19E8($v1)
    ctx->pc = 0x1d13b0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x24E618u));
    // 0x1d13b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d13b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d13b8: 0xc075442  jal         func_1D5108
    ctx->pc = 0x1D13B8u;
    SET_GPR_U32(ctx, 31, 0x1D13C0u);
    ctx->pc = 0x1D13BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D13B8u;
    // 0x1d13bc: 0x27a801d8  addiu       $t0, $sp, 0x1D8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5108u, 0x1D13B8u, 0x1D13C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D13C0u;
label_1d13c0:
    // 0x1d13c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d13c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d13c4: 0x5a000006  blezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D13C4u;
    {
        const bool branch_taken_0x1d13c4 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1d13c4) {
            ctx->pc = 0x1D13C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D13C4u;
            // 0x1d13c8: 0x2558823  subu        $s1, $s2, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D13E0u;
            goto label_1d13e0;
        }
    }
    ctx->pc = 0x1D13CCu;
    // 0x1d13cc: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x1d13ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1d13d0: 0x1451fff3  bne         $v0, $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D13D0u;
    {
        const bool branch_taken_0x1d13d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1D13D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13D0u;
        // 0x1d13d4: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13d0) {
            ctx->pc = 0x1D13A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d13a0;
        }
    }
    ctx->pc = 0x1D13D8u;
    // 0x1d13d8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1d13d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d13dc: 0x2558823  subu        $s1, $s2, $s5
    ctx->pc = 0x1d13dcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_1d13e0:
    // 0x1d13e0: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D13E0u;
    {
        const bool branch_taken_0x1d13e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d13e0) {
            ctx->pc = 0x1D143Cu;
            goto label_1d143c;
        }
    }
    ctx->pc = 0x1D13E8u;
    // 0x1d13e8: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x1d13e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x1d13ec: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x1d13ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x1d13f0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d13f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d13f4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d13f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d13f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d13fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1400: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d1400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d1404: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d1404u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1408: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d1408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d140c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D140Cu;
    {
        const bool branch_taken_0x1d140c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D140Cu;
        // 0x1d1410: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d140c) {
            ctx->pc = 0x1D1430u;
            goto label_1d1430;
        }
    }
    ctx->pc = 0x1D1414u;
    // 0x1d1414: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1418: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1418u;
    SET_GPR_U32(ctx, 31, 0x1D1420u);
    ctx->pc = 0x1D141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1418u;
    // 0x1d141c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1418u, 0x1D1420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1420u;
label_1d1420:
    // 0x1d1420: 0x14400534  bnez        $v0, . + 4 + (0x534 << 2)
    ctx->pc = 0x1D1420u;
    {
        const bool branch_taken_0x1d1420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1420u;
        // 0x1d1424: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1420) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D1428u;
    // 0x1d1428: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d1428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d142c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d142cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d1430:
    // 0x1d1430: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x1d1430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x1d1434: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1d1434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1d1438: 0xafa501ec  sw          $a1, 0x1EC($sp)
    ctx->pc = 0x1d1438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
label_1d143c:
    // 0x1d143c: 0x1a000525  blez        $s0, . + 4 + (0x525 << 2)
    ctx->pc = 0x1D143Cu;
    {
        const bool branch_taken_0x1d143c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D143Cu;
        // 0x1d1440: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d143c) {
            ctx->pc = 0x1D28D4u;
            goto label_1d28d4;
        }
    }
    ctx->pc = 0x1D1444u;
    // 0x1d1444: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x1d1444u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d1448: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d1448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d144c: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x1d144cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
    // 0x1d1450: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d1450u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1454: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x1d1454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x1d1458: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1d1458u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d145c:
    // 0x1d145c: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x1d145cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1d1460:
    // 0x1d1460: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x1d1460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1d1464: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d1464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d1468: 0x28e03  sra         $s1, $v0, 24
    ctx->pc = 0x1d1468u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 24));
label_1d146c:
    // 0x1d146c: 0x2623ffe0  addiu       $v1, $s1, -0x20
    ctx->pc = 0x1d146cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_1d1470:
    // 0x1d1470: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x1d1470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x1d1474: 0x104001b2  beqz        $v0, . + 4 + (0x1B2 << 2)
    ctx->pc = 0x1D1474u;
    {
        const bool branch_taken_0x1d1474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1474u;
        // 0x1d1478: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1474) {
            ctx->pc = 0x1D1B40u;
            goto label_1d1b40;
        }
    }
    ctx->pc = 0x1D147Cu;
    // 0x1d147c: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1d147cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1d1480: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d1480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d1484: 0x8c63c460  lw          $v1, -0x3BA0($v1)
    ctx->pc = 0x1d1484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952032)));
    // 0x1d1488: 0x600008  jr          $v1
    ctx->pc = 0x1D1488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1490u: goto label_1d1490;
            case 0x1D14A8u: goto label_1d14a8;
            case 0x1D14B0u: goto label_1d14b0;
            case 0x1D14CCu: goto label_1d14cc;
            case 0x1D14D8u: goto label_1d14d8;
            case 0x1D14E8u: goto label_1d14e8;
            case 0x1D1568u: goto label_1d1568;
            case 0x1D1570u: goto label_1d1570;
            case 0x1D15A8u: goto label_1d15a8;
            case 0x1D15B0u: goto label_1d15b0;
            case 0x1D15B8u: goto label_1d15b8;
            case 0x1D15CCu: goto label_1d15cc;
            case 0x1D15E0u: goto label_1d15e0;
            case 0x1D1600u: goto label_1d1600;
            case 0x1D1604u: goto label_1d1604;
            case 0x1D1658u: goto label_1d1658;
            case 0x1D1838u: goto label_1d1838;
            case 0x1D1898u: goto label_1d1898;
            case 0x1D189Cu: goto label_1d189c;
            case 0x1D18E0u: goto label_1d18e0;
            case 0x1D1908u: goto label_1d1908;
            case 0x1D1968u: goto label_1d1968;
            case 0x1D196Cu: goto label_1d196c;
            case 0x1D19B0u: goto label_1d19b0;
            case 0x1D19C0u: goto label_1d19c0;
            case 0x1D1B40u: goto label_1d1b40;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1488u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D1490u;
label_1d1490:
    // 0x1d1490: 0x83a201d1  lb          $v0, 0x1D1($sp)
    ctx->pc = 0x1d1490u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x1d1494: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D1494u;
    {
        const bool branch_taken_0x1d1494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1494) {
            ctx->pc = 0x1D1498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1494u;
            // 0x1d1498: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1460;
        }
    }
    ctx->pc = 0x1D149Cu;
    // 0x1d149c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D149Cu;
    {
        const bool branch_taken_0x1d149c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D149Cu;
        // 0x1d14a0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d149c) {
            ctx->pc = 0x1D14DCu;
            goto label_1d14dc;
        }
    }
    ctx->pc = 0x1D14A4u;
    // 0x1d14a4: 0x0  nop
    ctx->pc = 0x1d14a4u;
    // NOP
label_1d14a8:
    // 0x1d14a8: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1D14A8u;
    {
        const bool branch_taken_0x1d14a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14A8u;
        // 0x1d14ac: 0x36f70001  ori         $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14a8) {
            ctx->pc = 0x1D145Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d145c;
        }
    }
    ctx->pc = 0x1D14B0u;
label_1d14b0:
    // 0x1d14b0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1d14b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14b4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d14b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d14b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d14b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d14bc: 0x441ffe7  bgez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1D14BCu;
    {
        const bool branch_taken_0x1d14bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D14C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14BCu;
        // 0x1d14c0: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14bc) {
            ctx->pc = 0x1D145Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d145c;
        }
    }
    ctx->pc = 0x1D14C4u;
    // 0x1d14c4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1d14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1d14c8: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x1d14c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_1d14cc:
    // 0x1d14cc: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x1D14CCu;
    {
        const bool branch_taken_0x1d14cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14CCu;
        // 0x1d14d0: 0x36f70004  ori         $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14cc) {
            ctx->pc = 0x1D145Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d145c;
        }
    }
    ctx->pc = 0x1D14D4u;
    // 0x1d14d4: 0x0  nop
    ctx->pc = 0x1d14d4u;
    // NOP
label_1d14d8:
    // 0x1d14d8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x1d14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_1d14dc:
    // 0x1d14dc: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x1d14dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d14e0: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D14E0u;
    {
        const bool branch_taken_0x1d14e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14E0u;
        // 0x1d14e4: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14e0) {
            ctx->pc = 0x1D1460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1460;
        }
    }
    ctx->pc = 0x1D14E8u;
label_1d14e8:
    // 0x1d14e8: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x1d14e8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d14ec: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1d14ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1d14f0: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D14F0u;
    {
        const bool branch_taken_0x1d14f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14F0u;
        // 0x1d14f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14f0) {
            ctx->pc = 0x1D1518u;
            goto label_1d1518;
        }
    }
    ctx->pc = 0x1D14F8u;
    // 0x1d14f8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1d14f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14fc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d14fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1500: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1d1500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1504: 0x2a82ffff  slti        $v0, $s4, -0x1
    ctx->pc = 0x1d1504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1d1508: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1D1508u;
    {
        const bool branch_taken_0x1d1508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1508u;
        // 0x1d150c: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1508) {
            ctx->pc = 0x1D145Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d145c;
        }
    }
    ctx->pc = 0x1D1510u;
    // 0x1d1510: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1D1510u;
    {
        const bool branch_taken_0x1d1510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1510u;
        // 0x1d1514: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1510) {
            ctx->pc = 0x1D145Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d145c;
        }
    }
    ctx->pc = 0x1D1518u;
label_1d1518:
    // 0x1d1518: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x1d1518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x1d151c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1d151cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d1520: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D1520u;
    {
        const bool branch_taken_0x1d1520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1520u;
        // 0x1d1524: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1520) {
            ctx->pc = 0x1D1550u;
            goto label_1d1550;
        }
    }
    ctx->pc = 0x1D1528u;
label_1d1528:
    // 0x1d1528: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d1528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d152c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d1530: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d1530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d1534: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d1534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d1538: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x1d1538u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d153c: 0x2450ffd0  addiu       $s0, $v0, -0x30
    ctx->pc = 0x1d153cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1d1540: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x1d1540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x1d1544: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1d1544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d1548: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D1548u;
    {
        const bool branch_taken_0x1d1548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1548u;
        // 0x1d154c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1548) {
            ctx->pc = 0x1D1528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1528;
        }
    }
    ctx->pc = 0x1D1550u;
label_1d1550:
    // 0x1d1550: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1d1550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1554: 0x2a82ffff  slti        $v0, $s4, -0x1
    ctx->pc = 0x1d1554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1d1558: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x1D1558u;
    {
        const bool branch_taken_0x1d1558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1558) {
            ctx->pc = 0x1D155Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1558u;
            // 0x1d155c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D146Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d146c;
        }
    }
    ctx->pc = 0x1D1560u;
    // 0x1d1560: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x1D1560u;
    {
        const bool branch_taken_0x1d1560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1560u;
        // 0x1d1564: 0x2623ffe0  addiu       $v1, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1560) {
            ctx->pc = 0x1D1470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1470;
        }
    }
    ctx->pc = 0x1D1568u;
label_1d1568:
    // 0x1d1568: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x1D1568u;
    {
        const bool branch_taken_0x1d1568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1568u;
        // 0x1d156c: 0x36f70080  ori         $s7, $s7, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1568) {
            ctx->pc = 0x1D145Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d145c;
        }
    }
    ctx->pc = 0x1D1570u;
label_1d1570:
    // 0x1d1570: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d1570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1574: 0x0  nop
    ctx->pc = 0x1d1574u;
    // NOP
label_1d1578:
    // 0x1d1578: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d1578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d157c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d157cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d1580: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d1580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d1584: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d1584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d1588: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x1d1588u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d158c: 0x2450ffd0  addiu       $s0, $v0, -0x30
    ctx->pc = 0x1d158cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1d1590: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x1d1590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x1d1594: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1d1594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d1598: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D1598u;
    {
        const bool branch_taken_0x1d1598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1598u;
        // 0x1d159c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1598) {
            ctx->pc = 0x1D1578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1578;
        }
    }
    ctx->pc = 0x1D15A0u;
    // 0x1d15a0: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x1D15A0u;
    {
        const bool branch_taken_0x1d15a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15A0u;
        // 0x1d15a4: 0xafb001f0  sw          $s0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15a0) {
            ctx->pc = 0x1D146Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d146c;
        }
    }
    ctx->pc = 0x1D15A8u;
label_1d15a8:
    // 0x1d15a8: 0x1000ffac  b           . + 4 + (-0x54 << 2)
    ctx->pc = 0x1D15A8u;
    {
        const bool branch_taken_0x1d15a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15A8u;
        // 0x1d15ac: 0x36f70008  ori         $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15a8) {
            ctx->pc = 0x1D145Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d145c;
        }
    }
    ctx->pc = 0x1D15B0u;
label_1d15b0:
    // 0x1d15b0: 0x1000ffaa  b           . + 4 + (-0x56 << 2)
    ctx->pc = 0x1D15B0u;
    {
        const bool branch_taken_0x1d15b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15B0u;
        // 0x1d15b4: 0x36f70040  ori         $s7, $s7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15b0) {
            ctx->pc = 0x1D145Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d145c;
        }
    }
    ctx->pc = 0x1D15B8u;
label_1d15b8:
    // 0x1d15b8: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x1d15b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d15bc: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1d15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d15c0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D15C0u;
    {
        const bool branch_taken_0x1d15c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15C0u;
        // 0x1d15c4: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15c0) {
            ctx->pc = 0x1D15D8u;
            goto label_1d15d8;
        }
    }
    ctx->pc = 0x1D15C8u;
    // 0x1d15c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d15c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d15cc:
    // 0x1d15cc: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x1D15CCu;
    {
        const bool branch_taken_0x1d15cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15CCu;
        // 0x1d15d0: 0x36f70020  ori         $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15cc) {
            ctx->pc = 0x1D145Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d145c;
        }
    }
    ctx->pc = 0x1D15D4u;
    // 0x1d15d4: 0x0  nop
    ctx->pc = 0x1d15d4u;
    // NOP
label_1d15d8:
    // 0x1d15d8: 0x1000ffa1  b           . + 4 + (-0x5F << 2)
    ctx->pc = 0x1D15D8u;
    {
        const bool branch_taken_0x1d15d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15D8u;
        // 0x1d15dc: 0x36f70010  ori         $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15d8) {
            ctx->pc = 0x1D1460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1460;
        }
    }
    ctx->pc = 0x1D15E0u;
label_1d15e0:
    // 0x1d15e0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1d15e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d15e4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d15e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d15e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1d15e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d15ec: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x1d15ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d15f0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1d15f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d15f4: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x1D15F4u;
    {
        const bool branch_taken_0x1d15f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15F4u;
        // 0x1d15f8: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15f4) {
            ctx->pc = 0x1D1B50u;
            goto label_1d1b50;
        }
    }
    ctx->pc = 0x1D15FCu;
    // 0x1d15fc: 0x0  nop
    ctx->pc = 0x1d15fcu;
    // NOP
label_1d1600:
    // 0x1d1600: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x1d1600u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_1d1604:
    // 0x1d1604: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x1d1604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x1d1608: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1608u;
    {
        const bool branch_taken_0x1d1608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1608u;
        // 0x1d160c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1608) {
            ctx->pc = 0x1D1620u;
            goto label_1d1620;
        }
    }
    ctx->pc = 0x1D1610u;
    // 0x1d1610: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d1610u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d1614: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D1614u;
    {
        const bool branch_taken_0x1d1614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1614u;
        // 0x1d1618: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1614) {
            ctx->pc = 0x1D1640u;
            goto label_1d1640;
        }
    }
    ctx->pc = 0x1D161Cu;
    // 0x1d161c: 0x0  nop
    ctx->pc = 0x1d161cu;
    // NOP
label_1d1620:
    // 0x1d1620: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x1d1620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x1d1624: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1624u;
    {
        const bool branch_taken_0x1d1624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1624u;
        // 0x1d1628: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1624) {
            ctx->pc = 0x1D1638u;
            goto label_1d1638;
        }
    }
    ctx->pc = 0x1D162Cu;
    // 0x1d162c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d162cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d1630: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1630u;
    {
        const bool branch_taken_0x1d1630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1630u;
        // 0x1d1634: 0x84500000  lh          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1630) {
            ctx->pc = 0x1D1640u;
            goto label_1d1640;
        }
    }
    ctx->pc = 0x1D1638u;
label_1d1638:
    // 0x1d1638: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d1638u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d163c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d163cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1640:
    // 0x1d1640: 0x60100f7  bgez        $s0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x1D1640u;
    {
        const bool branch_taken_0x1d1640 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1D1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1640u;
        // 0x1d1644: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1640) {
            ctx->pc = 0x1D1A20u;
            goto label_1d1a20;
        }
    }
    ctx->pc = 0x1D1648u;
    // 0x1d1648: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1d1648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d164c: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x1d164cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x1d1650: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x1D1650u;
    {
        const bool branch_taken_0x1d1650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1650u;
        // 0x1d1654: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1650) {
            ctx->pc = 0x1D1A20u;
            goto label_1d1a20;
        }
    }
    ctx->pc = 0x1D1658u;
label_1d1658:
    // 0x1d1658: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d1658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d165c: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D165Cu;
    {
        const bool branch_taken_0x1d165c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D1660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D165Cu;
        // 0x1d1660: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d165c) {
            ctx->pc = 0x1D1670u;
            goto label_1d1670;
        }
    }
    ctx->pc = 0x1D1664u;
    // 0x1d1664: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1664u;
    {
        const bool branch_taken_0x1d1664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1664u;
        // 0x1d1668: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1664) {
            ctx->pc = 0x1D1688u;
            goto label_1d1688;
        }
    }
    ctx->pc = 0x1D166Cu;
    // 0x1d166c: 0x0  nop
    ctx->pc = 0x1d166cu;
    // NOP
label_1d1670:
    // 0x1d1670: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1670u;
    {
        const bool branch_taken_0x1d1670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1670u;
        // 0x1d1674: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1670) {
            ctx->pc = 0x1D1680u;
            goto label_1d1680;
        }
    }
    ctx->pc = 0x1D1678u;
    // 0x1d1678: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1678u;
    {
        const bool branch_taken_0x1d1678 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1678u;
        // 0x1d167c: 0x32e20008  andi        $v0, $s7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1678) {
            ctx->pc = 0x1D168Cu;
            goto label_1d168c;
        }
    }
    ctx->pc = 0x1D1680u;
label_1d1680:
    // 0x1d1680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1684: 0x54a00a  movz        $s4, $v0, $s4
    ctx->pc = 0x1d1684u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
label_1d1688:
    // 0x1d1688: 0x32e20008  andi        $v0, $s7, 0x8
    ctx->pc = 0x1d1688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8);
label_1d168c:
    // 0x1d168c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1d168cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1690: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1d1690u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1694: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x1d1694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
    // 0x1d1698: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x1d1698u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1d169c: 0xc0758ce  jal         func_1D6338
    ctx->pc = 0x1D169Cu;
    SET_GPR_U32(ctx, 31, 0x1D16A4u);
    ctx->pc = 0x1D16A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D169Cu;
    // 0x1d16a0: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6338u, 0x1D169Cu, 0x1D16A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D16A4u;
label_1d16a4:
    // 0x1d16a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D16A4u;
    {
        const bool branch_taken_0x1d16a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d16a4) {
            ctx->pc = 0x1D16E0u;
            goto label_1d16e0;
        }
    }
    ctx->pc = 0x1D16ACu;
    // 0x1d16ac: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x1d16acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1d16b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d16b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d16b4: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D16B4u;
    SET_GPR_U32(ctx, 31, 0x1D16BCu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D16B4u, 0x1D16BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D16BCu;
label_1d16bc:
    // 0x1d16bc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D16BCu;
    {
        const bool branch_taken_0x1d16bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D16C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16BCu;
        // 0x1d16c0: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16bc) {
            ctx->pc = 0x1D16D0u;
            goto label_1d16d0;
        }
    }
    ctx->pc = 0x1D16C4u;
    // 0x1d16c4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1d16c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d16c8: 0xa3a201d1  sb          $v0, 0x1D1($sp)
    ctx->pc = 0x1d16c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d16cc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d16ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_1d16d0:
    // 0x1d16d0: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x1d16d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d16d4: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x1D16D4u;
    {
        const bool branch_taken_0x1d16d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16D4u;
        // 0x1d16d8: 0x2455c3e0  addiu       $s5, $v0, -0x3C20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16d4) {
            ctx->pc = 0x1D1B54u;
            goto label_1d1b54;
        }
    }
    ctx->pc = 0x1D16DCu;
    // 0x1d16dc: 0x0  nop
    ctx->pc = 0x1d16dcu;
    // NOP
label_1d16e0:
    // 0x1d16e0: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x1d16e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1d16e4: 0xc0758e0  jal         func_1D6380
    ctx->pc = 0x1D16E4u;
    SET_GPR_U32(ctx, 31, 0x1D16ECu);
    ctx->pc = 0x1D6380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6380u, 0x1D16E4u, 0x1D16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D16ECu;
label_1d16ec:
    // 0x1d16ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D16ECu;
    {
        const bool branch_taken_0x1d16ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16ECu;
        // 0x1d16f0: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16ec) {
            ctx->pc = 0x1D1700u;
            goto label_1d1700;
        }
    }
    ctx->pc = 0x1D16F4u;
    // 0x1d16f4: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x1d16f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d16f8: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x1D16F8u;
    {
        const bool branch_taken_0x1d16f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16F8u;
        // 0x1d16fc: 0x2455c3e8  addiu       $s5, $v0, -0x3C18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16f8) {
            ctx->pc = 0x1D1B54u;
            goto label_1d1b54;
        }
    }
    ctx->pc = 0x1D1700u;
label_1d1700:
    // 0x1d1700: 0x36f70100  ori         $s7, $s7, 0x100
    ctx->pc = 0x1d1700u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)256);
    // 0x1d1704: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x1d1704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1d1708: 0xdfa501f8  ld          $a1, 0x1F8($sp)
    ctx->pc = 0x1d1708u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1d170c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d170cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1710: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1d1710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1714: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x1d1714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1d1718: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x1d1718u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x1d171c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1d171cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1720: 0xc074a4e  jal         func_1D2938
    ctx->pc = 0x1D1720u;
    SET_GPR_U32(ctx, 31, 0x1D1728u);
    ctx->pc = 0x1D1724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1720u;
    // 0x1d1724: 0x27ab01e0  addiu       $t3, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2938u, 0x1D1720u, 0x1D1728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1728u;
label_1d1728:
    // 0x1d1728: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1d1728u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d172c: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x1d172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x1d1730: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1730u;
    {
        const bool branch_taken_0x1d1730 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1730u;
        // 0x1d1734: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1730) {
            ctx->pc = 0x1D1740u;
            goto label_1d1740;
        }
    }
    ctx->pc = 0x1D1738u;
    // 0x1d1738: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D1738u;
    {
        const bool branch_taken_0x1d1738 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1738u;
        // 0x1d173c: 0x8fa701dc  lw          $a3, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1738) {
            ctx->pc = 0x1D1770u;
            goto label_1d1770;
        }
    }
    ctx->pc = 0x1D1740u;
label_1d1740:
    // 0x1d1740: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x1d1740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d1744: 0x28e2fffd  slti        $v0, $a3, -0x3
    ctx->pc = 0x1d1744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x1d1748: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1748u;
    {
        const bool branch_taken_0x1d1748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1748u;
        // 0x1d174c: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1748) {
            ctx->pc = 0x1D1760u;
            goto label_1d1760;
        }
    }
    ctx->pc = 0x1D1750u;
    // 0x1d1750: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x1d1750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1d1754: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1754u;
    {
        const bool branch_taken_0x1d1754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1754) {
            ctx->pc = 0x1D1758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1754u;
            // 0x1d1758: 0x24110067  addiu       $s1, $zero, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1770u;
            goto label_1d1770;
        }
    }
    ctx->pc = 0x1D175Cu;
    // 0x1d175c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x1d175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_1d1760:
    // 0x1d1760: 0x3a240067  xori        $a0, $s1, 0x67
    ctx->pc = 0x1d1760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)103);
    // 0x1d1764: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x1d1764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1d1768: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d1768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d176c: 0x64880b  movn        $s1, $v1, $a0
    ctx->pc = 0x1d176cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_1d1770:
    // 0x1d1770: 0x2a220066  slti        $v0, $s1, 0x66
    ctx->pc = 0x1d1770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x1d1774: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D1774u;
    {
        const bool branch_taken_0x1d1774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1774) {
            ctx->pc = 0x1D1778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1774u;
            // 0x1d1778: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D17C0u;
            goto label_1d17c0;
        }
    }
    ctx->pc = 0x1D177Cu;
    // 0x1d177c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1d177cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1d1780: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d1780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1784: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d1784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1788: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1d1788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d178c: 0xc074abe  jal         func_1D2AF8
    ctx->pc = 0x1D178Cu;
    SET_GPR_U32(ctx, 31, 0x1D1794u);
    ctx->pc = 0x1D1790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D178Cu;
    // 0x1d1790: 0xafa701dc  sw          $a3, 0x1DC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2AF8u, 0x1D178Cu, 0x1D1794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1794u;
label_1d1794:
    // 0x1d1794: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x1d1794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x1d1798: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1d1798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d179c: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x1d179cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1d17a0: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x1d17a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d17a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D17A4u;
    {
        const bool branch_taken_0x1d17a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17A4u;
        // 0x1d17a8: 0xc2f021  addu        $fp, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17a4) {
            ctx->pc = 0x1D17B8u;
            goto label_1d17b8;
        }
    }
    ctx->pc = 0x1D17ACu;
    // 0x1d17ac: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x1d17acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1d17b0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D17B0u;
    {
        const bool branch_taken_0x1d17b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17B0u;
        // 0x1d17b4: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17b0) {
            ctx->pc = 0x1D1824u;
            goto label_1d1824;
        }
    }
    ctx->pc = 0x1D17B8u;
label_1d17b8:
    // 0x1d17b8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D17B8u;
    {
        const bool branch_taken_0x1d17b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17B8u;
        // 0x1d17bc: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17b8) {
            ctx->pc = 0x1D1820u;
            goto label_1d1820;
        }
    }
    ctx->pc = 0x1D17C0u;
label_1d17c0:
    // 0x1d17c0: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D17C0u;
    {
        const bool branch_taken_0x1d17c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D17C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17C0u;
        // 0x1d17c4: 0x8fa501e0  lw          $a1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17c0) {
            ctx->pc = 0x1D17F0u;
            goto label_1d17f0;
        }
    }
    ctx->pc = 0x1D17C8u;
    // 0x1d17c8: 0x18e00015  blez        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D17C8u;
    {
        const bool branch_taken_0x1d17c8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1D17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17C8u;
        // 0x1d17cc: 0x269e0002  addiu       $fp, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17c8) {
            ctx->pc = 0x1D1820u;
            goto label_1d1820;
        }
    }
    ctx->pc = 0x1D17D0u;
    // 0x1d17d0: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D17D0u;
    {
        const bool branch_taken_0x1d17d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D17D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17D0u;
        // 0x1d17d4: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17d0) {
            ctx->pc = 0x1D17E4u;
            goto label_1d17e4;
        }
    }
    ctx->pc = 0x1D17D8u;
    // 0x1d17d8: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x1d17d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1d17dc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D17DCu;
    {
        const bool branch_taken_0x1d17dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17DCu;
        // 0x1d17e0: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17dc) {
            ctx->pc = 0x1D1824u;
            goto label_1d1824;
        }
    }
    ctx->pc = 0x1D17E4u;
label_1d17e4:
    // 0x1d17e4: 0xf41021  addu        $v0, $a3, $s4
    ctx->pc = 0x1d17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x1d17e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D17E8u;
    {
        const bool branch_taken_0x1d17e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17E8u;
        // 0x1d17ec: 0x245e0001  addiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17e8) {
            ctx->pc = 0x1D1820u;
            goto label_1d1820;
        }
    }
    ctx->pc = 0x1D17F0u;
label_1d17f0:
    // 0x1d17f0: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x1d17f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d17f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D17F4u;
    {
        const bool branch_taken_0x1d17f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17F4u;
        // 0x1d17f8: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17f4) {
            ctx->pc = 0x1D1810u;
            goto label_1d1810;
        }
    }
    ctx->pc = 0x1D17FCu;
    // 0x1d17fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D17FCu;
    {
        const bool branch_taken_0x1d17fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17FCu;
        // 0x1d1800: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17fc) {
            ctx->pc = 0x1D1820u;
            goto label_1d1820;
        }
    }
    ctx->pc = 0x1D1804u;
    // 0x1d1804: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1804u;
    {
        const bool branch_taken_0x1d1804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1804u;
        // 0x1d1808: 0x24fe0001  addiu       $fp, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1804) {
            ctx->pc = 0x1D1820u;
            goto label_1d1820;
        }
    }
    ctx->pc = 0x1D180Cu;
    // 0x1d180c: 0x0  nop
    ctx->pc = 0x1d180cu;
    // NOP
label_1d1810:
    // 0x1d1810: 0x5ce00003  bgtzl       $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1810u;
    {
        const bool branch_taken_0x1d1810 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x1d1810) {
            ctx->pc = 0x1D1814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1810u;
            // 0x1d1814: 0x24be0001  addiu       $fp, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1820u;
            goto label_1d1820;
        }
    }
    ctx->pc = 0x1D1818u;
    // 0x1d1818: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x1d1818u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1d181c: 0x245e0002  addiu       $fp, $v0, 0x2
    ctx->pc = 0x1d181cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1d1820:
    // 0x1d1820: 0x83a201d0  lb          $v0, 0x1D0($sp)
    ctx->pc = 0x1d1820u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
label_1d1824:
    // 0x1d1824: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x1D1824u;
    {
        const bool branch_taken_0x1d1824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1824u;
        // 0x1d1828: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1824) {
            ctx->pc = 0x1D1B54u;
            goto label_1d1b54;
        }
    }
    ctx->pc = 0x1D182Cu;
    // 0x1d182c: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1D182Cu;
    {
        const bool branch_taken_0x1d182c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D182Cu;
        // 0x1d1830: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d182c) {
            ctx->pc = 0x1D1B54u;
            goto label_1d1b54;
        }
    }
    ctx->pc = 0x1D1834u;
    // 0x1d1834: 0x0  nop
    ctx->pc = 0x1d1834u;
    // NOP
label_1d1838:
    // 0x1d1838: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x1d1838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x1d183c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D183Cu;
    {
        const bool branch_taken_0x1d183c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D183Cu;
        // 0x1d1840: 0x32e20040  andi        $v0, $s7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d183c) {
            ctx->pc = 0x1D1860u;
            goto label_1d1860;
        }
    }
    ctx->pc = 0x1D1844u;
    // 0x1d1844: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x1d1844u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1848: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d1848u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d184c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d184cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1850: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x1d1850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x1d1854: 0x1000fed0  b           . + 4 + (-0x130 << 2)
    ctx->pc = 0x1D1854u;
    {
        const bool branch_taken_0x1d1854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1854u;
        // 0x1d1858: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1854) {
            ctx->pc = 0x1D1398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1398;
        }
    }
    ctx->pc = 0x1D185Cu;
    // 0x1d185c: 0x0  nop
    ctx->pc = 0x1d185cu;
    // NOP
label_1d1860:
    // 0x1d1860: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1860u;
    {
        const bool branch_taken_0x1d1860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1860u;
        // 0x1d1864: 0x2c0182d  daddu       $v1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1860) {
            ctx->pc = 0x1D1880u;
            goto label_1d1880;
        }
    }
    ctx->pc = 0x1D1868u;
    // 0x1d1868: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d1868u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d186c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1870: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x1d1870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x1d1874: 0x1000fec8  b           . + 4 + (-0x138 << 2)
    ctx->pc = 0x1D1874u;
    {
        const bool branch_taken_0x1d1874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1874u;
        // 0x1d1878: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1874) {
            ctx->pc = 0x1D1398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1398;
        }
    }
    ctx->pc = 0x1D187Cu;
    // 0x1d187c: 0x0  nop
    ctx->pc = 0x1d187cu;
    // NOP
label_1d1880:
    // 0x1d1880: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d1880u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d1884: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d1884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1888: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x1d1888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x1d188c: 0x1000fec2  b           . + 4 + (-0x13E << 2)
    ctx->pc = 0x1D188Cu;
    {
        const bool branch_taken_0x1d188c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D188Cu;
        // 0x1d1890: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d188c) {
            ctx->pc = 0x1D1398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1398;
        }
    }
    ctx->pc = 0x1D1894u;
    // 0x1d1894: 0x0  nop
    ctx->pc = 0x1d1894u;
    // NOP
label_1d1898:
    // 0x1d1898: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x1d1898u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_1d189c:
    // 0x1d189c: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x1d189cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x1d18a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D18A0u;
    {
        const bool branch_taken_0x1d18a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18A0u;
        // 0x1d18a4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18a0) {
            ctx->pc = 0x1D18B8u;
            goto label_1d18b8;
        }
    }
    ctx->pc = 0x1D18A8u;
    // 0x1d18a8: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d18a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d18ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D18ACu;
    {
        const bool branch_taken_0x1d18ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18ACu;
        // 0x1d18b0: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18ac) {
            ctx->pc = 0x1D18D8u;
            goto label_1d18d8;
        }
    }
    ctx->pc = 0x1D18B4u;
    // 0x1d18b4: 0x0  nop
    ctx->pc = 0x1d18b4u;
    // NOP
label_1d18b8:
    // 0x1d18b8: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x1d18b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x1d18bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D18BCu;
    {
        const bool branch_taken_0x1d18bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18BCu;
        // 0x1d18c0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18bc) {
            ctx->pc = 0x1D18D0u;
            goto label_1d18d0;
        }
    }
    ctx->pc = 0x1D18C4u;
    // 0x1d18c4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d18c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d18c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D18C8u;
    {
        const bool branch_taken_0x1d18c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D18CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18C8u;
        // 0x1d18cc: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18c8) {
            ctx->pc = 0x1D18D8u;
            goto label_1d18d8;
        }
    }
    ctx->pc = 0x1D18D0u;
label_1d18d0:
    // 0x1d18d0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d18d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d18d4: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x1d18d4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d18d8:
    // 0x1d18d8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1D18D8u;
    {
        const bool branch_taken_0x1d18d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18D8u;
        // 0x1d18dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18d8) {
            ctx->pc = 0x1D1A1Cu;
            goto label_1d1a1c;
        }
    }
    ctx->pc = 0x1D18E0u;
label_1d18e0:
    // 0x1d18e0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d18e4: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x1d18e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d18e8: 0x2442c3f0  addiu       $v0, $v0, -0x3C10
    ctx->pc = 0x1d18e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951920));
    // 0x1d18ec: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1d18ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d18f0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d18f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d18f4: 0x36f70002  ori         $s7, $s7, 0x2
    ctx->pc = 0x1d18f4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
    // 0x1d18f8: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x1d18f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x1d18fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d18fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1900: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1D1900u;
    {
        const bool branch_taken_0x1d1900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1900u;
        // 0x1d1904: 0x24110078  addiu       $s1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1900) {
            ctx->pc = 0x1D1A1Cu;
            goto label_1d1a1c;
        }
    }
    ctx->pc = 0x1D1908u;
label_1d1908:
    // 0x1d1908: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1d1908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d190c: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1d190cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1910: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1910u;
    {
        const bool branch_taken_0x1d1910 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1910u;
        // 0x1d1914: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1910) {
            ctx->pc = 0x1D1920u;
            goto label_1d1920;
        }
    }
    ctx->pc = 0x1D1918u;
    // 0x1d1918: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d1918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d191c: 0x2455c408  addiu       $s5, $v0, -0x3BF8
    ctx->pc = 0x1d191cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951944));
label_1d1920:
    // 0x1d1920: 0x680000d  bltz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x1D1920u;
    {
        const bool branch_taken_0x1d1920 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1D1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1920u;
        // 0x1d1924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1920) {
            ctx->pc = 0x1D1958u;
            goto label_1d1958;
        }
    }
    ctx->pc = 0x1D1928u;
    // 0x1d1928: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d1928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d192c: 0xc07544f  jal         func_1D513C
    ctx->pc = 0x1D192Cu;
    SET_GPR_U32(ctx, 31, 0x1D1934u);
    ctx->pc = 0x1D1930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D192Cu;
    // 0x1d1930: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D513Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D513Cu, 0x1D192Cu, 0x1D1934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1934u;
label_1d1934:
    // 0x1d1934: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x1D1934u;
    {
        const bool branch_taken_0x1d1934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1934u;
        // 0x1d1938: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1934) {
            ctx->pc = 0x1D1B50u;
            goto label_1d1b50;
        }
    }
    ctx->pc = 0x1D193Cu;
    // 0x1d193c: 0x55f023  subu        $fp, $v0, $s5
    ctx->pc = 0x1d193cu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1d1940: 0x29e102a  slt         $v0, $s4, $fp
    ctx->pc = 0x1d1940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1d1944: 0x50400083  beql        $v0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x1D1944u;
    {
        const bool branch_taken_0x1d1944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1944) {
            ctx->pc = 0x1D1948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1944u;
            // 0x1d1948: 0xa3a001d1  sb          $zero, 0x1D1($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1B54u;
            goto label_1d1b54;
        }
    }
    ctx->pc = 0x1D194Cu;
    // 0x1d194c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1D194Cu;
    {
        const bool branch_taken_0x1d194c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D194Cu;
        // 0x1d1950: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d194c) {
            ctx->pc = 0x1D1B50u;
            goto label_1d1b50;
        }
    }
    ctx->pc = 0x1D1954u;
    // 0x1d1954: 0x0  nop
    ctx->pc = 0x1d1954u;
    // NOP
label_1d1958:
    // 0x1d1958: 0xc0742fc  jal         func_1D0BF0
    ctx->pc = 0x1D1958u;
    SET_GPR_U32(ctx, 31, 0x1D1960u);
    ctx->pc = 0x1D195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1958u;
    // 0x1d195c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BF0u, 0x1D1958u, 0x1D1960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1960u;
label_1d1960:
    // 0x1d1960: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1D1960u;
    {
        const bool branch_taken_0x1d1960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1960u;
        // 0x1d1964: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1960) {
            ctx->pc = 0x1D1B50u;
            goto label_1d1b50;
        }
    }
    ctx->pc = 0x1D1968u;
label_1d1968:
    // 0x1d1968: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x1d1968u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_1d196c:
    // 0x1d196c: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x1d196cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x1d1970: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1970u;
    {
        const bool branch_taken_0x1d1970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1970u;
        // 0x1d1974: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1970) {
            ctx->pc = 0x1D1988u;
            goto label_1d1988;
        }
    }
    ctx->pc = 0x1D1978u;
    // 0x1d1978: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d1978u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d197c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D197Cu;
    {
        const bool branch_taken_0x1d197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D197Cu;
        // 0x1d1980: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d197c) {
            ctx->pc = 0x1D19A8u;
            goto label_1d19a8;
        }
    }
    ctx->pc = 0x1D1984u;
    // 0x1d1984: 0x0  nop
    ctx->pc = 0x1d1984u;
    // NOP
label_1d1988:
    // 0x1d1988: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x1d1988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x1d198c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D198Cu;
    {
        const bool branch_taken_0x1d198c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D198Cu;
        // 0x1d1990: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d198c) {
            ctx->pc = 0x1D19A0u;
            goto label_1d19a0;
        }
    }
    ctx->pc = 0x1D1994u;
    // 0x1d1994: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d1994u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d1998: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1998u;
    {
        const bool branch_taken_0x1d1998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1998u;
        // 0x1d199c: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1998) {
            ctx->pc = 0x1D19A8u;
            goto label_1d19a8;
        }
    }
    ctx->pc = 0x1D19A0u;
label_1d19a0:
    // 0x1d19a0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d19a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d19a4: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x1d19a4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d19a8:
    // 0x1d19a8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D19A8u;
    {
        const bool branch_taken_0x1d19a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19A8u;
        // 0x1d19ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19a8) {
            ctx->pc = 0x1D1A1Cu;
            goto label_1d1a1c;
        }
    }
    ctx->pc = 0x1D19B0u;
label_1d19b0:
    // 0x1d19b0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d19b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D19B4u;
    {
        const bool branch_taken_0x1d19b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19B4u;
        // 0x1d19b8: 0x2442c410  addiu       $v0, $v0, -0x3BF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19b4) {
            ctx->pc = 0x1D19C8u;
            goto label_1d19c8;
        }
    }
    ctx->pc = 0x1D19BCu;
    // 0x1d19bc: 0x0  nop
    ctx->pc = 0x1d19bcu;
    // NOP
label_1d19c0:
    // 0x1d19c0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d19c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d19c4: 0x2442c3f0  addiu       $v0, $v0, -0x3C10
    ctx->pc = 0x1d19c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951920));
label_1d19c8:
    // 0x1d19c8: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x1d19c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x1d19cc: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x1d19ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x1d19d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D19D0u;
    {
        const bool branch_taken_0x1d19d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19D0u;
        // 0x1d19d4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19d0) {
            ctx->pc = 0x1D19E8u;
            goto label_1d19e8;
        }
    }
    ctx->pc = 0x1D19D8u;
    // 0x1d19d8: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d19d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d19dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D19DCu;
    {
        const bool branch_taken_0x1d19dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19DCu;
        // 0x1d19e0: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19dc) {
            ctx->pc = 0x1D1A08u;
            goto label_1d1a08;
        }
    }
    ctx->pc = 0x1D19E4u;
    // 0x1d19e4: 0x0  nop
    ctx->pc = 0x1d19e4u;
    // NOP
label_1d19e8:
    // 0x1d19e8: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x1d19e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x1d19ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D19ECu;
    {
        const bool branch_taken_0x1d19ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19ECu;
        // 0x1d19f0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19ec) {
            ctx->pc = 0x1D1A00u;
            goto label_1d1a00;
        }
    }
    ctx->pc = 0x1D19F4u;
    // 0x1d19f4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d19f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d19f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D19F8u;
    {
        const bool branch_taken_0x1d19f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19F8u;
        // 0x1d19fc: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19f8) {
            ctx->pc = 0x1D1A08u;
            goto label_1d1a08;
        }
    }
    ctx->pc = 0x1D1A00u;
label_1d1a00:
    // 0x1d1a00: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d1a00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d1a04: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x1d1a04u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1a08:
    // 0x1d1a08: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x1d1a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1d1a0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1A0Cu;
    {
        const bool branch_taken_0x1d1a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A0Cu;
        // 0x1d1a10: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a0c) {
            ctx->pc = 0x1D1A1Cu;
            goto label_1d1a1c;
        }
    }
    ctx->pc = 0x1D1A14u;
    // 0x1d1a14: 0x36e20002  ori         $v0, $s7, 0x2
    ctx->pc = 0x1d1a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
    // 0x1d1a18: 0x50b80b  movn        $s7, $v0, $s0
    ctx->pc = 0x1d1a18u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_1d1a1c:
    // 0x1d1a1c: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x1d1a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_1d1a20:
    // 0x1d1a20: 0x6800003  bltz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1A20u;
    {
        const bool branch_taken_0x1d1a20 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1D1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A20u;
        // 0x1d1a24: 0xafb40204  sw          $s4, 0x204($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a20) {
            ctx->pc = 0x1D1A30u;
            goto label_1d1a30;
        }
    }
    ctx->pc = 0x1D1A28u;
    // 0x1d1a28: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x1d1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1d1a2c: 0x2e2b824  and         $s7, $s7, $v0
    ctx->pc = 0x1d1a2cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
label_1d1a30:
    // 0x1d1a30: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1A30u;
    {
        const bool branch_taken_0x1d1a30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A30u;
        // 0x1d1a34: 0x27b501bc  addiu       $s5, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a30) {
            ctx->pc = 0x1D1A44u;
            goto label_1d1a44;
        }
    }
    ctx->pc = 0x1D1A38u;
    // 0x1d1a38: 0x8fa60204  lw          $a2, 0x204($sp)
    ctx->pc = 0x1d1a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1d1a3c: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x1D1A3Cu;
    {
        const bool branch_taken_0x1d1a3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A3Cu;
        // 0x1d1a40: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a3c) {
            ctx->pc = 0x1D1B34u;
            goto label_1d1b34;
        }
    }
    ctx->pc = 0x1D1A44u;
label_1d1a44:
    // 0x1d1a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1a48: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D1A48u;
    {
        const bool branch_taken_0x1d1a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A48u;
        // 0x1d1a4c: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a48) {
            ctx->pc = 0x1D1AE4u;
            goto label_1d1ae4;
        }
    }
    ctx->pc = 0x1D1A50u;
    // 0x1d1a50: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1A50u;
    {
        const bool branch_taken_0x1d1a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A50u;
        // 0x1d1a54: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a50) {
            ctx->pc = 0x1D1A78u;
            goto label_1d1a78;
        }
    }
    ctx->pc = 0x1D1A58u;
    // 0x1d1a58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1a5c: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D1A5Cu;
    {
        const bool branch_taken_0x1d1a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A5Cu;
        // 0x1d1a60: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a5c) {
            ctx->pc = 0x1D1B00u;
            goto label_1d1b00;
        }
    }
    ctx->pc = 0x1D1A64u;
    // 0x1d1a64: 0x2455c428  addiu       $s5, $v0, -0x3BD8
    ctx->pc = 0x1d1a64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951976));
    // 0x1d1a68: 0xc0742fc  jal         func_1D0BF0
    ctx->pc = 0x1D1A68u;
    SET_GPR_U32(ctx, 31, 0x1D1A70u);
    ctx->pc = 0x1D1A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A68u;
    // 0x1d1a6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BF0u, 0x1D1A68u, 0x1D1A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A70u;
label_1d1a70:
    // 0x1d1a70: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1D1A70u;
    {
        const bool branch_taken_0x1d1a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A70u;
        // 0x1d1a74: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a70) {
            ctx->pc = 0x1D1B54u;
            goto label_1d1b54;
        }
    }
    ctx->pc = 0x1D1A78u;
label_1d1a78:
    // 0x1d1a78: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x1d1a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x1d1a7c: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x1d1a7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x1d1a80: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1d1a80u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x1d1a84: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d1a84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d1a88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d1a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1a8c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D1A8Cu;
    {
        const bool branch_taken_0x1d1a8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A8Cu;
        // 0x1d1a90: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a8c) {
            ctx->pc = 0x1D1A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1a78;
        }
    }
    ctx->pc = 0x1D1A94u;
    // 0x1d1a94: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x1d1a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1d1a98: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D1A98u;
    {
        const bool branch_taken_0x1d1a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A98u;
        // 0x1d1a9c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a98) {
            ctx->pc = 0x1D1B30u;
            goto label_1d1b30;
        }
    }
    ctx->pc = 0x1D1AA0u;
    // 0x1d1aa0: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D1AA0u;
    {
        const bool branch_taken_0x1d1aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d1aa0) {
            ctx->pc = 0x1D1AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1AA0u;
            // 0x1d1aa4: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1B34u;
            goto label_1d1b34;
        }
    }
    ctx->pc = 0x1D1AA8u;
    // 0x1d1aa8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d1aa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d1aac: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D1AACu;
    {
        const bool branch_taken_0x1d1aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AACu;
        // 0x1d1ab0: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1aac) {
            ctx->pc = 0x1D1B30u;
            goto label_1d1b30;
        }
    }
    ctx->pc = 0x1D1AB4u;
    // 0x1d1ab4: 0x0  nop
    ctx->pc = 0x1d1ab4u;
    // NOP
label_1d1ab8:
    // 0x1d1ab8: 0xc072536  jal         func_1C94D8
    ctx->pc = 0x1D1AB8u;
    SET_GPR_U32(ctx, 31, 0x1D1AC0u);
    ctx->pc = 0x1D1ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AB8u;
    // 0x1d1abc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C94D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C94D8u, 0x1D1AB8u, 0x1D1AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AC0u;
label_1d1ac0:
    // 0x1d1ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ac4: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1d1ac4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x1d1ac8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d1ac8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d1acc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d1accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1ad0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d1ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d1ad4: 0xc0723d6  jal         func_1C8F58
    ctx->pc = 0x1D1AD4u;
    SET_GPR_U32(ctx, 31, 0x1D1ADCu);
    ctx->pc = 0x1D1AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AD4u;
    // 0x1d1ad8: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F58u, 0x1D1AD4u, 0x1D1ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1ADCu;
label_1d1adc:
    // 0x1d1adc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d1adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ae0: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x1d1ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1d1ae4:
    // 0x1d1ae4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D1AE4u;
    {
        const bool branch_taken_0x1d1ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AE4u;
        // 0x1d1ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ae4) {
            ctx->pc = 0x1D1AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1ab8;
        }
    }
    ctx->pc = 0x1D1AECu;
    // 0x1d1aec: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x1d1aecu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x1d1af0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d1af0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d1af4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d1af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1af8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D1AF8u;
    {
        const bool branch_taken_0x1d1af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AF8u;
        // 0x1d1afc: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1af8) {
            ctx->pc = 0x1D1B30u;
            goto label_1d1b30;
        }
    }
    ctx->pc = 0x1D1B00u;
label_1d1b00:
    // 0x1d1b00: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1d1b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d1b04: 0x0  nop
    ctx->pc = 0x1d1b04u;
    // NOP
label_1d1b08:
    // 0x1d1b08: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x1d1b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x1d1b0c: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x1d1b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x1d1b10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d1b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1b14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d1b14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d1b18: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d1b18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d1b1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d1b20: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x1d1b20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x1d1b24: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1d1b24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1b28: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D1B28u;
    {
        const bool branch_taken_0x1d1b28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B28u;
        // 0x1d1b2c: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b28) {
            ctx->pc = 0x1D1B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b08;
        }
    }
    ctx->pc = 0x1D1B30u;
label_1d1b30:
    // 0x1d1b30: 0x3b51023  subu        $v0, $sp, $s5
    ctx->pc = 0x1d1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
label_1d1b34:
    // 0x1d1b34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1B34u;
    {
        const bool branch_taken_0x1d1b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B34u;
        // 0x1d1b38: 0x245e01bc  addiu       $fp, $v0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b34) {
            ctx->pc = 0x1D1B54u;
            goto label_1d1b54;
        }
    }
    ctx->pc = 0x1D1B3Cu;
    // 0x1d1b3c: 0x0  nop
    ctx->pc = 0x1d1b3cu;
    // NOP
label_1d1b40:
    // 0x1d1b40: 0x12200363  beqz        $s1, . + 4 + (0x363 << 2)
    ctx->pc = 0x1D1B40u;
    {
        const bool branch_taken_0x1d1b40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B40u;
        // 0x1d1b44: 0x27b50060  addiu       $s5, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b40) {
            ctx->pc = 0x1D28D0u;
            goto label_1d28d0;
        }
    }
    ctx->pc = 0x1D1B48u;
    // 0x1d1b48: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1d1b48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b4c: 0xa2b10000  sb          $s1, 0x0($s5)
    ctx->pc = 0x1d1b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 17));
label_1d1b50:
    // 0x1d1b50: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x1d1b50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_1d1b54:
    // 0x1d1b54: 0x8fa50204  lw          $a1, 0x204($sp)
    ctx->pc = 0x1d1b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1d1b58: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1d1b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b5c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1d1b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b60: 0x83a301d1  lb          $v1, 0x1D1($sp)
    ctx->pc = 0x1d1b60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x1d1b64: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1d1b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d1b68: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x1d1b68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x1d1b6c: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x1d1b6cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x1d1b70: 0xafbe0208  sw          $fp, 0x208($sp)
    ctx->pc = 0x1d1b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 30));
    // 0x1d1b74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1B74u;
    {
        const bool branch_taken_0x1d1b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B74u;
        // 0x1d1b78: 0xafa50208  sw          $a1, 0x208($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b74) {
            ctx->pc = 0x1D1B88u;
            goto label_1d1b88;
        }
    }
    ctx->pc = 0x1D1B7Cu;
    // 0x1d1b7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d1b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d1b80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1B80u;
    {
        const bool branch_taken_0x1d1b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B80u;
        // 0x1d1b84: 0xafa50208  sw          $a1, 0x208($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b80) {
            ctx->pc = 0x1D1B98u;
            goto label_1d1b98;
        }
    }
    ctx->pc = 0x1D1B88u;
label_1d1b88:
    // 0x1d1b88: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x1d1b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1d1b8c: 0x32e20002  andi        $v0, $s7, 0x2
    ctx->pc = 0x1d1b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x1d1b90: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d1b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d1b94: 0xafa30208  sw          $v1, 0x208($sp)
    ctx->pc = 0x1d1b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 3));
label_1d1b98:
    // 0x1d1b98: 0x32e50084  andi        $a1, $s7, 0x84
    ctx->pc = 0x1d1b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)132);
    // 0x1d1b9c: 0x14a0003a  bnez        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D1B9Cu;
    {
        const bool branch_taken_0x1d1b9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B9Cu;
        // 0x1d1ba0: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b9c) {
            ctx->pc = 0x1D1C88u;
            goto label_1d1c88;
        }
    }
    ctx->pc = 0x1D1BA4u;
    // 0x1d1ba4: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x1d1ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1d1ba8: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x1d1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1d1bac: 0xc28023  subu        $s0, $a2, $v0
    ctx->pc = 0x1d1bacu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d1bb0: 0x1a000035  blez        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1D1BB0u;
    {
        const bool branch_taken_0x1d1bb0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BB0u;
        // 0x1d1bb4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bb0) {
            ctx->pc = 0x1D1C88u;
            goto label_1d1c88;
        }
    }
    ctx->pc = 0x1D1BB8u;
    // 0x1d1bb8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D1BB8u;
    {
        const bool branch_taken_0x1d1bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BB8u;
        // 0x1d1bbc: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bb8) {
            ctx->pc = 0x1D1C38u;
            goto label_1d1c38;
        }
    }
    ctx->pc = 0x1D1BC0u;
    // 0x1d1bc0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1d1bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d1bc4: 0x24f4c3c0  addiu       $s4, $a3, -0x3C40
    ctx->pc = 0x1d1bc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951872));
    // 0x1d1bc8: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x1d1bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x1d1bcc: 0x0  nop
    ctx->pc = 0x1d1bccu;
    // NOP
label_1d1bd0:
    // 0x1d1bd0: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x1d1bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x1d1bd4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1bd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1bd8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1bdc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d1bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1be0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1be4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d1be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d1be8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d1be8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1bec: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d1becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d1bf0: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D1BF0u;
    {
        const bool branch_taken_0x1d1bf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BF0u;
        // 0x1d1bf4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bf0) {
            ctx->pc = 0x1D1C20u;
            goto label_1d1c20;
        }
    }
    ctx->pc = 0x1D1BF8u;
    // 0x1d1bf8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1bfc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d1bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d1c00: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x1d1c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    // 0x1d1c04: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1C04u;
    SET_GPR_U32(ctx, 31, 0x1D1C0Cu);
    ctx->pc = 0x1D1C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C04u;
    // 0x1d1c08: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1C04u, 0x1D1C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C0Cu;
label_1d1c0c:
    // 0x1d1c0c: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x1d1c0cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1d1c10: 0x14400337  bnez        $v0, . + 4 + (0x337 << 2)
    ctx->pc = 0x1D1C10u;
    {
        const bool branch_taken_0x1d1c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C10u;
        // 0x1d1c14: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c10) {
            ctx->pc = 0x1D28F0u;
            goto label_1d28f0;
        }
    }
    ctx->pc = 0x1D1C18u;
    // 0x1d1c18: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d1c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1c1c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1d1c1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d1c20:
    // 0x1d1c20: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1d1c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1d1c24: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d1c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d1c28: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1D1C28u;
    {
        const bool branch_taken_0x1d1c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c28) {
            ctx->pc = 0x1D1C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1C28u;
            // 0x1d1c2c: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1bd0;
        }
    }
    ctx->pc = 0x1D1C30u;
    // 0x1d1c30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1C30u;
    {
        const bool branch_taken_0x1d1c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C30u;
        // 0x1d1c34: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c30) {
            ctx->pc = 0x1D1C3Cu;
            goto label_1d1c3c;
        }
    }
    ctx->pc = 0x1D1C38u;
label_1d1c38:
    // 0x1d1c38: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d1c38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_1d1c3c:
    // 0x1d1c3c: 0x24e2c3c0  addiu       $v0, $a3, -0x3C40
    ctx->pc = 0x1d1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951872));
    // 0x1d1c40: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d1c40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d1c44: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1c48: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d1c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1c4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1c50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1c54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d1c58: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d1c58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1c5c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d1c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d1c60: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1C60u;
    {
        const bool branch_taken_0x1d1c60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C60u;
        // 0x1d1c64: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c60) {
            ctx->pc = 0x1D1C84u;
            goto label_1d1c84;
        }
    }
    ctx->pc = 0x1D1C68u;
    // 0x1d1c68: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1c6c: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1C6Cu;
    SET_GPR_U32(ctx, 31, 0x1D1C74u);
    ctx->pc = 0x1D1C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C6Cu;
    // 0x1d1c70: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1C6Cu, 0x1D1C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C74u;
label_1d1c74:
    // 0x1d1c74: 0x1440031f  bnez        $v0, . + 4 + (0x31F << 2)
    ctx->pc = 0x1D1C74u;
    {
        const bool branch_taken_0x1d1c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C74u;
        // 0x1d1c78: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c74) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D1C7Cu;
    // 0x1d1c7c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d1c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1c80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d1c80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d1c84:
    // 0x1d1c84: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x1d1c84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_1d1c88:
    // 0x1d1c88: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D1C88u;
    {
        const bool branch_taken_0x1d1c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C88u;
        // 0x1d1c8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c88) {
            ctx->pc = 0x1D1CE0u;
            goto label_1d1ce0;
        }
    }
    ctx->pc = 0x1D1C90u;
    // 0x1d1c90: 0x27a301d1  addiu       $v1, $sp, 0x1D1
    ctx->pc = 0x1d1c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 465));
    // 0x1d1c94: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1d1c94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1d1c98: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1d1c98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1d1c9c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1c9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1ca0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d1ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1ca4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1ca8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1cac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1cb0: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d1cb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1cb4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d1cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d1cb8: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D1CB8u;
    {
        const bool branch_taken_0x1d1cb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CB8u;
        // 0x1d1cbc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1cb8) {
            ctx->pc = 0x1D1D44u;
            goto label_1d1d44;
        }
    }
    ctx->pc = 0x1D1CC0u;
    // 0x1d1cc0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1cc4: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1CC4u;
    SET_GPR_U32(ctx, 31, 0x1D1CCCu);
    ctx->pc = 0x1D1CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1CC4u;
    // 0x1d1cc8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1CC4u, 0x1D1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CCCu;
label_1d1ccc:
    // 0x1d1ccc: 0x14400309  bnez        $v0, . + 4 + (0x309 << 2)
    ctx->pc = 0x1D1CCCu;
    {
        const bool branch_taken_0x1d1ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CCCu;
        // 0x1d1cd0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ccc) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D1CD4u;
    // 0x1d1cd4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d1cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1cd8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D1CD8u;
    {
        const bool branch_taken_0x1d1cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CD8u;
        // 0x1d1cdc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1cd8) {
            ctx->pc = 0x1D1D44u;
            goto label_1d1d44;
        }
    }
    ctx->pc = 0x1D1CE0u;
label_1d1ce0:
    // 0x1d1ce0: 0x32e20002  andi        $v0, $s7, 0x2
    ctx->pc = 0x1d1ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x1d1ce4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D1CE4u;
    {
        const bool branch_taken_0x1d1ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CE4u;
        // 0x1d1ce8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ce4) {
            ctx->pc = 0x1D1D44u;
            goto label_1d1d44;
        }
    }
    ctx->pc = 0x1D1CECu;
    // 0x1d1cec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d1cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1cf0: 0xa3a201c0  sb          $v0, 0x1C0($sp)
    ctx->pc = 0x1d1cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d1cf4: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x1d1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1d1cf8: 0xa3b101c1  sb          $s1, 0x1C1($sp)
    ctx->pc = 0x1d1cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d1cfc: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x1d1cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x1d1d00: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1d1d00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1d1d04: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1d04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1d08: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1d0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1d10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1d14: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1d1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1d1d18: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d1d18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1d1c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d1d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d1d20: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1D20u;
    {
        const bool branch_taken_0x1d1d20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D20u;
        // 0x1d1d24: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d20) {
            ctx->pc = 0x1D1D44u;
            goto label_1d1d44;
        }
    }
    ctx->pc = 0x1D1D28u;
    // 0x1d1d28: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1d2c: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D1D34u);
    ctx->pc = 0x1D1D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D2Cu;
    // 0x1d1d30: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1D2Cu, 0x1D1D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D34u;
label_1d1d34:
    // 0x1d1d34: 0x144002ef  bnez        $v0, . + 4 + (0x2EF << 2)
    ctx->pc = 0x1D1D34u;
    {
        const bool branch_taken_0x1d1d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D34u;
        // 0x1d1d38: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d34) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D1D3Cu;
    // 0x1d1d3c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d1d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1d40: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d1d40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d1d44:
    // 0x1d1d44: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x1d1d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1d1d48: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1d4c: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D1D4Cu;
    {
        const bool branch_taken_0x1d1d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D4Cu;
        // 0x1d1d50: 0x8fa40204  lw          $a0, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d4c) {
            ctx->pc = 0x1D1E38u;
            goto label_1d1e38;
        }
    }
    ctx->pc = 0x1D1D54u;
    // 0x1d1d54: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1d1d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1d1d58: 0x8fa50208  lw          $a1, 0x208($sp)
    ctx->pc = 0x1d1d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1d1d5c: 0x858023  subu        $s0, $a0, $a1
    ctx->pc = 0x1d1d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d1d60: 0x1a000035  blez        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1D1D60u;
    {
        const bool branch_taken_0x1d1d60 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D1D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D60u;
        // 0x1d1d64: 0x8fa40204  lw          $a0, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d60) {
            ctx->pc = 0x1D1E38u;
            goto label_1d1e38;
        }
    }
    ctx->pc = 0x1D1D68u;
    // 0x1d1d68: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d1d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d1d6c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D1D6Cu;
    {
        const bool branch_taken_0x1d1d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D6Cu;
        // 0x1d1d70: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d6c) {
            ctx->pc = 0x1D1DE8u;
            goto label_1d1de8;
        }
    }
    ctx->pc = 0x1D1D74u;
    // 0x1d1d74: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1d1d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d1d78: 0x24f4c3d0  addiu       $s4, $a3, -0x3C30
    ctx->pc = 0x1d1d78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d1d7c: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x1d1d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
label_1d1d80:
    // 0x1d1d80: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x1d1d80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x1d1d84: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1d84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1d88: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1d8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d1d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1d90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1d94: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d1d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d1d98: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d1d98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1d9c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d1da0: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D1DA0u;
    {
        const bool branch_taken_0x1d1da0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DA0u;
        // 0x1d1da4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1da0) {
            ctx->pc = 0x1D1DD0u;
            goto label_1d1dd0;
        }
    }
    ctx->pc = 0x1D1DA8u;
    // 0x1d1da8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1dac: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d1dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d1db0: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x1d1db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    // 0x1d1db4: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1DB4u;
    SET_GPR_U32(ctx, 31, 0x1D1DBCu);
    ctx->pc = 0x1D1DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1DB4u;
    // 0x1d1db8: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1DB4u, 0x1D1DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1DBCu;
label_1d1dbc:
    // 0x1d1dbc: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x1d1dbcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1d1dc0: 0x144002cb  bnez        $v0, . + 4 + (0x2CB << 2)
    ctx->pc = 0x1D1DC0u;
    {
        const bool branch_taken_0x1d1dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DC0u;
        // 0x1d1dc4: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1dc0) {
            ctx->pc = 0x1D28F0u;
            goto label_1d28f0;
        }
    }
    ctx->pc = 0x1D1DC8u;
    // 0x1d1dc8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1d1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1dcc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d1dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1dd0:
    // 0x1d1dd0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1d1dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1d1dd4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d1dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d1dd8: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1D1DD8u;
    {
        const bool branch_taken_0x1d1dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1dd8) {
            ctx->pc = 0x1D1DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1DD8u;
            // 0x1d1ddc: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1d80;
        }
    }
    ctx->pc = 0x1D1DE0u;
    // 0x1d1de0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1DE0u;
    {
        const bool branch_taken_0x1d1de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DE0u;
        // 0x1d1de4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1de0) {
            ctx->pc = 0x1D1DECu;
            goto label_1d1dec;
        }
    }
    ctx->pc = 0x1D1DE8u;
label_1d1de8:
    // 0x1d1de8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d1de8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_1d1dec:
    // 0x1d1dec: 0x24e2c3d0  addiu       $v0, $a3, -0x3C30
    ctx->pc = 0x1d1decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d1df0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d1df0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d1df4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1df4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1df8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d1df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1dfc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1e00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1e04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d1e08: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d1e08u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1e0c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d1e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d1e10: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1E10u;
    {
        const bool branch_taken_0x1d1e10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E10u;
        // 0x1d1e14: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e10) {
            ctx->pc = 0x1D1E34u;
            goto label_1d1e34;
        }
    }
    ctx->pc = 0x1D1E18u;
    // 0x1d1e18: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1e1c: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1E1Cu;
    SET_GPR_U32(ctx, 31, 0x1D1E24u);
    ctx->pc = 0x1D1E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E1Cu;
    // 0x1d1e20: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1E1Cu, 0x1D1E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E24u;
label_1d1e24:
    // 0x1d1e24: 0x144002b3  bnez        $v0, . + 4 + (0x2B3 << 2)
    ctx->pc = 0x1D1E24u;
    {
        const bool branch_taken_0x1d1e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E24u;
        // 0x1d1e28: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e24) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D1E2Cu;
    // 0x1d1e2c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d1e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1e30: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1d1e30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e34:
    // 0x1d1e34: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x1d1e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_1d1e38:
    // 0x1d1e38: 0x9e8023  subu        $s0, $a0, $fp
    ctx->pc = 0x1d1e38u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x1d1e3c: 0x1a000036  blez        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D1E3Cu;
    {
        const bool branch_taken_0x1d1e3c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D1E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E3Cu;
        // 0x1d1e40: 0x32e20100  andi        $v0, $s7, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e3c) {
            ctx->pc = 0x1D1F18u;
            goto label_1d1f18;
        }
    }
    ctx->pc = 0x1D1E44u;
    // 0x1d1e44: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d1e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d1e48: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D1E48u;
    {
        const bool branch_taken_0x1d1e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E48u;
        // 0x1d1e4c: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e48) {
            ctx->pc = 0x1D1EC8u;
            goto label_1d1ec8;
        }
    }
    ctx->pc = 0x1D1E50u;
    // 0x1d1e50: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1d1e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d1e54: 0x24f4c3d0  addiu       $s4, $a3, -0x3C30
    ctx->pc = 0x1d1e54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d1e58: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x1d1e58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x1d1e5c: 0x0  nop
    ctx->pc = 0x1d1e5cu;
    // NOP
label_1d1e60:
    // 0x1d1e60: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x1d1e60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x1d1e64: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1e64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1e68: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d1e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1e6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d1e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1e70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1e74: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d1e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d1e78: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d1e78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1e7c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d1e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d1e80: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D1E80u;
    {
        const bool branch_taken_0x1d1e80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E80u;
        // 0x1d1e84: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e80) {
            ctx->pc = 0x1D1EB0u;
            goto label_1d1eb0;
        }
    }
    ctx->pc = 0x1D1E88u;
    // 0x1d1e88: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1e8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d1e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d1e90: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x1d1e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    // 0x1d1e94: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1E94u;
    SET_GPR_U32(ctx, 31, 0x1D1E9Cu);
    ctx->pc = 0x1D1E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E94u;
    // 0x1d1e98: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1E94u, 0x1D1E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E9Cu;
label_1d1e9c:
    // 0x1d1e9c: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x1d1e9cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1d1ea0: 0x14400293  bnez        $v0, . + 4 + (0x293 << 2)
    ctx->pc = 0x1D1EA0u;
    {
        const bool branch_taken_0x1d1ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1EA0u;
        // 0x1d1ea4: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ea0) {
            ctx->pc = 0x1D28F0u;
            goto label_1d28f0;
        }
    }
    ctx->pc = 0x1D1EA8u;
    // 0x1d1ea8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d1ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1eac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d1eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d1eb0:
    // 0x1d1eb0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1d1eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1d1eb4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d1eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d1eb8: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1D1EB8u;
    {
        const bool branch_taken_0x1d1eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1eb8) {
            ctx->pc = 0x1D1EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1EB8u;
            // 0x1d1ebc: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1e60;
        }
    }
    ctx->pc = 0x1D1EC0u;
    // 0x1d1ec0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1EC0u;
    {
        const bool branch_taken_0x1d1ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1EC0u;
        // 0x1d1ec4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ec0) {
            ctx->pc = 0x1D1ECCu;
            goto label_1d1ecc;
        }
    }
    ctx->pc = 0x1D1EC8u;
label_1d1ec8:
    // 0x1d1ec8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d1ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_1d1ecc:
    // 0x1d1ecc: 0x24e2c3d0  addiu       $v0, $a3, -0x3C30
    ctx->pc = 0x1d1eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d1ed0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d1ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d1ed4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1ed4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1ed8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d1ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1edc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1ee0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1ee4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d1ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d1ee8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d1ee8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1eec: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d1eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d1ef0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1EF0u;
    {
        const bool branch_taken_0x1d1ef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1EF0u;
        // 0x1d1ef4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ef0) {
            ctx->pc = 0x1D1F14u;
            goto label_1d1f14;
        }
    }
    ctx->pc = 0x1D1EF8u;
    // 0x1d1ef8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1efc: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1EFCu;
    SET_GPR_U32(ctx, 31, 0x1D1F04u);
    ctx->pc = 0x1D1F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1EFCu;
    // 0x1d1f00: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1EFCu, 0x1D1F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F04u;
label_1d1f04:
    // 0x1d1f04: 0x1440027b  bnez        $v0, . + 4 + (0x27B << 2)
    ctx->pc = 0x1D1F04u;
    {
        const bool branch_taken_0x1d1f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F04u;
        // 0x1d1f08: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f04) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D1F0Cu;
    // 0x1d1f0c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d1f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1f10: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d1f10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d1f14:
    // 0x1d1f14: 0x32e20100  andi        $v0, $s7, 0x100
    ctx->pc = 0x1d1f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)256);
label_1d1f18:
    // 0x1d1f18: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1F18u;
    {
        const bool branch_taken_0x1d1f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1f18) {
            ctx->pc = 0x1D1F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1F18u;
            // 0x1d1f1c: 0x2a220066  slti        $v0, $s1, 0x66 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)102) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1F40u;
            goto label_1d1f40;
        }
    }
    ctx->pc = 0x1D1F20u;
    // 0x1d1f20: 0xae7e0004  sw          $fp, 0x4($s3)
    ctx->pc = 0x1d1f20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 30));
    // 0x1d1f24: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x1d1f24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x1d1f28: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1f28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1f2c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d1f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1f30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d1f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1f34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1f38: 0x1000020f  b           . + 4 + (0x20F << 2)
    ctx->pc = 0x1D1F38u;
    {
        const bool branch_taken_0x1d1f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F38u;
        // 0x1d1f3c: 0x7e1821  addu        $v1, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f38) {
            ctx->pc = 0x1D2778u;
            goto label_1d2778;
        }
    }
    ctx->pc = 0x1D1F40u;
label_1d1f40:
    // 0x1d1f40: 0x14400181  bnez        $v0, . + 4 + (0x181 << 2)
    ctx->pc = 0x1D1F40u;
    {
        const bool branch_taken_0x1d1f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F40u;
        // 0x1d1f44: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f40) {
            ctx->pc = 0x1D2548u;
            goto label_1d2548;
        }
    }
    ctx->pc = 0x1D1F48u;
    // 0x1d1f48: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x1d1f48u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1d1f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f50: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D1F50u;
    SET_GPR_U32(ctx, 31, 0x1D1F58u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D1F50u, 0x1D1F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F58u;
label_1d1f58:
    // 0x1d1f58: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1D1F58u;
    {
        const bool branch_taken_0x1d1f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F58u;
        // 0x1d1f5c: 0x8fa301dc  lw          $v1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f58) {
            ctx->pc = 0x1D20D8u;
            goto label_1d20d8;
        }
    }
    ctx->pc = 0x1D1F60u;
    // 0x1d1f60: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d1f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1f64: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d1f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d1f68: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d1f68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x1d1f6c: 0x2442c448  addiu       $v0, $v0, -0x3BB8
    ctx->pc = 0x1d1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952008));
    // 0x1d1f70: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d1f70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d1f74: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1f74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1f78: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d1f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1f7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d1f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1f80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1f84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1f88: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d1f88u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1f8c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d1f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d1f90: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1F90u;
    {
        const bool branch_taken_0x1d1f90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F90u;
        // 0x1d1f94: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f90) {
            ctx->pc = 0x1D1FB4u;
            goto label_1d1fb4;
        }
    }
    ctx->pc = 0x1D1F98u;
    // 0x1d1f98: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1f9c: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1F9Cu;
    SET_GPR_U32(ctx, 31, 0x1D1FA4u);
    ctx->pc = 0x1D1FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F9Cu;
    // 0x1d1fa0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1F9Cu, 0x1D1FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1FA4u;
label_1d1fa4:
    // 0x1d1fa4: 0x14400253  bnez        $v0, . + 4 + (0x253 << 2)
    ctx->pc = 0x1D1FA4u;
    {
        const bool branch_taken_0x1d1fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FA4u;
        // 0x1d1fa8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1fa4) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D1FACu;
    // 0x1d1fac: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d1facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1fb0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1d1fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d1fb4:
    // 0x1d1fb4: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x1d1fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d1fb8: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1d1fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d1fbc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d1fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d1fc0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1FC0u;
    {
        const bool branch_taken_0x1d1fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1fc0) {
            ctx->pc = 0x1D1FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1FC0u;
            // 0x1d1fc4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1FD8u;
            goto label_1d1fd8;
        }
    }
    ctx->pc = 0x1D1FC8u;
    // 0x1d1fc8: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x1d1fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1d1fcc: 0x104001f7  beqz        $v0, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x1D1FCCu;
    {
        const bool branch_taken_0x1d1fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FCCu;
        // 0x1d1fd0: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1fcc) {
            ctx->pc = 0x1D27ACu;
            goto label_1d27ac;
        }
    }
    ctx->pc = 0x1D1FD4u;
    // 0x1d1fd4: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d1fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_1d1fd8:
    // 0x1d1fd8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d1fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1fdc: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x1d1fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1d1fe0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d1fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1fe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1fe8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1d1fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1d1fec: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1fecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1ff0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1ff4: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d1ff4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1ff8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d1ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d1ffc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1FFCu;
    {
        const bool branch_taken_0x1d1ffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FFCu;
        // 0x1d2000: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ffc) {
            ctx->pc = 0x1D2020u;
            goto label_1d2020;
        }
    }
    ctx->pc = 0x1D2004u;
    // 0x1d2004: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2008: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2008u;
    SET_GPR_U32(ctx, 31, 0x1D2010u);
    ctx->pc = 0x1D200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2008u;
    // 0x1d200c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2008u, 0x1D2010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2010u;
label_1d2010:
    // 0x1d2010: 0x14400238  bnez        $v0, . + 4 + (0x238 << 2)
    ctx->pc = 0x1D2010u;
    {
        const bool branch_taken_0x1d2010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2010u;
        // 0x1d2014: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2010) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D2018u;
    // 0x1d2018: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d2018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d201c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d201cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d2020:
    // 0x1d2020: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1d2020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d2024: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d2024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d2028: 0x1a0001e0  blez        $s0, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x1D2028u;
    {
        const bool branch_taken_0x1d2028 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2028u;
        // 0x1d202c: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2028) {
            ctx->pc = 0x1D27ACu;
            goto label_1d27ac;
        }
    }
    ctx->pc = 0x1D2030u;
    // 0x1d2030: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d2030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d2034: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D2034u;
    {
        const bool branch_taken_0x1d2034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2034u;
        // 0x1d2038: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2034) {
            ctx->pc = 0x1D20A8u;
            goto label_1d20a8;
        }
    }
    ctx->pc = 0x1D203Cu;
    // 0x1d203c: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x1d203cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d2040: 0x24f1c3d0  addiu       $s1, $a3, -0x3C30
    ctx->pc = 0x1d2040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d2044: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x1d2044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_1d2048:
    // 0x1d2048: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x1d2048u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x1d204c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d204cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2050: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d2050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2054: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2058: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d205c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d205cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d2060: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d2060u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2064: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d2064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d2068: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2068u;
    {
        const bool branch_taken_0x1d2068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2068u;
        // 0x1d206c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2068) {
            ctx->pc = 0x1D2090u;
            goto label_1d2090;
        }
    }
    ctx->pc = 0x1D2070u;
    // 0x1d2070: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2074: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d2074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d2078: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2078u;
    SET_GPR_U32(ctx, 31, 0x1D2080u);
    ctx->pc = 0x1D207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2078u;
    // 0x1d207c: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2078u, 0x1D2080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2080u;
label_1d2080:
    // 0x1d2080: 0x1440021b  bnez        $v0, . + 4 + (0x21B << 2)
    ctx->pc = 0x1D2080u;
    {
        const bool branch_taken_0x1d2080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2080u;
        // 0x1d2084: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2080) {
            ctx->pc = 0x1D28F0u;
            goto label_1d28f0;
        }
    }
    ctx->pc = 0x1D2088u;
    // 0x1d2088: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d2088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d208c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d208cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d2090:
    // 0x1d2090: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1d2090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1d2094: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d2094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d2098: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D2098u;
    {
        const bool branch_taken_0x1d2098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2098) {
            ctx->pc = 0x1D209Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2098u;
            // 0x1d209c: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2048;
        }
    }
    ctx->pc = 0x1D20A0u;
    // 0x1d20a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D20A0u;
    {
        const bool branch_taken_0x1d20a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20A0u;
        // 0x1d20a4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20a0) {
            ctx->pc = 0x1D20ACu;
            goto label_1d20ac;
        }
    }
    ctx->pc = 0x1D20A8u;
label_1d20a8:
    // 0x1d20a8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d20a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_1d20ac:
    // 0x1d20ac: 0x24e2c3d0  addiu       $v0, $a3, -0x3C30
    ctx->pc = 0x1d20acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d20b0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d20b4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d20b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d20b8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d20b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d20bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d20c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d20c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d20c8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d20c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d20cc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d20ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d20d0: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x1D20D0u;
    {
        const bool branch_taken_0x1d20d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20D0u;
        // 0x1d20d4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20d0) {
            ctx->pc = 0x1D2784u;
            goto label_1d2784;
        }
    }
    ctx->pc = 0x1D20D8u;
label_1d20d8:
    // 0x1d20d8: 0x1c600079  bgtz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x1D20D8u;
    {
        const bool branch_taken_0x1d20d8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1D20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20D8u;
        // 0x1d20dc: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20d8) {
            ctx->pc = 0x1D22C0u;
            goto label_1d22c0;
        }
    }
    ctx->pc = 0x1D20E0u;
    // 0x1d20e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d20e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d20e4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d20e8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d20e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x1d20ec: 0x2442c448  addiu       $v0, $v0, -0x3BB8
    ctx->pc = 0x1d20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952008));
    // 0x1d20f0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d20f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d20f4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d20f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d20f8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d20f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d20fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2100: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2108: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d2108u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d210c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d210cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d2110: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2110u;
    {
        const bool branch_taken_0x1d2110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2110u;
        // 0x1d2114: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2110) {
            ctx->pc = 0x1D2134u;
            goto label_1d2134;
        }
    }
    ctx->pc = 0x1D2118u;
    // 0x1d2118: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d211c: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D211Cu;
    SET_GPR_U32(ctx, 31, 0x1D2124u);
    ctx->pc = 0x1D2120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D211Cu;
    // 0x1d2120: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D211Cu, 0x1D2124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2124u;
label_1d2124:
    // 0x1d2124: 0x144001f3  bnez        $v0, . + 4 + (0x1F3 << 2)
    ctx->pc = 0x1D2124u;
    {
        const bool branch_taken_0x1d2124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2124u;
        // 0x1d2128: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2124) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D212Cu;
    // 0x1d212c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d212cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2130: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1d2130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d2134:
    // 0x1d2134: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x1d2134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d2138: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2138u;
    {
        const bool branch_taken_0x1d2138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2138) {
            ctx->pc = 0x1D213Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2138u;
            // 0x1d213c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2150u;
            goto label_1d2150;
        }
    }
    ctx->pc = 0x1D2140u;
    // 0x1d2140: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1d2140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d2144: 0x10400199  beqz        $v0, . + 4 + (0x199 << 2)
    ctx->pc = 0x1D2144u;
    {
        const bool branch_taken_0x1d2144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2144u;
        // 0x1d2148: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2144) {
            ctx->pc = 0x1D27ACu;
            goto label_1d27ac;
        }
    }
    ctx->pc = 0x1D214Cu;
    // 0x1d214c: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d214cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_1d2150:
    // 0x1d2150: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d2150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2154: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x1d2154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1d2158: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d215c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2160: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1d2160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1d2164: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2168: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d216c: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d216cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2170: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d2170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d2174: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2174u;
    {
        const bool branch_taken_0x1d2174 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2174u;
        // 0x1d2178: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2174) {
            ctx->pc = 0x1D2198u;
            goto label_1d2198;
        }
    }
    ctx->pc = 0x1D217Cu;
    // 0x1d217c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d217cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2180: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2180u;
    SET_GPR_U32(ctx, 31, 0x1D2188u);
    ctx->pc = 0x1D2184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2180u;
    // 0x1d2184: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2180u, 0x1D2188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2188u;
label_1d2188:
    // 0x1d2188: 0x144001da  bnez        $v0, . + 4 + (0x1DA << 2)
    ctx->pc = 0x1D2188u;
    {
        const bool branch_taken_0x1d2188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2188u;
        // 0x1d218c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2188) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D2190u;
    // 0x1d2190: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d2190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2194: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d2194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d2198:
    // 0x1d2198: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x1d2198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d219c: 0x28023  negu        $s0, $v0
    ctx->pc = 0x1d219cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1d21a0: 0x5a000033  blezl       $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1D21A0u;
    {
        const bool branch_taken_0x1d21a0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1d21a0) {
            ctx->pc = 0x1D21A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D21A0u;
            // 0x1d21a4: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2270u;
            goto label_1d2270;
        }
    }
    ctx->pc = 0x1D21A8u;
    // 0x1d21a8: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d21a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d21ac: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D21ACu;
    {
        const bool branch_taken_0x1d21ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21ACu;
        // 0x1d21b0: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21ac) {
            ctx->pc = 0x1D2220u;
            goto label_1d2220;
        }
    }
    ctx->pc = 0x1D21B4u;
    // 0x1d21b4: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x1d21b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d21b8: 0x24f1c3d0  addiu       $s1, $a3, -0x3C30
    ctx->pc = 0x1d21b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d21bc: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x1d21bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_1d21c0:
    // 0x1d21c0: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x1d21c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x1d21c4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d21c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d21c8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d21c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d21cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d21ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d21d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d21d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d21d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d21d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d21d8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d21d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d21dc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d21dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d21e0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D21E0u;
    {
        const bool branch_taken_0x1d21e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21E0u;
        // 0x1d21e4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21e0) {
            ctx->pc = 0x1D2208u;
            goto label_1d2208;
        }
    }
    ctx->pc = 0x1D21E8u;
    // 0x1d21e8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d21e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d21ec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d21ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d21f0: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D21F0u;
    SET_GPR_U32(ctx, 31, 0x1D21F8u);
    ctx->pc = 0x1D21F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D21F0u;
    // 0x1d21f4: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D21F0u, 0x1D21F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D21F8u;
label_1d21f8:
    // 0x1d21f8: 0x144001bd  bnez        $v0, . + 4 + (0x1BD << 2)
    ctx->pc = 0x1D21F8u;
    {
        const bool branch_taken_0x1d21f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21F8u;
        // 0x1d21fc: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21f8) {
            ctx->pc = 0x1D28F0u;
            goto label_1d28f0;
        }
    }
    ctx->pc = 0x1D2200u;
    // 0x1d2200: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d2200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2204: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d2204u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d2208:
    // 0x1d2208: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1d2208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1d220c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d220cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d2210: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D2210u;
    {
        const bool branch_taken_0x1d2210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2210) {
            ctx->pc = 0x1D2214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2210u;
            // 0x1d2214: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D21C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d21c0;
        }
    }
    ctx->pc = 0x1D2218u;
    // 0x1d2218: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2218u;
    {
        const bool branch_taken_0x1d2218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2218u;
        // 0x1d221c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2218) {
            ctx->pc = 0x1D2224u;
            goto label_1d2224;
        }
    }
    ctx->pc = 0x1D2220u;
label_1d2220:
    // 0x1d2220: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d2220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_1d2224:
    // 0x1d2224: 0x24e2c3d0  addiu       $v0, $a3, -0x3C30
    ctx->pc = 0x1d2224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d2228: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d2228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d222c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d222cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2230: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d2230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2234: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d2234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2238: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d223c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d2240: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d2240u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2244: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d2244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d2248: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2248u;
    {
        const bool branch_taken_0x1d2248 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2248u;
        // 0x1d224c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2248) {
            ctx->pc = 0x1D226Cu;
            goto label_1d226c;
        }
    }
    ctx->pc = 0x1D2250u;
    // 0x1d2250: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2254: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2254u;
    SET_GPR_U32(ctx, 31, 0x1D225Cu);
    ctx->pc = 0x1D2258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2254u;
    // 0x1d2258: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2254u, 0x1D225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D225Cu;
label_1d225c:
    // 0x1d225c: 0x144001a5  bnez        $v0, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x1D225Cu;
    {
        const bool branch_taken_0x1d225c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D225Cu;
        // 0x1d2260: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d225c) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D2264u;
    // 0x1d2264: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1d2264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2268: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d2268u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d226c:
    // 0x1d226c: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x1d226cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_1d2270:
    // 0x1d2270: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1d2270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d2274: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1d2274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1d2278: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d227c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2280: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2284: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x1d2284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d2288: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d228c: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x1d228cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2290: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1d2290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1d2294: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2298: 0x14a00143  bnez        $a1, . + 4 + (0x143 << 2)
    ctx->pc = 0x1D2298u;
    {
        const bool branch_taken_0x1d2298 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2298u;
        // 0x1d229c: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2298) {
            ctx->pc = 0x1D27A8u;
            goto label_1d27a8;
        }
    }
    ctx->pc = 0x1D22A0u;
    // 0x1d22a0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d22a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d22a4: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D22A4u;
    SET_GPR_U32(ctx, 31, 0x1D22ACu);
    ctx->pc = 0x1D22A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D22A4u;
    // 0x1d22a8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D22A4u, 0x1D22ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D22ACu;
label_1d22ac:
    // 0x1d22ac: 0x14400191  bnez        $v0, . + 4 + (0x191 << 2)
    ctx->pc = 0x1D22ACu;
    {
        const bool branch_taken_0x1d22ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22ACu;
        // 0x1d22b0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22ac) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D22B4u;
    // 0x1d22b4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d22b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d22b8: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x1D22B8u;
    {
        const bool branch_taken_0x1d22b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22B8u;
        // 0x1d22bc: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22b8) {
            ctx->pc = 0x1D27A8u;
            goto label_1d27a8;
        }
    }
    ctx->pc = 0x1D22C0u;
label_1d22c0:
    // 0x1d22c0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d22c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d22c4: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1D22C4u;
    {
        const bool branch_taken_0x1d22c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D22C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22C4u;
        // 0x1d22c8: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22c4) {
            ctx->pc = 0x1D2438u;
            goto label_1d2438;
        }
    }
    ctx->pc = 0x1D22CCu;
    // 0x1d22cc: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1d22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d22d0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1d22d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1d22d4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d22d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d22d8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d22d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d22dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d22dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d22e0: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x1d22e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d22e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d22e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d22e8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d22e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d22ec: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1d22ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1d22f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d22f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d22f4: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D22F4u;
    {
        const bool branch_taken_0x1d22f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22F4u;
        // 0x1d22f8: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22f4) {
            ctx->pc = 0x1D231Cu;
            goto label_1d231c;
        }
    }
    ctx->pc = 0x1D22FCu;
    // 0x1d22fc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d22fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2300: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2300u;
    SET_GPR_U32(ctx, 31, 0x1D2308u);
    ctx->pc = 0x1D2304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2300u;
    // 0x1d2304: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2300u, 0x1D2308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2308u;
label_1d2308:
    // 0x1d2308: 0x1440017a  bnez        $v0, . + 4 + (0x17A << 2)
    ctx->pc = 0x1D2308u;
    {
        const bool branch_taken_0x1d2308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2308u;
        // 0x1d230c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2308) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D2310u;
    // 0x1d2310: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d2310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2314: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x1d2314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d2318: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d2318u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d231c:
    // 0x1d231c: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x1d231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d2320: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x1d2320u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d2324: 0x1a000034  blez        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1D2324u;
    {
        const bool branch_taken_0x1d2324 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2324u;
        // 0x1d2328: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2324) {
            ctx->pc = 0x1D23F8u;
            goto label_1d23f8;
        }
    }
    ctx->pc = 0x1D232Cu;
    // 0x1d232c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d232cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d2330: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2330u;
    {
        const bool branch_taken_0x1d2330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2330u;
        // 0x1d2334: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2330) {
            ctx->pc = 0x1D23A8u;
            goto label_1d23a8;
        }
    }
    ctx->pc = 0x1D2338u;
    // 0x1d2338: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x1d2338u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d233c: 0x24f1c3d0  addiu       $s1, $a3, -0x3C30
    ctx->pc = 0x1d233cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d2340: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x1d2340u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x1d2344: 0x0  nop
    ctx->pc = 0x1d2344u;
    // NOP
label_1d2348:
    // 0x1d2348: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x1d2348u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x1d234c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d234cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2350: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d2350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2354: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2358: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d235c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d235cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d2360: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d2360u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2364: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d2364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d2368: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2368u;
    {
        const bool branch_taken_0x1d2368 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2368u;
        // 0x1d236c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2368) {
            ctx->pc = 0x1D2390u;
            goto label_1d2390;
        }
    }
    ctx->pc = 0x1D2370u;
    // 0x1d2370: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2374: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d2374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d2378: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2378u;
    SET_GPR_U32(ctx, 31, 0x1D2380u);
    ctx->pc = 0x1D237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2378u;
    // 0x1d237c: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2378u, 0x1D2380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2380u;
label_1d2380:
    // 0x1d2380: 0x1440015b  bnez        $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x1D2380u;
    {
        const bool branch_taken_0x1d2380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2380u;
        // 0x1d2384: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2380) {
            ctx->pc = 0x1D28F0u;
            goto label_1d28f0;
        }
    }
    ctx->pc = 0x1D2388u;
    // 0x1d2388: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d2388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d238c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d238cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d2390:
    // 0x1d2390: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1d2390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1d2394: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d2394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d2398: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D2398u;
    {
        const bool branch_taken_0x1d2398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2398) {
            ctx->pc = 0x1D239Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2398u;
            // 0x1d239c: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2348;
        }
    }
    ctx->pc = 0x1D23A0u;
    // 0x1d23a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D23A0u;
    {
        const bool branch_taken_0x1d23a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23A0u;
        // 0x1d23a4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23a0) {
            ctx->pc = 0x1D23ACu;
            goto label_1d23ac;
        }
    }
    ctx->pc = 0x1D23A8u;
label_1d23a8:
    // 0x1d23a8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d23a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_1d23ac:
    // 0x1d23ac: 0x24e2c3d0  addiu       $v0, $a3, -0x3C30
    ctx->pc = 0x1d23acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d23b0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d23b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d23b4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d23b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d23b8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d23b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d23bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d23c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d23c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d23c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d23c8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d23c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d23cc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d23ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d23d0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D23D0u;
    {
        const bool branch_taken_0x1d23d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D23D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23D0u;
        // 0x1d23d4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23d0) {
            ctx->pc = 0x1D23F4u;
            goto label_1d23f4;
        }
    }
    ctx->pc = 0x1D23D8u;
    // 0x1d23d8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d23d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d23dc: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D23DCu;
    SET_GPR_U32(ctx, 31, 0x1D23E4u);
    ctx->pc = 0x1D23E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D23DCu;
    // 0x1d23e0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D23DCu, 0x1D23E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D23E4u;
label_1d23e4:
    // 0x1d23e4: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x1D23E4u;
    {
        const bool branch_taken_0x1d23e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D23E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23E4u;
        // 0x1d23e8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23e4) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D23ECu;
    // 0x1d23ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d23ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d23f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d23f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d23f4:
    // 0x1d23f4: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x1d23f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_1d23f8:
    // 0x1d23f8: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x1D23F8u;
    {
        const bool branch_taken_0x1d23f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D23FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23F8u;
        // 0x1d23fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23f8) {
            ctx->pc = 0x1D27A8u;
            goto label_1d27a8;
        }
    }
    ctx->pc = 0x1D2400u;
    // 0x1d2400: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d2400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d2404: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1d2404u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x1d2408: 0x2442c450  addiu       $v0, $v0, -0x3BB0
    ctx->pc = 0x1d2408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952016));
    // 0x1d240c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d240cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d2410: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2410u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2414: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d2414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2418: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d2418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d241c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d241cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2420: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2424: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d2424u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2428: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d2428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d242c: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x1D242Cu;
    {
        const bool branch_taken_0x1d242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D242Cu;
        // 0x1d2430: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d242c) {
            ctx->pc = 0x1D2784u;
            goto label_1d2784;
        }
    }
    ctx->pc = 0x1D2434u;
    // 0x1d2434: 0x0  nop
    ctx->pc = 0x1d2434u;
    // NOP
label_1d2438:
    // 0x1d2438: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x1d2438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d243c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1d243cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1d2440: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2440u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2444: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d2444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2448: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d244c: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x1d244cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d2450: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2454: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d2454u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2458: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1d2458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1d245c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1d245cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d2460: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2460u;
    {
        const bool branch_taken_0x1d2460 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2460u;
        // 0x1d2464: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2460) {
            ctx->pc = 0x1D2488u;
            goto label_1d2488;
        }
    }
    ctx->pc = 0x1D2468u;
    // 0x1d2468: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d246c: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D246Cu;
    SET_GPR_U32(ctx, 31, 0x1D2474u);
    ctx->pc = 0x1D2470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D246Cu;
    // 0x1d2470: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D246Cu, 0x1D2474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2474u;
label_1d2474:
    // 0x1d2474: 0x1440011f  bnez        $v0, . + 4 + (0x11F << 2)
    ctx->pc = 0x1D2474u;
    {
        const bool branch_taken_0x1d2474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2474u;
        // 0x1d2478: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2474) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D247Cu;
    // 0x1d247c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d247cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2480: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x1d2480u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d2484: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1d2484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d2488:
    // 0x1d2488: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d2488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d248c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d248cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d2490: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1d2490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x1d2494: 0x2442c450  addiu       $v0, $v0, -0x3BB0
    ctx->pc = 0x1d2494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952016));
    // 0x1d2498: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d2498u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d249c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d249cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d24a0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d24a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d24a4: 0x2a7a821  addu        $s5, $s5, $a3
    ctx->pc = 0x1d24a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x1d24a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d24a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d24ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d24acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d24b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d24b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d24b4: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d24b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d24b8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d24b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d24bc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D24BCu;
    {
        const bool branch_taken_0x1d24bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D24C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24BCu;
        // 0x1d24c0: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24bc) {
            ctx->pc = 0x1D24E0u;
            goto label_1d24e0;
        }
    }
    ctx->pc = 0x1D24C4u;
    // 0x1d24c4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d24c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d24c8: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D24C8u;
    SET_GPR_U32(ctx, 31, 0x1D24D0u);
    ctx->pc = 0x1D24CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D24C8u;
    // 0x1d24cc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D24C8u, 0x1D24D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D24D0u;
label_1d24d0:
    // 0x1d24d0: 0x14400108  bnez        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x1D24D0u;
    {
        const bool branch_taken_0x1d24d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D24D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24D0u;
        // 0x1d24d4: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24d0) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D24D8u;
    // 0x1d24d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d24d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d24dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d24dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d24e0:
    // 0x1d24e0: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x1d24e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x1d24e4: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x1d24e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d24e8: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1d24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d24ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d24ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d24f0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1d24f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1d24f4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d24f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d24f8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d24fc: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x1d24fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d2500: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x1d2500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d2504: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2508: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d2508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d250c: 0x28660008  slti        $a2, $v1, 0x8
    ctx->pc = 0x1d250cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2510: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d2510u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d2514: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1d2514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1d2518: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d2518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d251c: 0x14c000a2  bnez        $a2, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1D251Cu;
    {
        const bool branch_taken_0x1d251c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D251Cu;
        // 0x1d2520: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d251c) {
            ctx->pc = 0x1D27A8u;
            goto label_1d27a8;
        }
    }
    ctx->pc = 0x1D2524u;
    // 0x1d2524: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2528: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2528u;
    SET_GPR_U32(ctx, 31, 0x1D2530u);
    ctx->pc = 0x1D252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2528u;
    // 0x1d252c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2528u, 0x1D2530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2530u;
label_1d2530:
    // 0x1d2530: 0x144000f0  bnez        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x1D2530u;
    {
        const bool branch_taken_0x1d2530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2530u;
        // 0x1d2534: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2530) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D2538u;
    // 0x1d2538: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d2538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d253c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1D253Cu;
    {
        const bool branch_taken_0x1d253c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D253Cu;
        // 0x1d2540: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d253c) {
            ctx->pc = 0x1D27A8u;
            goto label_1d27a8;
        }
    }
    ctx->pc = 0x1D2544u;
    // 0x1d2544: 0x0  nop
    ctx->pc = 0x1d2544u;
    // NOP
label_1d2548:
    // 0x1d2548: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1d2548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d254c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D254Cu;
    {
        const bool branch_taken_0x1d254c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d254c) {
            ctx->pc = 0x1D2550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D254Cu;
            // 0x1d2550: 0x92a30000  lbu         $v1, 0x0($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2564u;
            goto label_1d2564;
        }
    }
    ctx->pc = 0x1D2554u;
    // 0x1d2554: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x1d2554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1d2558: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1D2558u;
    {
        const bool branch_taken_0x1d2558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2558u;
        // 0x1d255c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2558) {
            ctx->pc = 0x1D2710u;
            goto label_1d2710;
        }
    }
    ctx->pc = 0x1D2560u;
    // 0x1d2560: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x1d2560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_1d2564:
    // 0x1d2564: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1d2564u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1d2568: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x1d2568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1d256c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d256cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2570: 0xa3a301c0  sb          $v1, 0x1C0($sp)
    ctx->pc = 0x1d2570u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d2574: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x1d2574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1d2578: 0xa3a401c1  sb          $a0, 0x1C1($sp)
    ctx->pc = 0x1d2578u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d257c: 0xae650004  sw          $a1, 0x4($s3)
    ctx->pc = 0x1d257cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
    // 0x1d2580: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d2580u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d2584: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2584u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2588: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d2588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d258c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2590: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2594: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1d2594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1d2598: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d2598u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d259c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d259cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d25a0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D25A0u;
    {
        const bool branch_taken_0x1d25a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25A0u;
        // 0x1d25a4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25a0) {
            ctx->pc = 0x1D25C4u;
            goto label_1d25c4;
        }
    }
    ctx->pc = 0x1D25A8u;
    // 0x1d25a8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d25a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d25ac: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D25ACu;
    SET_GPR_U32(ctx, 31, 0x1D25B4u);
    ctx->pc = 0x1D25B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D25ACu;
    // 0x1d25b0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D25ACu, 0x1D25B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D25B4u;
label_1d25b4:
    // 0x1d25b4: 0x144000cf  bnez        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x1D25B4u;
    {
        const bool branch_taken_0x1d25b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D25B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25B4u;
        // 0x1d25b8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25b4) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D25BCu;
    // 0x1d25bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d25bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d25c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d25c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d25c4:
    // 0x1d25c4: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x1d25c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1d25c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d25c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d25cc: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D25CCu;
    SET_GPR_U32(ctx, 31, 0x1D25D4u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D25CCu, 0x1D25D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D25D4u;
label_1d25d4:
    // 0x1d25d4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D25D4u;
    {
        const bool branch_taken_0x1d25d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D25D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25D4u;
        // 0x1d25d8: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25d4) {
            ctx->pc = 0x1D2638u;
            goto label_1d2638;
        }
    }
    ctx->pc = 0x1D25DCu;
    // 0x1d25dc: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x1d25dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x1d25e0: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1d25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d25e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d25e8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1d25e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1d25ec: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d25ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d25f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d25f4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d25f8: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x1d25f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d25fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2600: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2604: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x1d2604u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2608: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d2608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d260c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1d260cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1d2610: 0x14a00051  bnez        $a1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1D2610u;
    {
        const bool branch_taken_0x1d2610 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2610u;
        // 0x1d2614: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2610) {
            ctx->pc = 0x1D2758u;
            goto label_1d2758;
        }
    }
    ctx->pc = 0x1D2618u;
    // 0x1d2618: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d261c: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D261Cu;
    SET_GPR_U32(ctx, 31, 0x1D2624u);
    ctx->pc = 0x1D2620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D261Cu;
    // 0x1d2620: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D261Cu, 0x1D2624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2624u;
label_1d2624:
    // 0x1d2624: 0x144000b3  bnez        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1D2624u;
    {
        const bool branch_taken_0x1d2624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2624u;
        // 0x1d2628: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2624) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D262Cu;
    // 0x1d262c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1d262cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2630: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1D2630u;
    {
        const bool branch_taken_0x1d2630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2630u;
        // 0x1d2634: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2630) {
            ctx->pc = 0x1D2758u;
            goto label_1d2758;
        }
    }
    ctx->pc = 0x1D2638u;
label_1d2638:
    // 0x1d2638: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d2638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d263c: 0x1a000047  blez        $s0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1D263Cu;
    {
        const bool branch_taken_0x1d263c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D263Cu;
        // 0x1d2640: 0x8fa60200  lw          $a2, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d263c) {
            ctx->pc = 0x1D275Cu;
            goto label_1d275c;
        }
    }
    ctx->pc = 0x1D2644u;
    // 0x1d2644: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d2644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d2648: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2648u;
    {
        const bool branch_taken_0x1d2648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2648u;
        // 0x1d264c: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2648) {
            ctx->pc = 0x1D26C0u;
            goto label_1d26c0;
        }
    }
    ctx->pc = 0x1D2650u;
    // 0x1d2650: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x1d2650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d2654: 0x24f1c3d0  addiu       $s1, $a3, -0x3C30
    ctx->pc = 0x1d2654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d2658: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x1d2658u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x1d265c: 0x0  nop
    ctx->pc = 0x1d265cu;
    // NOP
label_1d2660:
    // 0x1d2660: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x1d2660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x1d2664: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2668: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d2668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d266c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2670: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2674: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d2674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d2678: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d2678u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d267c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d267cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d2680: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2680u;
    {
        const bool branch_taken_0x1d2680 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2680u;
        // 0x1d2684: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2680) {
            ctx->pc = 0x1D26A8u;
            goto label_1d26a8;
        }
    }
    ctx->pc = 0x1D2688u;
    // 0x1d2688: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d268c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d268cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d2690: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2690u;
    SET_GPR_U32(ctx, 31, 0x1D2698u);
    ctx->pc = 0x1D2694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2690u;
    // 0x1d2694: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2690u, 0x1D2698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2698u;
label_1d2698:
    // 0x1d2698: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1D2698u;
    {
        const bool branch_taken_0x1d2698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2698u;
        // 0x1d269c: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2698) {
            ctx->pc = 0x1D28F0u;
            goto label_1d28f0;
        }
    }
    ctx->pc = 0x1D26A0u;
    // 0x1d26a0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d26a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d26a4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1d26a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d26a8:
    // 0x1d26a8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1d26a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1d26ac: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d26acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d26b0: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D26B0u;
    {
        const bool branch_taken_0x1d26b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d26b0) {
            ctx->pc = 0x1D26B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D26B0u;
            // 0x1d26b4: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2660;
        }
    }
    ctx->pc = 0x1D26B8u;
    // 0x1d26b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D26B8u;
    {
        const bool branch_taken_0x1d26b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26B8u;
        // 0x1d26bc: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26b8) {
            ctx->pc = 0x1D26C4u;
            goto label_1d26c4;
        }
    }
    ctx->pc = 0x1D26C0u;
label_1d26c0:
    // 0x1d26c0: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d26c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_1d26c4:
    // 0x1d26c4: 0x24e2c3d0  addiu       $v0, $a3, -0x3C30
    ctx->pc = 0x1d26c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d26c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d26c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d26cc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d26ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d26d0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d26d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d26d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d26d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d26d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d26d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d26dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d26dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d26e0: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d26e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d26e4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d26e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d26e8: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D26E8u;
    {
        const bool branch_taken_0x1d26e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26E8u;
        // 0x1d26ec: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26e8) {
            ctx->pc = 0x1D2758u;
            goto label_1d2758;
        }
    }
    ctx->pc = 0x1D26F0u;
    // 0x1d26f0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d26f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d26f4: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D26F4u;
    SET_GPR_U32(ctx, 31, 0x1D26FCu);
    ctx->pc = 0x1D26F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26F4u;
    // 0x1d26f8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D26F4u, 0x1D26FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26FCu;
label_1d26fc:
    // 0x1d26fc: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x1D26FCu;
    {
        const bool branch_taken_0x1d26fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26FCu;
        // 0x1d2700: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26fc) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D2704u;
    // 0x1d2704: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d2704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2708: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D2708u;
    {
        const bool branch_taken_0x1d2708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2708u;
        // 0x1d270c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2708) {
            ctx->pc = 0x1D2758u;
            goto label_1d2758;
        }
    }
    ctx->pc = 0x1D2710u;
label_1d2710:
    // 0x1d2710: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x1d2710u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x1d2714: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1d2714u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1d2718: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d271c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2720: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d2720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2724: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2728: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d272c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d272cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2730: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d2730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d2734: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2734u;
    {
        const bool branch_taken_0x1d2734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2734u;
        // 0x1d2738: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2734) {
            ctx->pc = 0x1D2758u;
            goto label_1d2758;
        }
    }
    ctx->pc = 0x1D273Cu;
    // 0x1d273c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d273cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2740: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2740u;
    SET_GPR_U32(ctx, 31, 0x1D2748u);
    ctx->pc = 0x1D2744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2740u;
    // 0x1d2744: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2740u, 0x1D2748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2748u;
label_1d2748:
    // 0x1d2748: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1D2748u;
    {
        const bool branch_taken_0x1d2748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2748u;
        // 0x1d274c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2748) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D2750u;
    // 0x1d2750: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d2750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2754: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d2754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d2758:
    // 0x1d2758: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x1d2758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_1d275c:
    // 0x1d275c: 0xae7d0000  sw          $sp, 0x0($s3)
    ctx->pc = 0x1d275cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 29));
    // 0x1d2760: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x1d2760u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x1d2764: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2764u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2768: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d2768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d276c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d276cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2774: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1d2774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d2778:
    // 0x1d2778: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d2778u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d277c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d277cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d2780: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1d2780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1d2784:
    // 0x1d2784: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2784u;
    {
        const bool branch_taken_0x1d2784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2784u;
        // 0x1d2788: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2784) {
            ctx->pc = 0x1D27ACu;
            goto label_1d27ac;
        }
    }
    ctx->pc = 0x1D278Cu;
    // 0x1d278c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d278cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2790: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2790u;
    SET_GPR_U32(ctx, 31, 0x1D2798u);
    ctx->pc = 0x1D2794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2790u;
    // 0x1d2794: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2790u, 0x1D2798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2798u;
label_1d2798:
    // 0x1d2798: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1D2798u;
    {
        const bool branch_taken_0x1d2798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2798u;
        // 0x1d279c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2798) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D27A0u;
    // 0x1d27a0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1d27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d27a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d27a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d27a8:
    // 0x1d27a8: 0x32e20004  andi        $v0, $s7, 0x4
    ctx->pc = 0x1d27a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
label_1d27ac:
    // 0x1d27ac: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1D27ACu;
    {
        const bool branch_taken_0x1d27ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27ACu;
        // 0x1d27b0: 0x8fa301f0  lw          $v1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27ac) {
            ctx->pc = 0x1D2880u;
            goto label_1d2880;
        }
    }
    ctx->pc = 0x1D27B4u;
    // 0x1d27b4: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x1d27b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1d27b8: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x1d27b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d27bc: 0x1a000032  blez        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D27BCu;
    {
        const bool branch_taken_0x1d27bc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D27C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27BCu;
        // 0x1d27c0: 0x8fa60208  lw          $a2, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27bc) {
            ctx->pc = 0x1D2888u;
            goto label_1d2888;
        }
    }
    ctx->pc = 0x1D27C4u;
    // 0x1d27c4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d27c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d27c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D27C8u;
    {
        const bool branch_taken_0x1d27c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27C8u;
        // 0x1d27cc: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27c8) {
            ctx->pc = 0x1D2840u;
            goto label_1d2840;
        }
    }
    ctx->pc = 0x1D27D0u;
    // 0x1d27d0: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x1d27d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d27d4: 0x24f1c3c0  addiu       $s1, $a3, -0x3C40
    ctx->pc = 0x1d27d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951872));
    // 0x1d27d8: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x1d27d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x1d27dc: 0x0  nop
    ctx->pc = 0x1d27dcu;
    // NOP
label_1d27e0:
    // 0x1d27e0: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x1d27e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x1d27e4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d27e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d27e8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d27e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d27ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d27ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d27f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d27f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d27f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d27f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d27f8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d27f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d27fc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d27fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d2800: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2800u;
    {
        const bool branch_taken_0x1d2800 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2800u;
        // 0x1d2804: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2800) {
            ctx->pc = 0x1D2828u;
            goto label_1d2828;
        }
    }
    ctx->pc = 0x1D2808u;
    // 0x1d2808: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d280c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d280cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d2810: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2810u;
    SET_GPR_U32(ctx, 31, 0x1D2818u);
    ctx->pc = 0x1D2814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2810u;
    // 0x1d2814: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2810u, 0x1D2818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2818u;
label_1d2818:
    // 0x1d2818: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1D2818u;
    {
        const bool branch_taken_0x1d2818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2818u;
        // 0x1d281c: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2818) {
            ctx->pc = 0x1D28F0u;
            goto label_1d28f0;
        }
    }
    ctx->pc = 0x1D2820u;
    // 0x1d2820: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d2820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2824: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d2824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d2828:
    // 0x1d2828: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1d2828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1d282c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d282cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d2830: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D2830u;
    {
        const bool branch_taken_0x1d2830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2830) {
            ctx->pc = 0x1D2834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2830u;
            // 0x1d2834: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D27E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d27e0;
        }
    }
    ctx->pc = 0x1D2838u;
    // 0x1d2838: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2838u;
    {
        const bool branch_taken_0x1d2838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2838u;
        // 0x1d283c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2838) {
            ctx->pc = 0x1D2844u;
            goto label_1d2844;
        }
    }
    ctx->pc = 0x1D2840u;
label_1d2840:
    // 0x1d2840: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d2840u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_1d2844:
    // 0x1d2844: 0x24e2c3c0  addiu       $v0, $a3, -0x3C40
    ctx->pc = 0x1d2844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951872));
    // 0x1d2848: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d2848u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d284c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2850: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d2850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2854: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2858: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d2858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d285c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d285cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2860: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d2860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d2864: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D2864u;
    {
        const bool branch_taken_0x1d2864 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2864u;
        // 0x1d2868: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2864) {
            ctx->pc = 0x1D2880u;
            goto label_1d2880;
        }
    }
    ctx->pc = 0x1D286Cu;
    // 0x1d286c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d286cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2870: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2870u;
    SET_GPR_U32(ctx, 31, 0x1D2878u);
    ctx->pc = 0x1D2874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2870u;
    // 0x1d2874: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2870u, 0x1D2878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2878u;
label_1d2878:
    // 0x1d2878: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D2878u;
    {
        const bool branch_taken_0x1d2878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2878u;
        // 0x1d287c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2878) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D2880u;
label_1d2880:
    // 0x1d2880: 0x8fa60208  lw          $a2, 0x208($sp)
    ctx->pc = 0x1d2880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1d2884: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1d2884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1d2888:
    // 0x1d2888: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1d2888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1d288c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1d288cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d2890: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2894: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x1d2894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x1d2898: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x1d2898u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x1d289c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1d289cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d28a0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D28A0u;
    {
        const bool branch_taken_0x1d28a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28A0u;
        // 0x1d28a4: 0xafa501ec  sw          $a1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28a0) {
            ctx->pc = 0x1D28BCu;
            goto label_1d28bc;
        }
    }
    ctx->pc = 0x1D28A8u;
    // 0x1d28a8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d28a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d28ac: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D28ACu;
    SET_GPR_U32(ctx, 31, 0x1D28B4u);
    ctx->pc = 0x1D28B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28ACu;
    // 0x1d28b0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D28ACu, 0x1D28B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28B4u;
label_1d28b4:
    // 0x1d28b4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D28B4u;
    {
        const bool branch_taken_0x1d28b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28B4u;
        // 0x1d28b8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28b4) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D28BCu;
label_1d28bc:
    // 0x1d28bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d28bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d28c0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1d28c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1d28c4: 0x1000fab4  b           . + 4 + (-0x54C << 2)
    ctx->pc = 0x1D28C4u;
    {
        const bool branch_taken_0x1d28c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28C4u;
        // 0x1d28c8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28c4) {
            ctx->pc = 0x1D1398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1398;
        }
    }
    ctx->pc = 0x1D28CCu;
    // 0x1d28cc: 0x0  nop
    ctx->pc = 0x1d28ccu;
    // NOP
label_1d28d0:
    // 0x1d28d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1d28d4:
    // 0x1d28d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D28D4u;
    {
        const bool branch_taken_0x1d28d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28D4u;
        // 0x1d28d8: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28d4) {
            ctx->pc = 0x1D28ECu;
            goto label_1d28ec;
        }
    }
    ctx->pc = 0x1D28DCu;
    // 0x1d28dc: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D28DCu;
    SET_GPR_U32(ctx, 31, 0x1D28E4u);
    ctx->pc = 0x1D28E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28DCu;
    // 0x1d28e0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D28DCu, 0x1D28E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28E4u;
label_1d28e4:
    // 0x1d28e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D28E4u;
    {
        const bool branch_taken_0x1d28e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28E4u;
        // 0x1d28e8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28e4) {
            ctx->pc = 0x1D28F4u;
            goto label_1d28f4;
        }
    }
    ctx->pc = 0x1D28ECu;
label_1d28ec:
    // 0x1d28ec: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1d28ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1d28f0:
    // 0x1d28f0: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x1d28f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_1d28f4:
    // 0x1d28f4: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x1d28f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x1d28f8: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x1d28f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d28fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2900: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1d2900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1d2904: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1d2904u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1d2908:
    // 0x1d2908: 0xdfb00240  ld          $s0, 0x240($sp)
    ctx->pc = 0x1d2908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
label_1d290c:
    // 0x1d290c: 0xdfb10248  ld          $s1, 0x248($sp)
    ctx->pc = 0x1d290cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1d2910: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x1d2910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1d2914: 0xdfb30258  ld          $s3, 0x258($sp)
    ctx->pc = 0x1d2914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x1d2918: 0xdfb40260  ld          $s4, 0x260($sp)
    ctx->pc = 0x1d2918u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1d291c: 0xdfb50268  ld          $s5, 0x268($sp)
    ctx->pc = 0x1d291cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1d2920: 0xdfb60270  ld          $s6, 0x270($sp)
    ctx->pc = 0x1d2920u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1d2924: 0xdfb70278  ld          $s7, 0x278($sp)
    ctx->pc = 0x1d2924u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x1d2928: 0xdfbe0280  ld          $fp, 0x280($sp)
    ctx->pc = 0x1d2928u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1d292c: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x1d292cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x1d2930: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2930u;
        // 0x1d2934: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2938u;
}
