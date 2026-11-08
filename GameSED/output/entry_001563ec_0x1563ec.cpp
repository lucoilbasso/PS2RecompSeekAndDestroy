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

// Function: entry_001563ec
// Address: 0x1563ec - 0x1563f0
void entry_001563ec_0x1563ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001563ec_0x1563ec");
#endif

    ctx->pc = 0x1563ecu;

    // 0x1563ec: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1563ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    ctx->pc = 0x1563f0u;
}
