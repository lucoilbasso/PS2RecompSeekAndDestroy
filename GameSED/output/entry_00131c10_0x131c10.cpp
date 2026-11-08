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

// Function: entry_00131c10
// Address: 0x131c10 - 0x131c14
void entry_00131c10_0x131c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131c10_0x131c10");
#endif

    ctx->pc = 0x131c10u;

    // 0x131c10: 0xae340134  sw          $s4, 0x134($s1)
    ctx->pc = 0x131c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 20));
    ctx->pc = 0x131c14u;
}
