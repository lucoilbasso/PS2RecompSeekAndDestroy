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

// Function: entry_0011d850
// Address: 0x11d850 - 0x11d854
void entry_0011d850_0x11d850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d850_0x11d850");
#endif

    ctx->pc = 0x11d850u;

    // 0x11d850: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x11d850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x11d854u;
}
