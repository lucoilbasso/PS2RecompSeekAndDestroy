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

// Function: entry_0018c8e4
// Address: 0x18c8e4 - 0x18c8f4
void entry_0018c8e4_0x18c8e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c8e4_0x18c8e4");
#endif

    ctx->pc = 0x18c8e4u;

    // 0x18c8e4: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x18c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x18c8e8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x18c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x18c8ec: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x18c8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x18c8f0: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x18c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    ctx->pc = 0x18c8f4u;
}
