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

// Function: ApPartsStructCreate__FP9ApcObjRsciP9ApcCqtankP7ApcTank
// Address: 0x16b110 - 0x16b1bc
void ApPartsStructCreate__FP9ApcObjRsciP9ApcCqtankP7ApcTank_0x16b110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApPartsStructCreate__FP9ApcObjRsciP9ApcCqtankP7ApcTank_0x16b110");
#endif

    switch (ctx->pc) {
        case 0x16b110u: goto label_16b110;
        case 0x16b114u: goto label_16b114;
        case 0x16b118u: goto label_16b118;
        case 0x16b11cu: goto label_16b11c;
        case 0x16b120u: goto label_16b120;
        case 0x16b124u: goto label_16b124;
        case 0x16b128u: goto label_16b128;
        case 0x16b12cu: goto label_16b12c;
        case 0x16b130u: goto label_16b130;
        case 0x16b134u: goto label_16b134;
        case 0x16b138u: goto label_16b138;
        case 0x16b13cu: goto label_16b13c;
        case 0x16b140u: goto label_16b140;
        case 0x16b144u: goto label_16b144;
        case 0x16b148u: goto label_16b148;
        case 0x16b14cu: goto label_16b14c;
        case 0x16b150u: goto label_16b150;
        case 0x16b154u: goto label_16b154;
        case 0x16b158u: goto label_16b158;
        case 0x16b15cu: goto label_16b15c;
        case 0x16b160u: goto label_16b160;
        case 0x16b164u: goto label_16b164;
        case 0x16b168u: goto label_16b168;
        case 0x16b16cu: goto label_16b16c;
        case 0x16b170u: goto label_16b170;
        case 0x16b174u: goto label_16b174;
        case 0x16b178u: goto label_16b178;
        case 0x16b17cu: goto label_16b17c;
        case 0x16b180u: goto label_16b180;
        case 0x16b184u: goto label_16b184;
        case 0x16b188u: goto label_16b188;
        case 0x16b18cu: goto label_16b18c;
        case 0x16b190u: goto label_16b190;
        case 0x16b194u: goto label_16b194;
        case 0x16b198u: goto label_16b198;
        case 0x16b19cu: goto label_16b19c;
        case 0x16b1a0u: goto label_16b1a0;
        case 0x16b1a4u: goto label_16b1a4;
        case 0x16b1a8u: goto label_16b1a8;
        case 0x16b1acu: goto label_16b1ac;
        case 0x16b1b0u: goto label_16b1b0;
        case 0x16b1b4u: goto label_16b1b4;
        case 0x16b1b8u: goto label_16b1b8;
        default: break;
    }

    ctx->pc = 0x16b110u;

label_16b110:
    // 0x16b110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16b114:
    // 0x16b114: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x16b114u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16b118:
    // 0x16b118: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16b118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16b11c:
    // 0x16b11c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16b11cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16b120:
    // 0x16b120: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x16b120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16b124:
    // 0x16b124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16b124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16b128:
    // 0x16b128: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16b128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16b12c:
    // 0x16b12c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x16b12cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16b130:
    // 0x16b130: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x16b130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16b134:
    // 0x16b134: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16b134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b138:
    // 0x16b138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16b13c:
    // 0x16b13c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16b13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_16b140:
    // 0x16b140: 0xc05a840  jal         func_16A100
label_16b144:
    if (ctx->pc == 0x16B144u) {
        ctx->pc = 0x16B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B140u;
        // 0x16b144: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B148u;
        goto label_16b148;
    }
    ctx->pc = 0x16B140u;
    SET_GPR_U32(ctx, 31, 0x16B148u);
    ctx->pc = 0x16B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B140u;
    // 0x16b144: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A100u, 0x16B140u, 0x16B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B148u;
label_16b148:
    // 0x16b148: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16b148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b14c:
    // 0x16b14c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b150:
    // 0x16b150: 0xae111264  sw          $s1, 0x1264($s0)
    ctx->pc = 0x16b150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4708), GPR_U32(ctx, 17));
label_16b154:
    // 0x16b154: 0xc05977a  jal         func_165DE8
label_16b158:
    if (ctx->pc == 0x16B158u) {
        ctx->pc = 0x16B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B154u;
        // 0x16b158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B15Cu;
        goto label_16b15c;
    }
    ctx->pc = 0x16B154u;
    SET_GPR_U32(ctx, 31, 0x16B15Cu);
    ctx->pc = 0x16B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B154u;
    // 0x16b158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165DE8u, 0x16B154u, 0x16B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B15Cu;
label_16b15c:
    // 0x16b15c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16b160:
    // 0x16b160: 0xc05a956  jal         func_16A558
label_16b164:
    if (ctx->pc == 0x16B164u) {
        ctx->pc = 0x16B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B160u;
        // 0x16b164: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B168u;
        goto label_16b168;
    }
    ctx->pc = 0x16B160u;
    SET_GPR_U32(ctx, 31, 0x16B168u);
    ctx->pc = 0x16B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B160u;
    // 0x16b164: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A558u, 0x16B160u, 0x16B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B168u;
label_16b168:
    // 0x16b168: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x16b168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_16b16c:
    // 0x16b16c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16b16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16b170:
    // 0x16b170: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b174:
    // 0x16b174: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x16b174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_16b178:
    // 0x16b178: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16b178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16b17c:
    // 0x16b17c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16b180:
    // 0x16b180: 0x60f809  jalr        $v1
label_16b184:
    if (ctx->pc == 0x16B184u) {
        ctx->pc = 0x16B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B180u;
        // 0x16b184: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B188u;
        goto label_16b188;
    }
    ctx->pc = 0x16B180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16B188u);
        ctx->pc = 0x16B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B180u;
        // 0x16b184: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B180u, 0x16B188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16B188u;
label_16b188:
    // 0x16b188: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x16b188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_16b18c:
    // 0x16b18c: 0x8e4401a8  lw          $a0, 0x1A8($s2)
    ctx->pc = 0x16b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_16b190:
    // 0x16b190: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16b190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16b194:
    // 0x16b194: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x16b194u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_16b198:
    // 0x16b198: 0xae0401a8  sw          $a0, 0x1A8($s0)
    ctx->pc = 0x16b198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 4));
label_16b19c:
    // 0x16b19c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16b19cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16b1a0:
    // 0x16b1a0: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x16b1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
label_16b1a4:
    // 0x16b1a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16b1a8:
    // 0x16b1a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16b1a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16b1ac:
    // 0x16b1ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16b1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16b1b0:
    // 0x16b1b0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x16b1b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_16b1b4:
    // 0x16b1b4: 0x3e00008  jr          $ra
label_16b1b8:
    if (ctx->pc == 0x16B1B8u) {
        ctx->pc = 0x16B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1B4u;
        // 0x16b1b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B1BCu;
        goto label_fallthrough_0x16b1b4;
    }
    ctx->pc = 0x16B1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1B4u;
        // 0x16b1b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16b1b4:
    ctx->pc = 0x16B1BCu;
}
