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

// Function: entry_001a2698
// Address: 0x1a2698 - 0x1a26d0
void entry_001a2698_0x1a2698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2698_0x1a2698");
#endif

    ctx->pc = 0x1a2698u;

    // 0x1a2698: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A2698u;
    {
        const bool branch_taken_0x1a2698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2698) {
            ctx->pc = 0x1A269Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2698u;
            // 0x1a269c: 0xc60e0004  lwc1        $f14, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A26E0u;
            return;
        }
    }
    ctx->pc = 0x1A26A0u;
    // 0x1a26a0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a26a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a26a4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1a26a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a26a8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a26a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1a26ac: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1a26acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a26b0: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1a26b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a26b4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a26b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a26b8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1a26b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1a26bc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a26bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a26c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a26c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a26c4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a26c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a26c8: 0xc0677bc  jal         func_19DEF0
    ctx->pc = 0x1A26C8u;
    SET_GPR_U32(ctx, 31, 0x1A26D0u);
    ctx->pc = 0x1A26CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A26C8u;
    // 0x1a26cc: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEF0u, 0x1A26C8u, 0x1A26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A26D0u;
}
