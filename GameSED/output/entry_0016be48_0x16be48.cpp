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

// Function: entry_0016be48
// Address: 0x16be48 - 0x16be4c
void entry_0016be48_0x16be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016be48_0x16be48");
#endif

    ctx->pc = 0x16be48u;

    // 0x16be48: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x16be48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    ctx->pc = 0x16be4cu;
}
