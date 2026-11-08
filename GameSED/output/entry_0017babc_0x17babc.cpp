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

// Function: entry_0017babc
// Address: 0x17babc - 0x17bac0
void entry_0017babc_0x17babc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017babc_0x17babc");
#endif

    ctx->pc = 0x17babcu;

    // 0x17babc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17babcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x17bac0u;
}
