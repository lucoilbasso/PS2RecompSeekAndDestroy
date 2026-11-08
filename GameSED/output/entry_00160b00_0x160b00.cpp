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

// Function: entry_00160b00
// Address: 0x160b00 - 0x160b04
void entry_00160b00_0x160b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160b00_0x160b00");
#endif

    ctx->pc = 0x160b00u;

    // 0x160b00: 0x97868b38  lhu         $a2, -0x74C8($gp)
    ctx->pc = 0x160b00u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937400)));
    ctx->pc = 0x160b04u;
}
