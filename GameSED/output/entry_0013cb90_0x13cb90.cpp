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

// Function: entry_0013cb90
// Address: 0x13cb90 - 0x13cbb8
void entry_0013cb90_0x13cb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cb90_0x13cb90");
#endif

    ctx->pc = 0x13cb90u;

    // 0x13cb90: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x13cb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x13cb94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13CB94u;
    {
        const bool branch_taken_0x13cb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB94u;
        // 0x13cb98: 0xc7818a34  lwc1        $f1, -0x75CC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb94) {
            ctx->pc = 0x13CBB8u;
            return;
        }
    }
    ctx->pc = 0x13CB9Cu;
    // 0x13cb9c: 0xc780812c  lwc1        $f0, -0x7ED4($gp)
    ctx->pc = 0x13cb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cba0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13cba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cba4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x13CBA4u;
    {
        const bool branch_taken_0x13cba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBA4u;
        // 0x13cba8: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cba4) {
            ctx->pc = 0x13CBBCu;
            return;
        }
    }
    ctx->pc = 0x13CBACu;
    // 0x13cbac: 0xc7808130  lwc1        $f0, -0x7ED0($gp)
    ctx->pc = 0x13cbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cbb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13cbb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13cbb4: 0xe7808a34  swc1        $f0, -0x75CC($gp)
    ctx->pc = 0x13cbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), bits); }
    ctx->pc = 0x13cbb8u;
}
