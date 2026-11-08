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

// Function: entry_0015bdd0
// Address: 0x15bdd0 - 0x15bdf8
void entry_0015bdd0_0x15bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bdd0_0x15bdd0");
#endif

    ctx->pc = 0x15bdd0u;

label_15bdd0:
    // 0x15bdd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15bdd4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x15BDD4u;
    {
        const bool branch_taken_0x15bdd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bdd4) {
            ctx->pc = 0x15BDD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BDD4u;
            // 0x15bdd8: 0x96e20014  lhu         $v0, 0x14($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BDF8u;
            return;
        }
    }
    ctx->pc = 0x15BDDCu;
    // 0x15bddc: 0x0  nop
    ctx->pc = 0x15bddcu;
    // NOP
    // 0x15bde0: 0x0  nop
    ctx->pc = 0x15bde0u;
    // NOP
    // 0x15bde4: 0x0  nop
    ctx->pc = 0x15bde4u;
    // NOP
    // 0x15bde8: 0x0  nop
    ctx->pc = 0x15bde8u;
    // NOP
    // 0x15bdec: 0x5446fff8  bnel        $v0, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15BDECu;
    {
        const bool branch_taken_0x15bdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x15bdec) {
            ctx->pc = 0x15BDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BDECu;
            // 0x15bdf0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bdd0;
        }
    }
    ctx->pc = 0x15BDF4u;
    // 0x15bdf4: 0x96e20014  lhu         $v0, 0x14($s7)
    ctx->pc = 0x15bdf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 20)));
    ctx->pc = 0x15bdf8u;
}
