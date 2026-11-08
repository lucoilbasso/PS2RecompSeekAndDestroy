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

// Function: entry_001d4740
// Address: 0x1d4740 - 0x1d4748
void entry_001d4740_0x1d4740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4740_0x1d4740");
#endif

    ctx->pc = 0x1d4740u;

    // 0x1d4740: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1d4740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d4744: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x1d4744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    ctx->pc = 0x1d4748u;
}
