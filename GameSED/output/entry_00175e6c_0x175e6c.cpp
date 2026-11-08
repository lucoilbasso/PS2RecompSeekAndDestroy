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

// Function: entry_00175e6c
// Address: 0x175e6c - 0x175e70
void entry_00175e6c_0x175e6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175e6c_0x175e6c");
#endif

    ctx->pc = 0x175e6cu;

    // 0x175e6c: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x175e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    ctx->pc = 0x175e70u;
}
