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

// Function: VpUtilVpu1ProgramSetup__FP10Q_WORDDATA
// Address: 0x198ed8 - 0x198fbc
void VpUtilVpu1ProgramSetup__FP10Q_WORDDATA_0x198ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VpUtilVpu1ProgramSetup__FP10Q_WORDDATA_0x198ed8");
#endif

    switch (ctx->pc) {
        case 0x198ef4u: goto label_198ef4;
        case 0x198f00u: goto label_198f00;
        case 0x198f20u: goto label_198f20;
        case 0x198f28u: goto label_198f28;
        case 0x198f48u: goto label_198f48;
        case 0x198f84u: goto label_198f84;
        default: break;
    }

    ctx->pc = 0x198ed8u;

    // 0x198ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198edc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x198edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x198ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ee4: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x198ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x198ee8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x198ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x198eec: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x198EECu;
    SET_GPR_U32(ctx, 31, 0x198EF4u);
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x198EECu, 0x198EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198EF4u;
label_198ef4:
    // 0x198ef4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198ef8: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x198ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x198efc: 0x0  nop
    ctx->pc = 0x198efcu;
    // NOP
label_198f00:
    // 0x198f00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198f04: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x198f08: 0x0  nop
    ctx->pc = 0x198f08u;
    // NOP
    // 0x198f0c: 0x0  nop
    ctx->pc = 0x198f0cu;
    // NOP
    // 0x198f10: 0x0  nop
    ctx->pc = 0x198f10u;
    // NOP
    // 0x198f14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x198F14u;
    {
        const bool branch_taken_0x198f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198f14) {
            ctx->pc = 0x198F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198f00;
        }
    }
    ctx->pc = 0x198F1Cu;
    // 0x198f1c: 0x0  nop
    ctx->pc = 0x198f1cu;
    // NOP
label_198f20:
    // 0x198f20: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x198F20u;
    SET_GPR_U32(ctx, 31, 0x198F28u);
    ctx->pc = 0x198F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198F20u;
    // 0x198f24: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x198F20u, 0x198F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F28u;
label_198f28:
    // 0x198f28: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x198f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x198f2c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x198F2Cu;
    {
        const bool branch_taken_0x198f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x198F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F2Cu;
        // 0x198f30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f2c) {
            ctx->pc = 0x198F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198f20;
        }
    }
    ctx->pc = 0x198F34u;
    // 0x198f34: 0x8f838d8c  lw          $v1, -0x7274($gp)
    ctx->pc = 0x198f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937996)));
    // 0x198f38: 0x1070000f  beq         $v1, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x198F38u;
    {
        const bool branch_taken_0x198f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x198F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F38u;
        // 0x198f3c: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f38) {
            ctx->pc = 0x198F78u;
            goto label_198f78;
        }
    }
    ctx->pc = 0x198F40u;
    // 0x198f40: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x198F40u;
    SET_GPR_U32(ctx, 31, 0x198F48u);
    ctx->pc = 0x198F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198F40u;
    // 0x198f44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x198F40u, 0x198F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F48u;
label_198f48:
    // 0x198f48: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x198f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x198f4c: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x198f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x198f50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x198f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198f54: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x198f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x198f58: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x198f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x198f5c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x198f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x198f60: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x198f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x198f64: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x198f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x198f68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x198f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x198f6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x198F6Cu;
    {
        const bool branch_taken_0x198f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F6Cu;
        // 0x198f70: 0xaf908d8c  sw          $s0, -0x7274($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937996), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f6c) {
            ctx->pc = 0x198FACu;
            goto label_198fac;
        }
    }
    ctx->pc = 0x198F74u;
    // 0x198f74: 0x0  nop
    ctx->pc = 0x198f74u;
    // NOP
label_198f78:
    // 0x198f78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f7c: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x198F7Cu;
    SET_GPR_U32(ctx, 31, 0x198F84u);
    ctx->pc = 0x198F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198F7Cu;
    // 0x198f80: 0x3c10001f  lui         $s0, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x198F7Cu, 0x198F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F84u;
label_198f84:
    // 0x198f84: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x198f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x198f88: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x198f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x198f8c: 0x2610a890  addiu       $s0, $s0, -0x5770
    ctx->pc = 0x198f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944912));
    // 0x198f90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198f94: 0xac700030  sw          $s0, 0x30($v1)
    ctx->pc = 0x198f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 16));
    // 0x198f98: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x198f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x198f9c: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x198f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x198fa0: 0x34420145  ori         $v0, $v0, 0x145
    ctx->pc = 0x198fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)325);
    // 0x198fa4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x198fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x198fa8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x198fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_198fac:
    // 0x198fac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x198facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198fb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x198fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x198FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198FB4u;
        // 0x198fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198FBCu;
}
