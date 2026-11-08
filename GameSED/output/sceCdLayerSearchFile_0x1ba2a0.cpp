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

// Function: sceCdLayerSearchFile
// Address: 0x1ba2a0 - 0x1ba5b4
void sceCdLayerSearchFile_0x1ba2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdLayerSearchFile_0x1ba2a0");
#endif

    switch (ctx->pc) {
        case 0x1ba2e0u: goto label_1ba2e0;
        case 0x1ba2ecu: goto label_1ba2ec;
        case 0x1ba318u: goto label_1ba318;
        case 0x1ba320u: goto label_1ba320;
        case 0x1ba330u: goto label_1ba330;
        case 0x1ba350u: goto label_1ba350;
        case 0x1ba358u: goto label_1ba358;
        case 0x1ba378u: goto label_1ba378;
        case 0x1ba38cu: goto label_1ba38c;
        case 0x1ba3acu: goto label_1ba3ac;
        case 0x1ba3b8u: goto label_1ba3b8;
        case 0x1ba418u: goto label_1ba418;
        case 0x1ba46cu: goto label_1ba46c;
        case 0x1ba488u: goto label_1ba488;
        case 0x1ba4b0u: goto label_1ba4b0;
        case 0x1ba4c4u: goto label_1ba4c4;
        case 0x1ba538u: goto label_1ba538;
        case 0x1ba550u: goto label_1ba550;
        case 0x1ba568u: goto label_1ba568;
        case 0x1ba580u: goto label_1ba580;
        default: break;
    }

    ctx->pc = 0x1ba2a0u;

    // 0x1ba2a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ba2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ba2a4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1ba2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1ba2a8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1ba2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1ba2ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ba2acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2b0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1ba2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1ba2b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ba2b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2b8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1ba2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1ba2bc: 0x3c160025  lui         $s6, 0x25
    ctx->pc = 0x1ba2bcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)37 << 16));
    // 0x1ba2c0: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1ba2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1ba2c4: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1ba2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1ba2c8: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1ba2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1ba2cc: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1ba2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1ba2d0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1ba2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1ba2d4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ba2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ba2d8: 0xc06e810  jal         func_1BA040
    ctx->pc = 0x1BA2D8u;
    SET_GPR_U32(ctx, 31, 0x1BA2E0u);
    ctx->pc = 0x1BA2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA2D8u;
    // 0x1ba2dc: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA040u, 0x1BA2D8u, 0x1BA2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA2E0u;
label_1ba2e0:
    // 0x1ba2e0: 0x8ec4c0a8  lw          $a0, -0x3F58($s6)
    ctx->pc = 0x1ba2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951080)));
    // 0x1ba2e4: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1BA2E4u;
    SET_GPR_U32(ctx, 31, 0x1BA2ECu);
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1BA2E4u, 0x1BA2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA2ECu;
label_1ba2ec:
    // 0x1ba2ec: 0x8ec3c0a8  lw          $v1, -0x3F58($s6)
    ctx->pc = 0x1ba2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951080)));
    // 0x1ba2f0: 0x146200a4  bne         $v1, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1BA2F0u;
    {
        const bool branch_taken_0x1ba2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2F0u;
        // 0x1ba2f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2f0) {
            ctx->pc = 0x1BA584u;
            goto label_1ba584;
        }
    }
    ctx->pc = 0x1BA2F8u;
    // 0x1ba2f8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1ba2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1ba2fc: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1ba2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1ba300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba304: 0x8c44d690  lw          $a0, -0x2970($v0)
    ctx->pc = 0x1ba304u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x40D690u));
    // 0x1ba308: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1ba308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1ba30c: 0xacc3c09c  sw          $v1, -0x3F64($a2)
    ctx->pc = 0x1ba30cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x24C09Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C09Cu, _value); } while (0);
    // 0x1ba310: 0xc06bcd8  jal         func_1AF360
    ctx->pc = 0x1BA310u;
    SET_GPR_U32(ctx, 31, 0x1BA318u);
    ctx->pc = 0x1BA314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA310u;
    // 0x1ba314: 0x24a5d698  addiu       $a1, $a1, -0x2968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF360u, 0x1BA310u, 0x1BA318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA318u;
