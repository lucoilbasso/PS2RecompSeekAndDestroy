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

// Function: entry_00171eac
// Address: 0x171eac - 0x171eb0
void entry_00171eac_0x171eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171eac_0x171eac");
#endif

    ctx->pc = 0x171eacu;

    // 0x171eac: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x171eacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x171eb0u;
}
