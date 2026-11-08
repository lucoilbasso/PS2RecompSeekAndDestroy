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

// Function: entry_001a9e38
// Address: 0x1a9e38 - 0x1a9e40
void entry_001a9e38_0x1a9e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9e38_0x1a9e38");
#endif

    ctx->pc = 0x1a9e38u;

    // 0x1a9e38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a9e3c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1a9e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x1a9e40u;
}
