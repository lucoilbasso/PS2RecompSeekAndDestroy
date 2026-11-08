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

// Function: entry_0011eb08
// Address: 0x11eb08 - 0x11eb0c
void entry_0011eb08_0x11eb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eb08_0x11eb08");
#endif

    ctx->pc = 0x11eb08u;

    // 0x11eb08: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x11eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x11eb0cu;
}
