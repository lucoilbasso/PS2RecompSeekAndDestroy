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

// Function: entry_00111870
// Address: 0x111870 - 0x1118c0
void entry_00111870_0x111870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111870_0x111870");
#endif

    switch (ctx->pc) {
        case 0x11188cu: goto label_11188c;
        default: break;
    }

    ctx->pc = 0x111870u;

    // 0x111870: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x111870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x111874: 0x8c50b830  lw          $s0, -0x47D0($v0)
    ctx->pc = 0x111874u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x111878: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x111878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11187c: 0x14c30010  bne         $a2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x11187Cu;
    {
        const bool branch_taken_0x11187c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x111880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11187Cu;
        // 0x111880: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11187c) {
            ctx->pc = 0x1118C0u;
            return;
        }
    }
    ctx->pc = 0x111884u;
    // 0x111884: 0xc0416dc  jal         func_105B70
    ctx->pc = 0x111884u;
    SET_GPR_U32(ctx, 31, 0x11188Cu);
    ctx->pc = 0x111888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111884u;
    // 0x111888: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B70u, 0x111884u, 0x11188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11188Cu;
label_11188c:
    // 0x11188c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111890: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x111890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111894: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x111894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x111898: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x111898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11189c: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x11189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1118a0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1118a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1118a4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1118a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1118a8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1118a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1118ac: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1118acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1118b0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1118b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1118b4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1118b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1118b8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1118B8u;
    {
        const bool branch_taken_0x1118b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118B8u;
        // 0x1118bc: 0xe6030008  swc1        $f3, 0x8($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118b8) {
            ctx->pc = 0x111910u;
            return;
        }
    }
    ctx->pc = 0x1118C0u;
}
