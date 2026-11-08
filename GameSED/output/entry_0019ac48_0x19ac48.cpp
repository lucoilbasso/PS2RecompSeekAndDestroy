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

// Function: entry_0019ac48
// Address: 0x19ac48 - 0x19ac4c
void entry_0019ac48_0x19ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ac48_0x19ac48");
#endif

    ctx->pc = 0x19ac48u;

    // 0x19ac48: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x19ac48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    ctx->pc = 0x19ac4cu;
}
