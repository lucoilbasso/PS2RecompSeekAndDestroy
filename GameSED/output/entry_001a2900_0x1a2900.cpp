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

// Function: entry_001a2900
// Address: 0x1a2900 - 0x1a2928
void entry_001a2900_0x1a2900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2900_0x1a2900");
#endif

    switch (ctx->pc) {
        case 0x1a2920u: goto label_1a2920;
        default: break;
    }

    ctx->pc = 0x1a2900u;

label_1a2900:
    // 0x1a2900: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1a2900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2904:
    // 0x1a2904: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1a2904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1a2908:
    // 0x1a2908: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a2908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a290c:
    // 0x1a290c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2910:
    if (ctx->pc == 0x1A2910u) {
        ctx->pc = 0x1A2910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A290Cu;
        // 0x1a2910: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2914u;
        goto label_1a2914;
    }
    ctx->pc = 0x1A290Cu;
    {
        const bool branch_taken_0x1a290c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A290Cu;
        // 0x1a2910: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a290c) {
            ctx->pc = 0x1A2928u;
            return;
        }
    }
    ctx->pc = 0x1A2914u;
label_1a2914:
    // 0x1a2914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2918:
    // 0x1a2918: 0x40f809  jalr        $v0
label_1a291c:
    if (ctx->pc == 0x1A291Cu) {
        ctx->pc = 0x1A291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2918u;
        // 0x1a291c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2920u;
        goto label_1a2920;
    }
    ctx->pc = 0x1A2918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2920u);
        ctx->pc = 0x1A291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2918u;
        // 0x1a291c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2918u, 0x1A2920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2920u;
label_1a2920:
    // 0x1a2920: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a2924:
    if (ctx->pc == 0x1A2924u) {
        ctx->pc = 0x1A2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2920u;
        // 0x1a2924: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2928u;
        goto label_fallthrough_0x1a2920;
    }
    ctx->pc = 0x1A2920u;
    {
        const bool branch_taken_0x1a2920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2920u;
        // 0x1a2924: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2920) {
            ctx->pc = 0x1A2958u;
            return;
        }
    }
label_fallthrough_0x1a2920:
    ctx->pc = 0x1A2928u;
}
