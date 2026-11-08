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

// Function: entry_001990ec
// Address: 0x1990ec - 0x1990f0
void entry_001990ec_0x1990ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001990ec_0x1990ec");
#endif

    ctx->pc = 0x1990ecu;

    // 0x1990ec: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x1990ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    ctx->pc = 0x1990f0u;
}
