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

// Function: entry_001ccdb8
// Address: 0x1ccdb8 - 0x1ccdc0
void entry_001ccdb8_0x1ccdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccdb8_0x1ccdb8");
#endif

    ctx->pc = 0x1ccdb8u;

    // 0x1ccdb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ccdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ccdbc: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1ccdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    ctx->pc = 0x1ccdc0u;
}
