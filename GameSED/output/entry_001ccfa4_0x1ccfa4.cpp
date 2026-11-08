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

// Function: entry_001ccfa4
// Address: 0x1ccfa4 - 0x1ccfa8
void entry_001ccfa4_0x1ccfa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccfa4_0x1ccfa4");
#endif

    ctx->pc = 0x1ccfa4u;

    // 0x1ccfa4: 0x24510c98  addiu       $s1, $v0, 0xC98
    ctx->pc = 0x1ccfa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3224));
    ctx->pc = 0x1ccfa8u;
}
