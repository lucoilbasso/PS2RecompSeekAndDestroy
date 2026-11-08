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

// Function: entry_0010da80
// Address: 0x10da80 - 0x10da88
void entry_0010da80_0x10da80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010da80_0x10da80");
#endif

    ctx->pc = 0x10da80u;

    // 0x10da80: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x10da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x10da84: 0xac430178  sw          $v1, 0x178($v0)
    ctx->pc = 0x10da84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 376), GPR_U32(ctx, 3));
    ctx->pc = 0x10da88u;
}
