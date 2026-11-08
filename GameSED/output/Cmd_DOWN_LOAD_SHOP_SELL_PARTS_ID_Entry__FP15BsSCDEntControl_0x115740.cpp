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

// Function: Cmd_DOWN_LOAD_SHOP_SELL_PARTS_ID_Entry__FP15BsSCDEntControl
// Address: 0x115740 - 0x1159ac
void Cmd_DOWN_LOAD_SHOP_SELL_PARTS_ID_Entry__FP15BsSCDEntControl_0x115740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DOWN_LOAD_SHOP_SELL_PARTS_ID_Entry__FP15BsSCDEntControl_0x115740");
#endif

    switch (ctx->pc) {
        case 0x115774u: goto label_115774;
        case 0x11577cu: goto label_11577c;
        case 0x115790u: goto label_115790;
        case 0x1157a4u: goto label_1157a4;
        case 0x1158a8u: goto label_1158a8;
        case 0x1158e8u: goto label_1158e8;
        case 0x115910u: goto label_115910;
        case 0x115920u: goto label_115920;
        case 0x115964u: goto label_115964;
        default: break;
    }

    ctx->pc = 0x115740u;

    // 0x115740: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x115740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x115744: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x115744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x115748: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x115748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x11574c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11574cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115750: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x115750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x115754: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x115754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x115758: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x115758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11575c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11575cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x115760: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x115760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x115764: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x115764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x115768: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x115768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x11576c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11576Cu;
    SET_GPR_U32(ctx, 31, 0x115774u);
    ctx->pc = 0x115770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11576Cu;
    // 0x115770: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11576Cu, 0x115774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115774u;
label_115774:
    // 0x115774: 0xc041794  jal         func_105E50
    ctx->pc = 0x115774u;
    SET_GPR_U32(ctx, 31, 0x11577Cu);
    ctx->pc = 0x115778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115774u;
    // 0x115778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E50u, 0x115774u, 0x11577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11577Cu;
label_11577c:
    // 0x11577c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11577cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115780: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x115780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x115784: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x115784u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    // 0x115788: 0x32f0ffff  andi        $s0, $s7, 0xFFFF
    ctx->pc = 0x115788u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x11578c: 0x0  nop
    ctx->pc = 0x11578cu;
    // NOP
label_115790:
    // 0x115790: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115794: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x115794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x115798: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x115798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x11579c: 0xc045360  jal         func_114D80
    ctx->pc = 0x11579Cu;
    SET_GPR_U32(ctx, 31, 0x1157A4u);
    ctx->pc = 0x1157A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11579Cu;
    // 0x1157a0: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x11579Cu, 0x1157A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1157A4u;
label_1157a4:
    // 0x1157a4: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x1157a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1157a8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1157A8u;
    {
        const bool branch_taken_0x1157a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157A8u;
        // 0x1157ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157a8) {
            ctx->pc = 0x115874u;
            goto label_115874;
        }
    }
    ctx->pc = 0x1157B0u;
    // 0x1157b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1157b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1157b4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1157b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1157b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1157b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1157bc: 0x8c6344a0  lw          $v1, 0x44A0($v1)
    ctx->pc = 0x1157bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17568)));
    // 0x1157c0: 0x600008  jr          $v1
    ctx->pc = 0x1157C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1157C8u: goto label_1157c8;
            case 0x1157D8u: goto label_1157d8;
            case 0x1157E8u: goto label_1157e8;
            case 0x1157F8u: goto label_1157f8;
            case 0x115808u: goto label_115808;
            case 0x115818u: goto label_115818;
            case 0x115828u: goto label_115828;
            case 0x115838u: goto label_115838;
            case 0x115848u: goto label_115848;
            case 0x115858u: goto label_115858;
            case 0x115868u: goto label_115868;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1157C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1157C8u;
label_1157c8:
    // 0x1157c8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1157c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1157cc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1157CCu;
    {
        const bool branch_taken_0x1157cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157CCu;
        // 0x1157d0: 0x2444d190  addiu       $a0, $v0, -0x2E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157cc) {
            ctx->pc = 0x115874u;
            goto label_115874;
        }
    }
    ctx->pc = 0x1157D4u;
    // 0x1157d4: 0x0  nop
    ctx->pc = 0x1157d4u;
    // NOP
label_1157d8:
    // 0x1157d8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1157d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1157dc: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x1157dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x1157e0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1157E0u;
    {
        const bool branch_taken_0x1157e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157E0u;
        // 0x1157e4: 0x2444004c  addiu       $a0, $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157e0) {
            ctx->pc = 0x115874u;
            goto label_115874;
        }
    }
    ctx->pc = 0x1157E8u;
