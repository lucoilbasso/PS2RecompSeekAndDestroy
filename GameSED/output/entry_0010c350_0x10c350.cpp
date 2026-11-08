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

// Function: entry_0010c350
// Address: 0x10c350 - 0x10c360
void entry_0010c350_0x10c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c350_0x10c350");
#endif

    ctx->pc = 0x10c350u;

    // 0x10c350: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x10c350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x10c354: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10c354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10c358: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C358u;
    {
        const bool branch_taken_0x10c358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c358) {
            ctx->pc = 0x10C370u;
            return;
        }
    }
    ctx->pc = 0x10C360u;
}
