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

// Function: entry_00141ea8
// Address: 0x141ea8 - 0x141eac
void entry_00141ea8_0x141ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141ea8_0x141ea8");
#endif

    ctx->pc = 0x141ea8u;

    // 0x141ea8: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x141ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    ctx->pc = 0x141eacu;
}
