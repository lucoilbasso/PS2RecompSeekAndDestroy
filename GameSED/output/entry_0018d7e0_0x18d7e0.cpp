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

// Function: entry_0018d7e0
// Address: 0x18d7e0 - 0x18d82c
void entry_0018d7e0_0x18d7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d7e0_0x18d7e0");
#endif

    switch (ctx->pc) {
        case 0x18d7fcu: goto label_18d7fc;
        default: break;
    }

    ctx->pc = 0x18d7e0u;

    // 0x18d7e0: 0x14c2002d  bne         $a2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x18D7E0u;
    {
        const bool branch_taken_0x18d7e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7E0u;
        // 0x18d7e4: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d7e0) {
            ctx->pc = 0x18D898u;
            return;
        }
    }
    ctx->pc = 0x18D7E8u;
    // 0x18d7e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18d7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7f4: 0xc06370a  jal         func_18DC28
    ctx->pc = 0x18D7F4u;
    SET_GPR_U32(ctx, 31, 0x18D7FCu);
    ctx->pc = 0x18D7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D7F4u;
    // 0x18d7f8: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC28u, 0x18D7F4u, 0x18D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D7FCu;
label_18d7fc:
    // 0x18d7fc: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x18d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x18d800: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x18D800u;
    {
        const bool branch_taken_0x18d800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D800u;
        // 0x18d804: 0x97a6000a  lhu         $a2, 0xA($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d800) {
            ctx->pc = 0x18D860u;
            return;
        }
    }
    ctx->pc = 0x18D808u;
    // 0x18d808: 0x97a40008  lhu         $a0, 0x8($sp)
    ctx->pc = 0x18d808u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18d80c: 0x96230244  lhu         $v1, 0x244($s1)
    ctx->pc = 0x18d80cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x18d810: 0x96220208  lhu         $v0, 0x208($s1)
    ctx->pc = 0x18d810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x18d814: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18d814u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d818: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d818u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d81c: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x18d81cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18d820: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18D820u;
    {
        const bool branch_taken_0x18d820 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D820u;
        // 0x18d824: 0xa6220244  sh          $v0, 0x244($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d820) {
            ctx->pc = 0x18D82Cu;
            return;
        }
    }
    ctx->pc = 0x18D828u;
    // 0x18d828: 0xa6200244  sh          $zero, 0x244($s1)
    ctx->pc = 0x18d828u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x18d82cu;
}
