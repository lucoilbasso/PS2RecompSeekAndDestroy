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

// Function: entry_0011bbc8
// Address: 0x11bbc8 - 0x11bbcc
void entry_0011bbc8_0x11bbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bbc8_0x11bbc8");
#endif

    ctx->pc = 0x11bbc8u;

    // 0x11bbc8: 0x26084600  addiu       $t0, $s0, 0x4600
    ctx->pc = 0x11bbc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
    ctx->pc = 0x11bbccu;
}
