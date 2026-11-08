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

// Function: entry_0016fe20
// Address: 0x16fe20 - 0x16fe2c
void entry_0016fe20_0x16fe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fe20_0x16fe20");
#endif

    ctx->pc = 0x16fe20u;

    // 0x16fe20: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x16fe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x16fe24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16fe24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe28: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x16fe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    ctx->pc = 0x16fe2cu;
}
