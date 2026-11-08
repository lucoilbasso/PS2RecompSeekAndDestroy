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

// Function: entry_0015afac
// Address: 0x15afac - 0x15afb0
void entry_0015afac_0x15afac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015afac_0x15afac");
#endif

    ctx->pc = 0x15afacu;

    // 0x15afac: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x15afacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    ctx->pc = 0x15afb0u;
}
