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

// Function: WImageGetAptInfo__FP7WcImageP7AptHeadP13WImagePackagei
// Address: 0x17d798 - 0x17dbd8
void WImageGetAptInfo__FP7WcImageP7AptHeadP13WImagePackagei_0x17d798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WImageGetAptInfo__FP7WcImageP7AptHeadP13WImagePackagei_0x17d798");
#endif

    switch (ctx->pc) {
        case 0x17d800u: goto label_17d800;
        case 0x17d820u: goto label_17d820;
        case 0x17d870u: goto label_17d870;
        case 0x17d88cu: goto label_17d88c;
        case 0x17d8d0u: goto label_17d8d0;
        case 0x17dae8u: goto label_17dae8;
        default: break;
    }

    ctx->pc = 0x17d798u;

    // 0x17d798: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17d798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17d79c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17d79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17d7a0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17d7a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7a4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17d7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17d7a8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x17d7a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7ac: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x17d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x17d7b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17d7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17d7b4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x17d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17d7b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d7bc: 0x24530010  addiu       $s3, $v0, 0x10
    ctx->pc = 0x17d7bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17d7c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17d7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17d7c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17d7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17d7c8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x17d7c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7cc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17d7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17d7d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17d7d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7d4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x17d7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x17d7d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17d7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7dc: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x17d7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x17d7e0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x17d7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7e4: 0x1a40001b  blez        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x17D7E4u;
    {
        const bool branch_taken_0x17d7e4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x17D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7E4u;
        // 0x17d7e8: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7e4) {
            ctx->pc = 0x17D854u;
            goto label_17d854;
        }
    }
    ctx->pc = 0x17D7ECu;
    // 0x17d7ec: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x17d7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
    // 0x17d7f0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x17d7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7f4: 0x34e74352  ori         $a3, $a3, 0x4352
    ctx->pc = 0x17d7f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)17234);
    // 0x17d7f8: 0x240702d  daddu       $t6, $s2, $zero
    ctx->pc = 0x17d7f8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7fc: 0x0  nop
    ctx->pc = 0x17d7fcu;
    // NOP
label_17d800:
    // 0x17d800: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x17d800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x17d804: 0x50470011  beql        $v0, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x17D804u;
    {
        const bool branch_taken_0x17d804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x17d804) {
            ctx->pc = 0x17D808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D804u;
            // 0x17d808: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D84Cu;
            goto label_17d84c;
        }
    }
    ctx->pc = 0x17D80Cu;
    // 0x17d80c: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x17d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x17d810: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x17d810u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d814: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17D814u;
    {
        const bool branch_taken_0x17d814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D814u;
        // 0x17d818: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d814) {
            ctx->pc = 0x17D844u;
            goto label_17d844;
        }
    }
    ctx->pc = 0x17D81Cu;
    // 0x17d81c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17d81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_17d820:
    // 0x17d820: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17d820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17d824: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x17d824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x17d828: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D828u;
    {
        const bool branch_taken_0x17d828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D828u;
        // 0x17d82c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d828) {
            ctx->pc = 0x17D844u;
            goto label_17d844;
        }
    }
    ctx->pc = 0x17D830u;
    // 0x17d830: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x17d830u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d834: 0x0  nop
    ctx->pc = 0x17d834u;
    // NOP
    // 0x17d838: 0x0  nop
    ctx->pc = 0x17d838u;
    // NOP
    // 0x17d83c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17D83Cu;
    {
        const bool branch_taken_0x17d83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d83c) {
            ctx->pc = 0x17D840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D83Cu;
            // 0x17d840: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d820;
        }
    }
    ctx->pc = 0x17D844u;
label_17d844:
    // 0x17d844: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17d844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17d848: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x17d848u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_17d84c:
    // 0x17d84c: 0x15c0ffec  bnez        $t6, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17D84Cu;
    {
        const bool branch_taken_0x17d84c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D84Cu;
        // 0x17d850: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d84c) {
            ctx->pc = 0x17D800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d800;
        }
    }
    ctx->pc = 0x17D854u;
