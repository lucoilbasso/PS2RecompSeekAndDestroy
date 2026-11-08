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

// Function: entry_0015d118
// Address: 0x15d118 - 0x15d2a4
void entry_0015d118_0x15d118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d118_0x15d118");
#endif

    switch (ctx->pc) {
        case 0x15d154u: goto label_15d154;
        case 0x15d168u: goto label_15d168;
        case 0x15d170u: goto label_15d170;
        case 0x15d190u: goto label_15d190;
        case 0x15d198u: goto label_15d198;
        case 0x15d1b8u: goto label_15d1b8;
        case 0x15d1c8u: goto label_15d1c8;
        case 0x15d1e4u: goto label_15d1e4;
        default: break;
    }

    ctx->pc = 0x15d118u;

label_15d118:
    // 0x15d118: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15d118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d11c:
    // 0x15d11c: 0x3c170800  lui         $s7, 0x800
    ctx->pc = 0x15d11cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)2048 << 16));
label_15d120:
    // 0x15d120: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15d120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15d124:
    // 0x15d124: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x15d124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_15d128:
    // 0x15d128: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15d12c:
    // 0x15d12c: 0x26940028  addiu       $s4, $s4, 0x28
    ctx->pc = 0x15d12cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_15d130:
    // 0x15d130: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x15d130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
label_15d134:
    // 0x15d134: 0xaeb00164  sw          $s0, 0x164($s5)
    ctx->pc = 0x15d134u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 356), GPR_U32(ctx, 16));
label_15d138:
    // 0x15d138: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15d138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15d13c:
    // 0x15d13c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x15d13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
label_15d140:
    // 0x15d140: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x15d140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_15d144:
    // 0x15d144: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15d144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15d148:
    // 0x15d148: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15d148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15d14c:
    // 0x15d14c: 0x40f809  jalr        $v0
label_15d150:
    if (ctx->pc == 0x15D150u) {
        ctx->pc = 0x15D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D14Cu;
        // 0x15d150: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D154u;
        goto label_15d154;
    }
    ctx->pc = 0x15D14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D154u);
        ctx->pc = 0x15D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D14Cu;
        // 0x15d150: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D14Cu, 0x15D154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D154u;
label_15d154:
    // 0x15d154: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x15d154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_15d158:
    // 0x15d158: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15d158u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15d15c:
    // 0x15d15c: 0x8c710024  lw          $s1, 0x24($v1)
    ctx->pc = 0x15d15cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15d160:
    // 0x15d160: 0xc06bd28  jal         func_1AF4A0
label_15d164:
    if (ctx->pc == 0x15D164u) {
        ctx->pc = 0x15D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D160u;
        // 0x15d164: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D168u;
        goto label_15d168;
    }
    ctx->pc = 0x15D160u;
    SET_GPR_U32(ctx, 31, 0x15D168u);
    ctx->pc = 0x15D164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D160u;
    // 0x15d164: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15D160u, 0x15D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D168u;
label_15d168:
    // 0x15d168: 0xc06bd20  jal         func_1AF480
label_15d16c:
    if (ctx->pc == 0x15D16Cu) {
        ctx->pc = 0x15D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D168u;
        // 0x15d16c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D170u;
        goto label_15d170;
    }
    ctx->pc = 0x15D168u;
    SET_GPR_U32(ctx, 31, 0x15D170u);
    ctx->pc = 0x15D16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D168u;
    // 0x15d16c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15D168u, 0x15D170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D170u;
label_15d170:
    // 0x15d170: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15d170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15d174:
    // 0x15d174: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15d174u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15d178:
    // 0x15d178: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15d178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15d17c:
    // 0x15d17c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15d180:
    // 0x15d180: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15d180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15d184:
    // 0x15d184: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15d184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15d188:
    // 0x15d188: 0xc0682b2  jal         func_1A0AC8
label_15d18c:
    if (ctx->pc == 0x15D18Cu) {
        ctx->pc = 0x15D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D188u;
        // 0x15d18c: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D190u;
        goto label_15d190;
    }
    ctx->pc = 0x15D188u;
    SET_GPR_U32(ctx, 31, 0x15D190u);
    ctx->pc = 0x15D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D188u;
    // 0x15d18c: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15D188u, 0x15D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D190u;
label_15d190:
    // 0x15d190: 0xc0682b6  jal         func_1A0AD8
label_15d194:
    if (ctx->pc == 0x15D194u) {
        ctx->pc = 0x15D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D190u;
        // 0x15d194: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D198u;
        goto label_15d198;
    }
    ctx->pc = 0x15D190u;
    SET_GPR_U32(ctx, 31, 0x15D198u);
    ctx->pc = 0x15D194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D190u;
    // 0x15d194: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15D190u, 0x15D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D198u;
