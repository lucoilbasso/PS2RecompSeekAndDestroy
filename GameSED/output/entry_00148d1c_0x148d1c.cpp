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

// Function: entry_00148d1c
// Address: 0x148d1c - 0x148d20
void entry_00148d1c_0x148d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148d1c_0x148d1c");
#endif

    ctx->pc = 0x148d1cu;

    // 0x148d1c: 0x3c110026  lui         $s1, 0x26
    ctx->pc = 0x148d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x148d20u;
}
