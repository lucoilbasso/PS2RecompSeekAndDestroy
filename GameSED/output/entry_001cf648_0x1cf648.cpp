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

// Function: entry_001cf648
// Address: 0x1cf648 - 0x1cf64c
void entry_001cf648_0x1cf648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf648_0x1cf648");
#endif

    ctx->pc = 0x1cf648u;

    // 0x1cf648: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1cf648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    ctx->pc = 0x1cf64cu;
}
