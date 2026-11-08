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

// Function: TankParamEvaluate__7ApcTanki
// Address: 0x14d858 - 0x14dc68
void TankParamEvaluate__7ApcTanki_0x14d858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankParamEvaluate__7ApcTanki_0x14d858");
#endif

    switch (ctx->pc) {
        case 0x14d8ccu: goto label_14d8cc;
        case 0x14d8d8u: goto label_14d8d8;
        case 0x14d8e4u: goto label_14d8e4;
        case 0x14d8f0u: goto label_14d8f0;
        case 0x14d90cu: goto label_14d90c;
        case 0x14d954u: goto label_14d954;
        case 0x14d984u: goto label_14d984;
        case 0x14d99cu: goto label_14d99c;
        case 0x14d9b4u: goto label_14d9b4;
        case 0x14d9d4u: goto label_14d9d4;
        case 0x14d9e8u: goto label_14d9e8;
        case 0x14da2cu: goto label_14da2c;
        case 0x14da8cu: goto label_14da8c;
        case 0x14daa4u: goto label_14daa4;
        case 0x14dabcu: goto label_14dabc;
        case 0x14daecu: goto label_14daec;
        case 0x14db28u: goto label_14db28;
        case 0x14db40u: goto label_14db40;
        case 0x14db5cu: goto label_14db5c;
        default: break;
    }

    ctx->pc = 0x14d858u;

    // 0x14d858: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14d858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14d85c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14d860: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d864: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14d864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d868: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14d868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14d86c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14d86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d870: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14d870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14d874: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14d874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14d878: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14d878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14d87c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x14d87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x14d880: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x14d880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x14d884: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x14d884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x14d888: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D888u;
    {
        const bool branch_taken_0x14d888 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D888u;
        // 0x14d88c: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d888) {
            ctx->pc = 0x14D898u;
            goto label_14d898;
        }
    }
    ctx->pc = 0x14D890u;
    // 0x14d890: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14D890u;
    {
        const bool branch_taken_0x14d890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D890u;
        // 0x14d894: 0x8e300260  lw          $s0, 0x260($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d890) {
            ctx->pc = 0x14D89Cu;
            goto label_14d89c;
        }
    }
    ctx->pc = 0x14D898u;
label_14d898:
    // 0x14d898: 0xae300260  sw          $s0, 0x260($s1)
    ctx->pc = 0x14d898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 16));
label_14d89c:
    // 0x14d89c: 0x26250260  addiu       $a1, $s1, 0x260
    ctx->pc = 0x14d89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
    // 0x14d8a0: 0x2404ff1f  addiu       $a0, $zero, -0xE1
    ctx->pc = 0x14d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x14d8a4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x14d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14d8a8: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x14d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x14d8ac: 0x3442f8ff  ori         $v0, $v0, 0xF8FF
    ctx->pc = 0x14d8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63743);
    // 0x14d8b0: 0xaca00104  sw          $zero, 0x104($a1)
    ctx->pc = 0x14d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
    // 0x14d8b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x14d8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14d8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14d8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14d8c0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x14d8c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d8c4: 0xc046540  jal         func_119500
    ctx->pc = 0x14D8C4u;
    SET_GPR_U32(ctx, 31, 0x14D8CCu);
    ctx->pc = 0x14D8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D8C4u;
    // 0x14d8c8: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119500u, 0x14D8C4u, 0x14D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D8CCu;
label_14d8cc:
    // 0x14d8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8d0: 0xc046540  jal         func_119500
    ctx->pc = 0x14D8D0u;
    SET_GPR_U32(ctx, 31, 0x14D8D8u);
    ctx->pc = 0x14D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D8D0u;
    // 0x14d8d4: 0x8c520018  lw          $s2, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119500u, 0x14D8D0u, 0x14D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D8D8u;
