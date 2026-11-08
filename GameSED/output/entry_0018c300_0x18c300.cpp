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

// Function: entry_0018c300
// Address: 0x18c300 - 0x18c308
void entry_0018c300_0x18c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c300_0x18c300");
#endif

    ctx->pc = 0x18c300u;

    // 0x18c300: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18c300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x18c304: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18c304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x18c308u;
}
