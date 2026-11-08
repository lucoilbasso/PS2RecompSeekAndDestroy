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

// Function: TankLightRefreshing__7ApcTank
// Address: 0x152588 - 0x1527e8
void TankLightRefreshing__7ApcTank_0x152588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankLightRefreshing__7ApcTank_0x152588");
#endif

    switch (ctx->pc) {
        case 0x152644u: goto label_152644;
        case 0x152658u: goto label_152658;
        case 0x15266cu: goto label_15266c;
        case 0x152680u: goto label_152680;
        case 0x1526f4u: goto label_1526f4;
        case 0x152708u: goto label_152708;
        default: break;
    }

    ctx->pc = 0x152588u;

    // 0x152588: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x152588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15258c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15258cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x152590: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x152590u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x152594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x152598: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x152598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15259c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15259cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1525a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1525a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1525a4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1525a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1525a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1525a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1525ac: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x1525acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1525b0: 0x92740577  lbu         $s4, 0x577($s3)
    ctx->pc = 0x1525b0u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1399)));
    // 0x1525b4: 0x8e63069c  lw          $v1, 0x69C($s3)
    ctx->pc = 0x1525b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1692)));
    // 0x1525b8: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x1525b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1525bc: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x1525bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x1525c0: 0x1283007f  beq         $s4, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x1525C0u;
    {
        const bool branch_taken_0x1525c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x1525C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525C0u;
        // 0x1525c4: 0x141880  sll         $v1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525c0) {
            ctx->pc = 0x1527C0u;
            goto label_1527c0;
        }
    }
    ctx->pc = 0x1525C8u;
    // 0x1525c8: 0x8e620170  lw          $v0, 0x170($s3)
    ctx->pc = 0x1525c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
    // 0x1525cc: 0x8e6606a0  lw          $a2, 0x6A0($s3)
    ctx->pc = 0x1525ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1696)));
    // 0x1525d0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1525d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1525d4: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x1525d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1525d8: 0xae64069c  sw          $a0, 0x69C($s3)
    ctx->pc = 0x1525d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1692), GPR_U32(ctx, 4));
    // 0x1525dc: 0x8ca201bc  lw          $v0, 0x1BC($a1)
    ctx->pc = 0x1525dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 444)));
    // 0x1525e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1525e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1525e4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1525e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1525e8: 0x10d4000f  beq         $a2, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x1525E8u;
    {
        const bool branch_taken_0x1525e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 20));
        ctx->pc = 0x1525ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525E8u;
        // 0x1525ec: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525e8) {
            ctx->pc = 0x152628u;
            goto label_152628;
        }
    }
    ctx->pc = 0x1525F0u;
    // 0x1525f0: 0xae7406a0  sw          $s4, 0x6A0($s3)
    ctx->pc = 0x1525f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1696), GPR_U32(ctx, 20));
    // 0x1525f4: 0x8e6406a4  lw          $a0, 0x6A4($s3)
    ctx->pc = 0x1525f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1700)));
    // 0x1525f8: 0xdca201f0  ld          $v0, 0x1F0($a1)
    ctx->pc = 0x1525f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 496)));
    // 0x1525fc: 0xfc8201f0  sd          $v0, 0x1F0($a0)
    ctx->pc = 0x1525fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 496), GPR_U64(ctx, 2));
    // 0x152600: 0xdca301f8  ld          $v1, 0x1F8($a1)
    ctx->pc = 0x152600u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 504)));
    // 0x152604: 0xfc8301f8  sd          $v1, 0x1F8($a0)
    ctx->pc = 0x152604u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 504), GPR_U64(ctx, 3));
    // 0x152608: 0xdca20200  ld          $v0, 0x200($a1)
    ctx->pc = 0x152608u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 512)));
    // 0x15260c: 0xfc820200  sd          $v0, 0x200($a0)
    ctx->pc = 0x15260cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 512), GPR_U64(ctx, 2));
    // 0x152610: 0xdca30208  ld          $v1, 0x208($a1)
    ctx->pc = 0x152610u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 520)));
    // 0x152614: 0xfc830208  sd          $v1, 0x208($a0)
    ctx->pc = 0x152614u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 520), GPR_U64(ctx, 3));
    // 0x152618: 0xdca20210  ld          $v0, 0x210($a1)
    ctx->pc = 0x152618u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 528)));
    // 0x15261c: 0xfc820210  sd          $v0, 0x210($a0)
    ctx->pc = 0x15261cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 528), GPR_U64(ctx, 2));
    // 0x152620: 0xdca30218  ld          $v1, 0x218($a1)
    ctx->pc = 0x152620u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 536)));
    // 0x152624: 0xfc830218  sd          $v1, 0x218($a0)
    ctx->pc = 0x152624u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 536), GPR_U64(ctx, 3));
