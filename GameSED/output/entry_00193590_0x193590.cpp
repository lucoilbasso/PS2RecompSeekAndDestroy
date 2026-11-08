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

// Function: entry_00193590
// Address: 0x193590 - 0x193598
void entry_00193590_0x193590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193590_0x193590");
#endif

    ctx->pc = 0x193590u;

    // 0x193590: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x193590u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x193594: 0x0  nop
    ctx->pc = 0x193594u;
    // NOP
    ctx->pc = 0x193598u;
}
