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

// Function: entry_001ccb34
// Address: 0x1ccb34 - 0x1ccb38
void entry_001ccb34_0x1ccb34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccb34_0x1ccb34");
#endif

    ctx->pc = 0x1ccb34u;

    // 0x1ccb34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ccb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ccb38u;
}
