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

// Function: entry_001388d4
// Address: 0x1388d4 - 0x1388d8
void entry_001388d4_0x1388d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001388d4_0x1388d4");
#endif

    ctx->pc = 0x1388d4u;

    // 0x1388d4: 0xac800408  sw          $zero, 0x408($a0)
    ctx->pc = 0x1388d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1032), GPR_U32(ctx, 0));
    ctx->pc = 0x1388d8u;
}
