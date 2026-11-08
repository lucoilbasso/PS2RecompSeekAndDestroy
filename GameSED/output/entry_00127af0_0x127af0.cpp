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

// Function: entry_00127af0
// Address: 0x127af0 - 0x127af4
void entry_00127af0_0x127af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127af0_0x127af0");
#endif

    ctx->pc = 0x127af0u;

    // 0x127af0: 0x962201c2  lhu         $v0, 0x1C2($s1)
    ctx->pc = 0x127af0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
    ctx->pc = 0x127af4u;
}
