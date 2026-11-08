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

// Function: sceGetstat
// Address: 0x1b4410 - 0x1b45b0
void sceGetstat_0x1b4410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGetstat_0x1b4410");
#endif

    switch (ctx->pc) {
        case 0x1b4450u: goto label_1b4450;
        case 0x1b4468u: goto label_1b4468;
        case 0x1b4488u: goto label_1b4488;
        case 0x1b44f0u: goto label_1b44f0;
        case 0x1b452cu: goto label_1b452c;
        case 0x1b453cu: goto label_1b453c;
        case 0x1b4544u: goto label_1b4544;
        case 0x1b4558u: goto label_1b4558;
        case 0x1b4568u: goto label_1b4568;
        case 0x1b4578u: goto label_1b4578;
        case 0x1b4580u: goto label_1b4580;
        default: break;
    }

    ctx->pc = 0x1b4410u;

    // 0x1b4410: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b4410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1b4414: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1b4414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1b4418: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1b4418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1b441c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b441cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4420: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1b4420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1b4424: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1b4424u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4428: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1b4428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1b442c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b442cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b4430: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1b4430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1b4434: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x1b4434u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x1b4438: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1b4438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1b443c: 0x26f29a80  addiu       $s2, $s7, -0x6580
    ctx->pc = 0x1b443cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941312));
    // 0x1b4440: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1b4440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1b4444: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1b4444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1b4448: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B4448u;
    SET_GPR_U32(ctx, 31, 0x1B4450u);
    ctx->pc = 0x1B444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4448u;
    // 0x1b444c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B4448u, 0x1B4450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4450u;
label_1b4450:
    // 0x1b4450: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b4450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b4454: 0x8c43aa04  lw          $v1, -0x55FC($v0)
    ctx->pc = 0x1b4454u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b4458: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4458u;
    {
        const bool branch_taken_0x1b4458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4458) {
            ctx->pc = 0x1B445Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4458u;
            // 0x1b445c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B446Cu;
            goto label_1b446c;
        }
    }
    ctx->pc = 0x1B4460u;
    // 0x1b4460: 0xc06c96e  jal         func_1B25B8
    ctx->pc = 0x1B4460u;
    SET_GPR_U32(ctx, 31, 0x1B4468u);
    ctx->pc = 0x1B25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B25B8u, 0x1B4460u, 0x1B4468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4468u;
label_1b4468:
    // 0x1b4468: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b4468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1b446c:
    // 0x1b446c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b446cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4470: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b4470u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4474: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B4474u;
    {
        const bool branch_taken_0x1b4474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4474u;
        // 0x1b4478: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4474) {
            ctx->pc = 0x1B44B0u;
            goto label_1b44b0;
        }
    }
    ctx->pc = 0x1B447Cu;
    // 0x1b447c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b447cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4480: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b4480u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b4484: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b4484u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_1b4488:
    // 0x1b4488: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b4488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b448c: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1b448cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b4490: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4490u;
    {
        const bool branch_taken_0x1b4490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4490u;
        // 0x1b4494: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4490) {
            ctx->pc = 0x1B44BCu;
            goto label_1b44bc;
        }
    }
    ctx->pc = 0x1B4498u;
    // 0x1b4498: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1b4498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1b449c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b449cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b44a0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B44A0u;
    {
        const bool branch_taken_0x1b44a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44A0u;
        // 0x1b44a4: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44a0) {
            ctx->pc = 0x1B4488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4488;
        }
    }
    ctx->pc = 0x1B44A8u;
    // 0x1b44a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B44A8u;
    {
        const bool branch_taken_0x1b44a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44A8u;
        // 0x1b44ac: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44a8) {
            ctx->pc = 0x1B44C0u;
            goto label_1b44c0;
        }
    }
    ctx->pc = 0x1B44B0u;
label_1b44b0:
    // 0x1b44b0: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b44b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b44b4: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b44b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b44b8: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b44b8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_1b44bc:
    // 0x1b44bc: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1b44c0:
    // 0x1b44c0: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B44C0u;
    {
        const bool branch_taken_0x1b44c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b44c0) {
            ctx->pc = 0x1B44C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B44C0u;
            // 0x1b44c4: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B44D4u;
            goto label_1b44d4;
        }
    }
    ctx->pc = 0x1B44C8u;
    // 0x1b44c8: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x1b44c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b44cc: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1b44ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1b44d0: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x1b44d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_1b44d4:
    // 0x1b44d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b44d8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b44d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b44dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b44dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b44e0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b44e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b44e4: 0x2694a6c0  addiu       $s4, $s4, -0x5940
    ctx->pc = 0x1b44e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    // 0x1b44e8: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B44E8u;
    SET_GPR_U32(ctx, 31, 0x1B44F0u);
    ctx->pc = 0x1B44ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B44E8u;
    // 0x1b44ec: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B44E8u, 0x1B44F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44F0u;
