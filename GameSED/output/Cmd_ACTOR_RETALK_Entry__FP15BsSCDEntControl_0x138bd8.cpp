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

// Function: Cmd_ACTOR_RETALK_Entry__FP15BsSCDEntControl
// Address: 0x138bd8 - 0x138c5c
void Cmd_ACTOR_RETALK_Entry__FP15BsSCDEntControl_0x138bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_RETALK_Entry__FP15BsSCDEntControl_0x138bd8");
#endif

    switch (ctx->pc) {
        case 0x138bd8u: goto label_138bd8;
        case 0x138bdcu: goto label_138bdc;
        case 0x138be0u: goto label_138be0;
        case 0x138be4u: goto label_138be4;
        case 0x138be8u: goto label_138be8;
        case 0x138becu: goto label_138bec;
        case 0x138bf0u: goto label_138bf0;
        case 0x138bf4u: goto label_138bf4;
        case 0x138bf8u: goto label_138bf8;
        case 0x138bfcu: goto label_138bfc;
        case 0x138c00u: goto label_138c00;
        case 0x138c04u: goto label_138c04;
        case 0x138c08u: goto label_138c08;
        case 0x138c0cu: goto label_138c0c;
        case 0x138c10u: goto label_138c10;
        case 0x138c14u: goto label_138c14;
        case 0x138c18u: goto label_138c18;
        case 0x138c1cu: goto label_138c1c;
        case 0x138c20u: goto label_138c20;
        case 0x138c24u: goto label_138c24;
        case 0x138c28u: goto label_138c28;
        case 0x138c2cu: goto label_138c2c;
        case 0x138c30u: goto label_138c30;
        case 0x138c34u: goto label_138c34;
        case 0x138c38u: goto label_138c38;
        case 0x138c3cu: goto label_138c3c;
        case 0x138c40u: goto label_138c40;
        case 0x138c44u: goto label_138c44;
        case 0x138c48u: goto label_138c48;
        case 0x138c4cu: goto label_138c4c;
        case 0x138c50u: goto label_138c50;
        case 0x138c54u: goto label_138c54;
        case 0x138c58u: goto label_138c58;
        default: break;
    }

    ctx->pc = 0x138bd8u;

label_138bd8:
    // 0x138bd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x138bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_138bdc:
    // 0x138bdc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_138be0:
    // 0x138be0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x138be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_138be4:
    // 0x138be4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x138be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_138be8:
    // 0x138be8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x138be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_138bec:
    // 0x138bec: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x138becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_138bf0:
    // 0x138bf0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x138bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_138bf4:
    // 0x138bf4: 0x8cb10040  lw          $s1, 0x40($a1)
    ctx->pc = 0x138bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_138bf8:
    // 0x138bf8: 0xc06a26e  jal         func_1A89B8
label_138bfc:
    if (ctx->pc == 0x138BFCu) {
        ctx->pc = 0x138BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BF8u;
        // 0x138bfc: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C00u;
        goto label_138c00;
    }
    ctx->pc = 0x138BF8u;
    SET_GPR_U32(ctx, 31, 0x138C00u);
    ctx->pc = 0x138BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138BF8u;
    // 0x138bfc: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x138BF8u, 0x138C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C00u;
label_138c00:
    // 0x138c00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x138c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_138c04:
    // 0x138c04: 0x24070118  addiu       $a3, $zero, 0x118
    ctx->pc = 0x138c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_138c08:
    // 0x138c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138c0c:
    // 0x138c0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x138c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138c10:
    // 0x138c10: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x138c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_138c14:
    // 0x138c14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138c18:
    // 0x138c18: 0x1467000b  bne         $v1, $a3, . + 4 + (0xB << 2)
label_138c1c:
    if (ctx->pc == 0x138C1Cu) {
        ctx->pc = 0x138C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C18u;
        // 0x138c1c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C20u;
        goto label_138c20;
    }
    ctx->pc = 0x138C18u;
    {
        const bool branch_taken_0x138c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x138C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C18u;
        // 0x138c1c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c18) {
            ctx->pc = 0x138C48u;
            goto label_138c48;
        }
    }
    ctx->pc = 0x138C20u;
label_138c20:
    // 0x138c20: 0xc04e354  jal         func_138D50
label_138c24:
    if (ctx->pc == 0x138C24u) {
        ctx->pc = 0x138C28u;
        goto label_138c28;
    }
    ctx->pc = 0x138C20u;
    SET_GPR_U32(ctx, 31, 0x138C28u);
    ctx->pc = 0x138D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D50u, 0x138C20u, 0x138C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C28u;
label_138c28:
    // 0x138c28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x138c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138c2c:
    // 0x138c2c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x138c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_138c30:
    // 0x138c30: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x138c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_138c34:
    // 0x138c34: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x138c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_138c38:
    // 0x138c38: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x138c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_138c3c:
    // 0x138c3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x138c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_138c40:
    // 0x138c40: 0x60f809  jalr        $v1
label_138c44:
    if (ctx->pc == 0x138C44u) {
        ctx->pc = 0x138C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C40u;
        // 0x138c44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C48u;
        goto label_138c48;
    }
    ctx->pc = 0x138C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x138C48u);
        ctx->pc = 0x138C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C40u;
        // 0x138c44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138C40u, 0x138C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138C48u;
label_138c48:
    // 0x138c48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x138c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_138c4c:
    // 0x138c4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x138c4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_138c50:
    // 0x138c50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x138c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_138c54:
    // 0x138c54: 0x3e00008  jr          $ra
label_138c58:
    if (ctx->pc == 0x138C58u) {
        ctx->pc = 0x138C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C54u;
        // 0x138c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C5Cu;
        goto label_fallthrough_0x138c54;
    }
    ctx->pc = 0x138C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C54u;
        // 0x138c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x138c54:
    ctx->pc = 0x138C5Cu;
}
