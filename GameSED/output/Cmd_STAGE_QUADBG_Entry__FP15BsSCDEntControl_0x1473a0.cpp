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

// Function: Cmd_STAGE_QUADBG_Entry__FP15BsSCDEntControl
// Address: 0x1473a0 - 0x1474e8
void Cmd_STAGE_QUADBG_Entry__FP15BsSCDEntControl_0x1473a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_STAGE_QUADBG_Entry__FP15BsSCDEntControl_0x1473a0");
#endif

    switch (ctx->pc) {
        case 0x1473d8u: goto label_1473d8;
        case 0x1473e0u: goto label_1473e0;
        case 0x1473e8u: goto label_1473e8;
        case 0x147440u: goto label_147440;
        case 0x14745cu: goto label_14745c;
        default: break;
    }

    ctx->pc = 0x1473a0u;

    // 0x1473a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1473a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1473a4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1473a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1473a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1473a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1473ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1473acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1473b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1473b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1473b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1473b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1473b8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1473b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1473bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1473bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1473c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1473c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1473c4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1473c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1473c8: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1473C8u;
    {
        const bool branch_taken_0x1473c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1473CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1473C8u;
        // 0x1473cc: 0x245026c0  addiu       $s0, $v0, 0x26C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473c8) {
            ctx->pc = 0x147428u;
            goto label_147428;
        }
    }
    ctx->pc = 0x1473D0u;
    // 0x1473d0: 0xc051a02  jal         func_146808
    ctx->pc = 0x1473D0u;
    SET_GPR_U32(ctx, 31, 0x1473D8u);
    ctx->pc = 0x1473D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1473D0u;
    // 0x1473d4: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146808u, 0x1473D0u, 0x1473D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1473D8u;
label_1473d8:
    // 0x1473d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1473d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1473dc: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1473dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1473e0:
    // 0x1473e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1473E0u;
    SET_GPR_U32(ctx, 31, 0x1473E8u);
    ctx->pc = 0x1473E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1473E0u;
    // 0x1473e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1473E0u, 0x1473E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1473E8u;
label_1473e8:
    // 0x1473e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1473e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1473ec: 0x14730004  bne         $v1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1473ECu;
    {
        const bool branch_taken_0x1473ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1473F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1473ECu;
        // 0x1473f0: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473ec) {
            ctx->pc = 0x147400u;
            goto label_147400;
        }
    }
    ctx->pc = 0x1473F4u;
    // 0x1473f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1473F4u;
    {
        const bool branch_taken_0x1473f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1473F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1473F4u;
        // 0x1473f8: 0x34420300  ori         $v0, $v0, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473f4) {
            ctx->pc = 0x147408u;
            goto label_147408;
        }
    }
    ctx->pc = 0x1473FCu;
    // 0x1473fc: 0x0  nop
    ctx->pc = 0x1473fcu;
    // NOP
label_147400:
    // 0x147400: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x147400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x147404: 0x34420110  ori         $v0, $v0, 0x110
    ctx->pc = 0x147404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
label_147408:
    // 0x147408: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x147408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x14740c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14740cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x147410: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x147410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x147414: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x147414u;
    {
        const bool branch_taken_0x147414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147414u;
        // 0x147418: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147414) {
            ctx->pc = 0x1473E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1473e0;
        }
    }
    ctx->pc = 0x14741Cu;
    // 0x14741c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x14741Cu;
    {
        const bool branch_taken_0x14741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14741Cu;
        // 0x147420: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14741c) {
            ctx->pc = 0x1474D0u;
            goto label_1474d0;
        }
    }
    ctx->pc = 0x147424u;
    // 0x147424: 0x0  nop
    ctx->pc = 0x147424u;
    // NOP
label_147428:
    // 0x147428: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x147428u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14742c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147430: 0x56420027  bnel        $s2, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x147430u;
    {
        const bool branch_taken_0x147430 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x147430) {
            ctx->pc = 0x147434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147430u;
            // 0x147434: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1474D0u;
            goto label_1474d0;
        }
    }
    ctx->pc = 0x147438u;
    // 0x147438: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x147438u;
    SET_GPR_U32(ctx, 31, 0x147440u);
    ctx->pc = 0x14743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147438u;
    // 0x14743c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x147438u, 0x147440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147440u;
