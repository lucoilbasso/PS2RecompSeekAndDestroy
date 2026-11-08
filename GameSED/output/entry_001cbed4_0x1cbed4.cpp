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

// Function: entry_001cbed4
// Address: 0x1cbed4 - 0x1cbedc
void entry_001cbed4_0x1cbed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbed4_0x1cbed4");
#endif

    ctx->pc = 0x1cbed4u;

    // 0x1cbed4: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x1cbed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x1cbed8: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x1cbed8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    ctx->pc = 0x1cbedcu;
}
