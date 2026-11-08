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

// Function: entry_001d4a70
// Address: 0x1d4a70 - 0x1d4a78
void entry_001d4a70_0x1d4a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4a70_0x1d4a70");
#endif

    ctx->pc = 0x1d4a70u;

    // 0x1d4a70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d4a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d4a74: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d4a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    ctx->pc = 0x1d4a78u;
}
