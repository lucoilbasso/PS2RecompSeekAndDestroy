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

// Function: entry_0019a230
// Address: 0x19a230 - 0x19a234
void entry_0019a230_0x19a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a230_0x19a230");
#endif

    ctx->pc = 0x19a230u;

    // 0x19a230: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x19a230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
    ctx->pc = 0x19a234u;
}
