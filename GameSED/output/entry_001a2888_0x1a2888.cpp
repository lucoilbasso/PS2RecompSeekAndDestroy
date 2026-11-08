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

// Function: entry_001a2888
// Address: 0x1a2888 - 0x1a28d0
void entry_001a2888_0x1a2888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2888_0x1a2888");
#endif

    switch (ctx->pc) {
        case 0x1a28c0u: goto label_1a28c0;
        default: break;
    }

    ctx->pc = 0x1a2888u;

    // 0x1a2888: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a2888u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a288c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1a288cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1a2890: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x1a2890u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a2894: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x1a2894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a2898: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1A2898u;
    {
        const bool branch_taken_0x1a2898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2898) {
            ctx->pc = 0x1A289Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2898u;
            // 0x1a289c: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A28D0u;
            return;
        }
    }
    ctx->pc = 0x1A28A0u;
    // 0x1a28a0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1a28a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a28a4: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x1a28a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a28a8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a28a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a28ac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1a28acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1a28b0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1a28b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a28b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a28b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a28b8: 0xc067b68  jal         func_19EDA0
    ctx->pc = 0x1A28B8u;
    SET_GPR_U32(ctx, 31, 0x1A28C0u);
    ctx->pc = 0x1A28BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28B8u;
    // 0x1a28bc: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EDA0u, 0x1A28B8u, 0x1A28C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28C0u;
label_1a28c0:
    // 0x1a28c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a28c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a28c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a28c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a28c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A28C8u;
    {
        const bool branch_taken_0x1a28c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28C8u;
        // 0x1a28cc: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a28c8) {
            ctx->pc = 0x1A28DCu;
            return;
        }
    }
    ctx->pc = 0x1A28D0u;
}
