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

// Function: entry_0012624c
// Address: 0x12624c - 0x126270
void entry_0012624c_0x12624c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012624c_0x12624c");
#endif

    ctx->pc = 0x12624cu;

    // 0x12624c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12624cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x126250: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x126250u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
    // 0x126254: 0xaec00008  sw          $zero, 0x8($s6)
    ctx->pc = 0x126254u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
    // 0x126258: 0x24530b70  addiu       $s3, $v0, 0xB70
    ctx->pc = 0x126258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2928));
    // 0x12625c: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x12625cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x126260: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x126260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x126264: 0x2412001d  addiu       $s2, $zero, 0x1D
    ctx->pc = 0x126264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x126268: 0xc79480ec  lwc1        $f20, -0x7F14($gp)
    ctx->pc = 0x126268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12626c: 0xc79680f0  lwc1        $f22, -0x7F10($gp)
    ctx->pc = 0x12626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    ctx->pc = 0x126270u;
}
