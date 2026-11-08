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

// Function: _sceCallCode
// Address: 0x1b3940 - 0x1b3ae4
void _sceCallCode_0x1b3940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCallCode_0x1b3940");
#endif

    switch (ctx->pc) {
        case 0x1b3980u: goto label_1b3980;
        case 0x1b3998u: goto label_1b3998;
        case 0x1b39c0u: goto label_1b39c0;
        case 0x1b3a24u: goto label_1b3a24;
        case 0x1b3a60u: goto label_1b3a60;
        case 0x1b3a70u: goto label_1b3a70;
        case 0x1b3a78u: goto label_1b3a78;
        case 0x1b3a8cu: goto label_1b3a8c;
        case 0x1b3a9cu: goto label_1b3a9c;
        case 0x1b3aacu: goto label_1b3aac;
        case 0x1b3ab4u: goto label_1b3ab4;
        default: break;
    }

    ctx->pc = 0x1b3940u;

    // 0x1b3940: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b3940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1b3944: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1b3944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1b3948: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1b3948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1b394c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1b394cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3950: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b3950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3954: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1b3954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1b3958: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1b3958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1b395c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b395cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3960: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1b3960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1b3964: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x1b3964u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x1b3968: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1b3968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1b396c: 0x26f29a80  addiu       $s2, $s7, -0x6580
    ctx->pc = 0x1b396cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941312));
    // 0x1b3970: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1b3970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1b3974: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1b3974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1b3978: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B3978u;
    SET_GPR_U32(ctx, 31, 0x1B3980u);
    ctx->pc = 0x1B397Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3978u;
    // 0x1b397c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B3978u, 0x1B3980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3980u;
label_1b3980:
    // 0x1b3980: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b3980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b3984: 0x8c43aa04  lw          $v1, -0x55FC($v0)
    ctx->pc = 0x1b3984u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b3988: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3988u;
    {
        const bool branch_taken_0x1b3988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3988) {
            ctx->pc = 0x1B398Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3988u;
            // 0x1b398c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B399Cu;
            goto label_1b399c;
        }
    }
    ctx->pc = 0x1B3990u;
    // 0x1b3990: 0xc06c96e  jal         func_1B25B8
    ctx->pc = 0x1B3990u;
    SET_GPR_U32(ctx, 31, 0x1B3998u);
    ctx->pc = 0x1B25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B25B8u, 0x1B3990u, 0x1B3998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3998u;
label_1b3998:
    // 0x1b3998: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b3998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1b399c:
    // 0x1b399c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b399cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b39a0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b39a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b39a4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B39A4u;
    {
        const bool branch_taken_0x1b39a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B39A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39A4u;
        // 0x1b39a8: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b39a4) {
            ctx->pc = 0x1B39ECu;
            goto label_1b39ec;
        }
    }
    ctx->pc = 0x1B39ACu;
    // 0x1b39ac: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b39acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b39b0: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b39b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b39b4: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b39b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b39b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b39b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b39bc: 0x0  nop
    ctx->pc = 0x1b39bcu;
    // NOP
label_1b39c0:
    // 0x1b39c0: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1b39c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b39c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B39C4u;
    {
        const bool branch_taken_0x1b39c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B39C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39C4u;
        // 0x1b39c8: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b39c4) {
            ctx->pc = 0x1B39F8u;
            goto label_1b39f8;
        }
    }
    ctx->pc = 0x1B39CCu;
    // 0x1b39cc: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1b39ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1b39d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b39d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b39d4: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1b39d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b39d8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b39d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b39dc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B39DCu;
    {
        const bool branch_taken_0x1b39dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b39dc) {
            ctx->pc = 0x1B39E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B39DCu;
            // 0x1b39e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B39C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b39c0;
        }
    }
    ctx->pc = 0x1B39E4u;
    // 0x1b39e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B39E4u;
    {
        const bool branch_taken_0x1b39e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39E4u;
        // 0x1b39e8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b39e4) {
            ctx->pc = 0x1B39FCu;
            goto label_1b39fc;
        }
    }
    ctx->pc = 0x1B39ECu;
