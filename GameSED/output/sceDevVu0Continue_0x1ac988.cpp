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

// Function: sceDevVu0Continue
// Address: 0x1ac988 - 0x1ac9d8
void sceDevVu0Continue_0x1ac988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevVu0Continue_0x1ac988");
#endif

    switch (ctx->pc) {
        case 0x1ac99cu: goto label_1ac99c;
        case 0x1ac9bcu: goto label_1ac9bc;
        case 0x1ac9c4u: goto label_1ac9c4;
        default: break;
    }

    ctx->pc = 0x1ac988u;

    // 0x1ac988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ac98c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ac98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ac990: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ac990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ac994: 0xc06b296  jal         func_1ACA58
    ctx->pc = 0x1AC994u;
    SET_GPR_U32(ctx, 31, 0x1AC99Cu);
    ctx->pc = 0x1AC998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC994u;
    // 0x1ac998: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACA58u, 0x1AC994u, 0x1AC99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC99Cu;
label_1ac99c:
    // 0x1ac99c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ac99cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac9a0: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1ac9a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ac9a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC9A4u;
    {
        const bool branch_taken_0x1ac9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9A4u;
        // 0x1ac9a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9a4) {
            ctx->pc = 0x1AC9C8u;
            goto label_1ac9c8;
        }
    }
    ctx->pc = 0x1AC9ACu;
    // 0x1ac9ac: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AC9ACu;
    {
        const bool branch_taken_0x1ac9ac = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AC9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9ACu;
        // 0x1ac9b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9ac) {
            ctx->pc = 0x1AC9CCu;
            goto label_1ac9cc;
        }
    }
    ctx->pc = 0x1AC9B4u;
    // 0x1ac9b4: 0xc06b2aa  jal         func_1ACAA8
    ctx->pc = 0x1AC9B4u;
    SET_GPR_U32(ctx, 31, 0x1AC9BCu);
    ctx->pc = 0x1AC9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC9B4u;
    // 0x1ac9b8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACAA8u, 0x1AC9B4u, 0x1AC9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC9BCu;
label_1ac9bc:
    // 0x1ac9bc: 0xc06b2a6  jal         func_1ACA98
    ctx->pc = 0x1AC9BCu;
    SET_GPR_U32(ctx, 31, 0x1AC9C4u);
    ctx->pc = 0x1AC9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC9BCu;
    // 0x1ac9c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACA98u, 0x1AC9BCu, 0x1AC9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC9C4u;
label_1ac9c4:
    // 0x1ac9c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ac9c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac9c8:
    // 0x1ac9c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ac9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac9cc:
    // 0x1ac9cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ac9ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9D0u;
        // 0x1ac9d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC9D8u;
}