label_1b44f0:
    // 0x1b44f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b44f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44f4: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1b44f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1b44f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b44fc: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1b44fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1b4500: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b4500u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b4504: 0x26a4b180  addiu       $a0, $s5, -0x4E80
    ctx->pc = 0x1b4504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947200));
    // 0x1b4508: 0x26e79a80  addiu       $a3, $s7, -0x6580
    ctx->pc = 0x1b4508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941312));
    // 0x1b450c: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x1b450cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x1b4510: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b4510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b4514: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b4514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b4518: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b451c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1b451cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4520: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b4520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4524: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B4524u;
    SET_GPR_U32(ctx, 31, 0x1B452Cu);
    ctx->pc = 0x1B4528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4524u;
    // 0x1b4528: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B4524u, 0x1B452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B452Cu;
label_1b452c:
    // 0x1b452c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B452Cu;
    {
        const bool branch_taken_0x1b452c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B452Cu;
        // 0x1b4530: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b452c) {
            ctx->pc = 0x1B454Cu;
            goto label_1b454c;
        }
    }
    ctx->pc = 0x1B4534u;
    // 0x1b4534: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4534u;
    SET_GPR_U32(ctx, 31, 0x1B453Cu);
    ctx->pc = 0x1B4538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4534u;
    // 0x1b4538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4534u, 0x1B453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B453Cu;
label_1b453c:
    // 0x1b453c: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B453Cu;
    SET_GPR_U32(ctx, 31, 0x1B4544u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B453Cu, 0x1B4544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4544u;
label_1b4544:
    // 0x1b4544: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B4544u;
    {
        const bool branch_taken_0x1b4544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4544u;
        // 0x1b4548: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4544) {
            ctx->pc = 0x1B4584u;
            goto label_1b4584;
        }
    }
    ctx->pc = 0x1B454Cu;
label_1b454c:
    // 0x1b454c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1b454cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1b4550: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4550u;
    SET_GPR_U32(ctx, 31, 0x1B4558u);
    ctx->pc = 0x1B4554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4550u;
    // 0x1b4554: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4550u, 0x1B4558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4558u;
label_1b4558:
    // 0x1b4558: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4558u;
    {
        const bool branch_taken_0x1b4558 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4558) {
            ctx->pc = 0x1B4570u;
            goto label_1b4570;
        }
    }
    ctx->pc = 0x1B4560u;
    // 0x1b4560: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4560u;
    SET_GPR_U32(ctx, 31, 0x1B4568u);
    ctx->pc = 0x1B4564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4560u;
    // 0x1b4564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4560u, 0x1B4568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4568u;
label_1b4568:
    // 0x1b4568: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4568u;
    {
        const bool branch_taken_0x1b4568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4568u;
        // 0x1b456c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4568) {
            ctx->pc = 0x1B4584u;
            goto label_1b4584;
        }
    }
    ctx->pc = 0x1B4570u;
label_1b4570:
    // 0x1b4570: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B4570u;
    SET_GPR_U32(ctx, 31, 0x1B4578u);
    ctx->pc = 0x1B4574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4570u;
    // 0x1b4574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B4570u, 0x1B4578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4578u;
label_1b4578:
    // 0x1b4578: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4578u;
    SET_GPR_U32(ctx, 31, 0x1B4580u);
    ctx->pc = 0x1B457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4578u;
    // 0x1b457c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4578u, 0x1B4580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4580u;
label_1b4580:
    // 0x1b4580: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b4580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b4584:
    // 0x1b4584: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1b4584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b4588: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1b4588u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b458c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b458cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b4590: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1b4590u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4594: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b4594u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b4598: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b4598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b459c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b459cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b45a0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b45a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b45a4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b45a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b45a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B45A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B45ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45A8u;
        // 0x1b45ac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B45A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B45B0u;
}
