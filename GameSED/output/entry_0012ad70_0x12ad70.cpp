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

// Function: entry_0012ad70
// Address: 0x12ad70 - 0x12ad74
void entry_0012ad70_0x12ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ad70_0x12ad70");
#endif

    ctx->pc = 0x12ad70u;

    // 0x12ad70: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x12ad70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->pc = 0x12ad74u;
}
