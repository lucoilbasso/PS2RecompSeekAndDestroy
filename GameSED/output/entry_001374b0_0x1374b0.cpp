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

// Function: entry_001374b0
// Address: 0x1374b0 - 0x1374b4
void entry_001374b0_0x1374b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001374b0_0x1374b0");
#endif

    ctx->pc = 0x1374b0u;

    // 0x1374b0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1374b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    ctx->pc = 0x1374b4u;
}
