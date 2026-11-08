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

// Function: entry_001513bc
// Address: 0x1513bc - 0x1513c4
void entry_001513bc_0x1513bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001513bc_0x1513bc");
#endif

    ctx->pc = 0x1513bcu;

    // 0x1513bc: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x1513bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x1513c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1513c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->pc = 0x1513c4u;
}
