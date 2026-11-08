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

// Function: entry_001cacbc
// Address: 0x1cacbc - 0x1cacc4
void entry_001cacbc_0x1cacbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cacbc_0x1cacbc");
#endif

    ctx->pc = 0x1cacbcu;

    // 0x1cacbc: 0x55e0ffd0  bnel        $t7, $zero, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1CACBCu;
    {
        const bool branch_taken_0x1cacbc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cacbc) {
            ctx->pc = 0x1CACC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CACBCu;
            // 0x1cacc0: 0x25e4ffff  addiu       $a0, $t7, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAC00u;
            return;
        }
    }
    ctx->pc = 0x1CACC4u;
}
