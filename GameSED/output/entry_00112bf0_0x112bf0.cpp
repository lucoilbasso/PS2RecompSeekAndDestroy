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

// Function: entry_00112bf0
// Address: 0x112bf0 - 0x112bf8
void entry_00112bf0_0x112bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112bf0_0x112bf0");
#endif

    ctx->pc = 0x112bf0u;

    // 0x112bf0: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x112bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x112bf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112bf8u;
}
