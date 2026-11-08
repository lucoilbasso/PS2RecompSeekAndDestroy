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

// Function: entry_0019913c
// Address: 0x19913c - 0x199140
void entry_0019913c_0x19913c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019913c_0x19913c");
#endif

    ctx->pc = 0x19913cu;

    // 0x19913c: 0xac89000c  sw          $t1, 0xC($a0)
    ctx->pc = 0x19913cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 9));
    ctx->pc = 0x199140u;
}
