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

// Function: entry_0018e5a4
// Address: 0x18e5a4 - 0x18e5a8
void entry_0018e5a4_0x18e5a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e5a4_0x18e5a4");
#endif

    ctx->pc = 0x18e5a4u;

    // 0x18e5a4: 0x144202a  slt         $a0, $t2, $a0
    ctx->pc = 0x18e5a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    ctx->pc = 0x18e5a8u;
}
