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

// Function: entry_0012d560
// Address: 0x12d560 - 0x12d574
void entry_0012d560_0x12d560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d560_0x12d560");
#endif

    ctx->pc = 0x12d560u;

    // 0x12d560: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12d560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12d564: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12d564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12d568: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12d568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12d56c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x12d56cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x12d570: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x12d570u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
    ctx->pc = 0x12d574u;
}
