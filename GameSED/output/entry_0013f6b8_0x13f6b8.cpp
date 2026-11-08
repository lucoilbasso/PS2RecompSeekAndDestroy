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

// Function: entry_0013f6b8
// Address: 0x13f6b8 - 0x13f6bc
void entry_0013f6b8_0x13f6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f6b8_0x13f6b8");
#endif

    ctx->pc = 0x13f6b8u;

    // 0x13f6b8: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x13f6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    ctx->pc = 0x13f6bcu;
}
