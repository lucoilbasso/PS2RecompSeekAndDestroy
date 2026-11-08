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

// Function: caseD_5
// Address: 0x1a7348 - 0x1a7358
void caseD_5_0x1a7348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1a7348");
#endif

    ctx->pc = 0x1a7348u;

    // 0x1a7348: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1a7348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1a734c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A734Cu;
    {
        const bool branch_taken_0x1a734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A734Cu;
        // 0x1a7350: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a734c) {
            ctx->pc = 0x1A7370u;
            return;
        }
    }
    ctx->pc = 0x1A7354u;
    // 0x1a7354: 0x0  nop
    ctx->pc = 0x1a7354u;
    // NOP
    ctx->pc = 0x1a7358u;
}
