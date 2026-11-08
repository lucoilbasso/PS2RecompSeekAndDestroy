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

// Function: entry_0018b468
// Address: 0x18b468 - 0x18b46c
void entry_0018b468_0x18b468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b468_0x18b468");
#endif

    ctx->pc = 0x18b468u;

    // 0x18b468: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x18b468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    ctx->pc = 0x18b46cu;
}
