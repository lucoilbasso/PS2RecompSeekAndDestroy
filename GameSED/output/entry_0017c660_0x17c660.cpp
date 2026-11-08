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

// Function: entry_0017c660
// Address: 0x17c660 - 0x17c664
void entry_0017c660_0x17c660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c660_0x17c660");
#endif

    ctx->pc = 0x17c660u;

    // 0x17c660: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x17c660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->pc = 0x17c664u;
}