label_1b39ec:
    // 0x1b39ec: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b39ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b39f0: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b39f0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b39f4: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b39f4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_1b39f8:
    // 0x1b39f8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1b39fc:
    // 0x1b39fc: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B39FCu;
    {
        const bool branch_taken_0x1b39fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B3A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39FCu;
        // 0x1b3a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b39fc) {
            ctx->pc = 0x1B3A0Cu;
            goto label_1b3a0c;
        }
    }
    ctx->pc = 0x1B3A04u;
    // 0x1b3a04: 0xa240040b  sb          $zero, 0x40B($s2)
    ctx->pc = 0x1b3a04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3a08: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1b3a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1b3a0c:
    // 0x1b3a0c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b3a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b3a10: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b3a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b3a14: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b3a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3a18: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1b3a1c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B3A1Cu;
    SET_GPR_U32(ctx, 31, 0x1B3A24u);
    ctx->pc = 0x1B3A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A1Cu;
    // 0x1b3a20: 0x2694a6c0  addiu       $s4, $s4, -0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B3A1Cu, 0x1B3A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A24u;
label_1b3a24:
    // 0x1b3a24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a28: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1b3a28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1b3a2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3a30: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1b3a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1b3a34: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b3a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b3a38: 0x26a4b180  addiu       $a0, $s5, -0x4E80
    ctx->pc = 0x1b3a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947200));
    // 0x1b3a3c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b3a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a40: 0x26e79a80  addiu       $a3, $s7, -0x6580
    ctx->pc = 0x1b3a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941312));
    // 0x1b3a44: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x1b3a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x1b3a48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a4c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b3a50: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1b3a50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a54: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b3a54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3a58: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B3A58u;
    SET_GPR_U32(ctx, 31, 0x1B3A60u);
    ctx->pc = 0x1B3A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A58u;
    // 0x1b3a5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B3A58u, 0x1B3A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A60u;
label_1b3a60:
    // 0x1b3a60: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3A60u;
    {
        const bool branch_taken_0x1b3a60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A60u;
        // 0x1b3a64: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a60) {
            ctx->pc = 0x1B3A80u;
            goto label_1b3a80;
        }
    }
    ctx->pc = 0x1B3A68u;
    // 0x1b3a68: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3A68u;
    SET_GPR_U32(ctx, 31, 0x1B3A70u);
    ctx->pc = 0x1B3A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A68u;
    // 0x1b3a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3A68u, 0x1B3A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A70u;
label_1b3a70:
    // 0x1b3a70: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3A70u;
    SET_GPR_U32(ctx, 31, 0x1B3A78u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3A70u, 0x1B3A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A78u;
label_1b3a78:
    // 0x1b3a78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B3A78u;
    {
        const bool branch_taken_0x1b3a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A78u;
        // 0x1b3a7c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a78) {
            ctx->pc = 0x1B3AB8u;
            goto label_1b3ab8;
        }
    }
    ctx->pc = 0x1B3A80u;
label_1b3a80:
    // 0x1b3a80: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1b3a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1b3a84: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3A84u;
    SET_GPR_U32(ctx, 31, 0x1B3A8Cu);
    ctx->pc = 0x1B3A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A84u;
    // 0x1b3a88: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3A84u, 0x1B3A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A8Cu;
label_1b3a8c:
    // 0x1b3a8c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3A8Cu;
    {
        const bool branch_taken_0x1b3a8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3a8c) {
            ctx->pc = 0x1B3AA4u;
            goto label_1b3aa4;
        }
    }
    ctx->pc = 0x1B3A94u;
    // 0x1b3a94: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3A94u;
    SET_GPR_U32(ctx, 31, 0x1B3A9Cu);
    ctx->pc = 0x1B3A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A94u;
    // 0x1b3a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3A94u, 0x1B3A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A9Cu;
label_1b3a9c:
    // 0x1b3a9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3A9Cu;
    {
        const bool branch_taken_0x1b3a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A9Cu;
        // 0x1b3aa0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a9c) {
            ctx->pc = 0x1B3AB8u;
            goto label_1b3ab8;
        }
    }
    ctx->pc = 0x1B3AA4u;
label_1b3aa4:
    // 0x1b3aa4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B3AA4u;
    SET_GPR_U32(ctx, 31, 0x1B3AACu);
    ctx->pc = 0x1B3AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3AA4u;
    // 0x1b3aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B3AA4u, 0x1B3AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3AACu;
label_1b3aac:
    // 0x1b3aac: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3AACu;
    SET_GPR_U32(ctx, 31, 0x1B3AB4u);
    ctx->pc = 0x1B3AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3AACu;
    // 0x1b3ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3AACu, 0x1B3AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3AB4u;
label_1b3ab4:
    // 0x1b3ab4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b3ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b3ab8:
    // 0x1b3ab8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1b3ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b3abc: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1b3abcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b3ac0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b3ac0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b3ac4: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1b3ac4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b3ac8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b3ac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b3acc: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b3accu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3ad0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b3ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b3ad4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b3ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3ad8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b3ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3ADCu;
        // 0x1b3ae0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3AE4u;
}
