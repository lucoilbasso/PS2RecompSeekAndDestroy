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

// Function: entry_00183fdc
// Address: 0x183fdc - 0x183fe0
void entry_00183fdc_0x183fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183fdc_0x183fdc");
#endif

    ctx->pc = 0x183fdcu;

    // 0x183fdc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x183fdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x183fe0u;
}
