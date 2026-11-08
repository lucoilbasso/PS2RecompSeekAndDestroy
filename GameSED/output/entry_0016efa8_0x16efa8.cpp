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

// Function: entry_0016efa8
// Address: 0x16efa8 - 0x16efac
void entry_0016efa8_0x16efa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016efa8_0x16efa8");
#endif

    ctx->pc = 0x16efa8u;

    // 0x16efa8: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x16efa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    ctx->pc = 0x16efacu;
}