label_17d854:
    // 0x17d854: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x17D854u;
    {
        const bool branch_taken_0x17d854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d854) {
            ctx->pc = 0x17D88Cu;
            goto label_17d88c;
        }
    }
    ctx->pc = 0x17D85Cu;
    // 0x17d85c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17D85Cu;
    {
        const bool branch_taken_0x17d85c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D85Cu;
        // 0x17d860: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d85c) {
            ctx->pc = 0x17D868u;
            goto label_17d868;
        }
    }
    ctx->pc = 0x17D864u;
    // 0x17d864: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17d864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17d868:
    // 0x17d868: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17D868u;
    SET_GPR_U32(ctx, 31, 0x17D870u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17D868u, 0x17D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D870u;
label_17d870:
    // 0x17d870: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D870u;
    {
        const bool branch_taken_0x17d870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D870u;
        // 0x17d874: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d870) {
            ctx->pc = 0x17D88Cu;
            goto label_17d88c;
        }
    }
    ctx->pc = 0x17D878u;
    // 0x17d878: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17d878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17d87c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17d87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d880: 0x24a57c60  addiu       $a1, $a1, 0x7C60
    ctx->pc = 0x17d880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31840));
    // 0x17d884: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17D884u;
    SET_GPR_U32(ctx, 31, 0x17D88Cu);
    ctx->pc = 0x17D888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D884u;
    // 0x17d888: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17D884u, 0x17D88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D88Cu;
label_17d88c:
    // 0x17d88c: 0x1a4000c6  blez        $s2, . + 4 + (0xC6 << 2)
    ctx->pc = 0x17D88Cu;
    {
        const bool branch_taken_0x17d88c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x17D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D88Cu;
        // 0x17d890: 0x8e2d002c  lw          $t5, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d88c) {
            ctx->pc = 0x17DBA8u;
            goto label_17dba8;
        }
    }
    ctx->pc = 0x17D894u;
    // 0x17d894: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17d894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17d898: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x17d898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x17d89c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17d89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17d8a0: 0x240702d  daddu       $t6, $s2, $zero
    ctx->pc = 0x17d8a0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8a4: 0x268f0010  addiu       $t7, $s4, 0x10
    ctx->pc = 0x17d8a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x17d8a8: 0x268b0018  addiu       $t3, $s4, 0x18
    ctx->pc = 0x17d8a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x17d8ac: 0x2459ead0  addiu       $t9, $v0, -0x1530
    ctx->pc = 0x17d8acu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961872));
    // 0x17d8b0: 0x2478eaf0  addiu       $t8, $v1, -0x1510
    ctx->pc = 0x17d8b0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961904));
    // 0x17d8b4: 0x249eeb10  addiu       $fp, $a0, -0x14F0
    ctx->pc = 0x17d8b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961936));
    // 0x17d8b8: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x17d8b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d8bc: 0x24160008  addiu       $s6, $zero, 0x8
    ctx->pc = 0x17d8bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17d8c0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17d8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d8c4: 0x2412001e  addiu       $s2, $zero, 0x1E
    ctx->pc = 0x17d8c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x17d8c8: 0x26ac0010  addiu       $t4, $s5, 0x10
    ctx->pc = 0x17d8c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x17d8cc: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x17d8ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_17d8d0:
    // 0x17d8d0: 0x8d820008  lw          $v0, 0x8($t4)
    ctx->pc = 0x17d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x17d8d4: 0x262800b  movn        $s0, $s3, $v0
    ctx->pc = 0x17d8d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
    // 0x17d8d8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17d8dc: 0x10770008  beq         $v1, $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D8DCu;
    {
        const bool branch_taken_0x17d8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x17D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8DCu;
        // 0x17d8e0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8dc) {
            ctx->pc = 0x17D900u;
            goto label_17d900;
        }
    }
    ctx->pc = 0x17D8E4u;
    // 0x17d8e4: 0x10760006  beq         $v1, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D8E4u;
    {
        const bool branch_taken_0x17d8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x17D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8E4u;
        // 0x17d8e8: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8e4) {
            ctx->pc = 0x17D900u;
            goto label_17d900;
        }
    }
    ctx->pc = 0x17D8ECu;
    // 0x17d8ec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17d8f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D8F0u;
    {
        const bool branch_taken_0x17d8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8F0u;
        // 0x17d8f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8f0) {
            ctx->pc = 0x17D900u;
            goto label_17d900;
        }
    }
    ctx->pc = 0x17D8F8u;
    // 0x17d8f8: 0x38620018  xori        $v0, $v1, 0x18
    ctx->pc = 0x17d8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)24);
    // 0x17d8fc: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x17d8fcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_17d900:
    // 0x17d900: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x17d900u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17d904: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x17d904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x17d908: 0x8e090004  lw          $t1, 0x4($s0)
    ctx->pc = 0x17d908u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17d90c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x17d90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x17d910: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17d910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17d914: 0xa564fffc  sh          $a0, -0x4($t3)
    ctx->pc = 0x17d914u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4294967292), (uint16_t)GPR_U32(ctx, 4));
    // 0x17d918: 0x1091818  mult        $v1, $t0, $t1
    ctx->pc = 0x17d918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17d91c: 0x592021  addu        $a0, $v0, $t9
    ctx->pc = 0x17d91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x17d920: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x17d920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d924: 0x582821  addu        $a1, $v0, $t8
    ctx->pc = 0x17d924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x17d928: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x17d928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17d92c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x17d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x17d930: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x17d930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x17d934: 0x1e0502d  daddu       $t2, $t7, $zero
    ctx->pc = 0x17d934u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d938: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x17d938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17d93c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17d93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d940: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17d940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17d944: 0xa567fff8  sh          $a3, -0x8($t3)
    ctx->pc = 0x17d944u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4294967288), (uint16_t)GPR_U32(ctx, 7));
    // 0x17d948: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x17d948u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x17d94c: 0xa5680014  sh          $t0, 0x14($t3)
    ctx->pc = 0x17d94cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 20), (uint16_t)GPR_U32(ctx, 8));
    // 0x17d950: 0xa563fffe  sh          $v1, -0x2($t3)
    ctx->pc = 0x17d950u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x17d954: 0x14b10004  bne         $a1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D954u;
    {
        const bool branch_taken_0x17d954 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x17D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D954u;
        // 0x17d958: 0xa5690016  sh          $t1, 0x16($t3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 11), 22), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d954) {
            ctx->pc = 0x17D968u;
            goto label_17d968;
        }
    }
    ctx->pc = 0x17D95Cu;
    // 0x17d95c: 0x2502003f  addiu       $v0, $t0, 0x3F
    ctx->pc = 0x17d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
    // 0x17d960: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17D960u;
    {
        const bool branch_taken_0x17d960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D960u;
        // 0x17d964: 0x21183  sra         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d960) {
            ctx->pc = 0x17D974u;
            goto label_17d974;
        }
    }
    ctx->pc = 0x17D968u;
