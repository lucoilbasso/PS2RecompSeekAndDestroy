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

// Function: entry_0013d07c
// Address: 0x13d07c - 0x13d088
void entry_0013d07c_0x13d07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d07c_0x13d07c");
#endif

    ctx->pc = 0x13d07cu;

    // 0x13d07c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13d07cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13d080: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x13d080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x13d084: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x13d084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    ctx->pc = 0x13d088u;
}
