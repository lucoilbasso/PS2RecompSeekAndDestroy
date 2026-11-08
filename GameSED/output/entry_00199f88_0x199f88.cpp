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

// Function: entry_00199f88
// Address: 0x199f88 - 0x199f8c
void entry_00199f88_0x199f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199f88_0x199f88");
#endif

    ctx->pc = 0x199f88u;

    // 0x199f88: 0xae320024  sw          $s2, 0x24($s1)
    ctx->pc = 0x199f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 18));
    ctx->pc = 0x199f8cu;
}
