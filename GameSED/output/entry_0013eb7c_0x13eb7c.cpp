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

// Function: entry_0013eb7c
// Address: 0x13eb7c - 0x13ebc8
void entry_0013eb7c_0x13eb7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eb7c_0x13eb7c");
#endif

    switch (ctx->pc) {
        case 0x13eb90u: goto label_13eb90;
        case 0x13ebacu: goto label_13ebac;
        case 0x13ebb8u: goto label_13ebb8;
        default: break;
    }

    ctx->pc = 0x13eb7cu;

    // 0x13eb7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13eb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13eb80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13eb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13eb84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13eb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13eb88: 0xc043ff8  jal         func_10FFE0
    ctx->pc = 0x13EB88u;
    SET_GPR_U32(ctx, 31, 0x13EB90u);
    ctx->pc = 0x13EB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EB88u;
    // 0x13eb8c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FFE0u, 0x13EB88u, 0x13EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB90u;
label_13eb90:
    // 0x13eb90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13eb90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb94: 0x8e3301e4  lw          $s3, 0x1E4($s1)
    ctx->pc = 0x13eb94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x13eb98: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x13eb98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13eb9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13eb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eba0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13eba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eba4: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x13EBA4u;
    SET_GPR_U32(ctx, 31, 0x13EBACu);
    ctx->pc = 0x13EBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EBA4u;
    // 0x13eba8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x13EBA4u, 0x13EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EBACu;
label_13ebac:
    // 0x13ebac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ebacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebb0: 0xc0619ca  jal         func_186728
    ctx->pc = 0x13EBB0u;
    SET_GPR_U32(ctx, 31, 0x13EBB8u);
    ctx->pc = 0x13EBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EBB0u;
    // 0x13ebb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186728u, 0x13EBB0u, 0x13EBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EBB8u;
label_13ebb8:
    // 0x13ebb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13ebb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebbc: 0x8e6202f8  lw          $v0, 0x2F8($s3)
    ctx->pc = 0x13ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 760)));
    // 0x13ebc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EBC0u;
    {
        const bool branch_taken_0x13ebc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBC0u;
        // 0x13ebc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebc0) {
            ctx->pc = 0x13EBD0u;
            return;
        }
    }
    ctx->pc = 0x13EBC8u;
}
