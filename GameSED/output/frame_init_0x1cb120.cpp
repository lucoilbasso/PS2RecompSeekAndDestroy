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

// Function: frame_init
// Address: 0x1cb120 - 0x1cb288
void frame_init_0x1cb120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frame_init_0x1cb120");
#endif

    switch (ctx->pc) {
        case 0x1cb168u: goto label_1cb168;
        case 0x1cb170u: goto label_1cb170;
        case 0x1cb190u: goto label_1cb190;
        case 0x1cb1a8u: goto label_1cb1a8;
        case 0x1cb1c8u: goto label_1cb1c8;
        case 0x1cb210u: goto label_1cb210;
        case 0x1cb224u: goto label_1cb224;
        case 0x1cb24cu: goto label_1cb24c;
        case 0x1cb258u: goto label_1cb258;
        default: break;
    }

    ctx->pc = 0x1cb120u;

    // 0x1cb120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cb120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cb124: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1cb124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1cb128: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cb128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb12c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1cb12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1cb130: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1cb130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1cb134: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1cb134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1cb138: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1cb138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cb13c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB13Cu;
    {
        const bool branch_taken_0x1cb13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb13c) {
            ctx->pc = 0x1CB140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB13Cu;
            // 0x1cb140: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB150u;
            goto label_1cb150;
        }
    }
    ctx->pc = 0x1CB144u;
    // 0x1cb144: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1CB144u;
    {
        const bool branch_taken_0x1cb144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB144u;
        // 0x1cb148: 0x8e510010  lw          $s1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb144) {
            ctx->pc = 0x1CB194u;
            goto label_1cb194;
        }
    }
    ctx->pc = 0x1CB14Cu;
    // 0x1cb14c: 0x0  nop
    ctx->pc = 0x1cb14cu;
    // NOP
label_1cb150:
    // 0x1cb150: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CB150u;
    {
        const bool branch_taken_0x1cb150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB150u;
        // 0x1cb154: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb150) {
            ctx->pc = 0x1CB188u;
            goto label_1cb188;
        }
    }
    ctx->pc = 0x1CB158u;
    // 0x1cb158: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cb158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb15c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CB15Cu;
    {
        const bool branch_taken_0x1cb15c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB15Cu;
        // 0x1cb160: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb15c) {
            ctx->pc = 0x1CB194u;
            goto label_1cb194;
        }
    }
    ctx->pc = 0x1CB164u;
    // 0x1cb164: 0x0  nop
    ctx->pc = 0x1cb164u;
    // NOP
label_1cb168:
    // 0x1cb168: 0xc072bfe  jal         func_1CAFF8
    ctx->pc = 0x1CB168u;
    SET_GPR_U32(ctx, 31, 0x1CB170u);
    ctx->pc = 0x1CB16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB168u;
    // 0x1cb16c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAFF8u, 0x1CB168u, 0x1CB170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB170u;
label_1cb170:
    // 0x1cb170: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cb170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb174: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1cb174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cb178: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CB178u;
    {
        const bool branch_taken_0x1cb178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB178u;
        // 0x1cb17c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb178) {
            ctx->pc = 0x1CB168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb168;
        }
    }
    ctx->pc = 0x1CB180u;
    // 0x1cb180: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB180u;
    {
        const bool branch_taken_0x1cb180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB180u;
        // 0x1cb184: 0xae510010  sw          $s1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb180) {
            ctx->pc = 0x1CB198u;
            goto label_1cb198;
        }
    }
    ctx->pc = 0x1CB188u;
label_1cb188:
    // 0x1cb188: 0xc072bfe  jal         func_1CAFF8
    ctx->pc = 0x1CB188u;
    SET_GPR_U32(ctx, 31, 0x1CB190u);
    ctx->pc = 0x1CB18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB188u;
    // 0x1cb18c: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAFF8u, 0x1CB188u, 0x1CB190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB190u;
label_1cb190:
    // 0x1cb190: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb194:
    // 0x1cb194: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x1cb194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
label_1cb198:
    // 0x1cb198: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB198u;
    {
        const bool branch_taken_0x1cb198 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB198u;
        // 0x1cb19c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb198) {
            ctx->pc = 0x1CB1B0u;
            goto label_1cb1b0;
        }
    }
    ctx->pc = 0x1CB1A0u;
    // 0x1cb1a0: 0xc073d5c  jal         func_1CF570
    ctx->pc = 0x1CB1A0u;
    SET_GPR_U32(ctx, 31, 0x1CB1A8u);
    ctx->pc = 0x1CB1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1A0u;
    // 0x1cb1a4: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF570u, 0x1CB1A0u, 0x1CB1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1A8u;
label_1cb1a8:
    // 0x1cb1a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB1A8u;
    {
        const bool branch_taken_0x1cb1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1A8u;
        // 0x1cb1ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1a8) {
            ctx->pc = 0x1CB1B8u;
            goto label_1cb1b8;
        }
    }
    ctx->pc = 0x1CB1B0u;
