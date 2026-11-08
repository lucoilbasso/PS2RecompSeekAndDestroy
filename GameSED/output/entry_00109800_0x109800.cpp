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

// Function: entry_00109800
// Address: 0x109800 - 0x109860
void entry_00109800_0x109800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109800_0x109800");
#endif

    switch (ctx->pc) {
        case 0x109808u: goto label_109808;
        case 0x109828u: goto label_109828;
        default: break;
    }

    ctx->pc = 0x109800u;

    // 0x109800: 0xc04201a  jal         func_108068
    ctx->pc = 0x109800u;
    SET_GPR_U32(ctx, 31, 0x109808u);
    ctx->pc = 0x109804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109800u;
    // 0x109804: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108068u, 0x109800u, 0x109808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109808u;
label_109808:
    // 0x109808: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x109808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10980c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10980cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109810: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x109810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x109814: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109818: 0x50640013  beql        $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x109818u;
    {
        const bool branch_taken_0x109818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x109818) {
            ctx->pc = 0x10981Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109818u;
            // 0x10981c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109868u;
            return;
        }
    }
    ctx->pc = 0x109820u;
    // 0x109820: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109820u;
    SET_GPR_U32(ctx, 31, 0x109828u);
    ctx->pc = 0x109824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109820u;
    // 0x109824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109820u, 0x109828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109828u;
label_109828:
    // 0x109828: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x109828u;
    {
        const bool branch_taken_0x109828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109828u;
        // 0x10982c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109828) {
            ctx->pc = 0x109860u;
            return;
        }
    }
    ctx->pc = 0x109830u;
    // 0x109830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x109830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109834: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x109834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x109838: 0xc7818034  lwc1        $f1, -0x7FCC($gp)
    ctx->pc = 0x109838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10983c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10983cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x109840: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x109840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x109844: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x109844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x109848: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x109848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x10984c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10984cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x109850: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x109850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x109854: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x109854u;
    {
        const bool branch_taken_0x109854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109854) {
            ctx->pc = 0x10986Cu;
            return;
        }
    }
    ctx->pc = 0x10985Cu;
    // 0x10985c: 0x0  nop
    ctx->pc = 0x10985cu;
    // NOP
    ctx->pc = 0x109860u;
}
