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

// Function: entry_001a23ac
// Address: 0x1a23ac - 0x1a23b0
void entry_001a23ac_0x1a23ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a23ac_0x1a23ac");
#endif

    ctx->pc = 0x1a23acu;

    // 0x1a23ac: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1a23acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a23b0u;
}
