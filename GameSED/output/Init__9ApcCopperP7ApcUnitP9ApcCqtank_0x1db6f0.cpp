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

// Function: Init__9ApcCopperP7ApcUnitP9ApcCqtank
// Address: 0x1db6f0 - 0x1db798
void Init__9ApcCopperP7ApcUnitP9ApcCqtank_0x1db6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9ApcCopperP7ApcUnitP9ApcCqtank_0x1db6f0");
#endif

    switch (ctx->pc) {
        case 0x1db6f0u: goto label_1db6f0;
        case 0x1db6f4u: goto label_1db6f4;
        case 0x1db6f8u: goto label_1db6f8;
        case 0x1db6fcu: goto label_1db6fc;
        case 0x1db700u: goto label_1db700;
        case 0x1db704u: goto label_1db704;
        case 0x1db708u: goto label_1db708;
        case 0x1db70cu: goto label_1db70c;
        case 0x1db710u: goto label_1db710;
        case 0x1db714u: goto label_1db714;
        case 0x1db718u: goto label_1db718;
        case 0x1db71cu: goto label_1db71c;
        case 0x1db720u: goto label_1db720;
        case 0x1db724u: goto label_1db724;
        case 0x1db728u: goto label_1db728;
        case 0x1db72cu: goto label_1db72c;
        case 0x1db730u: goto label_1db730;
        case 0x1db734u: goto label_1db734;
        case 0x1db738u: goto label_1db738;
        case 0x1db73cu: goto label_1db73c;
        case 0x1db740u: goto label_1db740;
        case 0x1db744u: goto label_1db744;
        case 0x1db748u: goto label_1db748;
        case 0x1db74cu: goto label_1db74c;
        case 0x1db750u: goto label_1db750;
        case 0x1db754u: goto label_1db754;
        case 0x1db758u: goto label_1db758;
        case 0x1db75cu: goto label_1db75c;
        case 0x1db760u: goto label_1db760;
        case 0x1db764u: goto label_1db764;
        case 0x1db768u: goto label_1db768;
        case 0x1db76cu: goto label_1db76c;
        case 0x1db770u: goto label_1db770;
        case 0x1db774u: goto label_1db774;
        case 0x1db778u: goto label_1db778;
        case 0x1db77cu: goto label_1db77c;
        case 0x1db780u: goto label_1db780;
        case 0x1db784u: goto label_1db784;
        case 0x1db788u: goto label_1db788;
        case 0x1db78cu: goto label_1db78c;
        case 0x1db790u: goto label_1db790;
        case 0x1db794u: goto label_1db794;
        default: break;
    }

    ctx->pc = 0x1db6f0u;

label_1db6f0:
    // 0x1db6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1db6f4:
    // 0x1db6f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1db6f8:
    // 0x1db6f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db6f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db6fc:
    // 0x1db6fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1db700:
    // 0x1db700: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1db700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1db704:
    // 0x1db704: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1db704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1db708:
    // 0x1db708: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1db708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1db70c:
    // 0x1db70c: 0xc061258  jal         func_184960
label_1db710:
    if (ctx->pc == 0x1DB710u) {
        ctx->pc = 0x1DB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB70Cu;
        // 0x1db710: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB714u;
        goto label_1db714;
    }
    ctx->pc = 0x1DB70Cu;
    SET_GPR_U32(ctx, 31, 0x1DB714u);
    ctx->pc = 0x1DB710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB70Cu;
    // 0x1db710: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1DB70Cu, 0x1DB714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB714u;
label_1db714:
    // 0x1db714: 0xc7808508  lwc1        $f0, -0x7AF8($gp)
    ctx->pc = 0x1db714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1db718:
    // 0x1db718: 0x24020306  addiu       $v0, $zero, 0x306
    ctx->pc = 0x1db718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_1db71c:
    // 0x1db71c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1db71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1db720:
    // 0x1db720: 0x26030230  addiu       $v1, $s0, 0x230
    ctx->pc = 0x1db720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_1db724:
    // 0x1db724: 0xe600020c  swc1        $f0, 0x20C($s0)
    ctx->pc = 0x1db724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 524), bits); }
label_1db728:
    // 0x1db728: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x1db728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
label_1db72c:
    // 0x1db72c: 0xae120154  sw          $s2, 0x154($s0)
    ctx->pc = 0x1db72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 18));
label_1db730:
    // 0x1db730: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x1db730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
label_1db734:
    // 0x1db734: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x1db734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
label_1db738:
    // 0x1db738: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x1db738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_1db73c:
    // 0x1db73c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x1db73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_1db740:
    // 0x1db740: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1db740u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1db744:
    // 0x1db744: 0x26020240  addiu       $v0, $s0, 0x240
    ctx->pc = 0x1db744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_1db748:
    // 0x1db748: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1db748u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1db74c:
    // 0x1db74c: 0x26030290  addiu       $v1, $s0, 0x290
    ctx->pc = 0x1db74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_1db750:
    // 0x1db750: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1db750u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1db754:
    // 0x1db754: 0x260402a0  addiu       $a0, $s0, 0x2A0
    ctx->pc = 0x1db754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
label_1db758:
    // 0x1db758: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1db758u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1db75c:
    // 0x1db75c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1db75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1db760:
    // 0x1db760: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x1db760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_1db764:
    // 0x1db764: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1db764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1db768:
    // 0x1db768: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1db768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1db76c:
    // 0x1db76c: 0x60f809  jalr        $v1
label_1db770:
    if (ctx->pc == 0x1DB770u) {
        ctx->pc = 0x1DB770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB76Cu;
        // 0x1db770: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB774u;
        goto label_1db774;
    }
    ctx->pc = 0x1DB76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DB774u);
        ctx->pc = 0x1DB770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB76Cu;
        // 0x1db770: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB76Cu, 0x1DB774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB774u;
label_1db774:
    // 0x1db774: 0x24021306  addiu       $v0, $zero, 0x1306
    ctx->pc = 0x1db774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4870));
label_1db778:
    // 0x1db778: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1db778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1db77c:
    // 0x1db77c: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x1db77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
label_1db780:
    // 0x1db780: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1db784:
    // 0x1db784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1db788:
    // 0x1db788: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1db788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1db78c:
    // 0x1db78c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1db78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1db790:
    // 0x1db790: 0x3e00008  jr          $ra
label_1db794:
    if (ctx->pc == 0x1DB794u) {
        ctx->pc = 0x1DB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB790u;
        // 0x1db794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB798u;
        goto label_fallthrough_0x1db790;
    }
    ctx->pc = 0x1DB790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB790u;
        // 0x1db794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1db790:
    ctx->pc = 0x1DB798u;
}
