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

// Function: sceSymlink
// Address: 0x1b5298 - 0x1b5478
void sceSymlink_0x1b5298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSymlink_0x1b5298");
#endif

    switch (ctx->pc) {
        case 0x1b52d4u: goto label_1b52d4;
        case 0x1b52ecu: goto label_1b52ec;
        case 0x1b5310u: goto label_1b5310;
        case 0x1b5370u: goto label_1b5370;
        case 0x1b53bcu: goto label_1b53bc;
        case 0x1b53f8u: goto label_1b53f8;
        case 0x1b5408u: goto label_1b5408;
        case 0x1b5410u: goto label_1b5410;
        case 0x1b5424u: goto label_1b5424;
        case 0x1b5434u: goto label_1b5434;
        case 0x1b5444u: goto label_1b5444;
        case 0x1b544cu: goto label_1b544c;
        default: break;
    }

    ctx->pc = 0x1b5298u;

    // 0x1b5298: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b5298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1b529c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1b529cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1b52a0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1b52a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1b52a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b52a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52a8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1b52a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1b52ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b52acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52b0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1b52b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1b52b4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1b52b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1b52b8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1b52b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1b52bc: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b52bcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b52c0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1b52c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1b52c4: 0x26d29a80  addiu       $s2, $s6, -0x6580
    ctx->pc = 0x1b52c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941312));
    // 0x1b52c8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1b52c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1b52cc: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B52CCu;
    SET_GPR_U32(ctx, 31, 0x1B52D4u);
    ctx->pc = 0x1B52D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B52CCu;
    // 0x1b52d0: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B52CCu, 0x1B52D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B52D4u;
label_1b52d4:
    // 0x1b52d4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b52d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b52d8: 0x8c43aa04  lw          $v1, -0x55FC($v0)
    ctx->pc = 0x1b52d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b52dc: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B52DCu;
    {
        const bool branch_taken_0x1b52dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b52dc) {
            ctx->pc = 0x1B52E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B52DCu;
            // 0x1b52e0: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B52F0u;
            goto label_1b52f0;
        }
    }
    ctx->pc = 0x1B52E4u;
    // 0x1b52e4: 0xc06c96e  jal         func_1B25B8
    ctx->pc = 0x1B52E4u;
    SET_GPR_U32(ctx, 31, 0x1B52ECu);
    ctx->pc = 0x1B25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B25B8u, 0x1B52E4u, 0x1B52ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B52ECu;
label_1b52ec:
    // 0x1b52ec: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b52ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b52f0:
    // 0x1b52f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b52f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52f4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b52f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b52f8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B52F8u;
    {
        const bool branch_taken_0x1b52f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52F8u;
        // 0x1b52fc: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b52f8) {
            ctx->pc = 0x1B533Cu;
            goto label_1b533c;
        }
    }
    ctx->pc = 0x1B5300u;
    // 0x1b5300: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b5300u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b5304: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b5304u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b5308: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b5308u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b530c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b530cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b5310:
    // 0x1b5310: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b5310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b5314: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B5314u;
    {
        const bool branch_taken_0x1b5314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5314u;
        // 0x1b5318: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5314) {
            ctx->pc = 0x1B5348u;
            goto label_1b5348;
        }
    }
    ctx->pc = 0x1B531Cu;
    // 0x1b531c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1b531cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1b5320: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b5320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5324: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1b5324u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b5328: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b5328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b532c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B532Cu;
    {
        const bool branch_taken_0x1b532c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b532c) {
            ctx->pc = 0x1B5330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B532Cu;
            // 0x1b5330: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5310;
        }
    }
    ctx->pc = 0x1B5334u;
    // 0x1b5334: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5334u;
    {
        const bool branch_taken_0x1b5334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5334u;
        // 0x1b5338: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5334) {
            ctx->pc = 0x1B534Cu;
            goto label_1b534c;
        }
    }
    ctx->pc = 0x1B533Cu;
label_1b533c:
    // 0x1b533c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b533cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b5340: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b5340u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b5344: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b5344u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_1b5348:
    // 0x1b5348: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b5348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1b534c:
    // 0x1b534c: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B534Cu;
    {
        const bool branch_taken_0x1b534c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b534c) {
            ctx->pc = 0x1B5350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B534Cu;
            // 0x1b5350: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5354u;
            goto label_1b5354;
        }
    }
    ctx->pc = 0x1B5354u;
label_1b5354:
    // 0x1b5354: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b5354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b5358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b535c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b535cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b5360: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B5360u;
    {
        const bool branch_taken_0x1b5360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5360u;
        // 0x1b5364: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5360) {
            ctx->pc = 0x1B5394u;
            goto label_1b5394;
        }
    }
    ctx->pc = 0x1B5368u;
    // 0x1b5368: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1b5368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x1b536c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b536cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b5370:
    // 0x1b5370: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b5370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b5374: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5374u;
    {
        const bool branch_taken_0x1b5374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5374u;
        // 0x1b5378: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5374) {
            ctx->pc = 0x1B5394u;
            goto label_1b5394;
        }
    }
    ctx->pc = 0x1B537Cu;
    // 0x1b537c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1b537cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b5380: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b5380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5384: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b5384u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b5388: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b5388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b538c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B538Cu;
    {
        const bool branch_taken_0x1b538c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b538c) {
            ctx->pc = 0x1B5390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B538Cu;
            // 0x1b5390: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5370;
        }
    }
    ctx->pc = 0x1B5394u;
