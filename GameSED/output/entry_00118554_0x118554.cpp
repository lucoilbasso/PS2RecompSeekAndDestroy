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

// Function: entry_00118554
// Address: 0x118554 - 0x118560
void entry_00118554_0x118554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118554_0x118554");
#endif

    ctx->pc = 0x118554u;

    // 0x118554: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x118554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x118558: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x118558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11855c: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x11855cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    ctx->pc = 0x118560u;
}
