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

// Function: entry_001b0e34
// Address: 0x1b0e34 - 0x1b0eb8
void entry_001b0e34_0x1b0e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0e34_0x1b0e34");
#endif

    switch (ctx->pc) {
        case 0x1b0e34u: goto label_1b0e34;
        case 0x1b0e38u: goto label_1b0e38;
        case 0x1b0e3cu: goto label_1b0e3c;
        case 0x1b0e40u: goto label_1b0e40;
        case 0x1b0e44u: goto label_1b0e44;
        case 0x1b0e48u: goto label_1b0e48;
        case 0x1b0e4cu: goto label_1b0e4c;
        case 0x1b0e50u: goto label_1b0e50;
        case 0x1b0e54u: goto label_1b0e54;
        case 0x1b0e58u: goto label_1b0e58;
        case 0x1b0e5cu: goto label_1b0e5c;
        case 0x1b0e60u: goto label_1b0e60;
        case 0x1b0e64u: goto label_1b0e64;
        case 0x1b0e68u: goto label_1b0e68;
        case 0x1b0e6cu: goto label_1b0e6c;
        case 0x1b0e70u: goto label_1b0e70;
        case 0x1b0e74u: goto label_1b0e74;
        case 0x1b0e78u: goto label_1b0e78;
        case 0x1b0e7cu: goto label_1b0e7c;
        case 0x1b0e80u: goto label_1b0e80;
        case 0x1b0e84u: goto label_1b0e84;
        case 0x1b0e88u: goto label_1b0e88;
        case 0x1b0e8cu: goto label_1b0e8c;
        case 0x1b0e90u: goto label_1b0e90;
        case 0x1b0e94u: goto label_1b0e94;
        case 0x1b0e98u: goto label_1b0e98;
        case 0x1b0e9cu: goto label_1b0e9c;
        case 0x1b0ea0u: goto label_1b0ea0;
        case 0x1b0ea4u: goto label_1b0ea4;
        case 0x1b0ea8u: goto label_1b0ea8;
        case 0x1b0eacu: goto label_1b0eac;
        case 0x1b0eb0u: goto label_1b0eb0;
        case 0x1b0eb4u: goto label_1b0eb4;
        default: break;
    }

    ctx->pc = 0x1b0e34u;

label_1b0e34:
    // 0x1b0e34: 0xc072738  jal         func_1C9CE0
label_1b0e38:
    if (ctx->pc == 0x1B0E38u) {
        ctx->pc = 0x1B0E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E34u;
        // 0x1b0e38: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E3Cu;
        goto label_1b0e3c;
    }
    ctx->pc = 0x1B0E34u;
    SET_GPR_U32(ctx, 31, 0x1B0E3Cu);
    ctx->pc = 0x1B0E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E34u;
    // 0x1b0e38: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9CE0u, 0x1B0E34u, 0x1B0E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E3Cu;
label_1b0e3c:
    // 0x1b0e3c: 0xc06c20c  jal         func_1B0830
label_1b0e40:
    if (ctx->pc == 0x1B0E40u) {
        ctx->pc = 0x1B0E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E3Cu;
        // 0x1b0e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E44u;
        goto label_1b0e44;
    }
    ctx->pc = 0x1B0E3Cu;
    SET_GPR_U32(ctx, 31, 0x1B0E44u);
    ctx->pc = 0x1B0E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E3Cu;
    // 0x1b0e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0830u, 0x1B0E3Cu, 0x1B0E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E44u;
label_1b0e44:
    // 0x1b0e44: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1b0e48:
    if (ctx->pc == 0x1B0E48u) {
        ctx->pc = 0x1B0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E44u;
        // 0x1b0e48: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E4Cu;
        goto label_1b0e4c;
    }
    ctx->pc = 0x1B0E44u;
    {
        const bool branch_taken_0x1b0e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E44u;
        // 0x1b0e48: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e44) {
            ctx->pc = 0x1B0F40u;
            return;
        }
    }
    ctx->pc = 0x1B0E4Cu;
label_1b0e4c:
    // 0x1b0e4c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1b0e4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1b0e50:
    // 0x1b0e50: 0x8e63fff8  lw          $v1, -0x8($s3)
    ctx->pc = 0x1b0e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1b0e54:
    // 0x1b0e54: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1b0e54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1b0e58:
    // 0x1b0e58: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1b0e5c:
    if (ctx->pc == 0x1B0E5Cu) {
        ctx->pc = 0x1B0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E58u;
        // 0x1b0e5c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E60u;
        goto label_1b0e60;
    }
    ctx->pc = 0x1B0E58u;
    {
        const bool branch_taken_0x1b0e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E58u;
        // 0x1b0e5c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e58) {
            ctx->pc = 0x1B0EB8u;
            return;
        }
    }
    ctx->pc = 0x1B0E60u;
label_1b0e60:
    // 0x1b0e60: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x1b0e60u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
