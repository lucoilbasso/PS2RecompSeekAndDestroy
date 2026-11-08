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

// Function: entry_0017e6d8
// Address: 0x17e6d8 - 0x17e734
void entry_0017e6d8_0x17e6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e6d8_0x17e6d8");
#endif

    switch (ctx->pc) {
        case 0x17e6f8u: goto label_17e6f8;
        default: break;
    }

    ctx->pc = 0x17e6d8u;

    // 0x17e6d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17e6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17e6dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17e6e0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17e6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17e6e4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x17e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17e6e8: 0x24847c78  addiu       $a0, $a0, 0x7C78
    ctx->pc = 0x17e6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31864));
    // 0x17e6ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e6f0: 0xc0686ba  jal         func_1A1AE8
    ctx->pc = 0x17E6F0u;
    SET_GPR_U32(ctx, 31, 0x17E6F8u);
    ctx->pc = 0x17E6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E6F0u;
    // 0x17e6f4: 0x24710010  addiu       $s1, $v1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AE8u, 0x17E6F0u, 0x17E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E6F8u;
label_17e6f8:
    // 0x17e6f8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x17e6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17e6fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e700: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x17E700u;
    {
        const bool branch_taken_0x17e700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E700u;
        // 0x17e704: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e700) {
            ctx->pc = 0x17E754u;
            return;
        }
    }
    ctx->pc = 0x17E708u;
    // 0x17e708: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x17e708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x17e70c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E70Cu;
    {
        const bool branch_taken_0x17e70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E70Cu;
        // 0x17e710: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e70c) {
            ctx->pc = 0x17E734u;
            return;
        }
    }
    ctx->pc = 0x17E714u;
    // 0x17e714: 0x9623001c  lhu         $v1, 0x1C($s1)
    ctx->pc = 0x17e714u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x17e718: 0x9622001e  lhu         $v0, 0x1E($s1)
    ctx->pc = 0x17e718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x17e71c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x17e71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e720: 0xa7a30004  sh          $v1, 0x4($sp)
    ctx->pc = 0x17e720u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x17e724: 0xa7a20006  sh          $v0, 0x6($sp)
    ctx->pc = 0x17e724u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x17e728: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x17e728u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17e72c: 0xc05dc0a  jal         func_177028
    ctx->pc = 0x17E72Cu;
    SET_GPR_U32(ctx, 31, 0x17E734u);
    ctx->pc = 0x17E730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E72Cu;
    // 0x17e730: 0xa7a00002  sh          $zero, 0x2($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177028u, 0x17E72Cu, 0x17E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E734u;
}
