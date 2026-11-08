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

// Function: entry_001321b0
// Address: 0x1321b0 - 0x1321b4
void entry_001321b0_0x1321b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001321b0_0x1321b0");
#endif

    ctx->pc = 0x1321b0u;

    // 0x1321b0: 0xac850150  sw          $a1, 0x150($a0)
    ctx->pc = 0x1321b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 5));
    ctx->pc = 0x1321b4u;
}
