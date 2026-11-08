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

// Function: _hpFilLoop
// Address: 0x1421bc - 0x1421c4
void _hpFilLoop_0x1421bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_hpFilLoop_0x1421bc");
#endif

    ctx->pc = 0x1421bcu;

    // 0x1421bc: 0x2042ffff  addi        $v0, $v0, -0x1
    ctx->pc = 0x1421bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x1421c0: 0xc46a0000  lwc1        $f10, 0x0($v1)
    ctx->pc = 0x1421c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    ctx->pc = 0x1421c4u;
}
