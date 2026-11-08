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

// Function: entry_00131f68
// Address: 0x131f68 - 0x131f6c
void entry_00131f68_0x131f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131f68_0x131f68");
#endif

    ctx->pc = 0x131f68u;

    // 0x131f68: 0xa4800118  sh          $zero, 0x118($a0)
    ctx->pc = 0x131f68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x131f6cu;
}