label_152628:
    // 0x152628: 0x8e7106a4  lw          $s1, 0x6A4($s3)
    ctx->pc = 0x152628u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1700)));
    // 0x15262c: 0x26a501e0  addiu       $a1, $s5, 0x1E0
    ctx->pc = 0x15262cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 480));
    // 0x152630: 0xc79482b8  lwc1        $f20, -0x7D48($gp)
    ctx->pc = 0x152630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x152634: 0x262401e0  addiu       $a0, $s1, 0x1E0
    ctx->pc = 0x152634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x152638: 0x26320150  addiu       $s2, $s1, 0x150
    ctx->pc = 0x152638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x15263c: 0xc0676da  jal         func_19DB68
    ctx->pc = 0x15263Cu;
    SET_GPR_U32(ctx, 31, 0x152644u);
    ctx->pc = 0x152640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15263Cu;
    // 0x152640: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB68u, 0x15263Cu, 0x152644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152644u;
label_152644:
    // 0x152644: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x152644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x152648: 0x26a50220  addiu       $a1, $s5, 0x220
    ctx->pc = 0x152648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 544));
    // 0x15264c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15264cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x152650: 0xc0676da  jal         func_19DB68
    ctx->pc = 0x152650u;
    SET_GPR_U32(ctx, 31, 0x152658u);
    ctx->pc = 0x152654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152650u;
    // 0x152654: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB68u, 0x152650u, 0x152658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152658u;
label_152658:
    // 0x152658: 0x26240230  addiu       $a0, $s1, 0x230
    ctx->pc = 0x152658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x15265c: 0x26a50230  addiu       $a1, $s5, 0x230
    ctx->pc = 0x15265cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 560));
    // 0x152660: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x152660u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x152664: 0xc0676da  jal         func_19DB68
    ctx->pc = 0x152664u;
    SET_GPR_U32(ctx, 31, 0x15266Cu);
    ctx->pc = 0x152668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152664u;
    // 0x152668: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB68u, 0x152664u, 0x15266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15266Cu;
label_15266c:
    // 0x15266c: 0x26240240  addiu       $a0, $s1, 0x240
    ctx->pc = 0x15266cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x152670: 0x26a50240  addiu       $a1, $s5, 0x240
    ctx->pc = 0x152670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 576));
    // 0x152674: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x152674u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x152678: 0xc0676da  jal         func_19DB68
    ctx->pc = 0x152678u;
    SET_GPR_U32(ctx, 31, 0x152680u);
    ctx->pc = 0x15267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152678u;
    // 0x15267c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB68u, 0x152678u, 0x152680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152680u;
label_152680:
    // 0x152680: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x152680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x152684: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x152684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x152688: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x152688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15268c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15268cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x152690: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x152690u;
    {
        const bool branch_taken_0x152690 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x152694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152690u;
        // 0x152694: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152690) {
            ctx->pc = 0x15269Cu;
            goto label_15269c;
        }
    }
    ctx->pc = 0x152698u;
    // 0x152698: 0xae74069c  sw          $s4, 0x69C($s3)
    ctx->pc = 0x152698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1692), GPR_U32(ctx, 20));
label_15269c:
    // 0x15269c: 0x8e7006a4  lw          $s0, 0x6A4($s3)
    ctx->pc = 0x15269cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1700)));
    // 0x1526a0: 0x26110150  addiu       $s1, $s0, 0x150
    ctx->pc = 0x1526a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1526a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1526a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1526a8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1526a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1526ac: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x1526ACu;
    {
        const bool branch_taken_0x1526ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1526ac) {
            ctx->pc = 0x1526B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1526ACu;
            // 0x1526b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1527C4u;
            goto label_1527c4;
        }
    }
    ctx->pc = 0x1526B4u;
    // 0x1526b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1526b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1526b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1526b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1526bc: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1526BCu;
    {
        const bool branch_taken_0x1526bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1526bc) {
            ctx->pc = 0x1526C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1526BCu;
            // 0x1526c0: 0x26030160  addiu       $v1, $s0, 0x160 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152710u;
            goto label_152710;
        }
    }
    ctx->pc = 0x1526C4u;
    // 0x1526c4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1526C4u;
    {
        const bool branch_taken_0x1526c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1526c4) {
            ctx->pc = 0x1526C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1526C4u;
            // 0x1526c8: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1526E0u;
            goto label_1526e0;
        }
    }
    ctx->pc = 0x1526CCu;
    // 0x1526cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1526ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1526d0: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1526D0u;
    {
        const bool branch_taken_0x1526d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1526D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526D0u;
        // 0x1526d4: 0x26040220  addiu       $a0, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526d0) {
            ctx->pc = 0x152770u;
            goto label_152770;
        }
    }
    ctx->pc = 0x1526D8u;
    // 0x1526d8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1526D8u;
    {
        const bool branch_taken_0x1526d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1526DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526D8u;
        // 0x1526dc: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526d8) {
            ctx->pc = 0x1527B0u;
            goto label_1527b0;
        }
    }
    ctx->pc = 0x1526E0u;
