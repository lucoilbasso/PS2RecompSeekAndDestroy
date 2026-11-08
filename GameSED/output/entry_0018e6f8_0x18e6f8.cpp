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

// Function: entry_0018e6f8
// Address: 0x18e6f8 - 0x18e6fc
void entry_0018e6f8_0x18e6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e6f8_0x18e6f8");
#endif

    ctx->pc = 0x18e6f8u;

    // 0x18e6f8: 0x144202a  slt         $a0, $t2, $a0
    ctx->pc = 0x18e6f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    ctx->pc = 0x18e6fcu;
}
