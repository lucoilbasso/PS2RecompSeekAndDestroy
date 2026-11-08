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

// Function: entry_001ccbc4
// Address: 0x1ccbc4 - 0x1ccbc8
void entry_001ccbc4_0x1ccbc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccbc4_0x1ccbc4");
#endif

    ctx->pc = 0x1ccbc4u;

    // 0x1ccbc4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1ccbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x1ccbc8u;
}
