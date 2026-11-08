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

// Function: entry_0015a304
// Address: 0x15a304 - 0x15a308
void entry_0015a304_0x15a304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a304_0x15a304");
#endif

    ctx->pc = 0x15a304u;

    // 0x15a304: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x15a304u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    ctx->pc = 0x15a308u;
}
