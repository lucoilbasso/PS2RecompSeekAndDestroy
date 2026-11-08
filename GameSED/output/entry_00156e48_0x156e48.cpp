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

// Function: entry_00156e48
// Address: 0x156e48 - 0x156e4c
void entry_00156e48_0x156e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156e48_0x156e48");
#endif

    ctx->pc = 0x156e48u;

    // 0x156e48: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x156e48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x156e4cu;
}
