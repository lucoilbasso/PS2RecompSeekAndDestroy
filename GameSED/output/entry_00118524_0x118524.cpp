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

// Function: entry_00118524
// Address: 0x118524 - 0x118530
void entry_00118524_0x118524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118524_0x118524");
#endif

    ctx->pc = 0x118524u;

    // 0x118524: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x118524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x118528: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x118528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11852c: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x11852cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    ctx->pc = 0x118530u;
}
