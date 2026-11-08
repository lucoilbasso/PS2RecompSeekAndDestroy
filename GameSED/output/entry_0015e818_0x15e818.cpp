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

// Function: entry_0015e818
// Address: 0x15e818 - 0x15e824
void entry_0015e818_0x15e818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e818_0x15e818");
#endif

    ctx->pc = 0x15e818u;

    // 0x15e818: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x15e818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15e81c: 0xace20030  sw          $v0, 0x30($a3)
    ctx->pc = 0x15e81cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
    // 0x15e820: 0x8ce50030  lw          $a1, 0x30($a3)
    ctx->pc = 0x15e820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    ctx->pc = 0x15e824u;
}