label_14d8d8:
    // 0x14d8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8dc: 0xc046540  jal         func_119500
    ctx->pc = 0x14D8DCu;
    SET_GPR_U32(ctx, 31, 0x14D8E4u);
    ctx->pc = 0x14D8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D8DCu;
    // 0x14d8e0: 0x8c55001c  lw          $s5, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119500u, 0x14D8DCu, 0x14D8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D8E4u;
label_14d8e4:
    // 0x14d8e4: 0x8c560020  lw          $s6, 0x20($v0)
    ctx->pc = 0x14d8e4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x14d8e8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x14d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x14d8ec: 0x0  nop
    ctx->pc = 0x14d8ecu;
    // NOP
label_14d8f0:
    // 0x14d8f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14d8f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x14d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14d8f8: 0x8c5006a8  lw          $s0, 0x6A8($v0)
    ctx->pc = 0x14d8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1704)));
    // 0x14d8fc: 0x5203009a  beql        $s0, $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x14D8FCu;
    {
        const bool branch_taken_0x14d8fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d8fc) {
            ctx->pc = 0x14D900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D8FCu;
            // 0x14d900: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DB68u;
            goto label_14db68;
        }
    }
    ctx->pc = 0x14D904u;
    // 0x14d904: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14D904u;
    SET_GPR_U32(ctx, 31, 0x14D90Cu);
    ctx->pc = 0x14D908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D904u;
    // 0x14d908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14D904u, 0x14D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D90Cu;
label_14d90c:
    // 0x14d90c: 0x2684ffff  addiu       $a0, $s4, -0x1
    ctx->pc = 0x14d90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x14d910: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x14d910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x14d914: 0x2c82000b  sltiu       $v0, $a0, 0xB
    ctx->pc = 0x14d914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x14d918: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x14D918u;
    {
        const bool branch_taken_0x14d918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D918u;
        // 0x14d91c: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d918) {
            ctx->pc = 0x14DB64u;
            goto label_14db64;
        }
    }
    ctx->pc = 0x14D920u;
    // 0x14d920: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x14d920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14d924: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x14d924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x14d928: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14d928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d92c: 0x8c636c60  lw          $v1, 0x6C60($v1)
    ctx->pc = 0x14d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27744)));
    // 0x14d930: 0x600008  jr          $v1
    ctx->pc = 0x14D930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D938u: goto label_14d938;
            case 0x14D978u: goto label_14d978;
            case 0x14D9C8u: goto label_14d9c8;
            case 0x14DA80u: goto label_14da80;
            case 0x14DAD0u: goto label_14dad0;
            case 0x14DB20u: goto label_14db20;
            case 0x14DB38u: goto label_14db38;
            case 0x14DB50u: goto label_14db50;
            case 0x14DB64u: goto label_14db64;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D930u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14D938u;
label_14d938:
    // 0x14d938: 0x24020204  addiu       $v0, $zero, 0x204
    ctx->pc = 0x14d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x14d93c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D93Cu;
    {
        const bool branch_taken_0x14d93c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D93Cu;
        // 0x14d940: 0x2402020b  addiu       $v0, $zero, 0x20B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d93c) {
            ctx->pc = 0x14D954u;
            goto label_14d954;
        }
    }
    ctx->pc = 0x14D944u;
    // 0x14d944: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14d944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14d948: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x14d948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x14d94c: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x14d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    // 0x14d950: 0x2402020b  addiu       $v0, $zero, 0x20B
    ctx->pc = 0x14d950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
label_14d954:
    // 0x14d954: 0x56020084  bnel        $s0, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x14D954u;
    {
        const bool branch_taken_0x14d954 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x14d954) {
            ctx->pc = 0x14D958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D954u;
            // 0x14d958: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DB68u;
            goto label_14db68;
        }
    }
    ctx->pc = 0x14D95Cu;
    // 0x14d95c: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14d960: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x14d960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x14d964: 0x2404020b  addiu       $a0, $zero, 0x20B
    ctx->pc = 0x14d964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
    // 0x14d968: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14d968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14d96c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x14D96Cu;
    {
        const bool branch_taken_0x14d96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D96Cu;
        // 0x14d970: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d96c) {
            ctx->pc = 0x14DB54u;
            goto label_14db54;
        }
    }
    ctx->pc = 0x14D974u;
    // 0x14d974: 0x0  nop
    ctx->pc = 0x14d974u;
    // NOP
