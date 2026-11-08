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

// Function: entry_001305d0
// Address: 0x1305d0 - 0x1305d4
void entry_001305d0_0x1305d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001305d0_0x1305d0");
#endif

    ctx->pc = 0x1305d0u;

    // 0x1305d0: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x1305d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    ctx->pc = 0x1305d4u;
}
