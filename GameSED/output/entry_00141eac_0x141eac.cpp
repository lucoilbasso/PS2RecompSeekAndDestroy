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

// Function: entry_00141eac
// Address: 0x141eac - 0x141eb0
void entry_00141eac_0x141eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141eac_0x141eac");
#endif

    ctx->pc = 0x141eacu;

    // 0x141eac: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x141eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    ctx->pc = 0x141eb0u;
}
