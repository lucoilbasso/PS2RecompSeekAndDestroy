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

// Function: entry_001b0ec8
// Address: 0x1b0ec8 - 0x1b0f18
void entry_001b0ec8_0x1b0ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0ec8_0x1b0ec8");
#endif

    switch (ctx->pc) {
        case 0x1b0ec8u: goto label_1b0ec8;
        case 0x1b0eccu: goto label_1b0ecc;
        case 0x1b0ed0u: goto label_1b0ed0;
        case 0x1b0ed4u: goto label_1b0ed4;
        case 0x1b0ed8u: goto label_1b0ed8;
        case 0x1b0edcu: goto label_1b0edc;
        case 0x1b0ee0u: goto label_1b0ee0;
        case 0x1b0ee4u: goto label_1b0ee4;
        case 0x1b0ee8u: goto label_1b0ee8;
        case 0x1b0eecu: goto label_1b0eec;
        case 0x1b0ef0u: goto label_1b0ef0;
        case 0x1b0ef4u: goto label_1b0ef4;
        case 0x1b0ef8u: goto label_1b0ef8;
        case 0x1b0efcu: goto label_1b0efc;
        case 0x1b0f00u: goto label_1b0f00;
        case 0x1b0f04u: goto label_1b0f04;
        case 0x1b0f08u: goto label_1b0f08;
        case 0x1b0f0cu: goto label_1b0f0c;
        case 0x1b0f10u: goto label_1b0f10;
        case 0x1b0f14u: goto label_1b0f14;
        default: break;
    }

    ctx->pc = 0x1b0ec8u;

label_1b0ec8:
    // 0x1b0ec8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1b0ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1b0ecc:
    // 0x1b0ecc: 0x8ea3a974  lw          $v1, -0x568C($s5)
    ctx->pc = 0x1b0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945140)));
label_1b0ed0:
    // 0x1b0ed0: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1b0ed0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1b0ed4:
    // 0x1b0ed4: 0x60f809  jalr        $v1
label_1b0ed8:
    if (ctx->pc == 0x1B0ED8u) {
        ctx->pc = 0x1B0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0ED4u;
        // 0x1b0ed8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EDCu;
        goto label_1b0edc;
    }
    ctx->pc = 0x1B0ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B0EDCu);
        ctx->pc = 0x1B0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0ED4u;
        // 0x1b0ed8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0ED4u, 0x1B0EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0EDCu;
label_1b0edc:
    // 0x1b0edc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b0edcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0ee0:
    // 0x1b0ee0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1b0ee4:
    if (ctx->pc == 0x1B0EE4u) {
        ctx->pc = 0x1B0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EE0u;
        // 0x1b0ee4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EE8u;
        goto label_1b0ee8;
    }
    ctx->pc = 0x1B0EE0u;
    {
        const bool branch_taken_0x1b0ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EE0u;
        // 0x1b0ee4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ee0) {
            ctx->pc = 0x1B0EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0ec8;
        }
    }
    ctx->pc = 0x1B0EE8u;
label_1b0ee8:
    // 0x1b0ee8: 0x10000015  b           . + 4 + (0x15 << 2)
label_1b0eec:
    if (ctx->pc == 0x1B0EECu) {
        ctx->pc = 0x1B0EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EE8u;
        // 0x1b0eec: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EF0u;
        goto label_1b0ef0;
    }
    ctx->pc = 0x1B0EE8u;
    {
        const bool branch_taken_0x1b0ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EE8u;
        // 0x1b0eec: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ee8) {
            ctx->pc = 0x1B0F40u;
            return;
        }
    }
    ctx->pc = 0x1B0EF0u;
label_1b0ef0:
    // 0x1b0ef0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1b0ef0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1b0ef4:
    // 0x1b0ef4: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x1b0ef4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
label_1b0ef8:
    // 0x1b0ef8: 0x8271fff8  lb          $s1, -0x8($s3)
    ctx->pc = 0x1b0ef8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1b0efc:
    // 0x1b0efc: 0x8ea2a974  lw          $v0, -0x568C($s5)
    ctx->pc = 0x1b0efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945140)));
label_1b0f00:
    // 0x1b0f00: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1b0f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_1b0f04:
    // 0x1b0f04: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b0f04u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1b0f08:
    // 0x1b0f08: 0x40f809  jalr        $v0
label_1b0f0c:
    if (ctx->pc == 0x1B0F0Cu) {
        ctx->pc = 0x1B0F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F08u;
        // 0x1b0f0c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F10u;
        goto label_1b0f10;
    }
    ctx->pc = 0x1B0F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0F10u);
        ctx->pc = 0x1B0F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F08u;
        // 0x1b0f0c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0F08u, 0x1B0F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0F10u;
label_1b0f10:
    // 0x1b0f10: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b0f14:
    if (ctx->pc == 0x1B0F14u) {
        ctx->pc = 0x1B0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F10u;
        // 0x1b0f14: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F18u;
        goto label_fallthrough_0x1b0f10;
    }
    ctx->pc = 0x1B0F10u;
    {
        const bool branch_taken_0x1b0f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F10u;
        // 0x1b0f14: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f10) {
            ctx->pc = 0x1B0F40u;
            return;
        }
    }
label_fallthrough_0x1b0f10:
    ctx->pc = 0x1B0F18u;
}
