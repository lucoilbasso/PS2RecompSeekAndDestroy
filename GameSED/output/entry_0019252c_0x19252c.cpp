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

// Function: entry_0019252c
// Address: 0x19252c - 0x19253c
void entry_0019252c_0x19252c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019252c_0x19252c");
#endif

    ctx->pc = 0x19252cu;

    // 0x19252c: 0x8e22029c  lw          $v0, 0x29C($s1)
    ctx->pc = 0x19252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
    // 0x192530: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x192530u;
    {
        const bool branch_taken_0x192530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192530) {
            ctx->pc = 0x192534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192530u;
            // 0x192534: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192548u;
            return;
        }
    }
    ctx->pc = 0x192538u;
    // 0x192538: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x192538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x19253cu;
}
