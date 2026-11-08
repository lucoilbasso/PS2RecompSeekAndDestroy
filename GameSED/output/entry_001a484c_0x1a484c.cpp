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

// Function: entry_001a484c
// Address: 0x1a484c - 0x1a4878
void entry_001a484c_0x1a484c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a484c_0x1a484c");
#endif

    switch (ctx->pc) {
        case 0x1a486cu: goto label_1a486c;
        default: break;
    }

    ctx->pc = 0x1a484cu;

label_1a484c:
    // 0x1a484c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a484cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a4850:
    // 0x1a4850: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a4850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a4854:
    // 0x1a4854: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a4854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a4858:
    // 0x1a4858: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a485c:
    // 0x1a485c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a4860:
    if (ctx->pc == 0x1A4860u) {
        ctx->pc = 0x1A4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A485Cu;
        // 0x1a4860: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4864u;
        goto label_1a4864;
    }
    ctx->pc = 0x1A485Cu;
    {
        const bool branch_taken_0x1a485c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A485Cu;
        // 0x1a4860: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a485c) {
            ctx->pc = 0x1A4878u;
            return;
        }
    }
    ctx->pc = 0x1A4864u;
label_1a4864:
    // 0x1a4864: 0x40f809  jalr        $v0
label_1a4868:
    if (ctx->pc == 0x1A4868u) {
        ctx->pc = 0x1A4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4864u;
        // 0x1a4868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A486Cu;
        goto label_1a486c;
    }
    ctx->pc = 0x1A4864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A486Cu);
        ctx->pc = 0x1A4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4864u;
        // 0x1a4868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4864u, 0x1A486Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A486Cu;
label_1a486c:
    // 0x1a486c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a4870:
    if (ctx->pc == 0x1A4870u) {
        ctx->pc = 0x1A4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A486Cu;
        // 0x1a4870: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4874u;
        goto label_1a4874;
    }
    ctx->pc = 0x1A486Cu;
    {
        const bool branch_taken_0x1a486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A486Cu;
        // 0x1a4870: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a486c) {
            ctx->pc = 0x1A48A8u;
            return;
        }
    }
    ctx->pc = 0x1A4874u;
label_1a4874:
    // 0x1a4874: 0x0  nop
    ctx->pc = 0x1a4874u;
    // NOP
    ctx->pc = 0x1a4878u;
}
