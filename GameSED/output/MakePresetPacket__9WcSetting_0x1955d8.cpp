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

// Function: MakePresetPacket__9WcSetting
// Address: 0x1955d8 - 0x1956a8
void MakePresetPacket__9WcSetting_0x1955d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakePresetPacket__9WcSetting_0x1955d8");
#endif

    switch (ctx->pc) {
        case 0x1955fcu: goto label_1955fc;
        case 0x19562cu: goto label_19562c;
        case 0x195668u: goto label_195668;
        case 0x195688u: goto label_195688;
        case 0x195694u: goto label_195694;
        default: break;
    }

    ctx->pc = 0x1955d8u;

    // 0x1955d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1955d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1955dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1955dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1955e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1955e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1955e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1955e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1955e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1955ec: 0x26110160  addiu       $s1, $s0, 0x160
    ctx->pc = 0x1955ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x1955f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1955f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1955f4: 0xc05fc52  jal         func_17F148
    ctx->pc = 0x1955F4u;
    SET_GPR_U32(ctx, 31, 0x1955FCu);
    ctx->pc = 0x1955F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955F4u;
    // 0x1955f8: 0x8e05015c  lw          $a1, 0x15C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F148u, 0x1955F4u, 0x1955FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955FCu;
label_1955fc:
    // 0x1955fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1955fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195600: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x195600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x195604: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x195604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x195608: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x195608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19560c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19560cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x195610: 0xae020240  sw          $v0, 0x240($s0)
    ctx->pc = 0x195610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 2));
    // 0x195614: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x195614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195618: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x195618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x19561c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19561Cu;
    {
        const bool branch_taken_0x19561c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x195620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19561Cu;
        // 0x195620: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19561c) {
            ctx->pc = 0x19562Cu;
            goto label_19562c;
        }
    }
    ctx->pc = 0x195624u;
    // 0x195624: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x195624u;
    SET_GPR_U32(ctx, 31, 0x19562Cu);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x195624u, 0x19562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19562Cu;
label_19562c:
    // 0x19562c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19562cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x195630: 0x8e04015c  lw          $a0, 0x15C($s0)
    ctx->pc = 0x195630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x195634: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x195634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x195638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19563c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x19563cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x195640: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x195640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x195644: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x195644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x195648: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x195648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19564c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195650: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x195650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x195654: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x195654u;
    {
        const bool branch_taken_0x195654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x195658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195654u;
        // 0x195658: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195654) {
            ctx->pc = 0x195660u;
            goto label_195660;
        }
    }
    ctx->pc = 0x19565Cu;
    // 0x19565c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x19565cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_195660:
    // 0x195660: 0xc068086  jal         func_1A0218
    ctx->pc = 0x195660u;
    SET_GPR_U32(ctx, 31, 0x195668u);
    ctx->pc = 0x195664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195660u;
    // 0x195664: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x195660u, 0x195668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195668u;
label_195668:
    // 0x195668: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x195668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x19566c: 0x24a582e8  addiu       $a1, $a1, -0x7D18
    ctx->pc = 0x19566cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935272));
    // 0x195670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195674: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x195674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195678: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195678u;
    {
        const bool branch_taken_0x195678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195678u;
        // 0x19567c: 0xae020244  sw          $v0, 0x244($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195678) {
            ctx->pc = 0x19568Cu;
            goto label_19568c;
        }
    }
    ctx->pc = 0x195680u;
    // 0x195680: 0xc068186  jal         func_1A0618
    ctx->pc = 0x195680u;
    SET_GPR_U32(ctx, 31, 0x195688u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x195680u, 0x195688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195688u;
label_195688:
    // 0x195688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19568c:
    // 0x19568c: 0xc065764  jal         func_195D90
    ctx->pc = 0x19568Cu;
    SET_GPR_U32(ctx, 31, 0x195694u);
    ctx->pc = 0x195690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19568Cu;
    // 0x195690: 0x8c850244  lw          $a1, 0x244($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195D90u, 0x19568Cu, 0x195694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195694u;
label_195694:
    // 0x195694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195698: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x195698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19569c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19569cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1956a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1956A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1956A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956A0u;
        // 0x1956a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1956A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1956A8u;
}
