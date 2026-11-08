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

// Function: entry_0018d9f8
// Address: 0x18d9f8 - 0x18d9fc
void entry_0018d9f8_0x18d9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d9f8_0x18d9f8");
#endif

    ctx->pc = 0x18d9f8u;

    // 0x18d9f8: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x18d9f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x18d9fcu;
}
