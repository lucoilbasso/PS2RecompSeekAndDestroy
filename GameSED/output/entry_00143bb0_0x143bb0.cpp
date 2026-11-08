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

// Function: entry_00143bb0
// Address: 0x143bb0 - 0x143bbc
void entry_00143bb0_0x143bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143bb0_0x143bb0");
#endif

    ctx->pc = 0x143bb0u;

    // 0x143bb0: 0x14c0ffeb  bnez        $a2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x143BB0u;
    {
        const bool branch_taken_0x143bb0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x143BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BB0u;
        // 0x143bb4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143bb0) {
            ctx->pc = 0x143B60u;
            return;
        }
    }
    ctx->pc = 0x143BB8u;
    // 0x143bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x143bbcu;
}
