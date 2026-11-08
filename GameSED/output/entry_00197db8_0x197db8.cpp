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

// Function: entry_00197db8
// Address: 0x197db8 - 0x197dc4
void entry_00197db8_0x197db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197db8_0x197db8");
#endif

    ctx->pc = 0x197db8u;

    // 0x197db8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x197db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x197dbc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x197dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x197dc0: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x197dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->pc = 0x197dc4u;
}
