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

// Function: B_FileName_ChangeSuffix__FPcT0
// Address: 0x19cdd0 - 0x19ce48
void B_FileName_ChangeSuffix__FPcT0_0x19cdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_FileName_ChangeSuffix__FPcT0_0x19cdd0");
#endif

    switch (ctx->pc) {
        case 0x19cdf0u: goto label_19cdf0;
        case 0x19ce20u: goto label_19ce20;
        default: break;
    }

    ctx->pc = 0x19cdd0u;

    // 0x19cdd0: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x19cdd0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19cdd4: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x19CDD4u;
    {
        const bool branch_taken_0x19cdd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDD4u;
        // 0x19cdd8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cdd4) {
            ctx->pc = 0x19CE2Cu;
            goto label_19ce2c;
        }
    }
    ctx->pc = 0x19CDDCu;
    // 0x19cddc: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x19cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19cde0: 0x50c20013  beql        $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19CDE0u;
    {
        const bool branch_taken_0x19cde0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x19cde0) {
            ctx->pc = 0x19CDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CDE0u;
            // 0x19cde4: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CE30u;
            goto label_19ce30;
        }
    }
    ctx->pc = 0x19CDE8u;
    // 0x19cde8: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x19cde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19cdec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19cdf0:
    // 0x19cdf0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x19cdf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19cdf4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x19CDF4u;
    {
        const bool branch_taken_0x19cdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cdf4) {
            ctx->pc = 0x19CDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CDF4u;
            // 0x19cdf8: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CE30u;
            goto label_19ce30;
        }
    }
    ctx->pc = 0x19CDFCu;
    // 0x19cdfc: 0x0  nop
    ctx->pc = 0x19cdfcu;
    // NOP
    // 0x19ce00: 0x0  nop
    ctx->pc = 0x19ce00u;
    // NOP
    // 0x19ce04: 0x0  nop
    ctx->pc = 0x19ce04u;
    // NOP
    // 0x19ce08: 0x0  nop
    ctx->pc = 0x19ce08u;
    // NOP
    // 0x19ce0c: 0x5446fff8  bnel        $v0, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19CE0Cu;
    {
        const bool branch_taken_0x19ce0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x19ce0c) {
            ctx->pc = 0x19CE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CE0Cu;
            // 0x19ce10: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cdf0;
        }
    }
    ctx->pc = 0x19CE14u;
    // 0x19ce14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19CE14u;
    {
        const bool branch_taken_0x19ce14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE14u;
        // 0x19ce18: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce14) {
            ctx->pc = 0x19CE30u;
            goto label_19ce30;
        }
    }
    ctx->pc = 0x19CE1Cu;
    // 0x19ce1c: 0x0  nop
    ctx->pc = 0x19ce1cu;
    // NOP
label_19ce20:
    // 0x19ce20: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19ce20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19ce24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ce28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19ce28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_19ce2c:
    // 0x19ce2c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19ce2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_19ce30:
    // 0x19ce30: 0x0  nop
    ctx->pc = 0x19ce30u;
    // NOP
    // 0x19ce34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CE34u;
    {
        const bool branch_taken_0x19ce34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE34u;
        // 0x19ce38: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce34) {
            ctx->pc = 0x19CE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ce20;
        }
    }
    ctx->pc = 0x19CE3Cu;
    // 0x19ce3c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19ce3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ce40: 0x3e00008  jr          $ra
    ctx->pc = 0x19CE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE40u;
        // 0x19ce44: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CE48u;
}