label_14d978:
    // 0x14d978: 0xc79481c0  lwc1        $f20, -0x7E40($gp)
    ctx->pc = 0x14d978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14d97c: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14D97Cu;
    SET_GPR_U32(ctx, 31, 0x14D984u);
    ctx->pc = 0x14D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D97Cu;
    // 0x14d980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14D97Cu, 0x14D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D984u;
label_14d984:
    // 0x14d984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d988: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x14d988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d98c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14d98cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14d990: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14d990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14d994: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14D994u;
    SET_GPR_U32(ctx, 31, 0x14D99Cu);
    ctx->pc = 0x14D998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D994u;
    // 0x14d998: 0xe6200314  swc1        $f0, 0x314($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 788), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14D994u, 0x14D99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D99Cu;
label_14d99c:
    // 0x14d99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9a0: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x14d9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d9a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14d9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14d9a8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14d9a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14d9ac: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14D9ACu;
    SET_GPR_U32(ctx, 31, 0x14D9B4u);
    ctx->pc = 0x14D9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D9ACu;
    // 0x14d9b0: 0xe6200318  swc1        $f0, 0x318($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 792), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14D9ACu, 0x14D9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9B4u;
label_14d9b4:
    // 0x14d9b4: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x14d9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d9b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14d9b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14d9bc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14d9bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14d9c0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x14D9C0u;
    {
        const bool branch_taken_0x14d9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D9C0u;
        // 0x14d9c4: 0xe620031c  swc1        $f0, 0x31C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 796), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9c0) {
            ctx->pc = 0x14DB64u;
            goto label_14db64;
        }
    }
    ctx->pc = 0x14D9C8u;
label_14d9c8:
    // 0x14d9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9cc: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14D9CCu;
    SET_GPR_U32(ctx, 31, 0x14D9D4u);
    ctx->pc = 0x14D9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D9CCu;
    // 0x14d9d0: 0x24130040  addiu       $s3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14D9CCu, 0x14D9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9D4u;
label_14d9d4:
    // 0x14d9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9d8: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x14d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d9dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14d9dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14d9e0: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14D9E0u;
    SET_GPR_U32(ctx, 31, 0x14D9E8u);
    ctx->pc = 0x14D9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D9E0u;
    // 0x14d9e4: 0xe6200300  swc1        $f0, 0x300($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 768), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14D9E0u, 0x14D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9E8u;
label_14d9e8:
    // 0x14d9e8: 0xc78381c4  lwc1        $f3, -0x7E3C($gp)
    ctx->pc = 0x14d9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14d9ec: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x14d9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d9f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14d9f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14d9f4: 0x2402050a  addiu       $v0, $zero, 0x50A
    ctx->pc = 0x14d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x14d9f8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x14d9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x14d9fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14d9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14da00: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x14da00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x14da04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14da04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14da08: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x14da08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x14da0c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14da0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14da10: 0xe6200354  swc1        $f0, 0x354($s1)
    ctx->pc = 0x14da10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 852), bits); }
    // 0x14da14: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x14da14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x14da18: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DA18u;
    {
        const bool branch_taken_0x14da18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA18u;
        // 0x14da1c: 0xe6220358  swc1        $f2, 0x358($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 856), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da18) {
            ctx->pc = 0x14DA2Cu;
            goto label_14da2c;
        }
    }
    ctx->pc = 0x14DA20u;
    // 0x14da20: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14da20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14da24: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x14da24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x14da28: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x14da28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
