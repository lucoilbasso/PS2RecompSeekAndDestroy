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

// Function: entry_00157060
// Address: 0x157060 - 0x157068
void entry_00157060_0x157060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157060_0x157060");
#endif

    ctx->pc = 0x157060u;

    // 0x157060: 0x8e02fffc  lw          $v0, -0x4($s0)
    ctx->pc = 0x157060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x157064: 0xac43026c  sw          $v1, 0x26C($v0)
    ctx->pc = 0x157064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 620), GPR_U32(ctx, 3));
    ctx->pc = 0x157068u;
}
