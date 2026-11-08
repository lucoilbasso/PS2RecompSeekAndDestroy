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

// Function: entry_0010e390
// Address: 0x10e390 - 0x10e3a0
void entry_0010e390_0x10e390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e390_0x10e390");
#endif

    ctx->pc = 0x10e390u;

    // 0x10e390: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10e390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10e394: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x10e394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x10e398: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x10E398u;
    {
        const bool branch_taken_0x10e398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E398u;
        // 0x10e39c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e398) {
            ctx->pc = 0x10E4E4u;
            return;
        }
    }
    ctx->pc = 0x10E3A0u;
}
