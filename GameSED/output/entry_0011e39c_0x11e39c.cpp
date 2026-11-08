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

// Function: entry_0011e39c
// Address: 0x11e39c - 0x11e3a0
void entry_0011e39c_0x11e39c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e39c_0x11e39c");
#endif

    ctx->pc = 0x11e39cu;

    // 0x11e39c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11e39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x11e3a0u;
}
