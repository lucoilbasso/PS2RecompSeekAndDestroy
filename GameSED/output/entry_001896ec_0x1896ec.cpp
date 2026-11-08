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

// Function: entry_001896ec
// Address: 0x1896ec - 0x1896f0
void entry_001896ec_0x1896ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001896ec_0x1896ec");
#endif

    ctx->pc = 0x1896ecu;

    // 0x1896ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1896ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->pc = 0x1896f0u;
}
