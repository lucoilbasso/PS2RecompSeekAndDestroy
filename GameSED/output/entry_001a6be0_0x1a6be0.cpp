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

// Function: entry_001a6be0
// Address: 0x1a6be0 - 0x1a6be4
void entry_001a6be0_0x1a6be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6be0_0x1a6be0");
#endif

    ctx->pc = 0x1a6be0u;

    // 0x1a6be0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x1a6be4u;
}
