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

// Function: entry_001d5954
// Address: 0x1d5954 - 0x1d5964
void entry_001d5954_0x1d5954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5954_0x1d5954");
#endif

    ctx->pc = 0x1d5954u;

    // 0x1d5954: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1d5954u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1d5958: 0x171102b  sltu        $v0, $t3, $s1
    ctx->pc = 0x1d5958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1d595c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x1D595Cu;
    {
        const bool branch_taken_0x1d595c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D595Cu;
        // 0x1d5960: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d595c) {
            ctx->pc = 0x1D5870u;
            return;
        }
    }
    ctx->pc = 0x1D5964u;
}
