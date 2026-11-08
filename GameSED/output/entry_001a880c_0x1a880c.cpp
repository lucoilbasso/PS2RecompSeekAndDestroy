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

// Function: entry_001a880c
// Address: 0x1a880c - 0x1a8810
void entry_001a880c_0x1a880c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a880c_0x1a880c");
#endif

    ctx->pc = 0x1a880cu;

    // 0x1a880c: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x1a880cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    ctx->pc = 0x1a8810u;
}
