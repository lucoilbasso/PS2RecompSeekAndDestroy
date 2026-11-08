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

// Function: entry_0013b880
// Address: 0x13b880 - 0x13b888
void entry_0013b880_0x13b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b880_0x13b880");
#endif

    ctx->pc = 0x13b880u;

    // 0x13b880: 0x5640ffd3  bnel        $s2, $zero, . + 4 + (-0x2D << 2)
    ctx->pc = 0x13B880u;
    {
        const bool branch_taken_0x13b880 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b880) {
            ctx->pc = 0x13B884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B880u;
            // 0x13b884: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B7D0u;
            return;
        }
    }
    ctx->pc = 0x13B888u;
}
