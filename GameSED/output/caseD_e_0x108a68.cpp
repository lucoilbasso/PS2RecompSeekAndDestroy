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

// Function: caseD_e
// Address: 0x108a68 - 0x108ab0
void caseD_e_0x108a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x108a68");
#endif

    switch (ctx->pc) {
        case 0x108a70u: goto label_108a70;
        default: break;
    }

    ctx->pc = 0x108a68u;

    // 0x108a68: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108A68u;
    SET_GPR_U32(ctx, 31, 0x108A70u);
    ctx->pc = 0x108A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A68u;
    // 0x108a6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108A68u, 0x108A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A70u;
label_108a70:
    // 0x108a70: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x108A70u;
    {
        const bool branch_taken_0x108a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A70u;
        // 0x108a74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a70) {
            ctx->pc = 0x108AB0u;
            return;
        }
    }
    ctx->pc = 0x108A78u;
    // 0x108a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x108a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108a7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x108a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108a80: 0xc7818018  lwc1        $f1, -0x7FE8($gp)
    ctx->pc = 0x108a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108a84: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x108a88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x108a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x108a8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x108a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x108a90: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x108a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x108a94: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x108a94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x108a98: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x108a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x108a9c: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x108a9cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x108aa0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x108aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x108aa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108AA4u;
    {
        const bool branch_taken_0x108aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AA4u;
        // 0x108aa8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108aa4) {
            ctx->pc = 0x108AB8u;
            return;
        }
    }
    ctx->pc = 0x108AACu;
    // 0x108aac: 0x0  nop
    ctx->pc = 0x108aacu;
    // NOP
    ctx->pc = 0x108ab0u;
}
