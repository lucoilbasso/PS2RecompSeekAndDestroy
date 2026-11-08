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

// Function: entry_0013ef24
// Address: 0x13ef24 - 0x13ef28
void entry_0013ef24_0x13ef24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ef24_0x13ef24");
#endif

    ctx->pc = 0x13ef24u;

    // 0x13ef24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13ef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    ctx->pc = 0x13ef28u;
}
