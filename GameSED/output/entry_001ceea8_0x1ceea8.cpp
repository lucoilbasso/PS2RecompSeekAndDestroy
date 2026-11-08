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

// Function: entry_001ceea8
// Address: 0x1ceea8 - 0x1ceef8
void entry_001ceea8_0x1ceea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceea8_0x1ceea8");
#endif

    switch (ctx->pc) {
        case 0x1ceeb0u: goto label_1ceeb0;
        case 0x1ceeb8u: goto label_1ceeb8;
        case 0x1ceec0u: goto label_1ceec0;
        default: break;
    }

    ctx->pc = 0x1ceea8u;

label_1ceea8:
    // 0x1ceea8: 0x80f809  jalr        $a0
label_1ceeac:
    if (ctx->pc == 0x1CEEACu) {
        ctx->pc = 0x1CEEB0u;
        goto label_1ceeb0;
    }
    ctx->pc = 0x1CEEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x1CEEB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEEA8u, 0x1CEEB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEEB0u;
label_1ceeb0:
    // 0x1ceeb0: 0x220f809  jalr        $s1
label_1ceeb4:
    if (ctx->pc == 0x1CEEB4u) {
        ctx->pc = 0x1CEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEB0u;
        // 0x1ceeb4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEEB8u;
        goto label_1ceeb8;
    }
    ctx->pc = 0x1CEEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x1CEEB8u);
        ctx->pc = 0x1CEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEB0u;
        // 0x1ceeb4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEEB0u, 0x1CEEB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEEB8u;
label_1ceeb8:
    // 0x1ceeb8: 0x240f809  jalr        $s2
label_1ceebc:
    if (ctx->pc == 0x1CEEBCu) {
        ctx->pc = 0x1CEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEB8u;
        // 0x1ceebc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEEC0u;
        goto label_1ceec0;
    }
    ctx->pc = 0x1CEEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x1CEEC0u);
        ctx->pc = 0x1CEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEB8u;
        // 0x1ceebc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEEB8u, 0x1CEEC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEEC0u;
label_1ceec0:
    // 0x1ceec0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ceec0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ceec4:
    // 0x1ceec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ceec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ceec8:
    // 0x1ceec8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ceec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ceecc:
    // 0x1ceecc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ceeccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ceed0:
    // 0x1ceed0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ceed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ceed4:
    // 0x1ceed4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ceed4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ceed8:
    // 0x1ceed8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1ceed8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ceedc:
    // 0x1ceedc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ceedcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ceee0:
    // 0x1ceee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ceee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ceee4:
    // 0x1ceee4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ceee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ceee8:
    // 0x1ceee8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ceee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ceeec:
    // 0x1ceeec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1ceeecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ceef0:
    // 0x1ceef0: 0x8072f70  j           func_1CBDC0
label_1ceef4:
    if (ctx->pc == 0x1CEEF4u) {
        ctx->pc = 0x1CEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEF0u;
        // 0x1ceef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEEF8u;
        goto label_fallthrough_0x1ceef0;
    }
    ctx->pc = 0x1CEEF0u;
    ctx->pc = 0x1CEEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEEF0u;
    // 0x1ceef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBDC0u;
    dyncast__C16__user_type_infoiRC9type_infoPvT2T3_0x1cbdc0(rdram, ctx, runtime); return;
label_fallthrough_0x1ceef0:
    ctx->pc = 0x1CEEF8u;
}
