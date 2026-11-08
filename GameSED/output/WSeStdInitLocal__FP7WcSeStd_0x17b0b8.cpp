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

// Function: WSeStdInitLocal__FP7WcSeStd
// Address: 0x17b0b8 - 0x17b20c
void WSeStdInitLocal__FP7WcSeStd_0x17b0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSeStdInitLocal__FP7WcSeStd_0x17b0b8");
#endif

    switch (ctx->pc) {
        case 0x17b0e8u: goto label_17b0e8;
        case 0x17b0f4u: goto label_17b0f4;
        case 0x17b118u: goto label_17b118;
        case 0x17b148u: goto label_17b148;
        case 0x17b170u: goto label_17b170;
        case 0x17b198u: goto label_17b198;
        case 0x17b1a4u: goto label_17b1a4;
        case 0x17b1b8u: goto label_17b1b8;
        case 0x17b1e8u: goto label_17b1e8;
        case 0x17b1f0u: goto label_17b1f0;
        default: break;
    }

    ctx->pc = 0x17b0b8u;

    // 0x17b0b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b0bc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17b0c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17b0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17b0c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17b0c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b0c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b0cc: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x17b0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x17b0d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b0d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17b0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b0d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17b0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17b0dc: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x17b0dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17b0e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17b0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17b0e4: 0xac52003c  sw          $s2, 0x3C($v0)
    ctx->pc = 0x17b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 18));
label_17b0e8:
    // 0x17b0e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b0ec: 0xc05e9ca  jal         func_17A728
    ctx->pc = 0x17B0ECu;
    SET_GPR_U32(ctx, 31, 0x17B0F4u);
    ctx->pc = 0x17B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B0ECu;
    // 0x17b0f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A728u, 0x17B0ECu, 0x17B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0F4u;
label_17b0f4:
    // 0x17b0f4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17b0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x17b0f8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17b0fc: 0xae13004c  sw          $s3, 0x4C($s0)
    ctx->pc = 0x17b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 19));
    // 0x17b100: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17B100u;
    {
        const bool branch_taken_0x17b100 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B100u;
        // 0x17b104: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b100) {
            ctx->pc = 0x17B0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b0e8;
        }
    }
    ctx->pc = 0x17B108u;
    // 0x17b108: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17b108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17b10c: 0x26440134  addiu       $a0, $s2, 0x134
    ctx->pc = 0x17b10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 308));
    // 0x17b110: 0x2445e9a0  addiu       $a1, $v0, -0x1660
    ctx->pc = 0x17b110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961568));
    // 0x17b114: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17b114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b118:
    // 0x17b118: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17b118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17b11c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17b11cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17b120: 0xac82fffc  sw          $v0, -0x4($a0)
    ctx->pc = 0x17b120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 2));
    // 0x17b124: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x17b124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17b128: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x17b128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x17b12c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x17b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x17b130: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17B130u;
    {
        const bool branch_taken_0x17b130 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B130u;
        // 0x17b134: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b130) {
            ctx->pc = 0x17B118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b118;
        }
    }
    ctx->pc = 0x17B138u;
    // 0x17b138: 0xae401800  sw          $zero, 0x1800($s2)
    ctx->pc = 0x17b138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6144), GPR_U32(ctx, 0));
    // 0x17b13c: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x17b13cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17b140: 0x2642016c  addiu       $v0, $s2, 0x16C
    ctx->pc = 0x17b140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 364));
    // 0x17b144: 0x0  nop
    ctx->pc = 0x17b144u;
    // NOP
label_17b148:
    // 0x17b148: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17b148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17b14c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17b14cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17b150: 0x0  nop
    ctx->pc = 0x17b150u;
    // NOP
    // 0x17b154: 0x0  nop
    ctx->pc = 0x17b154u;
    // NOP
    // 0x17b158: 0x0  nop
    ctx->pc = 0x17b158u;
    // NOP
    // 0x17b15c: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17B15Cu;
    {
        const bool branch_taken_0x17b15c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B15Cu;
        // 0x17b160: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b15c) {
            ctx->pc = 0x17B148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b148;
        }
    }
    ctx->pc = 0x17B164u;
    // 0x17b164: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x17b164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17b168: 0x2642019c  addiu       $v0, $s2, 0x19C
    ctx->pc = 0x17b168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 412));
    // 0x17b16c: 0x0  nop
    ctx->pc = 0x17b16cu;
    // NOP
