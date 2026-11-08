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

// Function: sbrk
// Address: 0x1afb60 - 0x1afc0c
void sbrk_0x1afb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sbrk_0x1afb60");
#endif

    switch (ctx->pc) {
        case 0x1afb88u: goto label_1afb88;
        case 0x1afbb8u: goto label_1afbb8;
        case 0x1afbccu: goto label_1afbcc;
        default: break;
    }

    ctx->pc = 0x1afb60u;

    // 0x1afb60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1afb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1afb64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1afb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1afb68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1afb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1afb6c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1afb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1afb70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1afb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1afb74: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x1afb74u;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
    // 0x1afb78: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1afb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1afb7c: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x1afb7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x1afb80: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1AFB80u;
    {
        const bool branch_taken_0x1afb80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB80u;
        // 0x1afb84: 0x3c120025  lui         $s2, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb80) {
            ctx->pc = 0x1AFBACu;
            goto label_1afbac;
        }
    }
    ctx->pc = 0x1AFB88u;
label_1afb88:
    // 0x1afb88: 0x42000039  di
    ctx->pc = 0x1afb88u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x1afb8c: 0x40f  sync.p
    ctx->pc = 0x1afb8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1afb90: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1afb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x1afb94: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1afb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1afb98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1afb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1afb9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AFB9Cu;
    {
        const bool branch_taken_0x1afb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afb9c) {
            ctx->pc = 0x1AFB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afb88;
        }
    }
    ctx->pc = 0x1AFBA4u;
    // 0x1afba4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFBA4u;
    {
        const bool branch_taken_0x1afba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBA4u;
        // 0x1afba8: 0x8e42a96c  lw          $v0, -0x5694($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afba4) {
            ctx->pc = 0x1AFBB0u;
            goto label_1afbb0;
        }
    }
    ctx->pc = 0x1AFBACu;
label_1afbac:
    // 0x1afbac: 0x8e42a96c  lw          $v0, -0x5694($s2)
    ctx->pc = 0x1afbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945132)));
label_1afbb0:
    // 0x1afbb0: 0xc06bd10  jal         func_1AF440
    ctx->pc = 0x1AFBB0u;
    SET_GPR_U32(ctx, 31, 0x1AFBB8u);
    ctx->pc = 0x1AFBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBB0u;
    // 0x1afbb4: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF440u, 0x1AFBB0u, 0x1AFBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFBB8u;
label_1afbb8:
    // 0x1afbb8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1afbb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1afbbc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AFBBCu;
    {
        const bool branch_taken_0x1afbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBBCu;
        // 0x1afbc0: 0x8e42a96c  lw          $v0, -0x5694($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbbc) {
            ctx->pc = 0x1AFBE8u;
            goto label_1afbe8;
        }
    }
    ctx->pc = 0x1AFBC4u;
    // 0x1afbc4: 0xc073d52  jal         func_1CF548
    ctx->pc = 0x1AFBC4u;
    SET_GPR_U32(ctx, 31, 0x1AFBCCu);
    ctx->pc = 0x1CF548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF548u, 0x1AFBC4u, 0x1AFBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFBCCu;
label_1afbcc:
    // 0x1afbcc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1afbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1afbd0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFBD0u;
    {
        const bool branch_taken_0x1afbd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBD0u;
        // 0x1afbd4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbd0) {
            ctx->pc = 0x1AFBDCu;
            goto label_1afbdc;
        }
    }
    ctx->pc = 0x1AFBD8u;
    // 0x1afbd8: 0x42000038  ei
    ctx->pc = 0x1afbd8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1afbdc:
    // 0x1afbdc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1afbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1afbe0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFBE0u;
    {
        const bool branch_taken_0x1afbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBE0u;
        // 0x1afbe4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbe0) {
            ctx->pc = 0x1AFBF4u;
            goto label_1afbf4;
        }
    }
    ctx->pc = 0x1AFBE8u;
label_1afbe8:
    // 0x1afbe8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFBE8u;
    {
        const bool branch_taken_0x1afbe8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBE8u;
        // 0x1afbec: 0xae50a96c  sw          $s0, -0x5694($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294945132), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbe8) {
            ctx->pc = 0x1AFBF4u;
            goto label_1afbf4;
        }
    }
    ctx->pc = 0x1AFBF0u;
    // 0x1afbf0: 0x42000038  ei
    ctx->pc = 0x1afbf0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1afbf4:
    // 0x1afbf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1afbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1afbf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1afbf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afbfc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1afbfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afc00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afc00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afc04: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC04u;
        // 0x1afc08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFC0Cu;
}
