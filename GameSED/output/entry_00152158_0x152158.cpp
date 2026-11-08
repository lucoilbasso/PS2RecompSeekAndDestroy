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

// Function: entry_00152158
// Address: 0x152158 - 0x15215c
void entry_00152158_0x152158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152158_0x152158");
#endif

    ctx->pc = 0x152158u;

    // 0x152158: 0x8e6601ac  lw          $a2, 0x1AC($s3)
    ctx->pc = 0x152158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
    ctx->pc = 0x15215cu;
}