label_17d968:
    // 0x17d968: 0x2502007f  addiu       $v0, $t0, 0x7F
    ctx->pc = 0x17d968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 127));
    // 0x17d96c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x17d96cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x17d970: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x17d970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_17d974:
    // 0x17d974: 0xa562fffa  sh          $v0, -0x6($t3)
    ctx->pc = 0x17d974u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4294967290), (uint16_t)GPR_U32(ctx, 2));
    // 0x17d978: 0x71001004  plzcw       $v0, $t0
    ctx->pc = 0x17d978u;
    { uint64_t v = GPR_U64(ctx, 8); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x17d97c: 0x70021488  pextlw      $v0, $zero, $v0
    ctx->pc = 0x17d97cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x17d980: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x17d980u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17d984: 0xa5420018  sh          $v0, 0x18($t2)
    ctx->pc = 0x17d984u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x17d988: 0x71201804  plzcw       $v1, $t1
    ctx->pc = 0x17d988u;
    { uint64_t v = GPR_U64(ctx, 9); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x17d98c: 0x70031c88  pextlw      $v1, $zero, $v1
    ctx->pc = 0x17d98cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x17d990: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17d990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17d994: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x17d994u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x17d998: 0xa543001a  sh          $v1, 0x1A($t2)
    ctx->pc = 0x17d998u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x17d99c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x17D99Cu;
    {
        const bool branch_taken_0x17d99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D99Cu;
        // 0x17d9a0: 0xfd400038  sd          $zero, 0x38($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 56), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d99c) {
            ctx->pc = 0x17DA28u;
            goto label_17da28;
        }
    }
    ctx->pc = 0x17D9A4u;
    // 0x17d9a4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17d9a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x17d9a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17d9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d9b0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x17d9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17d9b4: 0x761026  xor         $v0, $v1, $s6
    ctx->pc = 0x17d9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 22));
    // 0x17d9b8: 0x771826  xor         $v1, $v1, $s7
    ctx->pc = 0x17d9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 23));
    // 0x17d9bc: 0x282200a  movz        $a0, $s4, $v0
    ctx->pc = 0x17d9bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
    // 0x17d9c0: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x17d9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x17d9c4: 0xc3200a  movz        $a0, $a2, $v1
    ctx->pc = 0x17d9c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x17d9c8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x17d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17d9cc: 0xe4001b  divu        $zero, $a3, $a0
    ctx->pc = 0x17d9ccu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x17d9d0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17D9D0u;
    {
        const bool branch_taken_0x17d9d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d9d0) {
            ctx->pc = 0x17D9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D9D0u;
            // 0x17d9d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D9D8u;
            goto label_17d9d8;
        }
    }
    ctx->pc = 0x17D9D8u;
