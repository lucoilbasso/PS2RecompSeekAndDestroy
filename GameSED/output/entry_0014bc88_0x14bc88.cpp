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

// Function: entry_0014bc88
// Address: 0x14bc88 - 0x14bc98
void entry_0014bc88_0x14bc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bc88_0x14bc88");
#endif

    ctx->pc = 0x14bc88u;

    // 0x14bc88: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x14bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14bc8c: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x14bc8cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x14bc90: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14bc94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14bc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x14bc98u;
}
