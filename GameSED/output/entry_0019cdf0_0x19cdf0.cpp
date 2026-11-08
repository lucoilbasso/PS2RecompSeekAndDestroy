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

// Function: entry_0019cdf0
// Address: 0x19cdf0 - 0x19ce20
void entry_0019cdf0_0x19cdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cdf0_0x19cdf0");
#endif

    ctx->pc = 0x19cdf0u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x19CE1Cu;
    // 0x19ce1c: 0x0  nop
    ctx->pc = 0x19ce1cu;
    // NOP
    ctx->pc = 0x19ce20u;
}
