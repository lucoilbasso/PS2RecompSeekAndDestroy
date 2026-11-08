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

// Function: entry_0013f17c
// Address: 0x13f17c - 0x13f180
void entry_0013f17c_0x13f17c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f17c_0x13f17c");
#endif

    ctx->pc = 0x13f17cu;

    // 0x13f17c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x13f17cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    ctx->pc = 0x13f180u;
}
