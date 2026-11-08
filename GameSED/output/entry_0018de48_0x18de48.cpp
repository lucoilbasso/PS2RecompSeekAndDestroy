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

// Function: entry_0018de48
// Address: 0x18de48 - 0x18de4c
void entry_0018de48_0x18de48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018de48_0x18de48");
#endif

    ctx->pc = 0x18de48u;

    // 0x18de48: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x18de48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
    ctx->pc = 0x18de4cu;
}
