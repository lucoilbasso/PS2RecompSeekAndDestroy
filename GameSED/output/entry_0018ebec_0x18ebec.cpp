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

// Function: entry_0018ebec
// Address: 0x18ebec - 0x18ebf0
void entry_0018ebec_0x18ebec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ebec_0x18ebec");
#endif

    ctx->pc = 0x18ebecu;

    // 0x18ebec: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x18ebecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x18ebf0u;
}