label_17d9d8:
    // 0x17d9d8: 0x8f220000  lw          $v0, 0x0($t9)
    ctx->pc = 0x17d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x17d9dc: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x17d9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x17d9e0: 0x8f080000  lw          $t0, 0x0($t8)
    ctx->pc = 0x17d9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x17d9e4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x17d9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x17d9e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17d9ec: 0x8d860004  lw          $a2, 0x4($t4)
    ctx->pc = 0x17d9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x17d9f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17d9f4: 0xad63001c  sw          $v1, 0x1C($t3)
    ctx->pc = 0x17d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 3));
    // 0x17d9f8: 0x1021006  srlv        $v0, $v0, $t0
    ctx->pc = 0x17d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x17d9fc: 0xa5660000  sh          $a2, 0x0($t3)
    ctx->pc = 0x17d9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x17da00: 0xa5620006  sh          $v0, 0x6($t3)
    ctx->pc = 0x17da00u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x17da04: 0xad650020  sw          $a1, 0x20($t3)
    ctx->pc = 0x17da04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 5));
    // 0x17da08: 0xa5710002  sh          $s1, 0x2($t3)
    ctx->pc = 0x17da08u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x17da0c: 0xa5600004  sh          $zero, 0x4($t3)
    ctx->pc = 0x17da0cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x17da10: 0xa5640018  sh          $a0, 0x18($t3)
    ctx->pc = 0x17da10u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x17da14: 0xa5600028  sh          $zero, 0x28($t3)
    ctx->pc = 0x17da14u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x17da18: 0x3812  mflo        $a3
    ctx->pc = 0x17da18u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x17da1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17DA1Cu;
    {
        const bool branch_taken_0x17da1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA1Cu;
        // 0x17da20: 0xa567001a  sh          $a3, 0x1A($t3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 11), 26), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da1c) {
            ctx->pc = 0x17DA60u;
            goto label_17da60;
        }
    }
    ctx->pc = 0x17DA24u;
    // 0x17da24: 0x0  nop
    ctx->pc = 0x17da24u;
    // NOP
label_17da28:
    // 0x17da28: 0x8f220000  lw          $v0, 0x0($t9)
    ctx->pc = 0x17da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x17da2c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x17da2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17da30: 0x8f040000  lw          $a0, 0x0($t8)
    ctx->pc = 0x17da30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x17da34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17da34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17da38: 0xad630020  sw          $v1, 0x20($t3)
    ctx->pc = 0x17da38u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 3));
    // 0x17da3c: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x17da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x17da40: 0xa5600000  sh          $zero, 0x0($t3)
    ctx->pc = 0x17da40u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17da44: 0xa5620006  sh          $v0, 0x6($t3)
    ctx->pc = 0x17da44u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x17da48: 0xa5710002  sh          $s1, 0x2($t3)
    ctx->pc = 0x17da48u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x17da4c: 0xa5600004  sh          $zero, 0x4($t3)
    ctx->pc = 0x17da4cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x17da50: 0xa5600018  sh          $zero, 0x18($t3)
    ctx->pc = 0x17da50u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x17da54: 0xa560001a  sh          $zero, 0x1A($t3)
    ctx->pc = 0x17da54u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x17da58: 0xa5600028  sh          $zero, 0x28($t3)
    ctx->pc = 0x17da58u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x17da5c: 0xad60001c  sw          $zero, 0x1C($t3)
    ctx->pc = 0x17da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
