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

// Function: entry_0014059c
// Address: 0x14059c - 0x1405a4
void entry_0014059c_0x14059c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014059c_0x14059c");
#endif

    ctx->pc = 0x14059cu;

    // 0x14059c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x14059cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1405a0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1405a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->pc = 0x1405a4u;
}
