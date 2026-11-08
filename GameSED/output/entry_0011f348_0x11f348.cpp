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

// Function: entry_0011f348
// Address: 0x11f348 - 0x11f3ac
void entry_0011f348_0x11f348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f348_0x11f348");
#endif

    ctx->pc = 0x11f348u;

    // 0x11f348: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11f348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f34c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11F34Cu;
    {
        const bool branch_taken_0x11f34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F34Cu;
        // 0x11f350: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f34c) {
            ctx->pc = 0x11F3B8u;
            return;
        }
    }
    ctx->pc = 0x11F354u;
    // 0x11f354: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x11f354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f358: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x11f358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11f35c: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x11f35cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x11f360: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x11f360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11f364: 0xc4430070  lwc1        $f3, 0x70($v0)
    ctx->pc = 0x11f364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11f368: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x11f368u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x11f36c: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x11f36cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x11f370: 0xc488000c  lwc1        $f8, 0xC($a0)
    ctx->pc = 0x11f370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x11f374: 0xc4460074  lwc1        $f6, 0x74($v0)
    ctx->pc = 0x11f374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11f378: 0xc4470078  lwc1        $f7, 0x78($v0)
    ctx->pc = 0x11f378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x11f37c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x11f37cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x11f380: 0xc4440080  lwc1        $f4, 0x80($v0)
    ctx->pc = 0x11f380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11f384: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x11f384u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x11f388: 0xc4410084  lwc1        $f1, 0x84($v0)
    ctx->pc = 0x11f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f38c: 0x460539c0  add.s       $f7, $f7, $f5
    ctx->pc = 0x11f38cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x11f390: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x11f390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f394: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x11f394u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x11f398: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x11f398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x11f39c: 0xe4430070  swc1        $f3, 0x70($v0)
    ctx->pc = 0x11f39cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x11f3a0: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x11f3a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x11f3a4: 0xe4460074  swc1        $f6, 0x74($v0)
    ctx->pc = 0x11f3a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x11f3a8: 0xe4470078  swc1        $f7, 0x78($v0)
    ctx->pc = 0x11f3a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    ctx->pc = 0x11f3acu;
}
