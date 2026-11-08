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

// Function: entry_00183da8
// Address: 0x183da8 - 0x183db8
void entry_00183da8_0x183da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183da8_0x183da8");
#endif

    ctx->pc = 0x183da8u;

    // 0x183da8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x183da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x183dac: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x183dacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x183db0: 0xa4660002  sh          $a2, 0x2($v1)
    ctx->pc = 0x183db0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x183db4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x183db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    ctx->pc = 0x183db8u;
}
