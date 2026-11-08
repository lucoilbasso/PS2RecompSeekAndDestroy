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

// Function: entry_00115010
// Address: 0x115010 - 0x115070
void entry_00115010_0x115010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115010_0x115010");
#endif

    switch (ctx->pc) {
        case 0x11502cu: goto label_11502c;
        case 0x11503cu: goto label_11503c;
        default: break;
    }

    ctx->pc = 0x115010u;

label_115010:
    // 0x115010: 0x241124d0  addiu       $s1, $zero, 0x24D0
    ctx->pc = 0x115010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
label_115014:
    // 0x115014: 0x128202  srl         $s0, $s2, 8
    ctx->pc = 0x115014u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
label_115018:
    // 0x115018: 0xb18818  mult        $s1, $a1, $s1
    ctx->pc = 0x115018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_11501c:
    // 0x11501c: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x11501cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_115020:
    // 0x115020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115024:
    // 0x115024: 0xc045360  jal         func_114D80
label_115028:
    if (ctx->pc == 0x115028u) {
        ctx->pc = 0x115028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115024u;
        // 0x115028: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11502Cu;
        goto label_11502c;
    }
    ctx->pc = 0x115024u;
    SET_GPR_U32(ctx, 31, 0x11502Cu);
    ctx->pc = 0x115028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115024u;
    // 0x115028: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115024u, 0x11502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11502Cu;
label_11502c:
    // 0x11502c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11502cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115030:
    // 0x115030: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115034:
    // 0x115034: 0xc045360  jal         func_114D80
label_115038:
    if (ctx->pc == 0x115038u) {
        ctx->pc = 0x115038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115034u;
        // 0x115038: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11503Cu;
        goto label_11503c;
    }
    ctx->pc = 0x115034u;
    SET_GPR_U32(ctx, 31, 0x11503Cu);
    ctx->pc = 0x115038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115034u;
    // 0x115038: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115034u, 0x11503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11503Cu;
label_11503c:
    // 0x11503c: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x11503cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_115040:
    // 0x115040: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x115040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_115044:
    // 0x115044: 0x2421d190  addiu       $at, $at, -0x2E70
    ctx->pc = 0x115044u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955408));
label_115048:
    // 0x115048: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x115048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
label_11504c:
    // 0x11504c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_115050:
    if (ctx->pc == 0x115050u) {
        ctx->pc = 0x115050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11504Cu;
        // 0x115050: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115054u;
        goto label_115054;
    }
    ctx->pc = 0x11504Cu;
    {
        const bool branch_taken_0x11504c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11504Cu;
        // 0x115050: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11504c) {
            ctx->pc = 0x1150C4u;
            return;
        }
    }
    ctx->pc = 0x115054u;
label_115054:
    // 0x115054: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x115054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_115058:
    // 0x115058: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x115058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_11505c:
    // 0x11505c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11505cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_115060:
    // 0x115060: 0x8c6343e0  lw          $v1, 0x43E0($v1)
    ctx->pc = 0x115060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17376)));
label_115064:
    // 0x115064: 0x600008  jr          $v1
label_115068:
    if (ctx->pc == 0x115068u) {
        ctx->pc = 0x11506Cu;
        goto label_11506c;
    }
    ctx->pc = 0x115064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115064u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11506Cu;
label_11506c:
    // 0x11506c: 0x0  nop
    ctx->pc = 0x11506cu;
    // NOP
    ctx->pc = 0x115070u;
}
