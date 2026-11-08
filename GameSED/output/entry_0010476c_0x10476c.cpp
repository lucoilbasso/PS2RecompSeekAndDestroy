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

// Function: entry_0010476c
// Address: 0x10476c - 0x104770
void entry_0010476c_0x10476c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010476c_0x10476c");
#endif

    ctx->pc = 0x10476cu;

    // 0x10476c: 0x260533bc  addiu       $a1, $s0, 0x33BC
    ctx->pc = 0x10476cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13244));
    ctx->pc = 0x104770u;
}
