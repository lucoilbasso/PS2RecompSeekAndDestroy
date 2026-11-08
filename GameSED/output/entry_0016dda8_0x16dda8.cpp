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

// Function: entry_0016dda8
// Address: 0x16dda8 - 0x16de00
void entry_0016dda8_0x16dda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dda8_0x16dda8");
#endif

    ctx->pc = 0x16dda8u;

    // 0x16dda8: 0xc78384bc  lwc1        $f3, -0x7B44($gp)
    ctx->pc = 0x16dda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16ddac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x16ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x16ddb0: 0xc4410600  lwc1        $f1, 0x600($v0)
    ctx->pc = 0x16ddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ddb4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x16ddb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ddb8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x16DDB8u;
    {
        const bool branch_taken_0x16ddb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDB8u;
        // 0x16ddbc: 0xe64102e8  swc1        $f1, 0x2E8($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ddb8) {
            ctx->pc = 0x16DE00u;
            return;
        }
    }
    ctx->pc = 0x16DDC0u;
    // 0x16ddc0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x16ddc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x16ddc4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x16ddc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x16ddc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16ddc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ddcc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16ddccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16ddd0: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x16ddd0u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x16ddd4: 0xc78284c0  lwc1        $f2, -0x7B40($gp)
    ctx->pc = 0x16ddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ddd8: 0xc64002e0  lwc1        $f0, 0x2E0($s2)
    ctx->pc = 0x16ddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dddc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16dddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16dde0: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x16dde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x16dde4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x16dde4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16dde8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16dde8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16ddec: 0xe64002e0  swc1        $f0, 0x2E0($s2)
    ctx->pc = 0x16ddecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 736), bits); }
    // 0x16ddf0: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x16ddf0u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x16ddf4: 0xe64002f0  swc1        $f0, 0x2F0($s2)
    ctx->pc = 0x16ddf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 752), bits); }
    // 0x16ddf8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x16DDF8u;
    {
        const bool branch_taken_0x16ddf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDF8u;
        // 0x16ddfc: 0xe64002e0  swc1        $f0, 0x2E0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 736), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ddf8) {
            ctx->pc = 0x16DF3Cu;
            return;
        }
    }
    ctx->pc = 0x16DE00u;
}
