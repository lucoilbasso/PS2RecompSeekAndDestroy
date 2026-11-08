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

// Function: entry_00163e00
// Address: 0x163e00 - 0x163e50
void entry_00163e00_0x163e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163e00_0x163e00");
#endif

    switch (ctx->pc) {
        case 0x163e14u: goto label_163e14;
        case 0x163e20u: goto label_163e20;
        default: break;
    }

    ctx->pc = 0x163e00u;

label_163e00:
    // 0x163e00: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x163e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_163e04:
    // 0x163e04: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x163e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_163e08:
    // 0x163e08: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x163e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_163e0c:
    // 0x163e0c: 0xc04110c  jal         func_104430
label_163e10:
    if (ctx->pc == 0x163E10u) {
        ctx->pc = 0x163E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E0Cu;
        // 0x163e10: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E14u;
        goto label_163e14;
    }
    ctx->pc = 0x163E0Cu;
    SET_GPR_U32(ctx, 31, 0x163E14u);
    ctx->pc = 0x163E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163E0Cu;
    // 0x163e10: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x163E0Cu, 0x163E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E14u;
label_163e14:
    // 0x163e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163e18:
    // 0x163e18: 0xc06a26e  jal         func_1A89B8
label_163e1c:
    if (ctx->pc == 0x163E1Cu) {
        ctx->pc = 0x163E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E18u;
        // 0x163e1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E20u;
        goto label_163e20;
    }
    ctx->pc = 0x163E18u;
    SET_GPR_U32(ctx, 31, 0x163E20u);
    ctx->pc = 0x163E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163E18u;
    // 0x163e1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x163E18u, 0x163E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E20u;
label_163e20:
    // 0x163e20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x163e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163e24:
    // 0x163e24: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x163e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_163e28:
    // 0x163e28: 0x24a4fffa  addiu       $a0, $a1, -0x6
    ctx->pc = 0x163e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
label_163e2c:
    // 0x163e2c: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x163e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_163e30:
    // 0x163e30: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_163e34:
    if (ctx->pc == 0x163E34u) {
        ctx->pc = 0x163E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E30u;
        // 0x163e34: 0x2466fffe  addiu       $a2, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E38u;
        goto label_163e38;
    }
    ctx->pc = 0x163E30u;
    {
        const bool branch_taken_0x163e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E30u;
        // 0x163e34: 0x2466fffe  addiu       $a2, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e30) {
            ctx->pc = 0x163FC0u;
            return;
        }
    }
    ctx->pc = 0x163E38u;
label_163e38:
    // 0x163e38: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x163e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_163e3c:
    // 0x163e3c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x163e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_163e40:
    // 0x163e40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x163e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_163e44:
    // 0x163e44: 0x8c636f70  lw          $v1, 0x6F70($v1)
    ctx->pc = 0x163e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28528)));
label_163e48:
    // 0x163e48: 0x600008  jr          $v1
label_163e4c:
    if (ctx->pc == 0x163E4Cu) {
        ctx->pc = 0x163E50u;
        goto label_fallthrough_0x163e48;
    }
    ctx->pc = 0x163E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163E48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x163e48:
    ctx->pc = 0x163E50u;
}
