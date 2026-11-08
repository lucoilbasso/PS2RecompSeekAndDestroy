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

// Function: entry_0014c750
// Address: 0x14c750 - 0x14c758
void entry_0014c750_0x14c750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c750_0x14c750");
#endif

    ctx->pc = 0x14c750u;

    // 0x14c750: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x14c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x14c754: 0xac520020  sw          $s2, 0x20($v0)
    ctx->pc = 0x14c754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 18));
    ctx->pc = 0x14c758u;
}
