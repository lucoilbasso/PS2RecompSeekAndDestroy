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

// Function: entry_0015a300
// Address: 0x15a300 - 0x15a304
void entry_0015a300_0x15a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a300_0x15a300");
#endif

    ctx->pc = 0x15a300u;

    // 0x15a300: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x15a300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    ctx->pc = 0x15a304u;
}
