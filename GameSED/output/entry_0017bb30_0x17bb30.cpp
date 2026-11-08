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

// Function: entry_0017bb30
// Address: 0x17bb30 - 0x17bb34
void entry_0017bb30_0x17bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bb30_0x17bb30");
#endif

    ctx->pc = 0x17bb30u;

    // 0x17bb30: 0xaca2fffc  sw          $v0, -0x4($a1)
    ctx->pc = 0x17bb30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 2));
    ctx->pc = 0x17bb34u;
}