label_14da2c:
    // 0x14da2c: 0x2402050c  addiu       $v0, $zero, 0x50C
    ctx->pc = 0x14da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x14da30: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DA30u;
    {
        const bool branch_taken_0x14da30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA30u;
        // 0x14da34: 0x2402050b  addiu       $v0, $zero, 0x50B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da30) {
            ctx->pc = 0x14DA48u;
            goto label_14da48;
        }
    }
    ctx->pc = 0x14DA38u;
    // 0x14da38: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14da38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14da3c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x14da3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x14da40: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x14da40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    // 0x14da44: 0x2402050b  addiu       $v0, $zero, 0x50B
    ctx->pc = 0x14da44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1291));
label_14da48:
    // 0x14da48: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DA48u;
    {
        const bool branch_taken_0x14da48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA48u;
        // 0x14da4c: 0x24020508  addiu       $v0, $zero, 0x508 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da48) {
            ctx->pc = 0x14DA60u;
            goto label_14da60;
        }
    }
    ctx->pc = 0x14DA50u;
    // 0x14da50: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14da54: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x14da54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x14da58: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x14da58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    // 0x14da5c: 0x24020508  addiu       $v0, $zero, 0x508
    ctx->pc = 0x14da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
label_14da60:
    // 0x14da60: 0x56020041  bnel        $s0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x14DA60u;
    {
        const bool branch_taken_0x14da60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x14da60) {
            ctx->pc = 0x14DA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DA60u;
            // 0x14da64: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DB68u;
            goto label_14db68;
        }
    }
    ctx->pc = 0x14DA68u;
    // 0x14da68: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14da6c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x14da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x14da70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14da70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14da74: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x14DA74u;
    {
        const bool branch_taken_0x14da74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA74u;
        // 0x14da78: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da74) {
            ctx->pc = 0x14DB64u;
            goto label_14db64;
        }
    }
    ctx->pc = 0x14DA7Cu;
    // 0x14da7c: 0x0  nop
    ctx->pc = 0x14da7cu;
    // NOP
label_14da80:
    // 0x14da80: 0xc79481c8  lwc1        $f20, -0x7E38($gp)
    ctx->pc = 0x14da80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14da84: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DA84u;
    SET_GPR_U32(ctx, 31, 0x14DA8Cu);
    ctx->pc = 0x14DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA84u;
    // 0x14da88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DA84u, 0x14DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA8Cu;
label_14da8c:
    // 0x14da8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14da8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da90: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x14da90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14da94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14da94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14da98: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14da98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14da9c: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DA9Cu;
    SET_GPR_U32(ctx, 31, 0x14DAA4u);
    ctx->pc = 0x14DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA9Cu;
    // 0x14daa0: 0xe6200334  swc1        $f0, 0x334($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 820), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DA9Cu, 0x14DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DAA4u;
label_14daa4:
    // 0x14daa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14daa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14daa8: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x14daa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14daac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14daacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14dab0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14dab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14dab4: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DAB4u;
    SET_GPR_U32(ctx, 31, 0x14DABCu);
    ctx->pc = 0x14DAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DAB4u;
    // 0x14dab8: 0xe6200338  swc1        $f0, 0x338($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DAB4u, 0x14DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DABCu;
label_14dabc:
    // 0x14dabc: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x14dabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dac0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14dac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14dac4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14dac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14dac8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x14DAC8u;
    {
        const bool branch_taken_0x14dac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAC8u;
        // 0x14dacc: 0xe620033c  swc1        $f0, 0x33C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 828), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dac8) {
            ctx->pc = 0x14DB64u;
            goto label_14db64;
        }
    }
    ctx->pc = 0x14DAD0u;
label_14dad0:
    // 0x14dad0: 0x24020701  addiu       $v0, $zero, 0x701
    ctx->pc = 0x14dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1793));
    // 0x14dad4: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DAD4u;
    {
        const bool branch_taken_0x14dad4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAD4u;
        // 0x14dad8: 0x24020702  addiu       $v0, $zero, 0x702 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1794));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dad4) {
            ctx->pc = 0x14DAECu;
            goto label_14daec;
        }
    }
    ctx->pc = 0x14DADCu;
    // 0x14dadc: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14dae0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x14dae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x14dae4: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x14dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    // 0x14dae8: 0x24020702  addiu       $v0, $zero, 0x702
    ctx->pc = 0x14dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1794));
