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

// Function: entry_001ae3a8
// Address: 0x1ae3a8 - 0x1ae3ac
void entry_001ae3a8_0x1ae3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae3a8_0x1ae3a8");
#endif

    ctx->pc = 0x1ae3a8u;

    // 0x1ae3a8: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1ae3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ae3acu;
}
