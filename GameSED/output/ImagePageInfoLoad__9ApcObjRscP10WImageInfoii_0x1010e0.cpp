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

// Function: ImagePageInfoLoad__9ApcObjRscP10WImageInfoii
// Address: 0x1010e0 - 0x101224
void ImagePageInfoLoad__9ApcObjRscP10WImageInfoii_0x1010e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ImagePageInfoLoad__9ApcObjRscP10WImageInfoii_0x1010e0");
#endif

    switch (ctx->pc) {
        case 0x101128u: goto label_101128;
        case 0x101160u: goto label_101160;
        case 0x101190u: goto label_101190;
        case 0x1011b8u: goto label_1011b8;
        default: break;
    }

    ctx->pc = 0x1010e0u;

    // 0x1010e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1010e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1010e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1010e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1010e8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1010e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1010ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1010f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1010f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1010f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1010f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1010f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1010fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x101100: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x101100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x101104: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x101104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x101108: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x101108u;
    {
        const bool branch_taken_0x101108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101108u;
        // 0x10110c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101108) {
            ctx->pc = 0x101128u;
            goto label_101128;
        }
    }
    ctx->pc = 0x101110u;
    // 0x101110: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x101110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x101114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101118: 0x24a519f8  addiu       $a1, $a1, 0x19F8
    ctx->pc = 0x101118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6648));
    // 0x10111c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x10111cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x101120: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x101120u;
    SET_GPR_U32(ctx, 31, 0x101128u);
    ctx->pc = 0x101124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101120u;
    // 0x101124: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x101120u, 0x101128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101128u;
label_101128:
    // 0x101128: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x101128u;
    {
        const bool branch_taken_0x101128 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x10112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101128u;
        // 0x10112c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101128) {
            ctx->pc = 0x101140u;
            goto label_101140;
        }
    }
    ctx->pc = 0x101130u;
    // 0x101130: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x101130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x101134: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x101134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x101138: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x101138u;
    {
        const bool branch_taken_0x101138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101138) {
            ctx->pc = 0x101144u;
            goto label_101144;
        }
    }
    ctx->pc = 0x101140u;
label_101140:
    // 0x101140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x101140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101144:
    // 0x101144: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x101144u;
    {
        const bool branch_taken_0x101144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101144u;
        // 0x101148: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101144) {
            ctx->pc = 0x101160u;
            goto label_101160;
        }
    }
    ctx->pc = 0x10114Cu;
    // 0x10114c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10114cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101150: 0x24a519f8  addiu       $a1, $a1, 0x19F8
    ctx->pc = 0x101150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6648));
    // 0x101154: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x101154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x101158: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x101158u;
    SET_GPR_U32(ctx, 31, 0x101160u);
    ctx->pc = 0x10115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101158u;
    // 0x10115c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x101158u, 0x101160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101160u;
label_101160:
    // 0x101160: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x101160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x101164: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x101164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x101168: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x101168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10116c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x10116cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x101170: 0x54800008  bnel        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x101170u;
    {
        const bool branch_taken_0x101170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x101170) {
            ctx->pc = 0x101174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101170u;
            // 0x101174: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101194u;
            goto label_101194;
        }
    }
    ctx->pc = 0x101178u;
    // 0x101178: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x101178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10117c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10117cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101180: 0x24a519f8  addiu       $a1, $a1, 0x19F8
    ctx->pc = 0x101180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6648));
    // 0x101184: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x101184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x101188: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x101188u;
    SET_GPR_U32(ctx, 31, 0x101190u);
    ctx->pc = 0x10118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101188u;
    // 0x10118c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x101188u, 0x101190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101190u;
label_101190:
    // 0x101190: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x101190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_101194:
    // 0x101194: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x101194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x101198: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x101198u;
    {
        const bool branch_taken_0x101198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101198) {
            ctx->pc = 0x10119Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101198u;
            // 0x10119c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1011BCu;
            goto label_1011bc;
        }
    }
    ctx->pc = 0x1011A0u;
    // 0x1011a0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1011a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1011a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1011a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1011a8: 0x24a519f8  addiu       $a1, $a1, 0x19F8
    ctx->pc = 0x1011a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6648));
    // 0x1011ac: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1011acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1011b0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1011B0u;
    SET_GPR_U32(ctx, 31, 0x1011B8u);
    ctx->pc = 0x1011B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1011B0u;
    // 0x1011b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1011B0u, 0x1011B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011B8u;
label_1011b8:
    // 0x1011b8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1011b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1011bc:
    // 0x1011bc: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x1011bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1011c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1011c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1011c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1011c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1011c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1011c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1011cc: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x1011ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1011d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1011d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1011d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1011d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1011d8: 0xfe250000  sd          $a1, 0x0($s1)
    ctx->pc = 0x1011d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
    // 0x1011dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1011dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1011e0: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x1011e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1011e4: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x1011e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x1011e8: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x1011e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1011ec: 0xfe250010  sd          $a1, 0x10($s1)
    ctx->pc = 0x1011ecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 5));
    // 0x1011f0: 0xdc640018  ld          $a0, 0x18($v1)
    ctx->pc = 0x1011f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1011f4: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x1011f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
    // 0x1011f8: 0xdc650020  ld          $a1, 0x20($v1)
    ctx->pc = 0x1011f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1011fc: 0xfe250020  sd          $a1, 0x20($s1)
    ctx->pc = 0x1011fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 5));
    // 0x101200: 0xdc640028  ld          $a0, 0x28($v1)
    ctx->pc = 0x101200u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x101204: 0xfe240028  sd          $a0, 0x28($s1)
    ctx->pc = 0x101204u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 4));
    // 0x101208: 0xdc650030  ld          $a1, 0x30($v1)
    ctx->pc = 0x101208u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x10120c: 0xfe250030  sd          $a1, 0x30($s1)
    ctx->pc = 0x10120cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 5));
    // 0x101210: 0xdc640038  ld          $a0, 0x38($v1)
    ctx->pc = 0x101210u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x101214: 0xfe240038  sd          $a0, 0x38($s1)
    ctx->pc = 0x101214u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 4));
    // 0x101218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x101218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10121c: 0x3e00008  jr          $ra
    ctx->pc = 0x10121Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10121Cu;
        // 0x101220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10121Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101224u;
}
