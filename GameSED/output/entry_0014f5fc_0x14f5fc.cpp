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

// Function: entry_0014f5fc
// Address: 0x14f5fc - 0x14f600
void entry_0014f5fc_0x14f5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f5fc_0x14f5fc");
#endif

    ctx->pc = 0x14f5fcu;

    // 0x14f5fc: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x14f5fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x14f600u;
}
