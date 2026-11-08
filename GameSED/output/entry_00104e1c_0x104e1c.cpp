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

// Function: entry_00104e1c
// Address: 0x104e1c - 0x104e20
void entry_00104e1c_0x104e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104e1c_0x104e1c");
#endif

    ctx->pc = 0x104e1cu;

    // 0x104e1c: 0x24430610  addiu       $v1, $v0, 0x610
    ctx->pc = 0x104e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    ctx->pc = 0x104e20u;
}
