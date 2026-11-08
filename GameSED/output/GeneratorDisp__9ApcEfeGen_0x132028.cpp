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

// Function: GeneratorDisp__9ApcEfeGen
// Address: 0x132028 - 0x1320b8
void GeneratorDisp__9ApcEfeGen_0x132028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GeneratorDisp__9ApcEfeGen_0x132028");
#endif

    switch (ctx->pc) {
        case 0x132048u: goto label_132048;
        case 0x132070u: goto label_132070;
        case 0x132080u: goto label_132080;
        case 0x1320a8u: goto label_1320a8;
        default: break;
    }

    ctx->pc = 0x132028u;

    // 0x132028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13202c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13202cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132034: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x132034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x132038: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x132038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x13203c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13203Cu;
    {
        const bool branch_taken_0x13203c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13203Cu;
        // 0x132040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13203c) {
            ctx->pc = 0x132064u;
            goto label_132064;
        }
    }
    ctx->pc = 0x132044u;
    // 0x132044: 0x0  nop
    ctx->pc = 0x132044u;
    // NOP
label_132048:
    // 0x132048: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x132048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x13204c: 0x0  nop
    ctx->pc = 0x13204cu;
    // NOP
    // 0x132050: 0x0  nop
    ctx->pc = 0x132050u;
    // NOP
    // 0x132054: 0x0  nop
    ctx->pc = 0x132054u;
    // NOP
    // 0x132058: 0x0  nop
    ctx->pc = 0x132058u;
    // NOP
    // 0x13205c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13205Cu;
    {
        const bool branch_taken_0x13205c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13205Cu;
        // 0x132060: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13205c) {
            ctx->pc = 0x132048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132048;
        }
    }
    ctx->pc = 0x132064u;
label_132064:
    // 0x132064: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x132064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x132068: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x132068u;
    SET_GPR_U32(ctx, 31, 0x132070u);
    ctx->pc = 0x13206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132068u;
    // 0x13206c: 0x24845f90  addiu       $a0, $a0, 0x5F90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x132068u, 0x132070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132070u;
label_132070:
    // 0x132070: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x132070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x132074: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x132074u;
    {
        const bool branch_taken_0x132074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132074u;
        // 0x132078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132074) {
            ctx->pc = 0x13209Cu;
            goto label_13209c;
        }
    }
    ctx->pc = 0x13207Cu;
    // 0x13207c: 0x0  nop
    ctx->pc = 0x13207cu;
    // NOP
label_132080:
    // 0x132080: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x132080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x132084: 0x0  nop
    ctx->pc = 0x132084u;
    // NOP
    // 0x132088: 0x0  nop
    ctx->pc = 0x132088u;
    // NOP
    // 0x13208c: 0x0  nop
    ctx->pc = 0x13208cu;
    // NOP
    // 0x132090: 0x0  nop
    ctx->pc = 0x132090u;
    // NOP
    // 0x132094: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x132094u;
    {
        const bool branch_taken_0x132094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132094u;
        // 0x132098: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132094) {
            ctx->pc = 0x132080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132080;
        }
    }
    ctx->pc = 0x13209Cu;
label_13209c:
    // 0x13209c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x13209cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1320a0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1320A0u;
    SET_GPR_U32(ctx, 31, 0x1320A8u);
    ctx->pc = 0x1320A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1320A0u;
    // 0x1320a4: 0x24845fa8  addiu       $a0, $a0, 0x5FA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1320A0u, 0x1320A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1320A8u;
label_1320a8:
    // 0x1320a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1320a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1320ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1320acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1320b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1320B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1320B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320B0u;
        // 0x1320b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1320B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1320B8u;
}