label_17da60:
    // 0x17da60: 0x96a50008  lhu         $a1, 0x8($s5)
    ctx->pc = 0x17da60u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17da64: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x17da64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x17da68: 0x9562fff8  lhu         $v0, -0x8($t3)
    ctx->pc = 0x17da68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967288)));
    // 0x17da6c: 0x34844352  ori         $a0, $a0, 0x4352
    ctx->pc = 0x17da6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17234);
    // 0x17da70: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x17da70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17da74: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x17da74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17da78: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x17da78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17da7c: 0xa5620024  sh          $v0, 0x24($t3)
    ctx->pc = 0x17da7cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x17da80: 0xa5630026  sh          $v1, 0x26($t3)
    ctx->pc = 0x17da80u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x17da84: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x17da84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x17da88: 0x5444000d  bnel        $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x17DA88u;
    {
        const bool branch_taken_0x17da88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x17da88) {
            ctx->pc = 0x17DA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DA88u;
            // 0x17da8c: 0x95630014  lhu         $v1, 0x14($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DAC0u;
            goto label_17dac0;
        }
    }
    ctx->pc = 0x17DA90u;
    // 0x17da90: 0x95820014  lhu         $v0, 0x14($t4)
    ctx->pc = 0x17da90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x17da94: 0xa5620008  sh          $v0, 0x8($t3)
    ctx->pc = 0x17da94u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x17da98: 0x95830016  lhu         $v1, 0x16($t4)
    ctx->pc = 0x17da98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 22)));
    // 0x17da9c: 0xa563000a  sh          $v1, 0xA($t3)
    ctx->pc = 0x17da9cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x17daa0: 0x95820018  lhu         $v0, 0x18($t4)
    ctx->pc = 0x17daa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x17daa4: 0xa562000c  sh          $v0, 0xC($t3)
    ctx->pc = 0x17daa4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x17daa8: 0x9583001a  lhu         $v1, 0x1A($t4)
    ctx->pc = 0x17daa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 26)));
    // 0x17daac: 0xa563000e  sh          $v1, 0xE($t3)
    ctx->pc = 0x17daacu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x17dab0: 0x9582001c  lhu         $v0, 0x1C($t4)
    ctx->pc = 0x17dab0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x17dab4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x17DAB4u;
    {
        const bool branch_taken_0x17dab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAB4u;
        // 0x17dab8: 0xa5620028  sh          $v0, 0x28($t3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 11), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dab4) {
            ctx->pc = 0x17DB14u;
            goto label_17db14;
        }
    }
    ctx->pc = 0x17DABCu;
    // 0x17dabc: 0x0  nop
    ctx->pc = 0x17dabcu;
    // NOP
label_17dac0:
    // 0x17dac0: 0x25840010  addiu       $a0, $t4, 0x10
    ctx->pc = 0x17dac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x17dac4: 0x95620016  lhu         $v0, 0x16($t3)
    ctx->pc = 0x17dac4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 22)));
    // 0x17dac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17dac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dacc: 0xa563000c  sh          $v1, 0xC($t3)
    ctx->pc = 0x17daccu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x17dad0: 0xa562000e  sh          $v0, 0xE($t3)
    ctx->pc = 0x17dad0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x17dad4: 0xa5600008  sh          $zero, 0x8($t3)
    ctx->pc = 0x17dad4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x17dad8: 0xa560000a  sh          $zero, 0xA($t3)
    ctx->pc = 0x17dad8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x17dadc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17DADCu;
    {
        const bool branch_taken_0x17dadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DADCu;
        // 0x17dae0: 0xad6dfff0  sw          $t5, -0x10($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4294967280), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dadc) {
            ctx->pc = 0x17DB00u;
            goto label_17db00;
        }
    }
    ctx->pc = 0x17DAE4u;
    // 0x17dae4: 0x0  nop
    ctx->pc = 0x17dae4u;
    // NOP
label_17dae8:
    // 0x17dae8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17dae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17daec: 0xa1a30000  sb          $v1, 0x0($t5)
    ctx->pc = 0x17daecu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17daf0: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x17daf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x17daf4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17daf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17daf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DAF8u;
    {
        const bool branch_taken_0x17daf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAF8u;
        // 0x17dafc: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17daf8) {
            ctx->pc = 0x17DB0Cu;
            goto label_17db0c;
        }
    }
    ctx->pc = 0x17DB00u;