label_14daec:
    // 0x14daec: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DAECu;
    {
        const bool branch_taken_0x14daec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAECu;
        // 0x14daf0: 0x24020703  addiu       $v0, $zero, 0x703 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1795));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14daec) {
            ctx->pc = 0x14DB04u;
            goto label_14db04;
        }
    }
    ctx->pc = 0x14DAF4u;
    // 0x14daf4: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14daf8: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x14daf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x14dafc: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x14dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    // 0x14db00: 0x24020703  addiu       $v0, $zero, 0x703
    ctx->pc = 0x14db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1795));
label_14db04:
    // 0x14db04: 0x56020018  bnel        $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14DB04u;
    {
        const bool branch_taken_0x14db04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x14db04) {
            ctx->pc = 0x14DB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DB04u;
            // 0x14db08: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DB68u;
            goto label_14db68;
        }
    }
    ctx->pc = 0x14DB0Cu;
    // 0x14db0c: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14db10: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x14db10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x14db14: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14DB14u;
    {
        const bool branch_taken_0x14db14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB14u;
        // 0x14db18: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db14) {
            ctx->pc = 0x14DB64u;
            goto label_14db64;
        }
    }
    ctx->pc = 0x14DB1Cu;
    // 0x14db1c: 0x0  nop
    ctx->pc = 0x14db1cu;
    // NOP
label_14db20:
    // 0x14db20: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DB20u;
    SET_GPR_U32(ctx, 31, 0x14DB28u);
    ctx->pc = 0x14DB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DB20u;
    // 0x14db24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DB20u, 0x14DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB28u;
label_14db28:
    // 0x14db28: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x14db28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14db2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14db2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14db30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14DB30u;
    {
        const bool branch_taken_0x14db30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB30u;
        // 0x14db34: 0xe620030c  swc1        $f0, 0x30C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 780), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db30) {
            ctx->pc = 0x14DB64u;
            goto label_14db64;
        }
    }
    ctx->pc = 0x14DB38u;
label_14db38:
    // 0x14db38: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DB38u;
    SET_GPR_U32(ctx, 31, 0x14DB40u);
    ctx->pc = 0x14DB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DB38u;
    // 0x14db3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DB38u, 0x14DB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB40u;
label_14db40:
    // 0x14db40: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x14db40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14db44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14db44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14db48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14DB48u;
    {
        const bool branch_taken_0x14db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB48u;
        // 0x14db4c: 0xe6200364  swc1        $f0, 0x364($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 868), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db48) {
            ctx->pc = 0x14DB64u;
            goto label_14db64;
        }
    }
    ctx->pc = 0x14DB50u;
