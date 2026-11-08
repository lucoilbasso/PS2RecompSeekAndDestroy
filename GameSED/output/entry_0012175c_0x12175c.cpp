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

// Function: entry_0012175c
// Address: 0x12175c - 0x121760
void entry_0012175c_0x12175c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012175c_0x12175c");
#endif

    ctx->pc = 0x12175cu;

    // 0x12175c: 0xae3000b4  sw          $s0, 0xB4($s1)
    ctx->pc = 0x12175cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 16));
    ctx->pc = 0x121760u;
}
