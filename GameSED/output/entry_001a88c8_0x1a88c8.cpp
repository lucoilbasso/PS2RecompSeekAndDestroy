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

// Function: entry_001a88c8
// Address: 0x1a88c8 - 0x1a88cc
void entry_001a88c8_0x1a88c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a88c8_0x1a88c8");
#endif

    ctx->pc = 0x1a88c8u;

    // 0x1a88c8: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a88c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    ctx->pc = 0x1a88ccu;
}
