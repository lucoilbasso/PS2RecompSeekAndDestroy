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

// Function: entry_0017a3b4
// Address: 0x17a3b4 - 0x17a3b8
void entry_0017a3b4_0x17a3b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a3b4_0x17a3b4");
#endif

    ctx->pc = 0x17a3b4u;

    // 0x17a3b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x17a3b8u;
}
