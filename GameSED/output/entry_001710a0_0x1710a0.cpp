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

// Function: entry_001710a0
// Address: 0x1710a0 - 0x1710a8
void entry_001710a0_0x1710a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001710a0_0x1710a0");
#endif

    ctx->pc = 0x1710a0u;

    // 0x1710a0: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x1710a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x1710a4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1710a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1710a8u;
}
