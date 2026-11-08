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

// Function: entry_001880f8
// Address: 0x1880f8 - 0x188100
void entry_001880f8_0x1880f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001880f8_0x1880f8");
#endif

    ctx->pc = 0x1880f8u;

    // 0x1880f8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1880f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1880fc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1880fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x188100u;
}
