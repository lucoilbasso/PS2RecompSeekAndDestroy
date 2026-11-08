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

// Function: entry_0010b900
// Address: 0x10b900 - 0x10b948
void entry_0010b900_0x10b900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b900_0x10b900");
#endif

    switch (ctx->pc) {
        case 0x10b908u: goto label_10b908;
        case 0x10b914u: goto label_10b914;
        default: break;
    }

    ctx->pc = 0x10b900u;

    // 0x10b900: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B900u;
    SET_GPR_U32(ctx, 31, 0x10B908u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B900u, 0x10B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B908u;
label_10b908:
    // 0x10b908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b90c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B90Cu;
    SET_GPR_U32(ctx, 31, 0x10B914u);
    ctx->pc = 0x10B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B90Cu;
    // 0x10b910: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B90Cu, 0x10B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B914u;
label_10b914:
    // 0x10b914: 0x26470150  addiu       $a3, $s2, 0x150
    ctx->pc = 0x10b914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x10b918: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b918u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b91c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10b91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10b920: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x10b920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x10b924: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x10b924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10b928: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B928u;
    {
        const bool branch_taken_0x10b928 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B928u;
        // 0x10b92c: 0x24e80030  addiu       $t0, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b928) {
            ctx->pc = 0x10B948u;
            return;
        }
    }
    ctx->pc = 0x10B930u;
    // 0x10b930: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x10b930u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x10b934: 0xc4e10068  lwc1        $f1, 0x68($a3)
    ctx->pc = 0x10b934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10b938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b93c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10b93cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10b940: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10B940u;
    {
        const bool branch_taken_0x10b940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B940u;
        // 0x10b944: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b940) {
            ctx->pc = 0x10B950u;
            return;
        }
    }
    ctx->pc = 0x10B948u;
}
