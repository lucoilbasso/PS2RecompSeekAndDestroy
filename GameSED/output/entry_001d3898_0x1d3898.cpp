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

// Function: entry_001d3898
// Address: 0x1d3898 - 0x1d38c0
void entry_001d3898_0x1d3898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3898_0x1d3898");
#endif

    ctx->pc = 0x1d3898u;

label_1d3898:
    // 0x1d3898: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1d3898u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d389c: 0x0  nop
    ctx->pc = 0x1d389cu;
    // NOP
    // 0x1d38a0: 0x0  nop
    ctx->pc = 0x1d38a0u;
    // NOP
    // 0x1d38a4: 0x0  nop
    ctx->pc = 0x1d38a4u;
    // NOP
    // 0x1d38a8: 0x0  nop
    ctx->pc = 0x1d38a8u;
    // NOP
    // 0x1d38ac: 0x5043fffa  beql        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D38ACu;
    {
        const bool branch_taken_0x1d38ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d38ac) {
            ctx->pc = 0x1D38B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D38ACu;
            // 0x1d38b0: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3898;
        }
    }
    ctx->pc = 0x1D38B4u;
    // 0x1d38b4: 0x10000246  b           . + 4 + (0x246 << 2)
    ctx->pc = 0x1D38B4u;
    {
        const bool branch_taken_0x1d38b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38B4u;
        // 0x1d38b8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38b4) {
            ctx->pc = 0x1D41D0u;
            return;
        }
    }
    ctx->pc = 0x1D38BCu;
    // 0x1d38bc: 0x0  nop
    ctx->pc = 0x1d38bcu;
    // NOP
    ctx->pc = 0x1d38c0u;
}
