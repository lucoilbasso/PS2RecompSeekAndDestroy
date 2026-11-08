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

// Function: entry_00106f18
// Address: 0x106f18 - 0x106f1c
void entry_00106f18_0x106f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106f18_0x106f18");
#endif

    ctx->pc = 0x106f18u;

    // 0x106f18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x106f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    ctx->pc = 0x106f1cu;
}