label_1b5394:
    // 0x1b5394: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b5394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1b5398: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5398u;
    {
        const bool branch_taken_0x1b5398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5398) {
            ctx->pc = 0x1B539Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5398u;
            // 0x1b539c: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B53A0u;
            goto label_1b53a0;
        }
    }
    ctx->pc = 0x1B53A0u;
label_1b53a0:
    // 0x1b53a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b53a4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b53a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b53a8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b53a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b53ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b53acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b53b0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b53b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1b53b4: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B53B4u;
    SET_GPR_U32(ctx, 31, 0x1B53BCu);
    ctx->pc = 0x1B53B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53B4u;
    // 0x1b53b8: 0x2690a6c0  addiu       $s0, $s4, -0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B53B4u, 0x1B53BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53BCu;
label_1b53bc:
    // 0x1b53bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b53bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53c0: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1b53c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1b53c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b53c8: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1b53c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1b53cc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b53ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b53d0: 0x26a4b180  addiu       $a0, $s5, -0x4E80
    ctx->pc = 0x1b53d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947200));
    // 0x1b53d4: 0x26c79a80  addiu       $a3, $s6, -0x6580
    ctx->pc = 0x1b53d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941312));
    // 0x1b53d8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1b53d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b53dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b53dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b53e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b53e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53e4: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1b53e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1b53e8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b53e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53ec: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b53ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b53f0: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B53F0u;
    SET_GPR_U32(ctx, 31, 0x1B53F8u);
    ctx->pc = 0x1B53F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53F0u;
    // 0x1b53f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B53F0u, 0x1B53F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53F8u;
label_1b53f8:
    // 0x1b53f8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B53F8u;
    {
        const bool branch_taken_0x1b53f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53F8u;
        // 0x1b53fc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53f8) {
            ctx->pc = 0x1B5418u;
            goto label_1b5418;
        }
    }
    ctx->pc = 0x1B5400u;
    // 0x1b5400: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B5400u;
    SET_GPR_U32(ctx, 31, 0x1B5408u);
    ctx->pc = 0x1B5404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5400u;
    // 0x1b5404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B5400u, 0x1B5408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5408u;
label_1b5408:
    // 0x1b5408: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B5408u;
    SET_GPR_U32(ctx, 31, 0x1B5410u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B5408u, 0x1B5410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5410u;
label_1b5410:
    // 0x1b5410: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B5410u;
    {
        const bool branch_taken_0x1b5410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5410u;
        // 0x1b5414: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5410) {
            ctx->pc = 0x1B5450u;
            goto label_1b5450;
        }
    }
    ctx->pc = 0x1B5418u;
label_1b5418:
    // 0x1b5418: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b5418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1b541c: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B541Cu;
    SET_GPR_U32(ctx, 31, 0x1B5424u);
    ctx->pc = 0x1B5420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B541Cu;
    // 0x1b5420: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B541Cu, 0x1B5424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5424u;
label_1b5424:
    // 0x1b5424: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5424u;
    {
        const bool branch_taken_0x1b5424 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5424) {
            ctx->pc = 0x1B543Cu;
            goto label_1b543c;
        }
    }
    ctx->pc = 0x1B542Cu;
    // 0x1b542c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B542Cu;
    SET_GPR_U32(ctx, 31, 0x1B5434u);
    ctx->pc = 0x1B5430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B542Cu;
    // 0x1b5430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B542Cu, 0x1B5434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5434u;
label_1b5434:
    // 0x1b5434: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5434u;
    {
        const bool branch_taken_0x1b5434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5434u;
        // 0x1b5438: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5434) {
            ctx->pc = 0x1B5450u;
            goto label_1b5450;
        }
    }
    ctx->pc = 0x1B543Cu;
label_1b543c:
    // 0x1b543c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B543Cu;
    SET_GPR_U32(ctx, 31, 0x1B5444u);
    ctx->pc = 0x1B5440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B543Cu;
    // 0x1b5440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B543Cu, 0x1B5444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5444u;
label_1b5444:
    // 0x1b5444: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B5444u;
    SET_GPR_U32(ctx, 31, 0x1B544Cu);
    ctx->pc = 0x1B5448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5444u;
    // 0x1b5448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B5444u, 0x1B544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B544Cu;
label_1b544c:
    // 0x1b544c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b544cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5450:
    // 0x1b5450: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1b5450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b5454: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b5454u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5458: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1b5458u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b545c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b545cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b5460: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b5460u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b5464: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b5464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b5468: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b5468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b546c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b546cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5470: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5470u;
        // 0x1b5474: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5478u;
}
