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

// Function: entry_00162520
// Address: 0x162520 - 0x16257c
void entry_00162520_0x162520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162520_0x162520");
#endif

    switch (ctx->pc) {
        case 0x162568u: goto label_162568;
        default: break;
    }

    ctx->pc = 0x162520u;

    // 0x162520: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x162520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162524: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x162524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x162528: 0xc781834c  lwc1        $f1, -0x7CB4($gp)
    ctx->pc = 0x162528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16252c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16252cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162530: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x162530u;
    {
        const bool branch_taken_0x162530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162530u;
        // 0x162534: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162530) {
            ctx->pc = 0x16257Cu;
            return;
        }
    }
    ctx->pc = 0x162538u;
    // 0x162538: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x162538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x16253c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16253cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162540: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x162540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162544: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x162544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162548: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x162548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x16254c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x16254cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x162550: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x162550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x162554: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x162554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x162558: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x162558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x16255c: 0x7faa0050  sq          $t2, 0x50($sp)
    ctx->pc = 0x16255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
    // 0x162560: 0xc0618bc  jal         func_1862F0
    ctx->pc = 0x162560u;
    SET_GPR_U32(ctx, 31, 0x162568u);
    ctx->pc = 0x162564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162560u;
    // 0x162564: 0xe46000d4  swc1        $f0, 0xD4($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1862F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1862F0u, 0x162560u, 0x162568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162568u;
label_162568:
    // 0x162568: 0x7baa0050  lq          $t2, 0x50($sp)
    ctx->pc = 0x162568u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16256c: 0x7ba90040  lq          $t1, 0x40($sp)
    ctx->pc = 0x16256cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162570: 0x7ba80030  lq          $t0, 0x30($sp)
    ctx->pc = 0x162570u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162574: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x162574u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162578: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x162578u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x16257cu;
}
