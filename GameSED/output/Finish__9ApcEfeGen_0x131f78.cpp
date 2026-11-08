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

// Function: Finish__9ApcEfeGen
// Address: 0x131f78 - 0x132028
void Finish__9ApcEfeGen_0x131f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__9ApcEfeGen_0x131f78");
#endif

    switch (ctx->pc) {
        case 0x131f78u: goto label_131f78;
        case 0x131f7cu: goto label_131f7c;
        case 0x131f80u: goto label_131f80;
        case 0x131f84u: goto label_131f84;
        case 0x131f88u: goto label_131f88;
        case 0x131f8cu: goto label_131f8c;
        case 0x131f90u: goto label_131f90;
        case 0x131f94u: goto label_131f94;
        case 0x131f98u: goto label_131f98;
        case 0x131f9cu: goto label_131f9c;
        case 0x131fa0u: goto label_131fa0;
        case 0x131fa4u: goto label_131fa4;
        case 0x131fa8u: goto label_131fa8;
        case 0x131facu: goto label_131fac;
        case 0x131fb0u: goto label_131fb0;
        case 0x131fb4u: goto label_131fb4;
        case 0x131fb8u: goto label_131fb8;
        case 0x131fbcu: goto label_131fbc;
        case 0x131fc0u: goto label_131fc0;
        case 0x131fc4u: goto label_131fc4;
        case 0x131fc8u: goto label_131fc8;
        case 0x131fccu: goto label_131fcc;
        case 0x131fd0u: goto label_131fd0;
        case 0x131fd4u: goto label_131fd4;
        case 0x131fd8u: goto label_131fd8;
        case 0x131fdcu: goto label_131fdc;
        case 0x131fe0u: goto label_131fe0;
        case 0x131fe4u: goto label_131fe4;
        case 0x131fe8u: goto label_131fe8;
        case 0x131fecu: goto label_131fec;
        case 0x131ff0u: goto label_131ff0;
        case 0x131ff4u: goto label_131ff4;
        case 0x131ff8u: goto label_131ff8;
        case 0x131ffcu: goto label_131ffc;
        case 0x132000u: goto label_132000;
        case 0x132004u: goto label_132004;
        case 0x132008u: goto label_132008;
        case 0x13200cu: goto label_13200c;
        case 0x132010u: goto label_132010;
        case 0x132014u: goto label_132014;
        case 0x132018u: goto label_132018;
        case 0x13201cu: goto label_13201c;
        case 0x132020u: goto label_132020;
        case 0x132024u: goto label_132024;
        default: break;
    }

    ctx->pc = 0x131f78u;

label_131f78:
    // 0x131f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_131f7c:
    // 0x131f7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131f80:
    // 0x131f80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_131f84:
    // 0x131f84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x131f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_131f88:
    // 0x131f88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x131f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_131f8c:
    // 0x131f8c: 0x8e060184  lw          $a2, 0x184($s0)
    ctx->pc = 0x131f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_131f90:
    // 0x131f90: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x131f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_131f94:
    // 0x131f94: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x131f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_131f98:
    // 0x131f98: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x131f98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_131f9c:
    // 0x131f9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x131f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_131fa0:
    // 0x131fa0: 0x60f809  jalr        $v1
label_131fa4:
    if (ctx->pc == 0x131FA4u) {
        ctx->pc = 0x131FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131FA0u;
        // 0x131fa4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131FA8u;
        goto label_131fa8;
    }
    ctx->pc = 0x131FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x131FA8u);
        ctx->pc = 0x131FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131FA0u;
        // 0x131fa4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131FA0u, 0x131FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x131FA8u;
label_131fa8:
    // 0x131fa8: 0x8e060188  lw          $a2, 0x188($s0)
    ctx->pc = 0x131fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_131fac:
    // 0x131fac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131fb0:
    // 0x131fb0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x131fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_131fb4:
    // 0x131fb4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x131fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_131fb8:
    // 0x131fb8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x131fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_131fbc:
    // 0x131fbc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x131fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_131fc0:
    // 0x131fc0: 0x60f809  jalr        $v1
