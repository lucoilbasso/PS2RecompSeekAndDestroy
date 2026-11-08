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

// Function: entry_0019ab98
// Address: 0x19ab98 - 0x19ab9c
void entry_0019ab98_0x19ab98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ab98_0x19ab98");
#endif

    ctx->pc = 0x19ab98u;

    // 0x19ab98: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x19ab98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    ctx->pc = 0x19ab9cu;
}
