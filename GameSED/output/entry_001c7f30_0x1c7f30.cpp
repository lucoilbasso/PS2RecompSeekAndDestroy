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

// Function: entry_001c7f30
// Address: 0x1c7f30 - 0x1c7f34
void entry_001c7f30_0x1c7f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7f30_0x1c7f30");
#endif

    ctx->pc = 0x1c7f30u;

    // 0x1c7f30: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x1c7f30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    ctx->pc = 0x1c7f34u;
}
