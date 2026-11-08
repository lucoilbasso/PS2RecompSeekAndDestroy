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

// Function: entry_0014baf4
// Address: 0x14baf4 - 0x14baf8
void entry_0014baf4_0x14baf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014baf4_0x14baf4");
#endif

    ctx->pc = 0x14baf4u;

    // 0x14baf4: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x14baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    ctx->pc = 0x14baf8u;
}