label_131fc4:
    if (ctx->pc == 0x131FC4u) {
        ctx->pc = 0x131FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131FC0u;
        // 0x131fc4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131FC8u;
        goto label_131fc8;
    }
    ctx->pc = 0x131FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x131FC8u);
        ctx->pc = 0x131FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131FC0u;
        // 0x131fc4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131FC0u, 0x131FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x131FC8u;
label_131fc8:
    // 0x131fc8: 0x8e06018c  lw          $a2, 0x18C($s0)
    ctx->pc = 0x131fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
label_131fcc:
    // 0x131fcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131fd0:
    // 0x131fd0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x131fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_131fd4:
    // 0x131fd4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x131fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_131fd8:
    // 0x131fd8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x131fd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_131fdc:
    // 0x131fdc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x131fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_131fe0:
    // 0x131fe0: 0x60f809  jalr        $v1
label_131fe4:
    if (ctx->pc == 0x131FE4u) {
        ctx->pc = 0x131FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131FE0u;
        // 0x131fe4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131FE8u;
        goto label_131fe8;
    }
    ctx->pc = 0x131FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x131FE8u);
        ctx->pc = 0x131FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131FE0u;
        // 0x131fe4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131FE0u, 0x131FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x131FE8u;
label_131fe8:
    // 0x131fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x131fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131fec:
    // 0x131fec: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x131fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
label_131ff0:
    // 0x131ff0: 0xaf808a00  sw          $zero, -0x7600($gp)
    ctx->pc = 0x131ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937088), GPR_U32(ctx, 0));
label_131ff4:
    // 0x131ff4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_131ff8:
    if (ctx->pc == 0x131FF8u) {
        ctx->pc = 0x131FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131FF4u;
        // 0x131ff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131FFCu;
        goto label_131ffc;
    }
    ctx->pc = 0x131FF4u;
    {
        const bool branch_taken_0x131ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131FF4u;
        // 0x131ff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ff4) {
            ctx->pc = 0x132004u;
            goto label_132004;
        }
    }
    ctx->pc = 0x131FFCu;
label_131ffc:
    // 0x131ffc: 0xc067f04  jal         func_19FC10
label_132000:
    if (ctx->pc == 0x132000u) {
        ctx->pc = 0x132004u;
        goto label_132004;
    }
    ctx->pc = 0x131FFCu;
    SET_GPR_U32(ctx, 31, 0x132004u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x131FFCu, 0x132004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132004u;
label_132004:
    // 0x132004: 0xc0612a4  jal         func_184A90
label_132008:
    if (ctx->pc == 0x132008u) {
        ctx->pc = 0x132008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132004u;
        // 0x132008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13200Cu;
        goto label_13200c;
    }
    ctx->pc = 0x132004u;
    SET_GPR_U32(ctx, 31, 0x13200Cu);
    ctx->pc = 0x132008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132004u;
    // 0x132008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x132004u, 0x13200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13200Cu;
label_13200c:
    // 0x13200c: 0xaf8089fc  sw          $zero, -0x7604($gp)
    ctx->pc = 0x13200cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937084), GPR_U32(ctx, 0));
label_132010:
    // 0x132010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132014:
    // 0x132014: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x132014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_132018:
    // 0x132018: 0xaf808a08  sw          $zero, -0x75F8($gp)
    ctx->pc = 0x132018u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937096), GPR_U32(ctx, 0));
label_13201c:
    // 0x13201c: 0xaf808a0c  sw          $zero, -0x75F4($gp)
    ctx->pc = 0x13201cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937100), GPR_U32(ctx, 0));
label_132020:
    // 0x132020: 0x3e00008  jr          $ra
label_132024:
    if (ctx->pc == 0x132024u) {
        ctx->pc = 0x132024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132020u;
        // 0x132024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132028u;
        goto label_fallthrough_0x132020;
    }
    ctx->pc = 0x132020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132020u;
        // 0x132024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x132020:
    ctx->pc = 0x132028u;
}
