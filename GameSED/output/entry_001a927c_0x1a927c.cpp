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

// Function: entry_001a927c
// Address: 0x1a927c - 0x1a9280
void entry_001a927c_0x1a927c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a927c_0x1a927c");
#endif

    ctx->pc = 0x1a927cu;

    // 0x1a927c: 0x2483001c  addiu       $v1, $a0, 0x1C
    ctx->pc = 0x1a927cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    ctx->pc = 0x1a9280u;
}
