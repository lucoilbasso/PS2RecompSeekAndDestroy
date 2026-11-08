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

// Function: entry_001ca634
// Address: 0x1ca634 - 0x1ca638
void entry_001ca634_0x1ca634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca634_0x1ca634");
#endif

    ctx->pc = 0x1ca634u;

    // 0x1ca634: 0x0  nop
    ctx->pc = 0x1ca634u;
    // NOP
    ctx->pc = 0x1ca638u;
}