label_147440:
    // 0x147440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x147440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147444: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x147444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x147448: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x147448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14744c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14744cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x147450: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x147450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x147454: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x147454u;
    SET_GPR_U32(ctx, 31, 0x14745Cu);
    ctx->pc = 0x147458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147454u;
    // 0x147458: 0x24700070  addiu       $s0, $v1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x147454u, 0x14745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14745Cu;
label_14745c:
    // 0x14745c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14745cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147464: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x147464u;
    {
        const bool branch_taken_0x147464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x147464) {
            ctx->pc = 0x147468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147464u;
            // 0x147468: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1474B0u;
            goto label_1474b0;
        }
    }
    ctx->pc = 0x14746Cu;
    // 0x14746c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x14746cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x147470: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x147470u;
    {
        const bool branch_taken_0x147470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147470) {
            ctx->pc = 0x147488u;
            goto label_147488;
        }
    }
    ctx->pc = 0x147478u;
    // 0x147478: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x147478u;
    {
        const bool branch_taken_0x147478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147478) {
            ctx->pc = 0x14747Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147478u;
            // 0x14747c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1474A8u;
            goto label_1474a8;
        }
    }
    ctx->pc = 0x147480u;
    // 0x147480: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x147480u;
    {
        const bool branch_taken_0x147480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147480u;
        // 0x147484: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147480) {
            ctx->pc = 0x1474D0u;
            goto label_1474d0;
        }
    }
    ctx->pc = 0x147488u;
label_147488:
    // 0x147488: 0x5072000b  beql        $v1, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x147488u;
    {
        const bool branch_taken_0x147488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x147488) {
            ctx->pc = 0x14748Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147488u;
            // 0x14748c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1474B8u;
            goto label_1474b8;
        }
    }
    ctx->pc = 0x147490u;
    // 0x147490: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x147490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x147494: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x147494u;
    {
        const bool branch_taken_0x147494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x147494) {
            ctx->pc = 0x147498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147494u;
            // 0x147498: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1474C0u;
            goto label_1474c0;
        }
    }
    ctx->pc = 0x14749Cu;
    // 0x14749c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14749Cu;
    {
        const bool branch_taken_0x14749c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1474A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14749Cu;
        // 0x1474a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14749c) {
            ctx->pc = 0x1474D0u;
            goto label_1474d0;
        }
    }
    ctx->pc = 0x1474A4u;
    // 0x1474a4: 0x0  nop
    ctx->pc = 0x1474a4u;
    // NOP
label_1474a8:
    // 0x1474a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1474A8u;
    {
        const bool branch_taken_0x1474a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1474ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1474A8u;
        // 0x1474ac: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1474a8) {
            ctx->pc = 0x1474C4u;
            goto label_1474c4;
        }
    }
    ctx->pc = 0x1474B0u;
label_1474b0:
    // 0x1474b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1474B0u;
    {
        const bool branch_taken_0x1474b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1474B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1474B0u;
        // 0x1474b4: 0x34420003  ori         $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1474b0) {
            ctx->pc = 0x1474C8u;
            goto label_1474c8;
        }
    }
    ctx->pc = 0x1474B8u;
label_1474b8:
    // 0x1474b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1474B8u;
    {
        const bool branch_taken_0x1474b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1474BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1474B8u;
        // 0x1474bc: 0x34420024  ori         $v0, $v0, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1474b8) {
            ctx->pc = 0x1474C8u;
            goto label_1474c8;
        }
    }
    ctx->pc = 0x1474C0u;
label_1474c0:
    // 0x1474c0: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x1474c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_1474c4:
    // 0x1474c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1474c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1474c8:
    // 0x1474c8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1474c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1474cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1474ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1474d0:
    // 0x1474d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1474d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1474d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1474d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1474d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1474d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1474dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1474dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1474e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1474E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1474E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1474E0u;
        // 0x1474e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1474E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1474E8u;
}
