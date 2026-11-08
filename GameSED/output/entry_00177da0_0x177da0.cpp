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

// Function: entry_00177da0
// Address: 0x177da0 - 0x177da4
void entry_00177da0_0x177da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177da0_0x177da0");
#endif

    ctx->pc = 0x177da0u;

    // 0x177da0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x177da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->pc = 0x177da4u;
}
