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

// Function: entry_0019906c
// Address: 0x19906c - 0x199074
void entry_0019906c_0x19906c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019906c_0x19906c");
#endif

    ctx->pc = 0x19906cu;

    // 0x19906c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x19906cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x199070: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x199070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    ctx->pc = 0x199074u;
}