label_17b170:
    // 0x17b170: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17b170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17b174: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17b174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17b178: 0x0  nop
    ctx->pc = 0x17b178u;
    // NOP
    // 0x17b17c: 0x0  nop
    ctx->pc = 0x17b17cu;
    // NOP
    // 0x17b180: 0x0  nop
    ctx->pc = 0x17b180u;
    // NOP
    // 0x17b184: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17B184u;
    {
        const bool branch_taken_0x17b184 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B184u;
        // 0x17b188: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b184) {
            ctx->pc = 0x17B170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b170;
        }
    }
    ctx->pc = 0x17B18Cu;
    // 0x17b18c: 0x26500380  addiu       $s0, $s2, 0x380
    ctx->pc = 0x17b18cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 896));
    // 0x17b190: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x17b190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17b194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b198:
    // 0x17b198: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x17b198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17b19c: 0xc05ef22  jal         func_17BC88
    ctx->pc = 0x17B19Cu;
    SET_GPR_U32(ctx, 31, 0x17B1A4u);
    ctx->pc = 0x17B1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B19Cu;
    // 0x17b1a0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC88u, 0x17B19Cu, 0x17B1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1A4u;
label_17b1a4:
    // 0x17b1a4: 0x623fffc  bgezl       $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17B1A4u;
    {
        const bool branch_taken_0x17b1a4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x17b1a4) {
            ctx->pc = 0x17B1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B1A4u;
            // 0x17b1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b198;
        }
    }
    ctx->pc = 0x17B1ACu;
    // 0x17b1ac: 0x265000d0  addiu       $s0, $s2, 0xD0
    ctx->pc = 0x17b1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x17b1b0: 0xc05e9d8  jal         func_17A760
    ctx->pc = 0x17B1B0u;
    SET_GPR_U32(ctx, 31, 0x17B1B8u);
    ctx->pc = 0x17B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B1B0u;
    // 0x17b1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A760u, 0x17B1B0u, 0x17B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1B8u;
label_17b1b8:
    // 0x17b1b8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x17b1bc: 0x26430500  addiu       $v1, $s2, 0x500
    ctx->pc = 0x17b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1280));
    // 0x17b1c0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17b1c4: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x17b1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x17b1c8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x17b1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x17b1cc: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x17b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x17b1d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17b1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1d4: 0xae430120  sw          $v1, 0x120($s2)
    ctx->pc = 0x17b1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 3));
    // 0x17b1d8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17b1dc: 0xae45011c  sw          $a1, 0x11C($s2)
    ctx->pc = 0x17b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 5));
    // 0x17b1e0: 0xc05eeaa  jal         func_17BAA8
    ctx->pc = 0x17B1E0u;
    SET_GPR_U32(ctx, 31, 0x17B1E8u);
    ctx->pc = 0x17B1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B1E0u;
    // 0x17b1e4: 0xae060040  sw          $a2, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BAA8u, 0x17B1E0u, 0x17B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1E8u;
label_17b1e8:
    // 0x17b1e8: 0xc05eeb8  jal         func_17BAE0
    ctx->pc = 0x17B1E8u;
    SET_GPR_U32(ctx, 31, 0x17B1F0u);
    ctx->pc = 0x17B1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B1E8u;
    // 0x17b1ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BAE0u, 0x17B1E8u, 0x17B1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1F0u;
label_17b1f0:
    // 0x17b1f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b1f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b1f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b1f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b1f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17b1f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b1fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17b1fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b200: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17b200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b204: 0x3e00008  jr          $ra
    ctx->pc = 0x17B204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B204u;
        // 0x17b208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B20Cu;
}