label_1cb1b0:
    // 0x1cb1b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cb1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cb1b8:
    // 0x1cb1b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB1B8u;
    {
        const bool branch_taken_0x1cb1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1B8u;
        // 0x1cb1bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1b8) {
            ctx->pc = 0x1CB1CCu;
            goto label_1cb1cc;
        }
    }
    ctx->pc = 0x1CB1C0u;
    // 0x1cb1c0: 0xc073d5c  jal         func_1CF570
    ctx->pc = 0x1CB1C0u;
    SET_GPR_U32(ctx, 31, 0x1CB1C8u);
    ctx->pc = 0x1CB1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1C0u;
    // 0x1cb1c4: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF570u, 0x1CB1C0u, 0x1CB1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1C8u;
label_1cb1c8:
    // 0x1cb1c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cb1c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb1cc:
    // 0x1cb1cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb1d0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1cb1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1cb1d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cb1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cb1d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB1D8u;
    {
        const bool branch_taken_0x1cb1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1D8u;
        // 0x1cb1dc: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1d8) {
            ctx->pc = 0x1CB1ECu;
            goto label_1cb1ec;
        }
    }
    ctx->pc = 0x1CB1E0u;
    // 0x1cb1e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1cb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cb1e4: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1CB1E4u;
    {
        const bool branch_taken_0x1cb1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb1e4) {
            ctx->pc = 0x1CB1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB1E4u;
            // 0x1cb1e8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB274u;
            goto label_1cb274;
        }
    }
    ctx->pc = 0x1CB1ECu;
label_1cb1ec:
    // 0x1cb1ec: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1cb1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cb1f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cb1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb1f4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1cb1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1cb1f8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CB1F8u;
    {
        const bool branch_taken_0x1cb1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1F8u;
        // 0x1cb1fc: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1f8) {
            ctx->pc = 0x1CB238u;
            goto label_1cb238;
        }
    }
    ctx->pc = 0x1CB200u;
    // 0x1cb200: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1cb200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb204: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cb204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb208: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CB208u;
    {
        const bool branch_taken_0x1cb208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB208u;
        // 0x1cb20c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb208) {
            ctx->pc = 0x1CB250u;
            goto label_1cb250;
        }
    }
    ctx->pc = 0x1CB210u;
label_1cb210:
    // 0x1cb210: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cb210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb214: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1cb214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cb218: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x1cb218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1cb21c: 0xc072c0e  jal         func_1CB038
    ctx->pc = 0x1CB21Cu;
    SET_GPR_U32(ctx, 31, 0x1CB224u);
    ctx->pc = 0x1CB220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB21Cu;
    // 0x1cb220: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB038u, 0x1CB21Cu, 0x1CB224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB224u;
label_1cb224:
    // 0x1cb224: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb228: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CB228u;
    {
        const bool branch_taken_0x1cb228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB228u;
        // 0x1cb22c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb228) {
            ctx->pc = 0x1CB210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb210;
        }
    }
    ctx->pc = 0x1CB230u;
    // 0x1cb230: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB230u;
    {
        const bool branch_taken_0x1cb230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB230u;
        // 0x1cb234: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb230) {
            ctx->pc = 0x1CB250u;
            goto label_1cb250;
        }
    }
    ctx->pc = 0x1CB238u;
label_1cb238:
    // 0x1cb238: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1cb238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1cb23c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cb23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb240: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1cb240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cb244: 0xc072c0e  jal         func_1CB038
    ctx->pc = 0x1CB244u;
    SET_GPR_U32(ctx, 31, 0x1CB24Cu);
    ctx->pc = 0x1CB248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB244u;
    // 0x1cb248: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB038u, 0x1CB244u, 0x1CB24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB24Cu;
label_1cb24c:
    // 0x1cb24c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cb24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb250:
    // 0x1cb250: 0xc072a1c  jal         func_1CA870
    ctx->pc = 0x1CB250u;
    SET_GPR_U32(ctx, 31, 0x1CB258u);
    ctx->pc = 0x1CB254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB250u;
    // 0x1cb254: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA870u, 0x1CB250u, 0x1CB258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB258u;
label_1cb258:
    // 0x1cb258: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CB258u;
    {
        const bool branch_taken_0x1cb258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb258) {
            ctx->pc = 0x1CB25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB258u;
            // 0x1cb25c: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB260u;
            goto label_1cb260;
        }
    }
    ctx->pc = 0x1CB260u;
label_1cb260:
    // 0x1cb260: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cb260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb264: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1cb264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1cb268: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1cb268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1cb26c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1cb26cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1cb270: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1cb270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb274:
    // 0x1cb274: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1cb274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cb278: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1cb278u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb27c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1cb27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cb280: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB280u;
        // 0x1cb284: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB288u;
}
