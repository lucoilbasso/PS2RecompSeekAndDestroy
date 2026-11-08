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

// Function: entry_0018fde4
// Address: 0x18fde4 - 0x18fdf8
void entry_0018fde4_0x18fde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fde4_0x18fde4");
#endif

    ctx->pc = 0x18fde4u;

    // 0x18fde4: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x18fde4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fde8: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x18fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18fdec: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x18fdecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x18fdf0: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x18fdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x18fdf4: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x18fdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    ctx->pc = 0x18fdf8u;
}