label_14db50:
    // 0x14db50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14db50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14db54:
    // 0x14db54: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DB54u;
    SET_GPR_U32(ctx, 31, 0x14DB5Cu);
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DB54u, 0x14DB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB5Cu;
label_14db5c:
    // 0x14db5c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x14db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x14db60: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x14db60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_14db64:
    // 0x14db64: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x14db64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_14db68:
    // 0x14db68: 0x2a82000c  slti        $v0, $s4, 0xC
    ctx->pc = 0x14db68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x14db6c: 0x1440ff60  bnez        $v0, . + 4 + (-0xA0 << 2)
    ctx->pc = 0x14DB6Cu;
    {
        const bool branch_taken_0x14db6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB6Cu;
        // 0x14db70: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db6c) {
            ctx->pc = 0x14D8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d8f0;
        }
    }
    ctx->pc = 0x14DB74u;
    // 0x14db74: 0xae320194  sw          $s2, 0x194($s1)
    ctx->pc = 0x14db74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 18));
    // 0x14db78: 0x262406dc  addiu       $a0, $s1, 0x6DC
    ctx->pc = 0x14db78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    // 0x14db7c: 0x8e230264  lw          $v1, 0x264($s1)
    ctx->pc = 0x14db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14db80: 0x2406fcff  addiu       $a2, $zero, -0x301
    ctx->pc = 0x14db80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
    // 0x14db84: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x14db84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14db88: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x14db88u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14db8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14db8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14db90: 0x30630300  andi        $v1, $v1, 0x300
    ctx->pc = 0x14db90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)768);
    // 0x14db94: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x14db94u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14db98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14db98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14db9c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14db9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x14dba0: 0x2625071c  addiu       $a1, $s1, 0x71C
    ctx->pc = 0x14dba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1820));
    // 0x14dba4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14dba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14dba8: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x14dba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x14dbac: 0xe6200268  swc1        $f0, 0x268($s1)
    ctx->pc = 0x14dbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 616), bits); }
    // 0x14dbb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14dbb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DBB4u;
    {
        const bool branch_taken_0x14dbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBB4u;
        // 0x14dbb8: 0xe621026c  swc1        $f1, 0x26C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbb4) {
            ctx->pc = 0x14DBD0u;
            goto label_14dbd0;
        }
    }
    ctx->pc = 0x14DBBCu;
    // 0x14dbbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14dbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dbc0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x14dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14dbc4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14dbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x14dbc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14dbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14dbcc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x14dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_14dbd0:
    // 0x14dbd0: 0x2624075c  addiu       $a0, $s1, 0x75C
    ctx->pc = 0x14dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1884));
    // 0x14dbd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14dbd8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DBD8u;
    {
        const bool branch_taken_0x14dbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBD8u;
        // 0x14dbdc: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbd8) {
            ctx->pc = 0x14DBF4u;
            goto label_14dbf4;
        }
    }
    ctx->pc = 0x14DBE0u;
    // 0x14dbe0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x14dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14dbe4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14dbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x14dbe8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14dbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14dbec: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x14dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x14dbf0: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x14dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_14dbf4:
    // 0x14dbf4: 0x8c440114  lw          $a0, 0x114($v0)
    ctx->pc = 0x14dbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x14dbf8: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14DBF8u;
    {
        const bool branch_taken_0x14dbf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBF8u;
        // 0x14dbfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbf8) {
            ctx->pc = 0x14DC40u;
            goto label_14dc40;
        }
    }
    ctx->pc = 0x14DC00u;
    // 0x14dc00: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x14dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x14dc04: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x14dc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x14dc08: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x14dc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x14dc0c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x14DC0Cu;
    {
        const bool branch_taken_0x14dc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dc0c) {
            ctx->pc = 0x14DC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DC0Cu;
            // 0x14dc10: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DC44u;
            goto label_14dc44;
        }
    }
    ctx->pc = 0x14DC14u;
    // 0x14dc14: 0x8e230690  lw          $v1, 0x690($s1)
    ctx->pc = 0x14dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14dc18: 0x8c620c00  lw          $v0, 0xC00($v1)
    ctx->pc = 0x14dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3072)));
    // 0x14dc1c: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x14dc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x14dc20: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x14dc20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x14dc24: 0x54440007  bnel        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14DC24u;
    {
        const bool branch_taken_0x14dc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14dc24) {
            ctx->pc = 0x14DC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DC24u;
            // 0x14dc28: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DC44u;
            goto label_14dc44;
        }
    }
    ctx->pc = 0x14DC2Cu;
    // 0x14dc2c: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14dc30: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x14dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x14dc34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14dc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14dc38: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x14dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    // 0x14dc3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14dc3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14dc40:
    // 0x14dc40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14dc40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14dc44:
    // 0x14dc44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14dc44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dc48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14dc48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14dc4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14dc4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dc50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x14dc50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14dc54: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x14dc54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14dc58: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x14dc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14dc5c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x14dc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14dc60: 0x3e00008  jr          $ra
    ctx->pc = 0x14DC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC60u;
        // 0x14dc64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DC68u;
}
