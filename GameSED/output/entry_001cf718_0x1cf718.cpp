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

// Function: entry_001cf718
// Address: 0x1cf718 - 0x1cf720
void entry_001cf718_0x1cf718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf718_0x1cf718");
#endif

    ctx->pc = 0x1cf718u;

    // 0x1cf718: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cf718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cf71c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1cf71cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1cf720u;
}
