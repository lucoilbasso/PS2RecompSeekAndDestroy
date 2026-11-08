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

// Function: entry_001193bc
// Address: 0x1193bc - 0x1193c4
void entry_001193bc_0x1193bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001193bc_0x1193bc");
#endif

    ctx->pc = 0x1193bcu;

    // 0x1193bc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1193bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1193c0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1193c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    ctx->pc = 0x1193c4u;
}
