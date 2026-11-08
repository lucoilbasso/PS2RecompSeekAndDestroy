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

// Function: entry_0018dba4
// Address: 0x18dba4 - 0x18dbb0
void entry_0018dba4_0x18dba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dba4_0x18dba4");
#endif

    ctx->pc = 0x18dba4u;

    // 0x18dba4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18DBA4u;
    {
        const bool branch_taken_0x18dba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBA4u;
        // 0x18dba8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dba4) {
            ctx->pc = 0x18DBE4u;
            return;
        }
    }
    ctx->pc = 0x18DBACu;
    // 0x18dbac: 0x0  nop
    ctx->pc = 0x18dbacu;
    // NOP
    ctx->pc = 0x18dbb0u;
}