label_1ba318:
    // 0x1ba318: 0xc06e9f8  jal         func_1BA7E0
    ctx->pc = 0x1BA318u;
    SET_GPR_U32(ctx, 31, 0x1BA320u);
    ctx->pc = 0x1BA31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA318u;
    // 0x1ba31c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA7E0u, 0x1BA318u, 0x1BA320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA320u;
label_1ba320:
    // 0x1ba320: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x1BA320u;
    {
        const bool branch_taken_0x1ba320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA320u;
        // 0x1ba324: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba320) {
            ctx->pc = 0x1BA4B8u;
            goto label_1ba4b8;
        }
    }
    ctx->pc = 0x1BA328u;
    // 0x1ba328: 0xc06c408  jal         func_1B1020
    ctx->pc = 0x1BA328u;
    SET_GPR_U32(ctx, 31, 0x1BA330u);
    ctx->pc = 0x1BA32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA328u;
    // 0x1ba32c: 0x3c110025  lui         $s1, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1020u, 0x1BA328u, 0x1BA330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA330u;
label_1ba330:
    // 0x1ba330: 0x8e22c0c0  lw          $v0, -0x3F40($s1)
    ctx->pc = 0x1ba330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951104)));
    // 0x1ba334: 0x441002d  bgez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BA334u;
    {
        const bool branch_taken_0x1ba334 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA334u;
        // 0x1ba338: 0x3c170041  lui         $s7, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba334) {
            ctx->pc = 0x1BA3ECu;
            goto label_1ba3ec;
        }
    }
    ctx->pc = 0x1BA33Cu;
    // 0x1ba33c: 0x3c140025  lui         $s4, 0x25
    ctx->pc = 0x1ba33cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
    // 0x1ba340: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1ba340u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1ba344: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BA344u;
    {
        const bool branch_taken_0x1ba344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA344u;
        // 0x1ba348: 0x3c1e0041  lui         $fp, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba344) {
            ctx->pc = 0x1BA374u;
            goto label_1ba374;
        }
    }
    ctx->pc = 0x1BA34Cu;
    // 0x1ba34c: 0x0  nop
    ctx->pc = 0x1ba34cu;
    // NOP
label_1ba350:
    // 0x1ba350: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ba350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ba354: 0x0  nop
    ctx->pc = 0x1ba354u;
    // NOP
label_1ba358:
    // 0x1ba358: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba35c: 0x0  nop
    ctx->pc = 0x1ba35cu;
    // NOP
    // 0x1ba360: 0x0  nop
    ctx->pc = 0x1ba360u;
    // NOP
    // 0x1ba364: 0x0  nop
    ctx->pc = 0x1ba364u;
    // NOP
    // 0x1ba368: 0x0  nop
    ctx->pc = 0x1ba368u;
    // NOP
    // 0x1ba36c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BA36Cu;
    {
        const bool branch_taken_0x1ba36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba36c) {
            ctx->pc = 0x1BA358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba358;
        }
    }
    ctx->pc = 0x1BA374u;
label_1ba374:
    // 0x1ba374: 0x26f0d880  addiu       $s0, $s7, -0x2780
    ctx->pc = 0x1ba374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294957184));
label_1ba378:
    // 0x1ba378: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ba378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1ba37c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba380: 0x34a50597  ori         $a1, $a1, 0x597
    ctx->pc = 0x1ba380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1431);
    // 0x1ba384: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x1BA384u;
    SET_GPR_U32(ctx, 31, 0x1BA38Cu);
    ctx->pc = 0x1BA388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA384u;
    // 0x1ba388: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x1BA384u, 0x1BA38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA38Cu;
label_1ba38c:
    // 0x1ba38c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BA38Cu;
    {
        const bool branch_taken_0x1ba38c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ba38c) {
            ctx->pc = 0x1BA390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA38Cu;
            // 0x1ba390: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA3DCu;
            goto label_1ba3dc;
        }
    }
    ctx->pc = 0x1BA394u;
    // 0x1ba394: 0x8e82c090  lw          $v0, -0x3F70($s4)
    ctx->pc = 0x1ba394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951056)));
    // 0x1ba398: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA398u;
    {
        const bool branch_taken_0x1ba398 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA398u;
        // 0x1ba39c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba398) {
            ctx->pc = 0x1BA3B0u;
            goto label_1ba3b0;
        }
    }
    ctx->pc = 0x1BA3A0u;
    // 0x1ba3a0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ba3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ba3a4: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BA3A4u;
    SET_GPR_U32(ctx, 31, 0x1BA3ACu);
    ctx->pc = 0x1BA3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA3A4u;
    // 0x1ba3a8: 0x2484af00  addiu       $a0, $a0, -0x5100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BA3A4u, 0x1BA3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA3ACu;
