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

// Function: entry_001aa090
// Address: 0x1aa090 - 0x1aa098
void entry_001aa090_0x1aa090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa090_0x1aa090");
#endif

    ctx->pc = 0x1aa090u;

    // 0x1aa090: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1aa090u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1aa094: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1aa094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->pc = 0x1aa098u;
}
