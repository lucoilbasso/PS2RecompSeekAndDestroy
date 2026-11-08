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

// Function: Destroy__5BcObjb
// Address: 0x1a0bd0 - 0x1a0c54
void Destroy__5BcObjb_0x1a0bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Destroy__5BcObjb_0x1a0bd0");
#endif

    switch (ctx->pc) {
        case 0x1a0bd0u: goto label_1a0bd0;
        case 0x1a0bd4u: goto label_1a0bd4;
        case 0x1a0bd8u: goto label_1a0bd8;
        case 0x1a0bdcu: goto label_1a0bdc;
        case 0x1a0be0u: goto label_1a0be0;
        case 0x1a0be4u: goto label_1a0be4;
        case 0x1a0be8u: goto label_1a0be8;
        case 0x1a0becu: goto label_1a0bec;
        case 0x1a0bf0u: goto label_1a0bf0;
        case 0x1a0bf4u: goto label_1a0bf4;
        case 0x1a0bf8u: goto label_1a0bf8;
        case 0x1a0bfcu: goto label_1a0bfc;
        case 0x1a0c00u: goto label_1a0c00;
        case 0x1a0c04u: goto label_1a0c04;
        case 0x1a0c08u: goto label_1a0c08;
        case 0x1a0c0cu: goto label_1a0c0c;
        case 0x1a0c10u: goto label_1a0c10;
        case 0x1a0c14u: goto label_1a0c14;
        case 0x1a0c18u: goto label_1a0c18;
        case 0x1a0c1cu: goto label_1a0c1c;
        case 0x1a0c20u: goto label_1a0c20;
        case 0x1a0c24u: goto label_1a0c24;
        case 0x1a0c28u: goto label_1a0c28;
        case 0x1a0c2cu: goto label_1a0c2c;
        case 0x1a0c30u: goto label_1a0c30;
        case 0x1a0c34u: goto label_1a0c34;
        case 0x1a0c38u: goto label_1a0c38;
        case 0x1a0c3cu: goto label_1a0c3c;
        case 0x1a0c40u: goto label_1a0c40;
        case 0x1a0c44u: goto label_1a0c44;
        case 0x1a0c48u: goto label_1a0c48;
        case 0x1a0c4cu: goto label_1a0c4c;
        case 0x1a0c50u: goto label_1a0c50;
        default: break;
    }

    ctx->pc = 0x1a0bd0u;

label_1a0bd0:
    // 0x1a0bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a0bd4:
    // 0x1a0bd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a0bd8:
    // 0x1a0bd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0bdc:
    // 0x1a0bdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a0be0:
    // 0x1a0be0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a0be4:
    // 0x1a0be4: 0xc06852e  jal         func_1A14B8
label_1a0be8:
    if (ctx->pc == 0x1A0BE8u) {
        ctx->pc = 0x1A0BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BE4u;
        // 0x1a0be8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BECu;
        goto label_1a0bec;
    }
    ctx->pc = 0x1A0BE4u;
    SET_GPR_U32(ctx, 31, 0x1A0BECu);
    ctx->pc = 0x1A0BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BE4u;
    // 0x1a0be8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14B8u, 0x1A0BE4u, 0x1A0BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0BECu;
label_1a0bec:
    // 0x1a0bec: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a0becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
label_1a0bf0:
    // 0x1a0bf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a0bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0bf4:
    // 0x1a0bf4: 0xc05bd26  jal         func_16F498
label_1a0bf8:
    if (ctx->pc == 0x1A0BF8u) {
        ctx->pc = 0x1A0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BF4u;
        // 0x1a0bf8: 0x24848840  addiu       $a0, $a0, -0x77C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BFCu;
        goto label_1a0bfc;
    }
    ctx->pc = 0x1A0BF4u;
    SET_GPR_U32(ctx, 31, 0x1A0BFCu);
    ctx->pc = 0x1A0BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BF4u;
    // 0x1a0bf8: 0x24848840  addiu       $a0, $a0, -0x77C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A0BF4u, 0x1A0BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0BFCu;
label_1a0bfc:
    // 0x1a0bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c00:
    // 0x1a0c00: 0xc0684fe  jal         func_1A13F8
label_1a0c04:
    if (ctx->pc == 0x1A0C04u) {
        ctx->pc = 0x1A0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C00u;
        // 0x1a0c04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0C08u;
        goto label_1a0c08;
    }
    ctx->pc = 0x1A0C00u;
    SET_GPR_U32(ctx, 31, 0x1A0C08u);
    ctx->pc = 0x1A0C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0C00u;
    // 0x1a0c04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13F8u, 0x1A0C00u, 0x1A0C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C08u;
label_1a0c08:
    // 0x1a0c08: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a0c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a0c0c:
    // 0x1a0c0c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1a0c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1a0c10:
    // 0x1a0c10: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1a0c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1a0c14:
    // 0x1a0c14: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a0c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a0c18:
    // 0x1a0c18: 0x60f809  jalr        $v1
label_1a0c1c:
    if (ctx->pc == 0x1A0C1Cu) {
        ctx->pc = 0x1A0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C18u;
        // 0x1a0c1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0C20u;
        goto label_1a0c20;
    }
    ctx->pc = 0x1A0C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A0C20u);
        ctx->pc = 0x1A0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C18u;
        // 0x1a0c1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0C18u, 0x1A0C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0C20u;
label_1a0c20:
    // 0x1a0c20: 0xc05bcee  jal         func_16F3B8
label_1a0c24:
    if (ctx->pc == 0x1A0C24u) {
        ctx->pc = 0x1A0C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C20u;
        // 0x1a0c24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0C28u;
        goto label_1a0c28;
    }
    ctx->pc = 0x1A0C20u;
    SET_GPR_U32(ctx, 31, 0x1A0C28u);
    ctx->pc = 0x1A0C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0C20u;
    // 0x1a0c24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F3B8u, 0x1A0C20u, 0x1A0C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C28u;
label_1a0c28:
    // 0x1a0c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c2c:
    // 0x1a0c2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a0c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c30:
    // 0x1a0c30: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1a0c34:
    if (ctx->pc == 0x1A0C34u) {
        ctx->pc = 0x1A0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C30u;
        // 0x1a0c34: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0C38u;
        goto label_1a0c38;
    }
    ctx->pc = 0x1A0C30u;
    {
        const bool branch_taken_0x1a0c30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C30u;
        // 0x1a0c34: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c30) {
            ctx->pc = 0x1A0C40u;
            goto label_1a0c40;
        }
    }
    ctx->pc = 0x1A0C38u;
label_1a0c38:
    // 0x1a0c38: 0xc067f04  jal         func_19FC10
label_1a0c3c:
    if (ctx->pc == 0x1A0C3Cu) {
        ctx->pc = 0x1A0C40u;
        goto label_1a0c40;
    }
    ctx->pc = 0x1A0C38u;
    SET_GPR_U32(ctx, 31, 0x1A0C40u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A0C38u, 0x1A0C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C40u;
label_1a0c40:
    // 0x1a0c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0c44:
    // 0x1a0c44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a0c48:
    // 0x1a0c48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0c4c:
    // 0x1a0c4c: 0x3e00008  jr          $ra
label_1a0c50:
    if (ctx->pc == 0x1A0C50u) {
        ctx->pc = 0x1A0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C4Cu;
        // 0x1a0c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0C54u;
        goto label_fallthrough_0x1a0c4c;
    }
    ctx->pc = 0x1A0C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C4Cu;
        // 0x1a0c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a0c4c:
    ctx->pc = 0x1A0C54u;
}
