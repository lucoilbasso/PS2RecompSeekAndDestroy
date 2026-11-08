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

// Function: entry_0010fdbc
// Address: 0x10fdbc - 0x10fde4
void entry_0010fdbc_0x10fdbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fdbc_0x10fdbc");
#endif

    ctx->pc = 0x10fdbcu;

    // 0x10fdbc: 0x32220040  andi        $v0, $s1, 0x40
    ctx->pc = 0x10fdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
    // 0x10fdc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10FDC0u;
    {
        const bool branch_taken_0x10fdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fdc0) {
            ctx->pc = 0x10FDE4u;
            return;
        }
    }
    ctx->pc = 0x10FDC8u;
    // 0x10fdc8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10fdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10fdcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fdccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fdd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10fdd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10fdd4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x10FDD4u;
    {
        const bool branch_taken_0x10fdd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10fdd4) {
            ctx->pc = 0x10FDE4u;
            return;
        }
    }
    ctx->pc = 0x10FDDCu;
    // 0x10fddc: 0xc7808074  lwc1        $f0, -0x7F8C($gp)
    ctx->pc = 0x10fddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10fde0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x10fde0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x10fde4u;
}
