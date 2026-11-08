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

// Function: WMCardEntSpave__FP7WcMCardP17MCARD_INFORMATION
// Address: 0x179e58 - 0x179f1c
void WMCardEntSpave__FP7WcMCardP17MCARD_INFORMATION_0x179e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardEntSpave__FP7WcMCardP17MCARD_INFORMATION_0x179e58");
#endif

    switch (ctx->pc) {
        case 0x179e88u: goto label_179e88;
        case 0x179e90u: goto label_179e90;
        case 0x179e9cu: goto label_179e9c;
        case 0x179eb8u: goto label_179eb8;
        default: break;
    }

    ctx->pc = 0x179e58u;

    // 0x179e58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x179e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x179e5c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x179e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x179e60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x179e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e64: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x179e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x179e68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e6c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x179e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x179e70: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x179e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x179e74: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x179e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x179e78: 0x24a5d558  addiu       $a1, $a1, -0x2AA8
    ctx->pc = 0x179e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956376));
    // 0x179e7c: 0x26260540  addiu       $a2, $s1, 0x540
    ctx->pc = 0x179e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1344));
    // 0x179e80: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x179E80u;
    SET_GPR_U32(ctx, 31, 0x179E88u);
    ctx->pc = 0x179E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E80u;
    // 0x179e84: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x179E80u, 0x179E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E88u;
label_179e88:
    // 0x179e88: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x179e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x179e8c: 0x0  nop
    ctx->pc = 0x179e8cu;
    // NOP
label_179e90:
    // 0x179e90: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x179e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x179e94: 0xc071938  jal         func_1C64E0
    ctx->pc = 0x179E94u;
    SET_GPR_U32(ctx, 31, 0x179E9Cu);
    ctx->pc = 0x179E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E94u;
    // 0x179e98: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C64E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C64E0u, 0x179E94u, 0x179E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E9Cu;
label_179e9c:
    // 0x179e9c: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x179E9Cu;
    {
        const bool branch_taken_0x179e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179e9c) {
            ctx->pc = 0x179EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179E9Cu;
            // 0x179ea0: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179e90;
        }
    }
    ctx->pc = 0x179EA4u;
    // 0x179ea4: 0x26104030  addiu       $s0, $s0, 0x4030
    ctx->pc = 0x179ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16432));
    // 0x179ea8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179eac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x179eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179eb0: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179EB0u;
    SET_GPR_U32(ctx, 31, 0x179EB8u);
    ctx->pc = 0x179EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179EB0u;
    // 0x179eb4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179EB0u, 0x179EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179EB8u;
label_179eb8:
    // 0x179eb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x179eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179ebc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179EBCu;
    {
        const bool branch_taken_0x179ebc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x179EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EBCu;
        // 0x179ec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ebc) {
            ctx->pc = 0x179ED0u;
            goto label_179ed0;
        }
    }
    ctx->pc = 0x179EC4u;
    // 0x179ec4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x179EC4u;
    {
        const bool branch_taken_0x179ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EC4u;
        // 0x179ec8: 0xae240028  sw          $a0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ec4) {
            ctx->pc = 0x179F08u;
            goto label_179f08;
        }
    }
    ctx->pc = 0x179ECCu;
    // 0x179ecc: 0x0  nop
    ctx->pc = 0x179eccu;
    // NOP
label_179ed0:
    // 0x179ed0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x179ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x179ed4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x179ED4u;
    {
        const bool branch_taken_0x179ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x179ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179ED4u;
        // 0x179ed8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ed4) {
            ctx->pc = 0x179EF0u;
            goto label_179ef0;
        }
    }
    ctx->pc = 0x179EDCu;
    // 0x179edc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x179edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x179ee0: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x179EE0u;
    {
        const bool branch_taken_0x179ee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x179ee0) {
            ctx->pc = 0x179EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179EE0u;
            // 0x179ee4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179F00u;
            goto label_179f00;
        }
    }
    ctx->pc = 0x179EE8u;
    // 0x179ee8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x179EE8u;
    {
        const bool branch_taken_0x179ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EE8u;
        // 0x179eec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ee8) {
            ctx->pc = 0x179F00u;
            goto label_179f00;
        }
    }
    ctx->pc = 0x179EF0u;
label_179ef0:
    // 0x179ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179ef4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x179ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x179ef8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x179EF8u;
    {
        const bool branch_taken_0x179ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EF8u;
        // 0x179efc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ef8) {
            ctx->pc = 0x179F0Cu;
            goto label_179f0c;
        }
    }
    ctx->pc = 0x179F00u;
label_179f00:
    // 0x179f00: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x179f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x179f04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179f08:
    // 0x179f08: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x179f08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_179f0c:
    // 0x179f0c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x179f0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x179f10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x179f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179f14: 0x3e00008  jr          $ra
    ctx->pc = 0x179F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F14u;
        // 0x179f18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179F1Cu;
}
