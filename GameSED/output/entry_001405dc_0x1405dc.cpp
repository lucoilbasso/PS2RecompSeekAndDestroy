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

// Function: entry_001405dc
// Address: 0x1405dc - 0x1405e4
void entry_001405dc_0x1405dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001405dc_0x1405dc");
#endif

    ctx->pc = 0x1405dcu;

    // 0x1405dc: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x1405dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x1405e0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1405e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->pc = 0x1405e4u;
}
