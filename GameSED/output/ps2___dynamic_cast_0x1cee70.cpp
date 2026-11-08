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

// Function: __dynamic_cast
// Address: 0x1cee70 - 0x1ceef8
void ps2___dynamic_cast_0x1cee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___dynamic_cast_0x1cee70");
#endif

    switch (ctx->pc) {
        case 0x1cee70u: goto label_1cee70;
        case 0x1cee74u: goto label_1cee74;
        case 0x1cee78u: goto label_1cee78;
        case 0x1cee7cu: goto label_1cee7c;
        case 0x1cee80u: goto label_1cee80;
        case 0x1cee84u: goto label_1cee84;
        case 0x1cee88u: goto label_1cee88;
        case 0x1cee8cu: goto label_1cee8c;
        case 0x1cee90u: goto label_1cee90;
        case 0x1cee94u: goto label_1cee94;
        case 0x1cee98u: goto label_1cee98;
        case 0x1cee9cu: goto label_1cee9c;
        case 0x1ceea0u: goto label_1ceea0;
        case 0x1ceea4u: goto label_1ceea4;
        case 0x1ceea8u: goto label_1ceea8;
        case 0x1ceeacu: goto label_1ceeac;
        case 0x1ceeb0u: goto label_1ceeb0;
        case 0x1ceeb4u: goto label_1ceeb4;
        case 0x1ceeb8u: goto label_1ceeb8;
        case 0x1ceebcu: goto label_1ceebc;
        case 0x1ceec0u: goto label_1ceec0;
        case 0x1ceec4u: goto label_1ceec4;
        case 0x1ceec8u: goto label_1ceec8;
        case 0x1ceeccu: goto label_1ceecc;
        case 0x1ceed0u: goto label_1ceed0;
        case 0x1ceed4u: goto label_1ceed4;
        case 0x1ceed8u: goto label_1ceed8;
        case 0x1ceedcu: goto label_1ceedc;
        case 0x1ceee0u: goto label_1ceee0;
        case 0x1ceee4u: goto label_1ceee4;
        case 0x1ceee8u: goto label_1ceee8;
        case 0x1ceeecu: goto label_1ceeec;
        case 0x1ceef0u: goto label_1ceef0;
        case 0x1ceef4u: goto label_1ceef4;
        default: break;
    }

    ctx->pc = 0x1cee70u;

label_1cee70:
    // 0x1cee70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cee74:
    // 0x1cee74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cee74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cee78:
    // 0x1cee78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cee78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cee7c:
    // 0x1cee7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cee7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cee80:
    // 0x1cee80: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1cee80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cee84:
    // 0x1cee84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cee84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1cee88:
    // 0x1cee88: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1cee88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cee8c:
    // 0x1cee8c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cee8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1cee90:
    // 0x1cee90: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1cee90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1cee94:
    // 0x1cee94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cee98:
    // 0x1cee98: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_1cee9c:
    if (ctx->pc == 0x1CEE9Cu) {
        ctx->pc = 0x1CEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE98u;
        // 0x1cee9c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEEA0u;
        goto label_1ceea0;
    }
    ctx->pc = 0x1CEE98u;
    {
        const bool branch_taken_0x1cee98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE98u;
        // 0x1cee9c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee98) {
            ctx->pc = 0x1CEEA8u;
            goto label_1ceea8;
        }
    }
    ctx->pc = 0x1CEEA0u;
label_1ceea0:
    // 0x1ceea0: 0xc073d1a  jal         func_1CF468
label_1ceea4:
    if (ctx->pc == 0x1CEEA4u) {
        ctx->pc = 0x1CEEA8u;
        goto label_1ceea8;
    }
    ctx->pc = 0x1CEEA0u;
    SET_GPR_U32(ctx, 31, 0x1CEEA8u);
    ctx->pc = 0x1CF468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF468u, 0x1CEEA0u, 0x1CEEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEEA8u;
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
