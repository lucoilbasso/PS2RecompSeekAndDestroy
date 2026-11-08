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

// Function: entry_00125720
// Address: 0x125720 - 0x125738
void entry_00125720_0x125720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125720_0x125720");
#endif

    ctx->pc = 0x125720u;

    // 0x125720: 0xc78480d8  lwc1        $f4, -0x7F28($gp)
    ctx->pc = 0x125720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x125724: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x125724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x125728: 0xc78680dc  lwc1        $f6, -0x7F24($gp)
    ctx->pc = 0x125728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x12572c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12572cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125730: 0xc78580e0  lwc1        $f5, -0x7F20($gp)
    ctx->pc = 0x125730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x125734: 0x0  nop
    ctx->pc = 0x125734u;
    // NOP
    ctx->pc = 0x125738u;
}
