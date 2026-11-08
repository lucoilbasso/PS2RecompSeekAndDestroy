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

// Function: entry_001459dc
// Address: 0x1459dc - 0x1459e0
void entry_001459dc_0x1459dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001459dc_0x1459dc");
#endif

    ctx->pc = 0x1459dcu;

    // 0x1459dc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1459dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1459e0u;
}
