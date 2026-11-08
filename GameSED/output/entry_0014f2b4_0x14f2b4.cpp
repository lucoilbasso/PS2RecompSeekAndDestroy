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

// Function: entry_0014f2b4
// Address: 0x14f2b4 - 0x14f2b8
void entry_0014f2b4_0x14f2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f2b4_0x14f2b4");
#endif

    ctx->pc = 0x14f2b4u;

    // 0x14f2b4: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14f2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    ctx->pc = 0x14f2b8u;
}
