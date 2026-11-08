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

// Function: entry_0019cef4
// Address: 0x19cef4 - 0x19cef8
void entry_0019cef4_0x19cef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cef4_0x19cef4");
#endif

    ctx->pc = 0x19cef4u;

    // 0x19cef4: 0x28c50037  slti        $a1, $a2, 0x37
    ctx->pc = 0x19cef4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)55) ? 1 : 0);
    ctx->pc = 0x19cef8u;
}
