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

// Function: entry_00112c18
// Address: 0x112c18 - 0x112c1c
void entry_00112c18_0x112c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112c18_0x112c18");
#endif

    ctx->pc = 0x112c18u;

    // 0x112c18: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x112c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    ctx->pc = 0x112c1cu;
}
