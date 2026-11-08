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

// Function: entry_00131f80
// Address: 0x131f80 - 0x132004
void entry_00131f80_0x131f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131f80_0x131f80");
#endif

    switch (ctx->pc) {
        case 0x131fa8u: goto label_131fa8;
        case 0x131fc8u: goto label_131fc8;
        case 0x131fe8u: goto label_131fe8;
        default: break;
    }

    ctx->pc = 0x131f80u;

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
            return;
        }
    }
    ctx->pc = 0x131FFCu;
label_131ffc:
    // 0x131ffc: 0xc067f04  jal         func_19FC10
label_132000:
    if (ctx->pc == 0x132000u) {
        ctx->pc = 0x132004u;
        goto label_fallthrough_0x131ffc;
    }
    ctx->pc = 0x131FFCu;
    SET_GPR_U32(ctx, 31, 0x132004u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x131FFCu, 0x132004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x131ffc:
    ctx->pc = 0x132004u;
}
