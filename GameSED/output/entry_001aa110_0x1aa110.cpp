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

// Function: entry_001aa110
// Address: 0x1aa110 - 0x1aa114
void entry_001aa110_0x1aa110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa110_0x1aa110");
#endif

    ctx->pc = 0x1aa110u;

    // 0x1aa110: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1aa110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    ctx->pc = 0x1aa114u;
}
