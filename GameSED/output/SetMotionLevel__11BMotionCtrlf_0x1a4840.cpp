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

// Function: SetMotionLevel__11BMotionCtrlf
// Address: 0x1a4840 - 0x1a48d4
void SetMotionLevel__11BMotionCtrlf_0x1a4840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMotionLevel__11BMotionCtrlf_0x1a4840");
#endif

    switch (ctx->pc) {
        case 0x1a4840u: goto label_1a4840;
        case 0x1a4844u: goto label_1a4844;
        case 0x1a4848u: goto label_1a4848;
        case 0x1a484cu: goto label_1a484c;
        case 0x1a4850u: goto label_1a4850;
        case 0x1a4854u: goto label_1a4854;
        case 0x1a4858u: goto label_1a4858;
        case 0x1a485cu: goto label_1a485c;
        case 0x1a4860u: goto label_1a4860;
        case 0x1a4864u: goto label_1a4864;
        case 0x1a4868u: goto label_1a4868;
        case 0x1a486cu: goto label_1a486c;
        case 0x1a4870u: goto label_1a4870;
        case 0x1a4874u: goto label_1a4874;
        case 0x1a4878u: goto label_1a4878;
        case 0x1a487cu: goto label_1a487c;
        case 0x1a4880u: goto label_1a4880;
        case 0x1a4884u: goto label_1a4884;
        case 0x1a4888u: goto label_1a4888;
        case 0x1a488cu: goto label_1a488c;
        case 0x1a4890u: goto label_1a4890;
        case 0x1a4894u: goto label_1a4894;
        case 0x1a4898u: goto label_1a4898;
        case 0x1a489cu: goto label_1a489c;
        case 0x1a48a0u: goto label_1a48a0;
        case 0x1a48a4u: goto label_1a48a4;
        case 0x1a48a8u: goto label_1a48a8;
        case 0x1a48acu: goto label_1a48ac;
        case 0x1a48b0u: goto label_1a48b0;
        case 0x1a48b4u: goto label_1a48b4;
        case 0x1a48b8u: goto label_1a48b8;
        case 0x1a48bcu: goto label_1a48bc;
        case 0x1a48c0u: goto label_1a48c0;
        case 0x1a48c4u: goto label_1a48c4;
        case 0x1a48c8u: goto label_1a48c8;
        case 0x1a48ccu: goto label_1a48cc;
        case 0x1a48d0u: goto label_1a48d0;
        default: break;
    }

    ctx->pc = 0x1a4840u;

label_1a4840:
    // 0x1a4840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a4844:
    // 0x1a4844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4848:
    // 0x1a4848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a484c:
    // 0x1a484c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a484cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a4850:
    // 0x1a4850: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a4850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a4854:
    // 0x1a4854: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a4854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a4858:
    // 0x1a4858: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a485c:
    // 0x1a485c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a4860:
    if (ctx->pc == 0x1A4860u) {
        ctx->pc = 0x1A4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A485Cu;
        // 0x1a4860: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4864u;
        goto label_1a4864;
    }
    ctx->pc = 0x1A485Cu;
    {
        const bool branch_taken_0x1a485c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A485Cu;
        // 0x1a4860: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a485c) {
            ctx->pc = 0x1A4878u;
            goto label_1a4878;
        }
    }
    ctx->pc = 0x1A4864u;
label_1a4864:
    // 0x1a4864: 0x40f809  jalr        $v0
label_1a4868:
    if (ctx->pc == 0x1A4868u) {
        ctx->pc = 0x1A4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4864u;
        // 0x1a4868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A486Cu;
        goto label_1a486c;
    }
    ctx->pc = 0x1A4864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A486Cu);
        ctx->pc = 0x1A4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4864u;
        // 0x1a4868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4864u, 0x1A486Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A486Cu;
label_1a486c:
    // 0x1a486c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a4870:
    if (ctx->pc == 0x1A4870u) {
        ctx->pc = 0x1A4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A486Cu;
        // 0x1a4870: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4874u;
        goto label_1a4874;
    }
    ctx->pc = 0x1A486Cu;
    {
        const bool branch_taken_0x1a486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A486Cu;
        // 0x1a4870: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a486c) {
            ctx->pc = 0x1A48A8u;
            goto label_1a48a8;
        }
    }
    ctx->pc = 0x1A4874u;
