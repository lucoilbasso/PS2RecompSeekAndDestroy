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

// Function: entry_00186694
// Address: 0x186694 - 0x186698
void entry_00186694_0x186694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186694_0x186694");
#endif

    ctx->pc = 0x186694u;

    // 0x186694: 0x244266b8  addiu       $v0, $v0, 0x66B8
    ctx->pc = 0x186694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26296));
    ctx->pc = 0x186698u;
}
