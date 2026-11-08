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

// Function: entry_0018ab8c
// Address: 0x18ab8c - 0x18ab90
void entry_0018ab8c_0x18ab8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ab8c_0x18ab8c");
#endif

    ctx->pc = 0x18ab8cu;

    // 0x18ab8c: 0x249ed650  addiu       $fp, $a0, -0x29B0
    ctx->pc = 0x18ab8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
    ctx->pc = 0x18ab90u;
}
