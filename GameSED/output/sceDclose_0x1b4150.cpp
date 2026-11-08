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

// Function: sceDclose
// Address: 0x1b4150 - 0x1b42b8
void sceDclose_0x1b4150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDclose_0x1b4150");
#endif

    switch (ctx->pc) {
        case 0x1b4178u: goto label_1b4178;
        case 0x1b4184u: goto label_1b4184;
        case 0x1b419cu: goto label_1b419c;
        case 0x1b41c0u: goto label_1b41c0;
        case 0x1b41e4u: goto label_1b41e4;
        case 0x1b4230u: goto label_1b4230;
        case 0x1b4240u: goto label_1b4240;
        case 0x1b4248u: goto label_1b4248;
        case 0x1b4260u: goto label_1b4260;
        case 0x1b4270u: goto label_1b4270;
        case 0x1b4280u: goto label_1b4280;
        case 0x1b4288u: goto label_1b4288;
        default: break;
    }

    ctx->pc = 0x1b4150u;

    // 0x1b4150: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b4150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b4154: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1b4154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1b4158: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1b4158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1b415c: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b415cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b4160: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1b4160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1b4164: 0x26929a80  addiu       $s2, $s4, -0x6580
    ctx->pc = 0x1b4164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941312));
    // 0x1b4168: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b4168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b416c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1b416cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1b4170: 0xc06c81a  jal         func_1B2068
    ctx->pc = 0x1B4170u;
    SET_GPR_U32(ctx, 31, 0x1B4178u);
    ctx->pc = 0x1B4174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4170u;
    // 0x1b4174: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2068u, 0x1B4170u, 0x1B4178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4178u;
label_1b4178:
    // 0x1b4178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b417c: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B417Cu;
    SET_GPR_U32(ctx, 31, 0x1B4184u);
    ctx->pc = 0x1B4180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B417Cu;
    // 0x1b4180: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B417Cu, 0x1B4184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4184u;
label_1b4184:
    // 0x1b4184: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1b4184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1b4188: 0x8c62aa04  lw          $v0, -0x55FC($v1)
    ctx->pc = 0x1b4188u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b418c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B418Cu;
    {
        const bool branch_taken_0x1b418c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b418c) {
            ctx->pc = 0x1B41A4u;
            goto label_1b41a4;
        }
    }
    ctx->pc = 0x1B4194u;
    // 0x1b4194: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4194u;
    SET_GPR_U32(ctx, 31, 0x1B419Cu);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4194u, 0x1B419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B419Cu;
label_1b419c:
    // 0x1b419c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1B419Cu;
    {
        const bool branch_taken_0x1b419c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B419Cu;
        // 0x1b41a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b419c) {
            ctx->pc = 0x1B4298u;
            goto label_1b4298;
        }
    }
    ctx->pc = 0x1B41A4u;
label_1b41a4:
    // 0x1b41a4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B41A4u;
    {
        const bool branch_taken_0x1b41a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b41a4) {
            ctx->pc = 0x1B41B8u;
            goto label_1b41b8;
        }
    }
    ctx->pc = 0x1B41ACu;
    // 0x1b41ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b41acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b41b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B41B0u;
    {
        const bool branch_taken_0x1b41b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b41b0) {
            ctx->pc = 0x1B41B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B41B0u;
            // 0x1b41b4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B41C8u;
            goto label_1b41c8;
        }
    }
    ctx->pc = 0x1B41B8u;
label_1b41b8:
    // 0x1b41b8: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B41B8u;
    SET_GPR_U32(ctx, 31, 0x1B41C0u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B41B8u, 0x1B41C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B41C0u;
label_1b41c0:
    // 0x1b41c0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1B41C0u;
    {
        const bool branch_taken_0x1b41c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41C0u;
        // 0x1b41c4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41c0) {
            ctx->pc = 0x1B4298u;
            goto label_1b4298;
        }
    }
    ctx->pc = 0x1B41C8u;
label_1b41c8:
    // 0x1b41c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b41cc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b41ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b41d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b41d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b41d4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1b41d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1b41d8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b41d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b41dc: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B41DCu;
    SET_GPR_U32(ctx, 31, 0x1B41E4u);
    ctx->pc = 0x1B41E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B41DCu;
    // 0x1b41e0: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B41DCu, 0x1B41E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B41E4u;
