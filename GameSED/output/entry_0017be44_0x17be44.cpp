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

// Function: entry_0017be44
// Address: 0x17be44 - 0x17be48
void entry_0017be44_0x17be44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017be44_0x17be44");
#endif

    ctx->pc = 0x17be44u;

    // 0x17be44: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x17be44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    ctx->pc = 0x17be48u;
}
