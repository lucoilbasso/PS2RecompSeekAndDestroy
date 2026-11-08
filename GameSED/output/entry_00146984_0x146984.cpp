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

// Function: entry_00146984
// Address: 0x146984 - 0x146988
void entry_00146984_0x146984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146984_0x146984");
#endif

    ctx->pc = 0x146984u;

    // 0x146984: 0xa5420018  sh          $v0, 0x18($t2)
    ctx->pc = 0x146984u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 24), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x146988u;
}
