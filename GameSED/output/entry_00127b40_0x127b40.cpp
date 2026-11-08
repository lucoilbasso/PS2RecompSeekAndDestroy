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

// Function: entry_00127b40
// Address: 0x127b40 - 0x127b44
void entry_00127b40_0x127b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127b40_0x127b40");
#endif

    ctx->pc = 0x127b40u;

    // 0x127b40: 0xa62001b8  sh          $zero, 0x1B8($s1)
    ctx->pc = 0x127b40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 440), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x127b44u;
}
