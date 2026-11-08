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

// Function: entry_00150ad8
// Address: 0x150ad8 - 0x150b20
void entry_00150ad8_0x150ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150ad8_0x150ad8");
#endif

    ctx->pc = 0x150ad8u;

    // 0x150ad8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x150ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x150adc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x150adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150ae0: 0xc6420644  lwc1        $f2, 0x644($s2)
    ctx->pc = 0x150ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150ae4: 0xc6430640  lwc1        $f3, 0x640($s2)
    ctx->pc = 0x150ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x150ae8: 0x4601b902  mul.s       $f4, $f23, $f1
    ctx->pc = 0x150ae8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x150aec: 0xc6400648  lwc1        $f0, 0x648($s2)
    ctx->pc = 0x150aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150af0: 0x4601c142  mul.s       $f5, $f24, $f1
    ctx->pc = 0x150af0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[24], ctx->f[1]);
    // 0x150af4: 0x46171081  sub.s       $f2, $f2, $f23
    ctx->pc = 0x150af4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[23]);
    // 0x150af8: 0x461818c1  sub.s       $f3, $f3, $f24
    ctx->pc = 0x150af8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[24]);
    // 0x150afc: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x150afcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x150b00: 0xe6440414  swc1        $f4, 0x414($s2)
    ctx->pc = 0x150b00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1044), bits); }
    // 0x150b04: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x150b04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x150b08: 0xe6450620  swc1        $f5, 0x620($s2)
    ctx->pc = 0x150b08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1568), bits); }
    // 0x150b0c: 0xe6420644  swc1        $f2, 0x644($s2)
    ctx->pc = 0x150b0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1604), bits); }
    // 0x150b10: 0xe6430640  swc1        $f3, 0x640($s2)
    ctx->pc = 0x150b10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1600), bits); }
    // 0x150b14: 0xe6400648  swc1        $f0, 0x648($s2)
    ctx->pc = 0x150b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1608), bits); }
    // 0x150b18: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x150B18u;
    {
        const bool branch_taken_0x150b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B18u;
        // 0x150b1c: 0xe6410628  swc1        $f1, 0x628($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150b18) {
            ctx->pc = 0x150B74u;
            return;
        }
    }
    ctx->pc = 0x150B20u;
}