label_1157e8:
    // 0x1157e8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1157e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1157ec: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x1157ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x1157f0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1157F0u;
    {
        const bool branch_taken_0x1157f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157F0u;
        // 0x1157f4: 0x2444007c  addiu       $a0, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157f0) {
            ctx->pc = 0x115874u;
            goto label_115874;
        }
    }
    ctx->pc = 0x1157F8u;
label_1157f8:
    // 0x1157f8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1157f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1157fc: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x1157fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115800: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x115800u;
    {
        const bool branch_taken_0x115800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115800u;
        // 0x115804: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115800) {
            ctx->pc = 0x115874u;
            goto label_115874;
        }
    }
    ctx->pc = 0x115808u;
label_115808:
    // 0x115808: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11580c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115810: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x115810u;
    {
        const bool branch_taken_0x115810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115810u;
        // 0x115814: 0x244400e8  addiu       $a0, $v0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115810) {
            ctx->pc = 0x115874u;
            goto label_115874;
        }
    }
    ctx->pc = 0x115818u;
label_115818:
    // 0x115818: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11581c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115820: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115820u;
    {
        const bool branch_taken_0x115820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115820u;
        // 0x115824: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115820) {
            ctx->pc = 0x115874u;
            goto label_115874;
        }
    }
    ctx->pc = 0x115828u;
label_115828:
    // 0x115828: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11582c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115830: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x115830u;
    {
        const bool branch_taken_0x115830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115830u;
        // 0x115834: 0x2444014c  addiu       $a0, $v0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115830) {
            ctx->pc = 0x115874u;
            goto label_115874;
        }
    }
    ctx->pc = 0x115838u;
label_115838:
    // 0x115838: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11583c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115840: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x115840u;
    {
        const bool branch_taken_0x115840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115840u;
        // 0x115844: 0x2444015c  addiu       $a0, $v0, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115840) {
            ctx->pc = 0x115874u;
            goto label_115874;
        }
    }
    ctx->pc = 0x115848u;
label_115848:
    // 0x115848: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11584c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11584cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115850: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x115850u;
    {
        const bool branch_taken_0x115850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115850u;
        // 0x115854: 0x24440180  addiu       $a0, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115850) {
            ctx->pc = 0x115874u;
            goto label_115874;
        }
    }
    ctx->pc = 0x115858u;
label_115858:
    // 0x115858: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11585c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11585cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115860: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x115860u;
    {
        const bool branch_taken_0x115860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115860u;
        // 0x115864: 0x244401a0  addiu       $a0, $v0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115860) {
            ctx->pc = 0x115874u;
            goto label_115874;
        }
    }
    ctx->pc = 0x115868u;
label_115868:
    // 0x115868: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11586c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115870: 0x244401c0  addiu       $a0, $v0, 0x1C0
    ctx->pc = 0x115870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_115874:
    // 0x115874: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x115878: 0x172840  sll         $a1, $s7, 1
    ctx->pc = 0x115878u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x11587c: 0x2446c0a8  addiu       $a2, $v0, -0x3F58
    ctx->pc = 0x11587cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951080));
    // 0x115880: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x115880u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115884: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x115884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x115888: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x115888u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11588c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x11588cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x115890: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x115890u;
    {
        const bool branch_taken_0x115890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115890u;
        // 0x115894: 0x24930004  addiu       $s3, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115890) {
            ctx->pc = 0x115964u;
            goto label_115964;
        }
    }
    ctx->pc = 0x115898u;
    // 0x115898: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x115898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x11589c: 0x17f200  sll         $fp, $s7, 8
    ctx->pc = 0x11589cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 23), 8));
    // 0x1158a0: 0x2495fcb0  addiu       $s5, $a0, -0x350
    ctx->pc = 0x1158a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966448));
    // 0x1158a4: 0x0  nop
    ctx->pc = 0x1158a4u;
    // NOP
