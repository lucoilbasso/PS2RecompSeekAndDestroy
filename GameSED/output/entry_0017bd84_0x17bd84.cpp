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

// Function: entry_0017bd84
// Address: 0x17bd84 - 0x17bd88
void entry_0017bd84_0x17bd84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bd84_0x17bd84");
#endif

    ctx->pc = 0x17bd84u;

    // 0x17bd84: 0xaca2004c  sw          $v0, 0x4C($a1)
    ctx->pc = 0x17bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x17bd88u;
}
