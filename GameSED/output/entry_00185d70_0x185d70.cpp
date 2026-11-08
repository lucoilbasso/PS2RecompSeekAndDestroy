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

// Function: entry_00185d70
// Address: 0x185d70 - 0x185d74
void entry_00185d70_0x185d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185d70_0x185d70");
#endif

    ctx->pc = 0x185d70u;

    // 0x185d70: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x185d70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x185d74u;
}
