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

// Function: entry_00165620
// Address: 0x165620 - 0x165628
void entry_00165620_0x165620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165620_0x165620");
#endif

    ctx->pc = 0x165620u;

    // 0x165620: 0xae001258  sw          $zero, 0x1258($s0)
    ctx->pc = 0x165620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4696), GPR_U32(ctx, 0));
    // 0x165624: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x165624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->pc = 0x165628u;
}
