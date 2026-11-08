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

// Function: $L10
// Address: 0x1cfff8 - 0x1d0000
void ps2__L10_0x1cfff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L10_0x1cfff8");
#endif

    ctx->pc = 0x1cfff8u;

    // 0x1cfff8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1cfff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cfffc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1cfffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x1d0000u;
}
