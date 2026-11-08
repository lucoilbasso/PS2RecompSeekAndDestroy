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

// Function: entry_001713c4
// Address: 0x1713c4 - 0x1713cc
void entry_001713c4_0x1713c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001713c4_0x1713c4");
#endif

    ctx->pc = 0x1713c4u;

    // 0x1713c4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1713c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1713c8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x1713c8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1713ccu;
}
