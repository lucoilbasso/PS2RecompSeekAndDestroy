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

// Function: entry_00118584
// Address: 0x118584 - 0x118590
void entry_00118584_0x118584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118584_0x118584");
#endif

    ctx->pc = 0x118584u;

    // 0x118584: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x118584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x118588: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x118588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11858c: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x11858cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    ctx->pc = 0x118590u;
}