label_1526e0:
    // 0x1526e0: 0x26050220  addiu       $a1, $s0, 0x220
    ctx->pc = 0x1526e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x1526e4: 0x26060230  addiu       $a2, $s0, 0x230
    ctx->pc = 0x1526e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x1526e8: 0x26070240  addiu       $a3, $s0, 0x240
    ctx->pc = 0x1526e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x1526ec: 0xc06f060  jal         func_1BC180
    ctx->pc = 0x1526ECu;
    SET_GPR_U32(ctx, 31, 0x1526F4u);
    ctx->pc = 0x1526F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1526ECu;
    // 0x1526f0: 0x260801e0  addiu       $t0, $s0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC180u, 0x1526ECu, 0x1526F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1526F4u;
label_1526f4:
    // 0x1526f4: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x1526f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1526f8: 0x26070210  addiu       $a3, $s0, 0x210
    ctx->pc = 0x1526f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1526fc: 0x260501f0  addiu       $a1, $s0, 0x1F0
    ctx->pc = 0x1526fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x152700: 0xc06f030  jal         func_1BC0C0
    ctx->pc = 0x152700u;
    SET_GPR_U32(ctx, 31, 0x152708u);
    ctx->pc = 0x152704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152700u;
    // 0x152704: 0x26060200  addiu       $a2, $s0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC0C0u, 0x152700u, 0x152708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152708u;
label_152708:
    // 0x152708: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x152708u;
    {
        const bool branch_taken_0x152708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152708u;
        // 0x15270c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152708) {
            ctx->pc = 0x1527B0u;
            goto label_1527b0;
        }
    }
    ctx->pc = 0x152710u;
label_152710:
    // 0x152710: 0x26020220  addiu       $v0, $s0, 0x220
    ctx->pc = 0x152710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x152714: 0x260401e0  addiu       $a0, $s0, 0x1E0
    ctx->pc = 0x152714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x152718: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x152718u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15271c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x15271cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x152720: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x152720u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x152724: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x152724u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x152728: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x152728u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15272c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x15272cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x152730: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x152730u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152734: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x152734u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x152738: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x152738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x15273c: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x15273cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x152740: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x152740u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152744: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x152744u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x152748: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x152748u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x15274c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x15274cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152750: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x152750u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152754: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x152754u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152758: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x152758u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15275c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x15275cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x152760: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x152760u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152764: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x152764u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x152768: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x152768u;
    {
        const bool branch_taken_0x152768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152768u;
        // 0x15276c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152768) {
            ctx->pc = 0x1527B0u;
            goto label_1527b0;
        }
    }
    ctx->pc = 0x152770u;
label_152770:
    // 0x152770: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x152770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x152774: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x152774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x152778: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x152778u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15277c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x15277cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x152780: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x152780u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x152784: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x152784u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x152788: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x152788u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15278c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x15278cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152790: 0x4a250b3c  vmove.w     $vf5, $vf1
    ctx->pc = 0x152790u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x152794: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x152794u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152798: 0x4a270b3c  vmove.w     $vf7, $vf1
    ctx->pc = 0x152798u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x15279c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15279cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1527a0: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1527a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1527a4: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1527a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1527a8: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1527a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1527ac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1527acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1527b0:
    // 0x1527b0: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x1527b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x1527b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1527b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1527b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1527b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1527bc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1527bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1527c0:
    // 0x1527c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1527c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1527c4:
    // 0x1527c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1527c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1527c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1527c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1527cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1527ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1527d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1527d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1527d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1527d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1527d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1527d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1527dc: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x1527dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1527e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1527E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1527E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527E0u;
        // 0x1527e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1527E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1527E8u;
}
