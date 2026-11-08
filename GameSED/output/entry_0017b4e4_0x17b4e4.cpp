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

// Function: entry_0017b4e4
// Address: 0x17b4e4 - 0x17b4e8
void entry_0017b4e4_0x17b4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b4e4_0x17b4e4");
#endif

    ctx->pc = 0x17b4e4u;

    // 0x17b4e4: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x17b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    ctx->pc = 0x17b4e8u;
}
