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

// Function: InitExecPS2
// Address: 0x1b6f38 - 0x1b6fe4
void InitExecPS2_0x1b6f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitExecPS2_0x1b6f38");
#endif

    switch (ctx->pc) {
        case 0x1b6f50u: goto label_1b6f50;
        case 0x1b6f70u: goto label_1b6f70;
        case 0x1b6f88u: goto label_1b6f88;
        case 0x1b6f90u: goto label_1b6f90;
        case 0x1b6f98u: goto label_1b6f98;
        case 0x1b6fa4u: goto label_1b6fa4;
        case 0x1b6fa8u: goto label_1b6fa8;
        case 0x1b6fb0u: goto label_1b6fb0;
        case 0x1b6fc0u: goto label_1b6fc0;
        default: break;
    }

    ctx->pc = 0x1b6f38u;

    // 0x1b6f38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b6f3c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b6f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b6f40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b6f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b6f44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b6f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b6f48: 0xc06dbb4  jal         func_1B6ED0
    ctx->pc = 0x1B6F48u;
    SET_GPR_U32(ctx, 31, 0x1B6F50u);
    ctx->pc = 0x1B6F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F48u;
    // 0x1b6f4c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6ED0u, 0x1B6F48u, 0x1B6F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F50u;
label_1b6f50:
    // 0x1b6f50: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B6F50u;
    {
        const bool branch_taken_0x1b6f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F50u;
        // 0x1b6f54: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f50) {
            ctx->pc = 0x1B6FCCu;
            goto label_1b6fcc;
        }
    }
    ctx->pc = 0x1B6F58u;
    // 0x1b6f58: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1b6f58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6f5c: 0x2450b1f0  addiu       $s0, $v0, -0x4E10
    ctx->pc = 0x1b6f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947312));
    // 0x1b6f60: 0x8c44b1f0  lw          $a0, -0x4E10($v0)
    ctx->pc = 0x1b6f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947312)));
    // 0x1b6f64: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1b6f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b6f68: 0xc06db9a  jal         func_1B6E68
    ctx->pc = 0x1B6F68u;
    SET_GPR_U32(ctx, 31, 0x1B6F70u);
    ctx->pc = 0x1B6F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F68u;
    // 0x1b6f6c: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E68u, 0x1B6F68u, 0x1B6F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F70u;
label_1b6f70:
    // 0x1b6f70: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1b6f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1b6f74: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x1b6f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x1b6f78: 0x240607a8  addiu       $a2, $zero, 0x7A8
    ctx->pc = 0x1b6f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x1b6f7c: 0x24a5aa48  addiu       $a1, $a1, -0x55B8
    ctx->pc = 0x1b6f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945352));
    // 0x1b6f80: 0xc06db9e  jal         func_1B6E78
    ctx->pc = 0x1B6F80u;
    SET_GPR_U32(ctx, 31, 0x1B6F88u);
    ctx->pc = 0x1B6F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F80u;
    // 0x1b6f84: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E78u, 0x1B6F80u, 0x1B6F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F88u;
label_1b6f88:
    // 0x1b6f88: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1B6F88u;
    SET_GPR_U32(ctx, 31, 0x1B6F90u);
    ctx->pc = 0x1B6F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F88u;
    // 0x1b6f8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1B6F88u, 0x1B6F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F90u;
label_1b6f90:
    // 0x1b6f90: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1B6F90u;
    SET_GPR_U32(ctx, 31, 0x1B6F98u);
    ctx->pc = 0x1B6F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F90u;
    // 0x1b6f94: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1B6F90u, 0x1B6F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F98u;
label_1b6f98:
    // 0x1b6f98: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b6f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b6f9c: 0xc06db9a  jal         func_1B6E68
    ctx->pc = 0x1B6F9Cu;
    SET_GPR_U32(ctx, 31, 0x1B6FA4u);
    ctx->pc = 0x1B6FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F9Cu;
    // 0x1b6fa0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E68u, 0x1B6F9Cu, 0x1B6FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FA4u;
label_1b6fa4:
    // 0x1b6fa4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b6fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b6fa8:
    // 0x1b6fa8: 0xc06dbb0  jal         func_1B6EC0
    ctx->pc = 0x1B6FA8u;
    SET_GPR_U32(ctx, 31, 0x1B6FB0u);
    ctx->pc = 0x1B6FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6FA8u;
    // 0x1b6fac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6EC0u, 0x1B6FA8u, 0x1B6FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FB0u;
label_1b6fb0:
    // 0x1b6fb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b6fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6fb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b6fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fb8: 0xc06db9a  jal         func_1B6E68
    ctx->pc = 0x1B6FB8u;
    SET_GPR_U32(ctx, 31, 0x1B6FC0u);
    ctx->pc = 0x1B6FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6FB8u;
    // 0x1b6fbc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E68u, 0x1B6FB8u, 0x1B6FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FC0u;
label_1b6fc0:
    // 0x1b6fc0: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1b6fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b6fc4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B6FC4u;
    {
        const bool branch_taken_0x1b6fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6fc4) {
            ctx->pc = 0x1B6FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6FC4u;
            // 0x1b6fc8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6fa8;
        }
    }
    ctx->pc = 0x1B6FCCu;
label_1b6fcc:
    // 0x1b6fcc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b6fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6fd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b6fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6fd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b6fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6fd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6FDCu;
        // 0x1b6fe0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6FE4u;
}
