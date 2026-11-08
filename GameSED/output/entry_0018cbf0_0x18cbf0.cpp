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

// Function: entry_0018cbf0
// Address: 0x18cbf0 - 0x18cc14
void entry_0018cbf0_0x18cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cbf0_0x18cbf0");
#endif

    ctx->pc = 0x18cbf0u;

label_18cbf0:
    // 0x18cbf0: 0x50520025  beql        $v0, $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x18CBF0u;
    {
        const bool branch_taken_0x18cbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x18cbf0) {
            ctx->pc = 0x18CBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CBF0u;
            // 0x18cbf4: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CC88u;
            return;
        }
    }
    ctx->pc = 0x18CBF8u;
    // 0x18cbf8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x18cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x18cbfc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x18cbfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18cc00: 0x0  nop
    ctx->pc = 0x18cc00u;
    // NOP
    // 0x18cc04: 0x0  nop
    ctx->pc = 0x18cc04u;
    // NOP
    // 0x18cc08: 0x0  nop
    ctx->pc = 0x18cc08u;
    // NOP
    // 0x18cc0c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18CC0Cu;
    {
        const bool branch_taken_0x18cc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cc0c) {
            ctx->pc = 0x18CBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18cbf0;
        }
    }
    ctx->pc = 0x18CC14u;
}