label_1158a8:
    // 0x1158a8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1158a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1158ac: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1158ACu;
    {
        const bool branch_taken_0x1158ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1158B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158ACu;
        // 0x1158b0: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158ac) {
            ctx->pc = 0x115940u;
            goto label_115940;
        }
    }
    ctx->pc = 0x1158B4u;
    // 0x1158b4: 0x3d49021  addu        $s2, $fp, $s4
    ctx->pc = 0x1158b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x1158b8: 0x2442c540  addiu       $v0, $v0, -0x3AC0
    ctx->pc = 0x1158b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952256));
    // 0x1158bc: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1158bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1158c0: 0x84620ff0  lh          $v0, 0xFF0($v1)
    ctx->pc = 0x1158c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4080)));
    // 0x1158c4: 0x1052001e  beq         $v0, $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x1158C4u;
    {
        const bool branch_taken_0x1158c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1158C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158C4u;
        // 0x1158c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158c4) {
            ctx->pc = 0x115940u;
            goto label_115940;
        }
    }
    ctx->pc = 0x1158CCu;
    // 0x1158cc: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1158CCu;
    {
        const bool branch_taken_0x1158cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1158D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158CCu;
        // 0x1158d0: 0x128a03  sra         $s1, $s2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158cc) {
            ctx->pc = 0x1158ECu;
            goto label_1158ec;
        }
    }
    ctx->pc = 0x1158D4u;
    // 0x1158d4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1158d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1158d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1158d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1158dc: 0x24454390  addiu       $a1, $v0, 0x4390
    ctx->pc = 0x1158dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17296));
    // 0x1158e0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1158E0u;
    SET_GPR_U32(ctx, 31, 0x1158E8u);
    ctx->pc = 0x1158E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1158E0u;
    // 0x1158e4: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1158E0u, 0x1158E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1158E8u;
label_1158e8:
    // 0x1158e8: 0x128a03  sra         $s1, $s2, 8
    ctx->pc = 0x1158e8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 18), 8));
label_1158ec:
    // 0x1158ec: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1158ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1158f0: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x1158f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x1158f4: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1158f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1158f8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1158f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1158fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1158fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115900: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x115900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x115904: 0x325000ff  andi        $s0, $s2, 0xFF
    ctx->pc = 0x115904u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x115908: 0xc041882  jal         func_106208
    ctx->pc = 0x115908u;
    SET_GPR_U32(ctx, 31, 0x115910u);
    ctx->pc = 0x11590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115908u;
    // 0x11590c: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x115908u, 0x115910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115910u;
label_115910:
    // 0x115910: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x115910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x115914: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x115914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x115918: 0xc041882  jal         func_106208
    ctx->pc = 0x115918u;
    SET_GPR_U32(ctx, 31, 0x115920u);
    ctx->pc = 0x11591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115918u;
    // 0x11591c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x115918u, 0x115920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115920u;
label_115920:
    // 0x115920: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x115920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x115924: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x115924u;
    {
        const bool branch_taken_0x115924 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x115928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115924u;
        // 0x115928: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115924) {
            ctx->pc = 0x115944u;
            goto label_115944;
        }
    }
    ctx->pc = 0x11592Cu;
    // 0x11592c: 0xaed20000  sw          $s2, 0x0($s6)
    ctx->pc = 0x11592cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
    // 0x115930: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x115930u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x115934: 0x8ea20400  lw          $v0, 0x400($s5)
    ctx->pc = 0x115934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1024)));
    // 0x115938: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11593c: 0xaea20400  sw          $v0, 0x400($s5)
    ctx->pc = 0x11593cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1024), GPR_U32(ctx, 2));
label_115940:
    // 0x115940: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_115944:
    // 0x115944: 0x172840  sll         $a1, $s7, 1
    ctx->pc = 0x115944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x115948: 0x2442c0a8  addiu       $v0, $v0, -0x3F58
    ctx->pc = 0x115948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951080));
    // 0x11594c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11594cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x115950: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x115950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x115954: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x115954u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x115958: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x115958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11595c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x11595Cu;
    {
        const bool branch_taken_0x11595c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11595Cu;
        // 0x115960: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11595c) {
            ctx->pc = 0x1158A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1158a8;
        }
    }
    ctx->pc = 0x115964u;
label_115964:
    // 0x115964: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x115964u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x115968: 0x2ae2000c  slti        $v0, $s7, 0xC
    ctx->pc = 0x115968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x11596c: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x11596Cu;
    {
        const bool branch_taken_0x11596c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11596Cu;
        // 0x115970: 0x32f0ffff  andi        $s0, $s7, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11596c) {
            ctx->pc = 0x115790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115790;
        }
    }
    ctx->pc = 0x115974u;
    // 0x115974: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11597c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x11597cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x115980: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x115980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115984: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x115984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115988: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x115988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11598c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11598cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115990: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x115990u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x115994: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x115994u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115998: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x115998u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11599c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x11599cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1159a0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1159a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1159a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1159A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1159A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159A4u;
        // 0x1159a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1159A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1159ACu;
}
