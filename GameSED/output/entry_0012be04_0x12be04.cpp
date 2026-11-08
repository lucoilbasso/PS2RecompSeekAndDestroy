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

// Function: entry_0012be04
// Address: 0x12be04 - 0x12be50
void entry_0012be04_0x12be04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012be04_0x12be04");
#endif

    switch (ctx->pc) {
        case 0x12be14u: goto label_12be14;
        case 0x12be1cu: goto label_12be1c;
        case 0x12be28u: goto label_12be28;
        case 0x12be44u: goto label_12be44;
        default: break;
    }

    ctx->pc = 0x12be04u;

    // 0x12be04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12be04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12be08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12be08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12be0c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x12BE0Cu;
    SET_GPR_U32(ctx, 31, 0x12BE14u);
    ctx->pc = 0x12BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE0Cu;
    // 0x12be10: 0x240402f6  addiu       $a0, $zero, 0x2F6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 758));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x12BE0Cu, 0x12BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE14u;
label_12be14:
    // 0x12be14: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x12BE14u;
    SET_GPR_U32(ctx, 31, 0x12BE1Cu);
    ctx->pc = 0x12BE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE14u;
    // 0x12be18: 0x3404e590  ori         $a0, $zero, 0xE590 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x12BE14u, 0x12BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE1Cu;
label_12be1c:
    // 0x12be1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12be1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be20: 0xc048f0e  jal         func_123C38
    ctx->pc = 0x12BE20u;
    SET_GPR_U32(ctx, 31, 0x12BE28u);
    ctx->pc = 0x12BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE20u;
    // 0x12be24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123C38u, 0x12BE20u, 0x12BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE28u;
label_12be28:
    // 0x12be28: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12be28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12be2c: 0x24a55ce0  addiu       $a1, $a1, 0x5CE0
    ctx->pc = 0x12be2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23776));
    // 0x12be30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12be30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be34: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BE34u;
    {
        const bool branch_taken_0x12be34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE34u;
        // 0x12be38: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be34) {
            ctx->pc = 0x12BE50u;
            return;
        }
    }
    ctx->pc = 0x12BE3Cu;
    // 0x12be3c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12BE3Cu;
    SET_GPR_U32(ctx, 31, 0x12BE44u);
    ctx->pc = 0x12BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE3Cu;
    // 0x12be40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12BE3Cu, 0x12BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE44u;
label_12be44:
    // 0x12be44: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12BE44u;
    {
        const bool branch_taken_0x12be44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE44u;
        // 0x12be48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be44) {
            ctx->pc = 0x12BEA0u;
            return;
        }
    }
    ctx->pc = 0x12BE4Cu;
    // 0x12be4c: 0x0  nop
    ctx->pc = 0x12be4cu;
    // NOP
    ctx->pc = 0x12be50u;
}