label_15d198:
    // 0x15d198: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15d198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15d19c:
    // 0x15d19c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15d19cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d1a0:
    // 0x15d1a0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15d1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15d1a4:
    // 0x15d1a4: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x15d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_15d1a8:
    // 0x15d1a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d1ac:
    // 0x15d1ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15d1acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d1b0:
    // 0x15d1b0: 0xc062cb0  jal         func_18B2C0
label_15d1b4:
    if (ctx->pc == 0x15D1B4u) {
        ctx->pc = 0x15D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1B0u;
        // 0x15d1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1B8u;
        goto label_15d1b8;
    }
    ctx->pc = 0x15D1B0u;
    SET_GPR_U32(ctx, 31, 0x15D1B8u);
    ctx->pc = 0x15D1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1B0u;
    // 0x15d1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15D1B0u, 0x15D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1B8u;
label_15d1b8:
    // 0x15d1b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d1bc:
    // 0x15d1bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d1c0:
    // 0x15d1c0: 0xc06825c  jal         func_1A0970
label_15d1c4:
    if (ctx->pc == 0x15D1C4u) {
        ctx->pc = 0x15D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1C0u;
        // 0x15d1c4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1C8u;
        goto label_15d1c8;
    }
    ctx->pc = 0x15D1C0u;
    SET_GPR_U32(ctx, 31, 0x15D1C8u);
    ctx->pc = 0x15D1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1C0u;
    // 0x15d1c4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15D1C0u, 0x15D1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1C8u;
label_15d1c8:
    // 0x15d1c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15d1cc:
    // 0x15d1cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d1d0:
    // 0x15d1d0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15d1d4:
    // 0x15d1d4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d1d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d1d8:
    // 0x15d1d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d1dc:
    // 0x15d1dc: 0x60f809  jalr        $v1
label_15d1e0:
    if (ctx->pc == 0x15D1E0u) {
        ctx->pc = 0x15D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1DCu;
        // 0x15d1e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1E4u;
        goto label_15d1e4;
    }
    ctx->pc = 0x15D1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D1E4u);
        ctx->pc = 0x15D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1DCu;
        // 0x15d1e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D1DCu, 0x15D1E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D1E4u;
label_15d1e4:
    // 0x15d1e4: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15d1e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15d1e8:
    // 0x15d1e8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15d1ec:
    if (ctx->pc == 0x15D1ECu) {
        ctx->pc = 0x15D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1E8u;
        // 0x15d1ec: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1F0u;
        goto label_15d1f0;
    }
    ctx->pc = 0x15D1E8u;
    {
        const bool branch_taken_0x15d1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1E8u;
        // 0x15d1ec: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d1e8) {
            ctx->pc = 0x15D2A4u;
            return;
        }
    }
    ctx->pc = 0x15D1F0u;
label_15d1f0:
    // 0x15d1f0: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15d1f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15d1f4:
    // 0x15d1f4: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15d1f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15d1f8:
    // 0x15d1f8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15d1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15d1fc:
    // 0x15d1fc: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x15d1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15d200:
    // 0x15d200: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15d200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15d204:
    // 0x15d204: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x15d204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15d208:
    // 0x15d208: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15d208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15d20c:
    // 0x15d20c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15d20cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15d210:
    // 0x15d210: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15d210u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15d214:
    // 0x15d214: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15d214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15d218:
    // 0x15d218: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15d218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15d21c:
    // 0x15d21c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15d21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15d220:
    // 0x15d220: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15d220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15d224:
    // 0x15d224: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15d224u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15d228:
    // 0x15d228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d22c:
    // 0x15d22c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15d22cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15d230:
    // 0x15d230: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15d230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15d234:
    // 0x15d234: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15d234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15d238:
    // 0x15d238: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15d238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15d23c:
    // 0x15d23c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15d23cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15d240:
    // 0x15d240: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15d240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15d244:
    // 0x15d244: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15d244u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15d248:
    // 0x15d248: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15d248u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15d24c:
    // 0x15d24c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15d24cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d250:
    // 0x15d250: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15d250u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d254:
    // 0x15d254: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15d254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15d258:
    // 0x15d258: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15d258u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15d25c:
    // 0x15d25c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15d25cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15d260:
    // 0x15d260: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15d260u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15d264:
    // 0x15d264: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15d264u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15d268:
    // 0x15d268: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15d268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15d26c:
    // 0x15d26c: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15d26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15d270:
    // 0x15d270: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15d270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15d274:
    // 0x15d274: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15d274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15d278:
    // 0x15d278: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15d278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d27c:
    // 0x15d27c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15d27cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d280:
    // 0x15d280: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15d280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15d284:
    // 0x15d284: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15d284u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15d288:
    // 0x15d288: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15d288u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15d28c:
    // 0x15d28c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15d28cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15d290:
    // 0x15d290: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15d290u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15d294:
    // 0x15d294: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15d294u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15d298:
    // 0x15d298: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15d298u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15d29c:
    // 0x15d29c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15d29cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15d2a0:
    // 0x15d2a0: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15d2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15d2a4u;
}
