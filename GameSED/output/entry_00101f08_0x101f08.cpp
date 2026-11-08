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

// Function: entry_00101f08
// Address: 0x101f08 - 0x101f58
void entry_00101f08_0x101f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101f08_0x101f08");
#endif

    switch (ctx->pc) {
        case 0x101f10u: goto label_101f10;
        case 0x101f1cu: goto label_101f1c;
        default: break;
    }

    ctx->pc = 0x101f08u;

label_101f08:
    // 0x101f08: 0xc06a26e  jal         func_1A89B8
label_101f0c:
    if (ctx->pc == 0x101F0Cu) {
        ctx->pc = 0x101F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F08u;
        // 0x101f0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F10u;
        goto label_101f10;
    }
    ctx->pc = 0x101F08u;
    SET_GPR_U32(ctx, 31, 0x101F10u);
    ctx->pc = 0x101F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F08u;
    // 0x101f0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101F08u, 0x101F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F10u;
label_101f10:
    // 0x101f10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_101f14:
    // 0x101f14: 0xc06a26e  jal         func_1A89B8
label_101f18:
    if (ctx->pc == 0x101F18u) {
        ctx->pc = 0x101F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F14u;
        // 0x101f18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F1Cu;
        goto label_101f1c;
    }
    ctx->pc = 0x101F14u;
    SET_GPR_U32(ctx, 31, 0x101F1Cu);
    ctx->pc = 0x101F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F14u;
    // 0x101f18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101F14u, 0x101F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F1Cu;
label_101f1c:
    // 0x101f1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x101f1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101f20:
    // 0x101f20: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_101f24:
    if (ctx->pc == 0x101F24u) {
        ctx->pc = 0x101F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F20u;
        // 0x101f24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F28u;
        goto label_101f28;
    }
    ctx->pc = 0x101F20u;
    {
        const bool branch_taken_0x101f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x101F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F20u;
        // 0x101f24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f20) {
            ctx->pc = 0x101F68u;
            return;
        }
    }
    ctx->pc = 0x101F28u;
label_101f28:
    // 0x101f28: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x101f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_101f2c:
    // 0x101f2c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x101f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_101f30:
    // 0x101f30: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x101f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101f34:
    // 0x101f34: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x101f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_101f38:
    // 0x101f38: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_101f3c:
    if (ctx->pc == 0x101F3Cu) {
        ctx->pc = 0x101F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F38u;
        // 0x101f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F40u;
        goto label_101f40;
    }
    ctx->pc = 0x101F38u;
    {
        const bool branch_taken_0x101f38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F38u;
        // 0x101f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f38) {
            ctx->pc = 0x101F58u;
            return;
        }
    }
    ctx->pc = 0x101F40u;
label_101f40:
    // 0x101f40: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x101f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_101f44:
    // 0x101f44: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x101f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_101f48:
    // 0x101f48: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x101f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_101f4c:
    // 0x101f4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x101f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_101f50:
    // 0x101f50: 0x60f809  jalr        $v1
label_101f54:
    if (ctx->pc == 0x101F54u) {
        ctx->pc = 0x101F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F50u;
        // 0x101f54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F58u;
        goto label_fallthrough_0x101f50;
    }
    ctx->pc = 0x101F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x101F58u);
        ctx->pc = 0x101F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F50u;
        // 0x101f54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101F50u, 0x101F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x101f50:
    ctx->pc = 0x101F58u;
}
