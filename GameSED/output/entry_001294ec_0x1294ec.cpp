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

// Function: entry_001294ec
// Address: 0x1294ec - 0x1294f0
void entry_001294ec_0x1294ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001294ec_0x1294ec");
#endif

    ctx->pc = 0x1294ecu;

    // 0x1294ec: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x1294ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1294f0u;
}