label_1a4874:
    // 0x1a4874: 0x0  nop
    ctx->pc = 0x1a4874u;
    // NOP
label_1a4878:
    // 0x1a4878: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a4878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1a487c:
    // 0x1a487c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a4880:
    if (ctx->pc == 0x1A4880u) {
        ctx->pc = 0x1A4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A487Cu;
        // 0x1a4880: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4884u;
        goto label_1a4884;
    }
    ctx->pc = 0x1A487Cu;
    {
        const bool branch_taken_0x1a487c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A487Cu;
        // 0x1a4880: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a487c) {
            ctx->pc = 0x1A4898u;
            goto label_1a4898;
        }
    }
    ctx->pc = 0x1A4884u;
label_1a4884:
    // 0x1a4884: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a4884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a4888:
    // 0x1a4888: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a4888u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1a488c:
    // 0x1a488c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a4890:
    if (ctx->pc == 0x1A4890u) {
        ctx->pc = 0x1A4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A488Cu;
        // 0x1a4890: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4894u;
        goto label_1a4894;
    }
    ctx->pc = 0x1A488Cu;
    {
        const bool branch_taken_0x1a488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A488Cu;
        // 0x1a4890: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a488c) {
            ctx->pc = 0x1A48A8u;
            goto label_1a48a8;
        }
    }
    ctx->pc = 0x1A4894u;
label_1a4894:
    // 0x1a4894: 0x0  nop
    ctx->pc = 0x1a4894u;
    // NOP
label_1a4898:
    // 0x1a4898: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a489c:
    // 0x1a489c: 0x24a59238  addiu       $a1, $a1, -0x6DC8
    ctx->pc = 0x1a489cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939192));
label_1a48a0:
    // 0x1a48a0: 0xc068186  jal         func_1A0618
label_1a48a4:
    if (ctx->pc == 0x1A48A4u) {
        ctx->pc = 0x1A48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48A0u;
        // 0x1a48a4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A48A8u;
        goto label_1a48a8;
    }
    ctx->pc = 0x1A48A0u;
    SET_GPR_U32(ctx, 31, 0x1A48A8u);
    ctx->pc = 0x1A48A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A48A0u;
    // 0x1a48a4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A48A0u, 0x1A48A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48A8u;
label_1a48a8:
    // 0x1a48a8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a48ac:
    // 0x1a48ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a48b0:
    if (ctx->pc == 0x1A48B0u) {
        ctx->pc = 0x1A48B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48ACu;
        // 0x1a48b0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A48B4u;
        goto label_1a48b4;
    }
    ctx->pc = 0x1A48ACu;
    {
        const bool branch_taken_0x1a48ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A48B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48ACu;
        // 0x1a48b0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a48ac) {
            ctx->pc = 0x1A48C0u;
            goto label_1a48c0;
        }
    }
    ctx->pc = 0x1A48B4u;
label_1a48b4:
    // 0x1a48b4: 0x40f809  jalr        $v0
label_1a48b8:
    if (ctx->pc == 0x1A48B8u) {
        ctx->pc = 0x1A48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48B4u;
        // 0x1a48b8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A48BCu;
        goto label_1a48bc;
    }
    ctx->pc = 0x1A48B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A48BCu);
        ctx->pc = 0x1A48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48B4u;
        // 0x1a48b8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A48B4u, 0x1A48BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A48BCu;
label_1a48bc:
    // 0x1a48bc: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1a48bcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1a48c0:
    // 0x1a48c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a48c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a48c4:
    // 0x1a48c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a48c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a48c8:
    // 0x1a48c8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1a48c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a48cc:
    // 0x1a48cc: 0x3e00008  jr          $ra
label_1a48d0:
    if (ctx->pc == 0x1A48D0u) {
        ctx->pc = 0x1A48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48CCu;
        // 0x1a48d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A48D4u;
        goto label_fallthrough_0x1a48cc;
    }
    ctx->pc = 0x1A48CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48CCu;
        // 0x1a48d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A48CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a48cc:
    ctx->pc = 0x1A48D4u;
}
