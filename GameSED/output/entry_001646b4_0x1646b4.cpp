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

// Function: entry_001646b4
// Address: 0x1646b4 - 0x1646b8
void entry_001646b4_0x1646b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001646b4_0x1646b4");
#endif

    ctx->pc = 0x1646b4u;

    // 0x1646b4: 0x26a519c0  addiu       $a1, $s5, 0x19C0
    ctx->pc = 0x1646b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 6592));
    ctx->pc = 0x1646b8u;
}
