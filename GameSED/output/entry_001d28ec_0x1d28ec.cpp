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

// Function: entry_001d28ec
// Address: 0x1d28ec - 0x1d28f0
void entry_001d28ec_0x1d28ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d28ec_0x1d28ec");
#endif

    ctx->pc = 0x1d28ecu;

    // 0x1d28ec: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1d28ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x1d28f0u;
}
