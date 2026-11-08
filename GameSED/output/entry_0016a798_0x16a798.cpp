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

// Function: entry_0016a798
// Address: 0x16a798 - 0x16a7a8
void entry_0016a798_0x16a798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a798_0x16a798");
#endif

    ctx->pc = 0x16a798u;

    // 0x16a798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a79c: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x16a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x16a7a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16A7A0u;
    {
        const bool branch_taken_0x16a7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7A0u;
        // 0x16a7a4: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7a0) {
            ctx->pc = 0x16A7B8u;
            return;
        }
    }
    ctx->pc = 0x16A7A8u;
}
