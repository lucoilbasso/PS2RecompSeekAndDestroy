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

// Function: entry_001187fc
// Address: 0x1187fc - 0x118800
void entry_001187fc_0x1187fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001187fc_0x1187fc");
#endif

    ctx->pc = 0x1187fcu;

    // 0x1187fc: 0xae020fec  sw          $v0, 0xFEC($s0)
    ctx->pc = 0x1187fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4076), GPR_U32(ctx, 2));
    ctx->pc = 0x118800u;
}
