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

// Function: entry_001d1060
// Address: 0x1d1060 - 0x1d1068
void entry_001d1060_0x1d1060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1060_0x1d1060");
#endif

    ctx->pc = 0x1d1060u;

    // 0x1d1060: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x1d1060u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d1064: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d1064u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1d1068u;
}
