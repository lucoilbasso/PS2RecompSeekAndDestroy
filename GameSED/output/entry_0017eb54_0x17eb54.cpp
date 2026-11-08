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

// Function: entry_0017eb54
// Address: 0x17eb54 - 0x17eb58
void entry_0017eb54_0x17eb54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eb54_0x17eb54");
#endif

    ctx->pc = 0x17eb54u;

    // 0x17eb54: 0x34424250  ori         $v0, $v0, 0x4250
    ctx->pc = 0x17eb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16976);
    ctx->pc = 0x17eb58u;
}
