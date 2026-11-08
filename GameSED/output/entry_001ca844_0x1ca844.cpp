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

// Function: entry_001ca844
// Address: 0x1ca844 - 0x1ca848
void entry_001ca844_0x1ca844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca844_0x1ca844");
#endif

    ctx->pc = 0x1ca844u;

    // 0x1ca844: 0x14c1021  addu        $v0, $t2, $t4
    ctx->pc = 0x1ca844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    ctx->pc = 0x1ca848u;
}
