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

// Function: entry_001610c4
// Address: 0x1610c4 - 0x1610c8
void entry_001610c4_0x1610c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001610c4_0x1610c4");
#endif

    ctx->pc = 0x1610c4u;

    // 0x1610c4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1610c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x1610c8u;
}
