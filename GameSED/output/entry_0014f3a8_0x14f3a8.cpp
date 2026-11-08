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

// Function: entry_0014f3a8
// Address: 0x14f3a8 - 0x14f3ac
void entry_0014f3a8_0x14f3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f3a8_0x14f3a8");
#endif

    ctx->pc = 0x14f3a8u;

    // 0x14f3a8: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    ctx->pc = 0x14f3acu;
}
