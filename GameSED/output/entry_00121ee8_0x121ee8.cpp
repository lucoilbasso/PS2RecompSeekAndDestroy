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

// Function: entry_00121ee8
// Address: 0x121ee8 - 0x121f08
void entry_00121ee8_0x121ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121ee8_0x121ee8");
#endif

    ctx->pc = 0x121ee8u;

    // 0x121ee8: 0xc6000164  lwc1        $f0, 0x164($s0)
    ctx->pc = 0x121ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121eec: 0xc6020168  lwc1        $f2, 0x168($s0)
    ctx->pc = 0x121eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x121ef0: 0x460008c0  add.s       $f3, $f1, $f0
    ctx->pc = 0x121ef0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x121ef4: 0xe6010110  swc1        $f1, 0x110($s0)
    ctx->pc = 0x121ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x121ef8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x121ef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x121efc: 0xe6010114  swc1        $f1, 0x114($s0)
    ctx->pc = 0x121efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x121f00: 0xe6030160  swc1        $f3, 0x160($s0)
    ctx->pc = 0x121f00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 352), bits); }
    // 0x121f04: 0xe6000164  swc1        $f0, 0x164($s0)
    ctx->pc = 0x121f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
    ctx->pc = 0x121f08u;
}
