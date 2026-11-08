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

// Function: entry_0013f0b8
// Address: 0x13f0b8 - 0x13f0bc
void entry_0013f0b8_0x13f0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f0b8_0x13f0b8");
#endif

    ctx->pc = 0x13f0b8u;

    // 0x13f0b8: 0x24a300d0  addiu       $v1, $a1, 0xD0
    ctx->pc = 0x13f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->pc = 0x13f0bcu;
}
