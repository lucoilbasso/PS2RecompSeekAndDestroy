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

// Function: entry_00171350
// Address: 0x171350 - 0x171358
void entry_00171350_0x171350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171350_0x171350");
#endif

    ctx->pc = 0x171350u;

    // 0x171350: 0x3010  mfhi        $a2
    ctx->pc = 0x171350u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x171354: 0xae06004c  sw          $a2, 0x4C($s0)
    ctx->pc = 0x171354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 6));
    ctx->pc = 0x171358u;
}
