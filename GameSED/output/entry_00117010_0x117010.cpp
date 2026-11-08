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

// Function: entry_00117010
// Address: 0x117010 - 0x117088
void entry_00117010_0x117010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117010_0x117010");
#endif

    switch (ctx->pc) {
        case 0x117048u: goto label_117048;
        case 0x117058u: goto label_117058;
        default: break;
    }

    ctx->pc = 0x117010u;

label_117010:
    // 0x117010: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x117010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_117014:
    // 0x117014: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x117014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_117018:
    // 0x117018: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x117018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_11701c:
    // 0x11701c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x11701cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_117020:
    // 0x117020: 0x10640035  beq         $v1, $a0, . + 4 + (0x35 << 2)
label_117024:
    if (ctx->pc == 0x117024u) {
        ctx->pc = 0x117024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117020u;
        // 0x117024: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117028u;
        goto label_117028;
    }
    ctx->pc = 0x117020u;
    {
        const bool branch_taken_0x117020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x117024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117020u;
        // 0x117024: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117020) {
            ctx->pc = 0x1170F8u;
            return;
        }
    }
    ctx->pc = 0x117028u;
label_117028:
    // 0x117028: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x117028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_11702c:
    // 0x11702c: 0x241124d0  addiu       $s1, $zero, 0x24D0
    ctx->pc = 0x11702cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
label_117030:
    // 0x117030: 0x28202  srl         $s0, $v0, 8
    ctx->pc = 0x117030u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_117034:
    // 0x117034: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x117034u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_117038:
    // 0x117038: 0x2b18818  mult        $s1, $s5, $s1
    ctx->pc = 0x117038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_11703c:
    // 0x11703c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11703cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117040:
    // 0x117040: 0xc045360  jal         func_114D80
label_117044:
    if (ctx->pc == 0x117044u) {
        ctx->pc = 0x117044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117040u;
        // 0x117044: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117048u;
        goto label_117048;
    }
    ctx->pc = 0x117040u;
    SET_GPR_U32(ctx, 31, 0x117048u);
    ctx->pc = 0x117044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117040u;
    // 0x117044: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x117040u, 0x117048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117048u;
label_117048:
    // 0x117048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11704c:
    // 0x11704c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11704cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117050:
    // 0x117050: 0xc045360  jal         func_114D80
label_117054:
    if (ctx->pc == 0x117054u) {
        ctx->pc = 0x117054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117050u;
        // 0x117054: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117058u;
        goto label_117058;
    }
    ctx->pc = 0x117050u;
    SET_GPR_U32(ctx, 31, 0x117058u);
    ctx->pc = 0x117054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117050u;
    // 0x117054: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x117050u, 0x117058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117058u;
label_117058:
    // 0x117058: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x117058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_11705c:
    // 0x11705c: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11705cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_117060:
    // 0x117060: 0x2421d190  addiu       $at, $at, -0x2E70
    ctx->pc = 0x117060u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955408));
label_117064:
    // 0x117064: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x117064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
label_117068:
    // 0x117068: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_11706c:
    if (ctx->pc == 0x11706Cu) {
        ctx->pc = 0x11706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117068u;
        // 0x11706c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117070u;
        goto label_117070;
    }
    ctx->pc = 0x117068u;
    {
        const bool branch_taken_0x117068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117068u;
        // 0x11706c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117068) {
            ctx->pc = 0x1170DCu;
            return;
        }
    }
    ctx->pc = 0x117070u;
label_117070:
    // 0x117070: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x117070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_117074:
    // 0x117074: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x117074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_117078:
    // 0x117078: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x117078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11707c:
    // 0x11707c: 0x8c6345f0  lw          $v1, 0x45F0($v1)
    ctx->pc = 0x11707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17904)));
label_117080:
    // 0x117080: 0x600008  jr          $v1
label_117084:
    if (ctx->pc == 0x117084u) {
        ctx->pc = 0x117088u;
        goto label_fallthrough_0x117080;
    }
    ctx->pc = 0x117080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117080u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x117080:
    ctx->pc = 0x117088u;
}