label_1ba3ac:
    // 0x1ba3ac: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1ba3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1ba3b0:
    // 0x1ba3b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ba3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ba3b4: 0x0  nop
    ctx->pc = 0x1ba3b4u;
    // NOP
label_1ba3b8:
    // 0x1ba3b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba3bc: 0x0  nop
    ctx->pc = 0x1ba3bcu;
    // NOP
    // 0x1ba3c0: 0x0  nop
    ctx->pc = 0x1ba3c0u;
    // NOP
    // 0x1ba3c4: 0x0  nop
    ctx->pc = 0x1ba3c4u;
    // NOP
    // 0x1ba3c8: 0x0  nop
    ctx->pc = 0x1ba3c8u;
    // NOP
    // 0x1ba3cc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BA3CCu;
    {
        const bool branch_taken_0x1ba3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba3cc) {
            ctx->pc = 0x1BA3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba3b8;
        }
    }
    ctx->pc = 0x1BA3D4u;
    // 0x1ba3d4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1BA3D4u;
    {
        const bool branch_taken_0x1ba3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3D4u;
        // 0x1ba3d8: 0x26f0d880  addiu       $s0, $s7, -0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294957184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3d4) {
            ctx->pc = 0x1BA378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba378;
        }
    }
    ctx->pc = 0x1BA3DCu;
label_1ba3dc:
    // 0x1ba3dc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1BA3DCu;
    {
        const bool branch_taken_0x1ba3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3DCu;
        // 0x1ba3e0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3dc) {
            ctx->pc = 0x1BA350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba350;
        }
    }
    ctx->pc = 0x1BA3E4u;
    // 0x1ba3e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA3E4u;
    {
        const bool branch_taken_0x1ba3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3E4u;
        // 0x1ba3e8: 0xae20c0c0  sw          $zero, -0x3F40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294951104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3e4) {
            ctx->pc = 0x1BA3F8u;
            goto label_1ba3f8;
        }
    }
    ctx->pc = 0x1BA3ECu;
label_1ba3ec:
    // 0x1ba3ec: 0x3c140025  lui         $s4, 0x25
    ctx->pc = 0x1ba3ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
    // 0x1ba3f0: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1ba3f0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1ba3f4: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x1ba3f4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
label_1ba3f8:
    // 0x1ba3f8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1ba3f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ba3fc: 0x26a4d700  addiu       $a0, $s5, -0x2900
    ctx->pc = 0x1ba3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956800));
    // 0x1ba400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba404: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1ba404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1ba408: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BA408u;
    {
        const bool branch_taken_0x1ba408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA408u;
        // 0x1ba40c: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba408) {
            ctx->pc = 0x1BA43Cu;
            goto label_1ba43c;
        }
    }
    ctx->pc = 0x1BA410u;
    // 0x1ba410: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x1ba410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1ba414: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ba414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ba418:
    // 0x1ba418: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x1ba418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1ba41c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA41Cu;
    {
        const bool branch_taken_0x1ba41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA41Cu;
        // 0x1ba420: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba41c) {
            ctx->pc = 0x1BA43Cu;
            goto label_1ba43c;
        }
    }
    ctx->pc = 0x1BA424u;
    // 0x1ba424: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x1ba424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ba428: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ba428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ba42c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ba42cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ba430: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1ba430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1ba434: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BA434u;
    {
        const bool branch_taken_0x1ba434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba434) {
            ctx->pc = 0x1BA438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA434u;
            // 0x1ba438: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba418;
        }
    }
    ctx->pc = 0x1BA43Cu;
