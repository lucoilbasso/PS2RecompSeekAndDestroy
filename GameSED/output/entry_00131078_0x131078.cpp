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

// Function: entry_00131078
// Address: 0x131078 - 0x131080
void entry_00131078_0x131078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131078_0x131078");
#endif

    ctx->pc = 0x131078u;

    // 0x131078: 0xac850060  sw          $a1, 0x60($a0)
    ctx->pc = 0x131078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
    // 0x13107c: 0xac640150  sw          $a0, 0x150($v1)
    ctx->pc = 0x13107cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 4));
    ctx->pc = 0x131080u;
}
