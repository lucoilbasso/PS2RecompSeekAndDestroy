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

// Function: entry_00166230
// Address: 0x166230 - 0x166234
void entry_00166230_0x166230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166230_0x166230");
#endif

    ctx->pc = 0x166230u;

    // 0x166230: 0xae020c04  sw          $v0, 0xC04($s0)
    ctx->pc = 0x166230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 2));
    ctx->pc = 0x166234u;
}