label_1b41e4:
    // 0x1b41e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b41e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41e8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1b41e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b41ec: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b41ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b41f0: 0xae919a80  sw          $s1, -0x6580($s4)
    ctx->pc = 0x1b41f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294941312), GPR_U32(ctx, 17));
    // 0x1b41f4: 0x2453a6c0  addiu       $s3, $v0, -0x5940
    ctx->pc = 0x1b41f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944448));
    // 0x1b41f8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b41f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b41fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b41fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4200: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1b4200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1b4204: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b4204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b4208: 0x2484b180  addiu       $a0, $a0, -0x4E80
    ctx->pc = 0x1b4208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947200));
    // 0x1b420c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b420cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4210: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b4210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b4214: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b4214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b4218: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b421c: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1b421cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b4220: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1b4220u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4224: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b4224u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4228: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B4228u;
    SET_GPR_U32(ctx, 31, 0x1B4230u);
    ctx->pc = 0x1B422Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4228u;
    // 0x1b422c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B4228u, 0x1B4230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4230u;
label_1b4230:
    // 0x1b4230: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4230u;
    {
        const bool branch_taken_0x1b4230 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b4230) {
            ctx->pc = 0x1B4234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4230u;
            // 0x1b4234: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4250u;
            goto label_1b4250;
        }
    }
    ctx->pc = 0x1B4238u;
    // 0x1b4238: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4238u;
    SET_GPR_U32(ctx, 31, 0x1B4240u);
    ctx->pc = 0x1B423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4238u;
    // 0x1b423c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4238u, 0x1B4240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4240u;
label_1b4240:
    // 0x1b4240: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4240u;
    SET_GPR_U32(ctx, 31, 0x1B4248u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4240u, 0x1B4248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4248u;
label_1b4248:
    // 0x1b4248: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B4248u;
    {
        const bool branch_taken_0x1b4248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4248u;
        // 0x1b424c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4248) {
            ctx->pc = 0x1B4298u;
            goto label_1b4298;
        }
    }
    ctx->pc = 0x1B4250u;
label_1b4250:
    // 0x1b4250: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b4250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b4254: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1b4254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1b4258: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4258u;
    SET_GPR_U32(ctx, 31, 0x1B4260u);
    ctx->pc = 0x1B425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4258u;
    // 0x1b425c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4258u, 0x1B4260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4260u;
label_1b4260:
    // 0x1b4260: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4260u;
    {
        const bool branch_taken_0x1b4260 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4260) {
            ctx->pc = 0x1B4278u;
            goto label_1b4278;
        }
    }
    ctx->pc = 0x1B4268u;
    // 0x1b4268: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4268u;
    SET_GPR_U32(ctx, 31, 0x1B4270u);
    ctx->pc = 0x1B426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4268u;
    // 0x1b426c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4268u, 0x1B4270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4270u;
label_1b4270:
    // 0x1b4270: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4270u;
    {
        const bool branch_taken_0x1b4270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4270u;
        // 0x1b4274: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4270) {
            ctx->pc = 0x1B4298u;
            goto label_1b4298;
        }
    }
    ctx->pc = 0x1B4278u;
label_1b4278:
    // 0x1b4278: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B4278u;
    SET_GPR_U32(ctx, 31, 0x1B4280u);
    ctx->pc = 0x1B427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4278u;
    // 0x1b427c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B4278u, 0x1B4280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4280u;
label_1b4280:
    // 0x1b4280: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4280u;
    SET_GPR_U32(ctx, 31, 0x1B4288u);
    ctx->pc = 0x1B4284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4280u;
    // 0x1b4284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4280u, 0x1B4288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4288u;
label_1b4288:
    // 0x1b4288: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b4288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b428c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b428cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4290: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1b4290u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b4294: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1b4294u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1b4298:
    // 0x1b4298: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b4298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b429c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b429cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b42a0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b42a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b42a4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b42a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b42a8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b42a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b42ac: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b42acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b42b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B42B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42B0u;
        // 0x1b42b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B42B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B42B8u;
}
