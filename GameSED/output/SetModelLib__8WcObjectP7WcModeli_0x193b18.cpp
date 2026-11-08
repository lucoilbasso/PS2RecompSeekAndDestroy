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

// Function: SetModelLib__8WcObjectP7WcModeli
// Address: 0x193b18 - 0x193bfc
void SetModelLib__8WcObjectP7WcModeli_0x193b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetModelLib__8WcObjectP7WcModeli_0x193b18");
#endif

    switch (ctx->pc) {
        case 0x193b58u: goto label_193b58;
        case 0x193b60u: goto label_193b60;
        case 0x193b68u: goto label_193b68;
        case 0x193bc0u: goto label_193bc0;
        default: break;
    }

    ctx->pc = 0x193b18u;

    // 0x193b18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193b1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193b20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x193b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x193b28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x193b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x193b30: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x193b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b34: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x193B34u;
    {
        const bool branch_taken_0x193b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B34u;
        // 0x193b38: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b34) {
            ctx->pc = 0x193BD8u;
            goto label_193bd8;
        }
    }
    ctx->pc = 0x193B3Cu;
    // 0x193b3c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x193b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x193b40: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x193b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x193b44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x193B44u;
    {
        const bool branch_taken_0x193b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B44u;
        // 0x193b48: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b44) {
            ctx->pc = 0x193B58u;
            goto label_193b58;
        }
    }
    ctx->pc = 0x193B4Cu;
    // 0x193b4c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x193b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x193b50: 0xc068186  jal         func_1A0618
    ctx->pc = 0x193B50u;
    SET_GPR_U32(ctx, 31, 0x193B58u);
    ctx->pc = 0x193B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B50u;
    // 0x193b54: 0x24a58208  addiu       $a1, $a1, -0x7DF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x193B50u, 0x193B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B58u;
label_193b58:
    // 0x193b58: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x193B58u;
    SET_GPR_U32(ctx, 31, 0x193B60u);
    ctx->pc = 0x193B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B58u;
    // 0x193b5c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x193B58u, 0x193B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B60u;
label_193b60:
    // 0x193b60: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x193B60u;
    SET_GPR_U32(ctx, 31, 0x193B68u);
    ctx->pc = 0x193B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B60u;
    // 0x193b64: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x193B60u, 0x193B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B68u;
label_193b68:
    // 0x193b68: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x193b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x193b6c: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x193b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x193b70: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x193b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193b74: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x193b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193b78: 0xae250194  sw          $a1, 0x194($s1)
    ctx->pc = 0x193b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 5));
    // 0x193b7c: 0xe6200190  swc1        $f0, 0x190($s1)
    ctx->pc = 0x193b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 400), bits); }
    // 0x193b80: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x193B80u;
    {
        const bool branch_taken_0x193b80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B80u;
        // 0x193b84: 0xae250158  sw          $a1, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b80) {
            ctx->pc = 0x193BE4u;
            goto label_193be4;
        }
    }
    ctx->pc = 0x193B88u;
    // 0x193b88: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x193b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x193b8c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x193b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x193b90: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x193b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x193b94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x193b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x193b98: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x193B98u;
    {
        const bool branch_taken_0x193b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B98u;
        // 0x193b9c: 0xae24015c  sw          $a0, 0x15C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b98) {
            ctx->pc = 0x193BE4u;
            goto label_193be4;
        }
    }
    ctx->pc = 0x193BA0u;
    // 0x193ba0: 0x26300160  addiu       $s0, $s1, 0x160
    ctx->pc = 0x193ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x193ba4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x193ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x193ba8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x193ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x193bac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x193bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x193bb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x193BB0u;
    {
        const bool branch_taken_0x193bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x193BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BB0u;
        // 0x193bb4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193bb0) {
            ctx->pc = 0x193BC0u;
            goto label_193bc0;
        }
    }
    ctx->pc = 0x193BB8u;
    // 0x193bb8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x193BB8u;
    SET_GPR_U32(ctx, 31, 0x193BC0u);
    ctx->pc = 0x193BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193BB8u;
    // 0x193bbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x193BB8u, 0x193BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193BC0u;
label_193bc0:
    // 0x193bc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x193bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x193bc4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x193bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x193bc8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x193bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x193bcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x193BCCu;
    {
        const bool branch_taken_0x193bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BCCu;
        // 0x193bd0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193bcc) {
            ctx->pc = 0x193BE4u;
            goto label_193be4;
        }
    }
    ctx->pc = 0x193BD4u;
    // 0x193bd4: 0x0  nop
    ctx->pc = 0x193bd4u;
    // NOP
label_193bd8:
    // 0x193bd8: 0xae200158  sw          $zero, 0x158($s1)
    ctx->pc = 0x193bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
    // 0x193bdc: 0xae200194  sw          $zero, 0x194($s1)
    ctx->pc = 0x193bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 0));
    // 0x193be0: 0xae200190  sw          $zero, 0x190($s1)
    ctx->pc = 0x193be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 0));
label_193be4:
    // 0x193be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193be8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193bec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x193becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193bf0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x193bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x193bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x193BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BF4u;
        // 0x193bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193BFCu;
}