label_1ba43c:
    // 0x1ba43c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1ba43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ba440: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA440u;
    {
        const bool branch_taken_0x1ba440 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA440u;
        // 0x1ba444: 0x8e82c090  lw          $v0, -0x3F70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba440) {
            ctx->pc = 0x1BA454u;
            goto label_1ba454;
        }
    }
    ctx->pc = 0x1BA448u;
    // 0x1ba448: 0x26a2d700  addiu       $v0, $s5, -0x2900
    ctx->pc = 0x1ba448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956800));
    // 0x1ba44c: 0xa0400123  sb          $zero, 0x123($v0)
    ctx->pc = 0x1ba44cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba450: 0x8e82c090  lw          $v0, -0x3F70($s4)
    ctx->pc = 0x1ba450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951056)));
label_1ba454:
    // 0x1ba454: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA454u;
    {
        const bool branch_taken_0x1ba454 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BA458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA454u;
        // 0x1ba458: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba454) {
            ctx->pc = 0x1BA46Cu;
            goto label_1ba46c;
        }
    }
    ctx->pc = 0x1BA45Cu;
    // 0x1ba45c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1ba45cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1ba460: 0x2484af20  addiu       $a0, $a0, -0x50E0
    ctx->pc = 0x1ba460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946592));
    // 0x1ba464: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BA464u;
    SET_GPR_U32(ctx, 31, 0x1BA46Cu);
    ctx->pc = 0x1BA468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA464u;
    // 0x1ba468: 0x24a5d724  addiu       $a1, $a1, -0x28DC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956836));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BA464u, 0x1BA46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA46Cu;
label_1ba46c:
    // 0x1ba46c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ba46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba470: 0x26b0d700  addiu       $s0, $s5, -0x2900
    ctx->pc = 0x1ba470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956800));
    // 0x1ba474: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x1ba474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1ba478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba47c: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x1ba47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x1ba480: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1BA480u;
    SET_GPR_U32(ctx, 31, 0x1BA488u);
    ctx->pc = 0x1BA484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA480u;
    // 0x1ba484: 0xae100124  sw          $s0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1BA480u, 0x1BA488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA488u;
label_1ba488:
    // 0x1ba488: 0x26e4d880  addiu       $a0, $s7, -0x2780
    ctx->pc = 0x1ba488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294957184));
    // 0x1ba48c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ba48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ba490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba498: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ba498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba49c: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x1ba49cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1ba4a0: 0x27c9d840  addiu       $t1, $fp, -0x27C0
    ctx->pc = 0x1ba4a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 4294957120));
    // 0x1ba4a4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ba4a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ba4a8: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1BA4A8u;
    SET_GPR_U32(ctx, 31, 0x1BA4B0u);
    ctx->pc = 0x1BA4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA4A8u;
    // 0x1ba4ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1BA4A8u, 0x1BA4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4B0u;
label_1ba4b0:
    // 0x1ba4b0: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA4B0u;
    {
        const bool branch_taken_0x1ba4b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4B0u;
        // 0x1ba4b4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4b0) {
            ctx->pc = 0x1BA4CCu;
            goto label_1ba4cc;
        }
    }
    ctx->pc = 0x1BA4B8u;
label_1ba4b8:
    // 0x1ba4b8: 0x8ec4c0a8  lw          $a0, -0x3F58($s6)
    ctx->pc = 0x1ba4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951080)));
    // 0x1ba4bc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BA4BCu;
    SET_GPR_U32(ctx, 31, 0x1BA4C4u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BA4BCu, 0x1BA4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4C4u;
label_1ba4c4:
    // 0x1ba4c4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1BA4C4u;
    {
        const bool branch_taken_0x1ba4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4C4u;
        // 0x1ba4c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4c4) {
            ctx->pc = 0x1BA584u;
            goto label_1ba584;
        }
    }
    ctx->pc = 0x1BA4CCu;
