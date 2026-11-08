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

// Function: entry_0019aeb8
// Address: 0x19aeb8 - 0x19aebc
void entry_0019aeb8_0x19aeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aeb8_0x19aeb8");
#endif

    ctx->pc = 0x19aeb8u;

    // 0x19aeb8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x19aeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x19aebcu;
}
