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

// Function: entry_0014c2b8
// Address: 0x14c2b8 - 0x14c2bc
void entry_0014c2b8_0x14c2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c2b8_0x14c2b8");
#endif

    ctx->pc = 0x14c2b8u;

    // 0x14c2b8: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x14c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    ctx->pc = 0x14c2bcu;
}
