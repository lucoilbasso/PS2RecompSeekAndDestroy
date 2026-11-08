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

// Function: entry_001cadbc
// Address: 0x1cadbc - 0x1cadc4
void entry_001cadbc_0x1cadbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cadbc_0x1cadbc");
#endif

    ctx->pc = 0x1cadbcu;

    // 0x1cadbc: 0x5040ffc8  beql        $v0, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1CADBCu;
    {
        const bool branch_taken_0x1cadbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cadbc) {
            ctx->pc = 0x1CADC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CADBCu;
            // 0x1cadc0: 0x25cefffc  addiu       $t6, $t6, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CACE0u;
            return;
        }
    }
    ctx->pc = 0x1CADC4u;
}
