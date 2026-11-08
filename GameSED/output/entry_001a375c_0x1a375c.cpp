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

// Function: entry_001a375c
// Address: 0x1a375c - 0x1a3790
void entry_001a375c_0x1a375c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a375c_0x1a375c");
#endif

    switch (ctx->pc) {
        case 0x1a3788u: goto label_1a3788;
        default: break;
    }

    ctx->pc = 0x1a375cu;

label_1a375c:
    // 0x1a375c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1a375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1a3760:
    // 0x1a3760: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1a3760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1a3764:
    // 0x1a3764: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a3764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3768:
    // 0x1a3768: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1a3768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1a376c:
    // 0x1a376c: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x1a376cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
label_1a3770:
    // 0x1a3770: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1a3770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_1a3774:
    // 0x1a3774: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a3778:
    if (ctx->pc == 0x1A3778u) {
        ctx->pc = 0x1A3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3774u;
        // 0x1a3778: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A377Cu;
        goto label_1a377c;
    }
    ctx->pc = 0x1A3774u;
    {
        const bool branch_taken_0x1a3774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3774u;
        // 0x1a3778: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3774) {
            ctx->pc = 0x1A3790u;
            return;
        }
    }
    ctx->pc = 0x1A377Cu;
label_1a377c:
    // 0x1a377c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a377cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a3780:
    // 0x1a3780: 0x40f809  jalr        $v0
label_1a3784:
    if (ctx->pc == 0x1A3784u) {
        ctx->pc = 0x1A3784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3780u;
        // 0x1a3784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3788u;
        goto label_1a3788;
    }
    ctx->pc = 0x1A3780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3788u);
        ctx->pc = 0x1A3784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3780u;
        // 0x1a3784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3780u, 0x1A3788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3788u;
label_1a3788:
    // 0x1a3788: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a378c:
    if (ctx->pc == 0x1A378Cu) {
        ctx->pc = 0x1A378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3788u;
        // 0x1a378c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3790u;
        goto label_fallthrough_0x1a3788;
    }
    ctx->pc = 0x1A3788u;
    {
        const bool branch_taken_0x1a3788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3788u;
        // 0x1a378c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3788) {
            ctx->pc = 0x1A37BCu;
            return;
        }
    }
label_fallthrough_0x1a3788:
    ctx->pc = 0x1A3790u;
}
