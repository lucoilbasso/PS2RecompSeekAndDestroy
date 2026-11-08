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

// Function: entry_001af928
// Address: 0x1af928 - 0x1af930
void entry_001af928_0x1af928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af928_0x1af928");
#endif

    ctx->pc = 0x1af928u;

    // 0x1af928: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1af928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x1af92c: 0x0  nop
    ctx->pc = 0x1af92cu;
    // NOP
    ctx->pc = 0x1af930u;
}
