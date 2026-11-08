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

// Function: entry_0012dc98
// Address: 0x12dc98 - 0x12dc9c
void entry_0012dc98_0x12dc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dc98_0x12dc98");
#endif

    ctx->pc = 0x12dc98u;

    // 0x12dc98: 0xa680001e  sh          $zero, 0x1E($s4)
    ctx->pc = 0x12dc98u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 30), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12dc9cu;
}
