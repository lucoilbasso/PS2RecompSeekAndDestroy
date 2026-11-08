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

// Function: entry_00108f80
// Address: 0x108f80 - 0x108fc8
void entry_00108f80_0x108f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108f80_0x108f80");
#endif

    switch (ctx->pc) {
        case 0x108f88u: goto label_108f88;
        default: break;
    }

    ctx->pc = 0x108f80u;

    // 0x108f80: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108F80u;
    SET_GPR_U32(ctx, 31, 0x108F88u);
    ctx->pc = 0x108F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F80u;
    // 0x108f84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108F80u, 0x108F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F88u;
label_108f88:
    // 0x108f88: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x108F88u;
    {
        const bool branch_taken_0x108f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F88u;
        // 0x108f8c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f88) {
            ctx->pc = 0x108FC8u;
            return;
        }
    }
    ctx->pc = 0x108F90u;
    // 0x108f90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x108f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108f94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x108f94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108f98: 0xc781802c  lwc1        $f1, -0x7FD4($gp)
    ctx->pc = 0x108f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108f9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x108fa0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x108fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x108fa4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x108fa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x108fa8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x108fa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x108fac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x108facu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x108fb0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x108fb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x108fb4: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x108fb4u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x108fb8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x108fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x108fbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108FBCu;
    {
        const bool branch_taken_0x108fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FBCu;
        // 0x108fc0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108fbc) {
            ctx->pc = 0x108FD0u;
            return;
        }
    }
    ctx->pc = 0x108FC4u;
    // 0x108fc4: 0x0  nop
    ctx->pc = 0x108fc4u;
    // NOP
    ctx->pc = 0x108fc8u;
}
