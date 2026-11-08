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

// Function: entry_0012df08
// Address: 0x12df08 - 0x12df0c
void entry_0012df08_0x12df08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012df08_0x12df08");
#endif

    ctx->pc = 0x12df08u;

    // 0x12df08: 0x2442eae8  addiu       $v0, $v0, -0x1518
    ctx->pc = 0x12df08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961896));
    ctx->pc = 0x12df0cu;
}
