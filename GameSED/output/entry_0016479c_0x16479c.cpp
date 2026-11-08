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

// Function: entry_0016479c
// Address: 0x16479c - 0x164808
void entry_0016479c_0x16479c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016479c_0x16479c");
#endif

    switch (ctx->pc) {
        case 0x1647bcu: goto label_1647bc;
        case 0x1647d8u: goto label_1647d8;
        case 0x1647e4u: goto label_1647e4;
        case 0x1647f0u: goto label_1647f0;
        case 0x1647fcu: goto label_1647fc;
        default: break;
    }

    ctx->pc = 0x16479cu;

    // 0x16479c: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x16479cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x1647a0: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1647a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1647a4: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1647a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x1647a8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1647a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1647ac: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1647acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1647b0: 0x8e160024  lw          $s6, 0x24($s0)
    ctx->pc = 0x1647b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1647b4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1647B4u;
    SET_GPR_U32(ctx, 31, 0x1647BCu);
    ctx->pc = 0x1647B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647B4u;
    // 0x1647b8: 0x8ed30044  lw          $s3, 0x44($s6) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1647B4u, 0x1647BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647BCu;
label_1647bc:
    // 0x1647bc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1647bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1647c0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1647c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647c4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1647c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1647c8: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1647C8u;
    {
        const bool branch_taken_0x1647c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1647c8) {
            ctx->pc = 0x1647CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1647C8u;
            // 0x1647cc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164808u;
            return;
        }
    }
    ctx->pc = 0x1647D0u;
    // 0x1647d0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1647D0u;
    SET_GPR_U32(ctx, 31, 0x1647D8u);
    ctx->pc = 0x1647D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647D0u;
    // 0x1647d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1647D0u, 0x1647D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647D8u;
label_1647d8:
    // 0x1647d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1647d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647dc: 0xc04106a  jal         func_1041A8
    ctx->pc = 0x1647DCu;
    SET_GPR_U32(ctx, 31, 0x1647E4u);
    ctx->pc = 0x1647E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647DCu;
    // 0x1647e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1041A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1041A8u, 0x1647DCu, 0x1647E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647E4u;
label_1647e4:
    // 0x1647e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1647e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1647E8u;
    SET_GPR_U32(ctx, 31, 0x1647F0u);
    ctx->pc = 0x1647ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647E8u;
    // 0x1647ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1647E8u, 0x1647F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647F0u;
label_1647f0:
    // 0x1647f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1647f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647f4: 0xc040fea  jal         func_103FA8
    ctx->pc = 0x1647F4u;
    SET_GPR_U32(ctx, 31, 0x1647FCu);
    ctx->pc = 0x1647F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647F4u;
    // 0x1647f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FA8u, 0x1647F4u, 0x1647FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647FCu;
label_1647fc:
    // 0x1647fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1647fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164800: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x164800u;
    {
        const bool branch_taken_0x164800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164800u;
        // 0x164804: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164800) {
            ctx->pc = 0x16485Cu;
            return;
        }
    }
    ctx->pc = 0x164808u;
}
