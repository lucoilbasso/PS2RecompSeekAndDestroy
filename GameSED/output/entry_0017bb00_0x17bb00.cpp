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

// Function: entry_0017bb00
// Address: 0x17bb00 - 0x17bb04
void entry_0017bb00_0x17bb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bb00_0x17bb00");
#endif

    ctx->pc = 0x17bb00u;

    // 0x17bb00: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x17bb00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x17bb04u;
}