label_1b0e64:
    // 0x1b0e64: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1b0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1b0e68:
    // 0x1b0e68: 0x8ea2a974  lw          $v0, -0x568C($s5)
    ctx->pc = 0x1b0e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945140)));
label_1b0e6c:
    // 0x1b0e6c: 0x40f809  jalr        $v0
label_1b0e70:
    if (ctx->pc == 0x1B0E70u) {
        ctx->pc = 0x1B0E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E6Cu;
        // 0x1b0e70: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E74u;
        goto label_1b0e74;
    }
    ctx->pc = 0x1B0E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0E74u);
        ctx->pc = 0x1B0E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E6Cu;
        // 0x1b0e70: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0E6Cu, 0x1B0E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0E74u;
label_1b0e74:
    // 0x1b0e74: 0x8ea3a974  lw          $v1, -0x568C($s5)
    ctx->pc = 0x1b0e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945140)));
label_1b0e78:
    // 0x1b0e78: 0x60f809  jalr        $v1
label_1b0e7c:
    if (ctx->pc == 0x1B0E7Cu) {
        ctx->pc = 0x1B0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E78u;
        // 0x1b0e7c: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E80u;
        goto label_1b0e80;
    }
    ctx->pc = 0x1B0E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B0E80u);
        ctx->pc = 0x1B0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E78u;
        // 0x1b0e7c: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0E78u, 0x1B0E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0E80u;
label_1b0e80:
    // 0x1b0e80: 0x8ea2a974  lw          $v0, -0x568C($s5)
    ctx->pc = 0x1b0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945140)));
label_1b0e84:
    // 0x1b0e84: 0x40f809  jalr        $v0
label_1b0e88:
    if (ctx->pc == 0x1B0E88u) {
        ctx->pc = 0x1B0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E84u;
        // 0x1b0e88: 0x24040075  addiu       $a0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E8Cu;
        goto label_1b0e8c;
    }
    ctx->pc = 0x1B0E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0E8Cu);
        ctx->pc = 0x1B0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E84u;
        // 0x1b0e88: 0x24040075  addiu       $a0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0E84u, 0x1B0E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0E8Cu;
label_1b0e8c:
    // 0x1b0e8c: 0x8ea3a974  lw          $v1, -0x568C($s5)
    ctx->pc = 0x1b0e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945140)));
label_1b0e90:
    // 0x1b0e90: 0x60f809  jalr        $v1
label_1b0e94:
    if (ctx->pc == 0x1B0E94u) {
        ctx->pc = 0x1B0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E90u;
        // 0x1b0e94: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E98u;
        goto label_1b0e98;
    }
    ctx->pc = 0x1B0E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B0E98u);
        ctx->pc = 0x1B0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E90u;
        // 0x1b0e94: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0E90u, 0x1B0E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0E98u;
label_1b0e98:
    // 0x1b0e98: 0x8ea2a974  lw          $v0, -0x568C($s5)
    ctx->pc = 0x1b0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945140)));
label_1b0e9c:
    // 0x1b0e9c: 0x40f809  jalr        $v0
label_1b0ea0:
    if (ctx->pc == 0x1B0EA0u) {
        ctx->pc = 0x1B0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E9Cu;
        // 0x1b0ea0: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EA4u;
        goto label_1b0ea4;
    }
    ctx->pc = 0x1B0E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0EA4u);
        ctx->pc = 0x1B0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E9Cu;
        // 0x1b0ea0: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0E9Cu, 0x1B0EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0EA4u;
label_1b0ea4:
    // 0x1b0ea4: 0x8ea3a974  lw          $v1, -0x568C($s5)
    ctx->pc = 0x1b0ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945140)));
label_1b0ea8:
    // 0x1b0ea8: 0x60f809  jalr        $v1
label_1b0eac:
    if (ctx->pc == 0x1B0EACu) {
        ctx->pc = 0x1B0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EA8u;
        // 0x1b0eac: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EB0u;
        goto label_1b0eb0;
    }
    ctx->pc = 0x1B0EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B0EB0u);
        ctx->pc = 0x1B0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EA8u;
        // 0x1b0eac: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0EA8u, 0x1B0EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0EB0u;
label_1b0eb0:
    // 0x1b0eb0: 0x10000023  b           . + 4 + (0x23 << 2)
label_1b0eb4:
    if (ctx->pc == 0x1B0EB4u) {
        ctx->pc = 0x1B0EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EB0u;
        // 0x1b0eb4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EB8u;
        goto label_fallthrough_0x1b0eb0;
    }
    ctx->pc = 0x1B0EB0u;
    {
        const bool branch_taken_0x1b0eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EB0u;
        // 0x1b0eb4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0eb0) {
            ctx->pc = 0x1B0F40u;
            return;
        }
    }
label_fallthrough_0x1b0eb0:
    ctx->pc = 0x1B0EB8u;
}
