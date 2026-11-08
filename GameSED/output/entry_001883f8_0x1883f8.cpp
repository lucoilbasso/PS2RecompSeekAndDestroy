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

// Function: entry_001883f8
// Address: 0x1883f8 - 0x188400
void entry_001883f8_0x1883f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001883f8_0x1883f8");
#endif

    ctx->pc = 0x1883f8u;

    // 0x1883f8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1883f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1883fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1883fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x188400u;
}