label_17db00:
    // 0x17db00: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17db00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17db04: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17DB04u;
    {
        const bool branch_taken_0x17db04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB04u;
        // 0x17db08: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db04) {
            ctx->pc = 0x17DAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dae8;
        }
    }
    ctx->pc = 0x17DB0Cu;
label_17db0c:
    // 0x17db0c: 0xa1a00000  sb          $zero, 0x0($t5)
    ctx->pc = 0x17db0cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17db10: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x17db10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_17db14:
    // 0x17db14: 0x8d820008  lw          $v0, 0x8($t4)
    ctx->pc = 0x17db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x17db18: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DB18u;
    {
        const bool branch_taken_0x17db18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17db18) {
            ctx->pc = 0x17DB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DB18u;
            // 0x17db1c: 0x95670010  lhu         $a3, 0x10($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DB2Cu;
            goto label_17db2c;
        }
    }
    ctx->pc = 0x17DB20u;
    // 0x17db20: 0xad60001c  sw          $zero, 0x1C($t3)
    ctx->pc = 0x17db20u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
    // 0x17db24: 0xad600020  sw          $zero, 0x20($t3)
    ctx->pc = 0x17db24u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 0));
    // 0x17db28: 0x95670010  lhu         $a3, 0x10($t3)
    ctx->pc = 0x17db28u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 16)));
label_17db2c:
    // 0x17db2c: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x17db2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17db30: 0xa53bc  dsll32      $t2, $t2, 14
    ctx->pc = 0x17db30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 14));
    // 0x17db34: 0x9563fffc  lhu         $v1, -0x4($t3)
    ctx->pc = 0x17db34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967292)));
    // 0x17db38: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x17db38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17db3c: 0x94cf8  dsll        $t1, $t1, 19
    ctx->pc = 0x17db3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 19);
    // 0x17db40: 0x9568fffa  lhu         $t0, -0x6($t3)
    ctx->pc = 0x17db40u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967290)));
    // 0x17db44: 0x73eb8  dsll        $a3, $a3, 26
    ctx->pc = 0x17db44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 26);
    // 0x17db48: 0x95640012  lhu         $a0, 0x12($t3)
    ctx->pc = 0x17db48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 18)));
    // 0x17db4c: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x17db4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x17db50: 0x95660004  lhu         $a2, 0x4($t3)
    ctx->pc = 0x17db50u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x17db54: 0x843b8  dsll        $t0, $t0, 14
    ctx->pc = 0x17db54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 14);
    // 0x17db58: 0x9562fff8  lhu         $v0, -0x8($t3)
    ctx->pc = 0x17db58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967288)));
    // 0x17db5c: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x17db5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x17db60: 0x8d850008  lw          $a1, 0x8($t4)
    ctx->pc = 0x17db60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x17db64: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x17db64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x17db68: 0x634fc  dsll32      $a2, $a2, 19
    ctx->pc = 0x17db68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 19));
    // 0x17db6c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x17db6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x17db70: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x17db70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x17db74: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x17db74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x17db78: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x17db78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x17db7c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x17db7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x17db80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x17db80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x17db84: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x17db84u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x17db88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17db88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17db8c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x17db8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17db90: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x17db90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x17db94: 0xfd620030  sd          $v0, 0x30($t3)
    ctx->pc = 0x17db94u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 48), GPR_U64(ctx, 2));
    // 0x17db98: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x17db98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x17db9c: 0x25ef0050  addiu       $t7, $t7, 0x50
    ctx->pc = 0x17db9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 80));
    // 0x17dba0: 0x15c0ff4b  bnez        $t6, . + 4 + (-0xB5 << 2)
    ctx->pc = 0x17DBA0u;
    {
        const bool branch_taken_0x17dba0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBA0u;
        // 0x17dba4: 0x256b0050  addiu       $t3, $t3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dba0) {
            ctx->pc = 0x17D8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d8d0;
        }
    }
    ctx->pc = 0x17DBA8u;
label_17dba8:
    // 0x17dba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17dba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dbac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17dbacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17dbb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17dbb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dbb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17dbb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17dbb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17dbb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dbbc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17dbbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17dbc0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17dbc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dbc4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17dbc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17dbc8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17dbc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17dbcc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17dbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17dbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x17DBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBD0u;
        // 0x17dbd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DBD8u;
}
