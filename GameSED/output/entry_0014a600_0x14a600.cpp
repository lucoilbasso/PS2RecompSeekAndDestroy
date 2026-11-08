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

// Function: entry_0014a600
// Address: 0x14a600 - 0x14a608
void entry_0014a600_0x14a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a600_0x14a600");
#endif

    ctx->pc = 0x14a600u;

    // 0x14a600: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14a600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a604: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x14a604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    ctx->pc = 0x14a608u;
}
