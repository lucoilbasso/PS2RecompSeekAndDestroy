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

// Function: entry_00147b20
// Address: 0x147b20 - 0x147b24
void entry_00147b20_0x147b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147b20_0x147b20");
#endif

    ctx->pc = 0x147b20u;

    // 0x147b20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x147b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x147b24u;
}