label_1ba4cc:
    // 0x1ba4cc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1ba4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1ba4d0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1ba4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ba4d4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1ba4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ba4d8: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x1ba4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ba4dc: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x1ba4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ba4e0: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x1ba4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ba4e4: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x1ba4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ba4e8: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x1ba4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ba4ec: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x1ba4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ba4f0: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x1ba4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ba4f4: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x1ba4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ba4f8: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x1ba4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ba4fc: 0xb6640008  sdr         $a0, 0x8($s3)
    ctx->pc = 0x1ba4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ba500: 0xb2650017  sdl         $a1, 0x17($s3)
    ctx->pc = 0x1ba500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ba504: 0xb6650010  sdr         $a1, 0x10($s3)
    ctx->pc = 0x1ba504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ba508: 0xb266001f  sdl         $a2, 0x1F($s3)
    ctx->pc = 0x1ba508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ba50c: 0xb6660018  sdr         $a2, 0x18($s3)
    ctx->pc = 0x1ba50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ba510: 0x88430023  lwl         $v1, 0x23($v0)
    ctx->pc = 0x1ba510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1ba514: 0x98430020  lwr         $v1, 0x20($v0)
    ctx->pc = 0x1ba514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1ba518: 0xaa630023  swl         $v1, 0x23($s3)
    ctx->pc = 0x1ba518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ba51c: 0xba630020  swr         $v1, 0x20($s3)
    ctx->pc = 0x1ba51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ba520: 0x8e83c090  lw          $v1, -0x3F70($s4)
    ctx->pc = 0x1ba520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951056)));
    // 0x1ba524: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BA524u;
    {
        const bool branch_taken_0x1ba524 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA524u;
        // 0x1ba528: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba524) {
            ctx->pc = 0x1BA568u;
            goto label_1ba568;
        }
    }
    ctx->pc = 0x1BA52Cu;
    // 0x1ba52c: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x1ba52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1ba530: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BA530u;
    SET_GPR_U32(ctx, 31, 0x1BA538u);
    ctx->pc = 0x1BA534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA530u;
    // 0x1ba534: 0x2484af38  addiu       $a0, $a0, -0x50C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BA530u, 0x1BA538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA538u;
label_1ba538:
    // 0x1ba538: 0x8e82c090  lw          $v0, -0x3F70($s4)
    ctx->pc = 0x1ba538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951056)));
    // 0x1ba53c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BA53Cu;
    {
        const bool branch_taken_0x1ba53c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA53Cu;
        // 0x1ba540: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba53c) {
            ctx->pc = 0x1BA568u;
            goto label_1ba568;
        }
    }
    ctx->pc = 0x1BA544u;
    // 0x1ba544: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1ba544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ba548: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BA548u;
    SET_GPR_U32(ctx, 31, 0x1BA550u);
    ctx->pc = 0x1BA54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA548u;
    // 0x1ba54c: 0x2484af48  addiu       $a0, $a0, -0x50B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BA548u, 0x1BA550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA550u;
label_1ba550:
    // 0x1ba550: 0x8e82c090  lw          $v0, -0x3F70($s4)
    ctx->pc = 0x1ba550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951056)));
    // 0x1ba554: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA554u;
    {
        const bool branch_taken_0x1ba554 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA554u;
        // 0x1ba558: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba554) {
            ctx->pc = 0x1BA568u;
            goto label_1ba568;
        }
    }
    ctx->pc = 0x1BA55Cu;
    // 0x1ba55c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1ba55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba560: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BA560u;
    SET_GPR_U32(ctx, 31, 0x1BA568u);
    ctx->pc = 0x1BA564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA560u;
    // 0x1ba564: 0x2484af58  addiu       $a0, $a0, -0x50A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BA560u, 0x1BA568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA568u;
label_1ba568:
    // 0x1ba568: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ba568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ba56c: 0x27c2d840  addiu       $v0, $fp, -0x27C0
    ctx->pc = 0x1ba56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294957120));
    // 0x1ba570: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ba574: 0x8ec4c0a8  lw          $a0, -0x3F58($s6)
    ctx->pc = 0x1ba574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951080)));
    // 0x1ba578: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BA578u;
    SET_GPR_U32(ctx, 31, 0x1BA580u);
    ctx->pc = 0x1BA57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA578u;
    // 0x1ba57c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BA578u, 0x1BA580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA580u;
label_1ba580:
    // 0x1ba580: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ba580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ba584:
    // 0x1ba584: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1ba584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ba588: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1ba588u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ba58c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1ba58cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ba590: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1ba590u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ba594: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1ba594u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ba598: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1ba598u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ba59c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1ba59cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ba5a0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1ba5a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba5a4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1ba5a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba5a8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ba5a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5ACu;
        // 0x1ba5b0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA5B4u;
}
