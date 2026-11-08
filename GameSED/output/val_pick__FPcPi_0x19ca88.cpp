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

// Function: val_pick__FPcPi
// Address: 0x19ca88 - 0x19cadc
void val_pick__FPcPi_0x19ca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("val_pick__FPcPi_0x19ca88");
#endif

    switch (ctx->pc) {
        case 0x19caa0u: goto label_19caa0;
        default: break;
    }

    ctx->pc = 0x19ca88u;

    // 0x19ca88: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x19ca88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca8c: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x19ca8cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19ca90: 0x24c2ffd0  addiu       $v0, $a2, -0x30
    ctx->pc = 0x19ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x19ca94: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x19ca94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x19ca98: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19CA98u;
    {
        const bool branch_taken_0x19ca98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA98u;
        // 0x19ca9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca98) {
            ctx->pc = 0x19CAD0u;
            goto label_19cad0;
        }
    }
    ctx->pc = 0x19CAA0u;
label_19caa0:
    // 0x19caa0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19caa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19caa4: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x19caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x19caa8: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x19caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x19caac: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x19caacu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19cab0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x19cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x19cab4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x19cab4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x19cab8: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x19cab8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19cabc: 0x24c4ffd0  addiu       $a0, $a2, -0x30
    ctx->pc = 0x19cabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x19cac0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x19cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x19cac4: 0x2c84000a  sltiu       $a0, $a0, 0xA
    ctx->pc = 0x19cac4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x19cac8: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19CAC8u;
    {
        const bool branch_taken_0x19cac8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAC8u;
        // 0x19cacc: 0x2448ffd0  addiu       $t0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cac8) {
            ctx->pc = 0x19CAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19caa0;
        }
    }
    ctx->pc = 0x19CAD0u;
label_19cad0:
    // 0x19cad0: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x19cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x19cad4: 0x3e00008  jr          $ra
    ctx->pc = 0x19CAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAD4u;
        // 0x19cad8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CADCu;
}
