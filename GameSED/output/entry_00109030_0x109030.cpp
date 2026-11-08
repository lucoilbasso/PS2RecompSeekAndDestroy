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

// Function: entry_00109030
// Address: 0x109030 - 0x109070
void entry_00109030_0x109030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109030_0x109030");
#endif

    switch (ctx->pc) {
        case 0x109038u: goto label_109038;
        case 0x10904cu: goto label_10904c;
        case 0x109064u: goto label_109064;
        default: break;
    }

    ctx->pc = 0x109030u;

    // 0x109030: 0xc0416d0  jal         func_105B40
    ctx->pc = 0x109030u;
    SET_GPR_U32(ctx, 31, 0x109038u);
    ctx->pc = 0x109034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109030u;
    // 0x109034: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B40u, 0x109030u, 0x109038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109038u;
label_109038:
    // 0x109038: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x109038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10903c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10903cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109040: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x109040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109044: 0xc042144  jal         func_108510
    ctx->pc = 0x109044u;
    SET_GPR_U32(ctx, 31, 0x10904Cu);
    ctx->pc = 0x109048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109044u;
    // 0x109048: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x109044u, 0x10904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10904Cu;
label_10904c:
    // 0x10904c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x10904cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x109050: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x109050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x109054: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x109054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109058: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x109058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10905c: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x10905Cu;
    SET_GPR_U32(ctx, 31, 0x109064u);
    ctx->pc = 0x109060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10905Cu;
    // 0x109060: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x10905Cu, 0x109064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109064u;
label_109064:
    // 0x109064: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x109064u;
    {
        const bool branch_taken_0x109064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109064u;
        // 0x109068: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109064) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x10906Cu;
    // 0x10906c: 0x0  nop
    ctx->pc = 0x10906cu;
    // NOP
    ctx->pc = 0x109070u;
}
