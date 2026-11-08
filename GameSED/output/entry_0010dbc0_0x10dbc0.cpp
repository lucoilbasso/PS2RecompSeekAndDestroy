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

// Function: entry_0010dbc0
// Address: 0x10dbc0 - 0x10dbd0
void entry_0010dbc0_0x10dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dbc0_0x10dbc0");
#endif

    ctx->pc = 0x10dbc0u;

    // 0x10dbc0: 0x50a2000f  beql        $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10DBC0u;
    {
        const bool branch_taken_0x10dbc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x10dbc0) {
            ctx->pc = 0x10DBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DBC0u;
            // 0x10dbc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DC00u;
            return;
        }
    }
    ctx->pc = 0x10DBC8u;
    // 0x10dbc8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x10DBC8u;
    {
        const bool branch_taken_0x10dbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBC8u;
        // 0x10dbcc: 0x8e640048  lw          $a0, 0x48($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbc8) {
            ctx->pc = 0x10DC68u;
            return;
        }
    }
    ctx->pc = 0x10DBD0u;
}
