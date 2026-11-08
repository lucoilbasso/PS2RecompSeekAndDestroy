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

// Function: entry_00179ff8
// Address: 0x179ff8 - 0x179ffc
void entry_00179ff8_0x179ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179ff8_0x179ff8");
#endif

    ctx->pc = 0x179ff8u;

    // 0x179ff8: 0x26720158  addiu       $s2, $s3, 0x158
    ctx->pc = 0x179ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 344));
    ctx->pc = 0x179ffcu;
}
