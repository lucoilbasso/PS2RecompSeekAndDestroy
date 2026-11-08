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

// Function: entry_001aa0dc
// Address: 0x1aa0dc - 0x1aa0e0
void entry_001aa0dc_0x1aa0dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa0dc_0x1aa0dc");
#endif

    ctx->pc = 0x1aa0dcu;

    // 0x1aa0dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    ctx->pc = 0x1aa0e0u;
}
