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

// Function: entry_00114eec
// Address: 0x114eec - 0x114f50
void entry_00114eec_0x114eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114eec_0x114eec");
#endif

    switch (ctx->pc) {
        case 0x114f10u: goto label_114f10;
        case 0x114f20u: goto label_114f20;
        default: break;
    }

    ctx->pc = 0x114eecu;

label_114eec:
    // 0x114eec: 0x241124d0  addiu       $s1, $zero, 0x24D0
    ctx->pc = 0x114eecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
label_114ef0:
    // 0x114ef0: 0x128202  srl         $s0, $s2, 8
    ctx->pc = 0x114ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
label_114ef4:
    // 0x114ef4: 0xb18818  mult        $s1, $a1, $s1
    ctx->pc = 0x114ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_114ef8:
    // 0x114ef8: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x114ef8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_114efc:
    // 0x114efc: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x114efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_114f00:
    // 0x114f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_114f04:
    // 0x114f04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x114f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114f08:
    // 0x114f08: 0xc045360  jal         func_114D80
label_114f0c:
    if (ctx->pc == 0x114F0Cu) {
        ctx->pc = 0x114F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F08u;
        // 0x114f0c: 0x2453fcb0  addiu       $s3, $v0, -0x350 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F10u;
        goto label_114f10;
    }
    ctx->pc = 0x114F08u;
    SET_GPR_U32(ctx, 31, 0x114F10u);
    ctx->pc = 0x114F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F08u;
    // 0x114f0c: 0x2453fcb0  addiu       $s3, $v0, -0x350 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x114F08u, 0x114F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F10u;
label_114f10:
    // 0x114f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_114f14:
    // 0x114f14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x114f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114f18:
    // 0x114f18: 0xc045360  jal         func_114D80
label_114f1c:
    if (ctx->pc == 0x114F1Cu) {
        ctx->pc = 0x114F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F18u;
        // 0x114f1c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F20u;
        goto label_114f20;
    }
    ctx->pc = 0x114F18u;
    SET_GPR_U32(ctx, 31, 0x114F20u);
    ctx->pc = 0x114F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F18u;
    // 0x114f1c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x114F18u, 0x114F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F20u;
label_114f20:
    // 0x114f20: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x114f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_114f24:
    // 0x114f24: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x114f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_114f28:
    // 0x114f28: 0x2421d190  addiu       $at, $at, -0x2E70
    ctx->pc = 0x114f28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955408));
label_114f2c:
    // 0x114f2c: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x114f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
label_114f30:
    // 0x114f30: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_114f34:
    if (ctx->pc == 0x114F34u) {
        ctx->pc = 0x114F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F30u;
        // 0x114f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F38u;
        goto label_114f38;
    }
    ctx->pc = 0x114F30u;
    {
        const bool branch_taken_0x114f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F30u;
        // 0x114f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f30) {
            ctx->pc = 0x114FA4u;
            return;
        }
    }
    ctx->pc = 0x114F38u;
label_114f38:
    // 0x114f38: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x114f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_114f3c:
    // 0x114f3c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x114f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_114f40:
    // 0x114f40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x114f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_114f44:
    // 0x114f44: 0x8c6343b0  lw          $v1, 0x43B0($v1)
    ctx->pc = 0x114f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17328)));
label_114f48:
    // 0x114f48: 0x600008  jr          $v1
label_114f4c:
    if (ctx->pc == 0x114F4Cu) {
        ctx->pc = 0x114F50u;
        goto label_fallthrough_0x114f48;
    }
    ctx->pc = 0x114F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114F48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x114f48:
    ctx->pc = 0x114F50u;
}
