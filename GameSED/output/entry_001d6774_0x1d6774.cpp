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

// Function: entry_001d6774
// Address: 0x1d6774 - 0x1d6778
void entry_001d6774_0x1d6774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6774_0x1d6774");
#endif

    ctx->pc = 0x1d6774u;

    // 0x1d6774: 0x2451da40  addiu       $s1, $v0, -0x25C0
    ctx->pc = 0x1d6774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    ctx->pc = 0x1d6778u;
}
