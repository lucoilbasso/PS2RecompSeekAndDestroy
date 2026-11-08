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

// Function: entry_00183ee0
// Address: 0x183ee0 - 0x183ee4
void entry_00183ee0_0x183ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183ee0_0x183ee0");
#endif

    ctx->pc = 0x183ee0u;

    // 0x183ee0: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x183ee0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    ctx->pc = 0x183ee4u;
}
