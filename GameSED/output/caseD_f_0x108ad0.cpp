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

// Function: caseD_f
// Address: 0x108ad0 - 0x108b28
void caseD_f_0x108ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x108ad0");
#endif

    switch (ctx->pc) {
        case 0x108ae0u: goto label_108ae0;
        case 0x108aecu: goto label_108aec;
        default: break;
    }

    ctx->pc = 0x108ad0u;

    // 0x108ad0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ad4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ad8: 0xc042144  jal         func_108510
    ctx->pc = 0x108AD8u;
    SET_GPR_U32(ctx, 31, 0x108AE0u);
    ctx->pc = 0x108ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108AD8u;
    // 0x108adc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108AD8u, 0x108AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108AE0u;
label_108ae0:
    // 0x108ae0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ae4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108AE4u;
    SET_GPR_U32(ctx, 31, 0x108AECu);
    ctx->pc = 0x108AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108AE4u;
    // 0x108ae8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108AE4u, 0x108AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108AECu;
label_108aec:
    // 0x108aec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x108AECu;
    {
        const bool branch_taken_0x108aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AECu;
        // 0x108af0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108aec) {
            ctx->pc = 0x108B28u;
            return;
        }
    }
    ctx->pc = 0x108AF4u;
    // 0x108af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x108af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108af8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x108af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108afc: 0xc781801c  lwc1        $f1, -0x7FE4($gp)
    ctx->pc = 0x108afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108b00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x108b04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x108b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x108b08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x108b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x108b0c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x108b0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x108b10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x108b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x108b14: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x108b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x108b18: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x108b18u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x108b1c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x108b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x108b20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108B20u;
    {
        const bool branch_taken_0x108b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B20u;
        // 0x108b24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b20) {
            ctx->pc = 0x108B30u;
            return;
        }
    }
    ctx->pc = 0x108B28u;
}
