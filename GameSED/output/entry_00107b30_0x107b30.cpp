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

// Function: entry_00107b30
// Address: 0x107b30 - 0x107b34
void entry_00107b30_0x107b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107b30_0x107b30");
#endif

    ctx->pc = 0x107b30u;

    // 0x107b30: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x107b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
    ctx->pc = 0x107b34u;
}
