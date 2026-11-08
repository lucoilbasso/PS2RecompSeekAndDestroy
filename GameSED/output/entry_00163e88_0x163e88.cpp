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

// Function: entry_00163e88
// Address: 0x163e88 - 0x163e90
void entry_00163e88_0x163e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163e88_0x163e88");
#endif

    ctx->pc = 0x163e88u;

    // 0x163e88: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x163e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x163e8c: 0x24720020  addiu       $s2, $v1, 0x20
    ctx->pc = 0x163e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->pc = 0x163e90u;
}
