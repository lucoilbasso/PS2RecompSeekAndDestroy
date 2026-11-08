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

// Function: entry_0015605c
// Address: 0x15605c - 0x156060
void entry_0015605c_0x15605c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015605c_0x15605c");
#endif

    ctx->pc = 0x15605cu;

    // 0x15605c: 0x244260b8  addiu       $v0, $v0, 0x60B8
    ctx->pc = 0x15605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24760));
    ctx->pc = 0x156060u;
}
