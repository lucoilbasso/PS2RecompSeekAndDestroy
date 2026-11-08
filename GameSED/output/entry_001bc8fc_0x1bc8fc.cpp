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

// Function: entry_001bc8fc
// Address: 0x1bc8fc - 0x1bc90c
void entry_001bc8fc_0x1bc8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc8fc_0x1bc8fc");
#endif

    ctx->pc = 0x1bc8fcu;

    // 0x1bc8fc: 0x54e80019  bnel        $a3, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BC8FCu;
    {
        const bool branch_taken_0x1bc8fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1bc8fc) {
            ctx->pc = 0x1BC900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC8FCu;
            // 0x1bc900: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC964u;
            return;
        }
    }
    ctx->pc = 0x1BC904u;
    // 0x1bc904: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BC904u;
    {
        const bool branch_taken_0x1bc904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC904u;
        // 0x1bc908: 0x1c21024  and         $v0, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc904) {
            ctx->pc = 0x1BC94Cu;
            return;
        }
    }
    ctx->pc = 0x1BC90Cu;
}
