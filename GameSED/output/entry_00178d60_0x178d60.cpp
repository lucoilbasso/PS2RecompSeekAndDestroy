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

// Function: entry_00178d60
// Address: 0x178d60 - 0x178d64
void entry_00178d60_0x178d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178d60_0x178d60");
#endif

    ctx->pc = 0x178d60u;

    // 0x178d60: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x178d60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x178d64u;
}
