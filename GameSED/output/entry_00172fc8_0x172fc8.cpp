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

// Function: entry_00172fc8
// Address: 0x172fc8 - 0x172fcc
void entry_00172fc8_0x172fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172fc8_0x172fc8");
#endif

    ctx->pc = 0x172fc8u;

    // 0x172fc8: 0xafa6008c  sw          $a2, 0x8C($sp)
    ctx->pc = 0x172fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 6));
    ctx->pc = 0x172fccu;
}
