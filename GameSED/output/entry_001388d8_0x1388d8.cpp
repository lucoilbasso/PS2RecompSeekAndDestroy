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

// Function: entry_001388d8
// Address: 0x1388d8 - 0x1388dc
void entry_001388d8_0x1388d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001388d8_0x1388d8");
#endif

    ctx->pc = 0x1388d8u;

    // 0x1388d8: 0xac800404  sw          $zero, 0x404($a0)
    ctx->pc = 0x1388d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1028), GPR_U32(ctx, 0));
    ctx->pc = 0x1388dcu;
}
