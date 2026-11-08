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

// Function: entry_001421c4
// Address: 0x1421c4 - 0x1421cc
void entry_001421c4_0x1421c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001421c4_0x1421c4");
#endif

    ctx->pc = 0x1421c4u;

    // 0x1421c4: 0x20630004  addi        $v1, $v1, 0x4
    ctx->pc = 0x1421c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x1421c8: 0x4600501e  madda.s     $f10, $f0
    ctx->pc = 0x1421c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[10], ctx->f[0])));
    ctx->pc = 0x1421ccu;
}
