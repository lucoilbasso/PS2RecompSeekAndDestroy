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

// Function: entry_00194f00
// Address: 0x194f00 - 0x194f04
void entry_00194f00_0x194f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194f00_0x194f00");
#endif

    ctx->pc = 0x194f00u;

    // 0x194f00: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x194f00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    ctx->pc = 0x194f04u;
}
