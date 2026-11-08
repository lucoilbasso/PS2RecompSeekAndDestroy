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

// Function: entry_00174a0c
// Address: 0x174a0c - 0x174a10
void entry_00174a0c_0x174a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174a0c_0x174a0c");
#endif

    ctx->pc = 0x174a0cu;

    // 0x174a0c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x174a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    ctx->pc = 0x174a10u;
}
