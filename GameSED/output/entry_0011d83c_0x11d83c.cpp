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

// Function: entry_0011d83c
// Address: 0x11d83c - 0x11d840
void entry_0011d83c_0x11d83c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d83c_0x11d83c");
#endif

    ctx->pc = 0x11d83cu;

    // 0x11d83c: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x11d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x11d840u;
}
