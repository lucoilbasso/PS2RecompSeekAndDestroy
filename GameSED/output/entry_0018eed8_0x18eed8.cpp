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

// Function: entry_0018eed8
// Address: 0x18eed8 - 0x18eedc
void entry_0018eed8_0x18eed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eed8_0x18eed8");
#endif

    ctx->pc = 0x18eed8u;

    // 0x18eed8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18eed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x18eedcu;
}
