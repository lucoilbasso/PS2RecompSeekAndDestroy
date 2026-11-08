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

// Function: B_FileName_AddSuffix__FPcT0
// Address: 0x19cca0 - 0x19cd00
void B_FileName_AddSuffix__FPcT0_0x19cca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_FileName_AddSuffix__FPcT0_0x19cca0");
#endif

    switch (ctx->pc) {
        case 0x19ccb0u: goto label_19ccb0;
        case 0x19ccd8u: goto label_19ccd8;
        default: break;
    }

    ctx->pc = 0x19cca0u;

    // 0x19cca0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x19cca0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19cca4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19CCA4u;
    {
        const bool branch_taken_0x19cca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCA4u;
        // 0x19cca8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cca4) {
            ctx->pc = 0x19CCE4u;
            goto label_19cce4;
        }
    }
    ctx->pc = 0x19CCACu;
    // 0x19ccac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19ccb0:
    // 0x19ccb0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x19ccb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19ccb4: 0x0  nop
    ctx->pc = 0x19ccb4u;
    // NOP
    // 0x19ccb8: 0x0  nop
    ctx->pc = 0x19ccb8u;
    // NOP
    // 0x19ccbc: 0x0  nop
    ctx->pc = 0x19ccbcu;
    // NOP
    // 0x19ccc0: 0x0  nop
    ctx->pc = 0x19ccc0u;
    // NOP
    // 0x19ccc4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CCC4u;
    {
        const bool branch_taken_0x19ccc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ccc4) {
            ctx->pc = 0x19CCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CCC4u;
            // 0x19ccc8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ccb0;
        }
    }
    ctx->pc = 0x19CCCCu;
    // 0x19cccc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19CCCCu;
    {
        const bool branch_taken_0x19cccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCCCu;
        // 0x19ccd0: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cccc) {
            ctx->pc = 0x19CCE8u;
            goto label_19cce8;
        }
    }
    ctx->pc = 0x19CCD4u;
    // 0x19ccd4: 0x0  nop
    ctx->pc = 0x19ccd4u;
    // NOP
label_19ccd8:
    // 0x19ccd8: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19ccd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19ccdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19cce0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19cce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_19cce4:
    // 0x19cce4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19cce4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_19cce8:
    // 0x19cce8: 0x0  nop
    ctx->pc = 0x19cce8u;
    // NOP
    // 0x19ccec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CCECu;
    {
        const bool branch_taken_0x19ccec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCECu;
        // 0x19ccf0: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ccec) {
            ctx->pc = 0x19CCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ccd8;
        }
    }
    ctx->pc = 0x19CCF4u;
    // 0x19ccf4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19ccf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ccf8: 0x3e00008  jr          $ra
    ctx->pc = 0x19CCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCF8u;
        // 0x19ccfc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CD00u;
}
