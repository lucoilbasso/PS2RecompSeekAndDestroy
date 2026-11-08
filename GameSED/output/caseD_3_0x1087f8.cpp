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

// Function: caseD_3
// Address: 0x1087f8 - 0x108840
void caseD_3_0x1087f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1087f8");
#endif

    switch (ctx->pc) {
        case 0x108800u: goto label_108800;
        default: break;
    }

    ctx->pc = 0x1087f8u;

    // 0x1087f8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1087F8u;
    SET_GPR_U32(ctx, 31, 0x108800u);
    ctx->pc = 0x1087FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1087F8u;
    // 0x1087fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1087F8u, 0x108800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108800u;
label_108800:
    // 0x108800: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x108800u;
    {
        const bool branch_taken_0x108800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108800u;
        // 0x108804: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108800) {
            ctx->pc = 0x108840u;
            return;
        }
    }
    ctx->pc = 0x108808u;
    // 0x108808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x108808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10880c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10880cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108810: 0xc7818010  lwc1        $f1, -0x7FF0($gp)
    ctx->pc = 0x108810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108814: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x108818: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x108818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10881c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10881cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x108820: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x108820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x108824: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x108824u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x108828: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x108828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10882c: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x10882cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x108830: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x108830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x108834: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108834u;
    {
        const bool branch_taken_0x108834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108834u;
        // 0x108838: 0x8e83007c  lw          $v1, 0x7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108834) {
            ctx->pc = 0x108848u;
            return;
        }
    }
    ctx->pc = 0x10883Cu;
    // 0x10883c: 0x0  nop
    ctx->pc = 0x10883cu;
    // NOP
    ctx->pc = 0x108840u;
}
