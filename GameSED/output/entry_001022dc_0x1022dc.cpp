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

// Function: entry_001022dc
// Address: 0x1022dc - 0x1022f4
void entry_001022dc_0x1022dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001022dc_0x1022dc");
#endif

    ctx->pc = 0x1022dcu;

    // 0x1022dc: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1022DCu;
    {
        const bool branch_taken_0x1022dc = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1022E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022DCu;
        // 0x1022e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022dc) {
            ctx->pc = 0x1022F4u;
            return;
        }
    }
    ctx->pc = 0x1022E4u;
    // 0x1022e4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1022e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1022e8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1022e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1022ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1022ECu;
    {
        const bool branch_taken_0x1022ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1022ec) {
            ctx->pc = 0x1022F8u;
            return;
        }
    }
    ctx->pc = 0x1022F4u;
}
