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

// Function: Create__9ApcCopperP7ApcUnitP9ApcCqtank
// Address: 0x1db798 - 0x1db870
void Create__9ApcCopperP7ApcUnitP9ApcCqtank_0x1db798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__9ApcCopperP7ApcUnitP9ApcCqtank_0x1db798");
#endif

    switch (ctx->pc) {
        case 0x1db798u: goto label_1db798;
        case 0x1db79cu: goto label_1db79c;
        case 0x1db7a0u: goto label_1db7a0;
        case 0x1db7a4u: goto label_1db7a4;
        case 0x1db7a8u: goto label_1db7a8;
        case 0x1db7acu: goto label_1db7ac;
        case 0x1db7b0u: goto label_1db7b0;
        case 0x1db7b4u: goto label_1db7b4;
        case 0x1db7b8u: goto label_1db7b8;
        case 0x1db7bcu: goto label_1db7bc;
        case 0x1db7c0u: goto label_1db7c0;
        case 0x1db7c4u: goto label_1db7c4;
        case 0x1db7c8u: goto label_1db7c8;
        case 0x1db7ccu: goto label_1db7cc;
        case 0x1db7d0u: goto label_1db7d0;
        case 0x1db7d4u: goto label_1db7d4;
        case 0x1db7d8u: goto label_1db7d8;
        case 0x1db7dcu: goto label_1db7dc;
        case 0x1db7e0u: goto label_1db7e0;
        case 0x1db7e4u: goto label_1db7e4;
        case 0x1db7e8u: goto label_1db7e8;
        case 0x1db7ecu: goto label_1db7ec;
        case 0x1db7f0u: goto label_1db7f0;
        case 0x1db7f4u: goto label_1db7f4;
        case 0x1db7f8u: goto label_1db7f8;
        case 0x1db7fcu: goto label_1db7fc;
        case 0x1db800u: goto label_1db800;
        case 0x1db804u: goto label_1db804;
        case 0x1db808u: goto label_1db808;
        case 0x1db80cu: goto label_1db80c;
        case 0x1db810u: goto label_1db810;
        case 0x1db814u: goto label_1db814;
        case 0x1db818u: goto label_1db818;
        case 0x1db81cu: goto label_1db81c;
        case 0x1db820u: goto label_1db820;
        case 0x1db824u: goto label_1db824;
        case 0x1db828u: goto label_1db828;
        case 0x1db82cu: goto label_1db82c;
        case 0x1db830u: goto label_1db830;
        case 0x1db834u: goto label_1db834;
        case 0x1db838u: goto label_1db838;
        case 0x1db83cu: goto label_1db83c;
        case 0x1db840u: goto label_1db840;
        case 0x1db844u: goto label_1db844;
        case 0x1db848u: goto label_1db848;
        case 0x1db84cu: goto label_1db84c;
        case 0x1db850u: goto label_1db850;
        case 0x1db854u: goto label_1db854;
        case 0x1db858u: goto label_1db858;
        case 0x1db85cu: goto label_1db85c;
        case 0x1db860u: goto label_1db860;
        case 0x1db864u: goto label_1db864;
        case 0x1db868u: goto label_1db868;
        case 0x1db86cu: goto label_1db86c;
        default: break;
    }

    ctx->pc = 0x1db798u;

label_1db798:
    // 0x1db798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1db79c:
    // 0x1db79c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1db79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1db7a0:
    // 0x1db7a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1db7a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db7a4:
    // 0x1db7a4: 0x24041306  addiu       $a0, $zero, 0x1306
    ctx->pc = 0x1db7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4870));
label_1db7a8:
    // 0x1db7a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1db7ac:
    // 0x1db7ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1db7b0:
    // 0x1db7b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1db7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1db7b4:
    // 0x1db7b4: 0xc0682b2  jal         func_1A0AC8
label_1db7b8:
    if (ctx->pc == 0x1DB7B8u) {
        ctx->pc = 0x1DB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7B4u;
        // 0x1db7b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB7BCu;
        goto label_1db7bc;
    }
    ctx->pc = 0x1DB7B4u;
    SET_GPR_U32(ctx, 31, 0x1DB7BCu);
    ctx->pc = 0x1DB7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB7B4u;
    // 0x1db7b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1DB7B4u, 0x1DB7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB7BCu;
label_1db7bc:
    // 0x1db7bc: 0xc0682b6  jal         func_1A0AD8
label_1db7c0:
    if (ctx->pc == 0x1DB7C0u) {
        ctx->pc = 0x1DB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7BCu;
        // 0x1db7c0: 0x240402c0  addiu       $a0, $zero, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB7C4u;
        goto label_1db7c4;
    }
    ctx->pc = 0x1DB7BCu;
    SET_GPR_U32(ctx, 31, 0x1DB7C4u);
    ctx->pc = 0x1DB7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB7BCu;
    // 0x1db7c0: 0x240402c0  addiu       $a0, $zero, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1DB7BCu, 0x1DB7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB7C4u;
label_1db7c4:
    // 0x1db7c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1db7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db7c8:
    // 0x1db7c8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1db7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1db7cc:
    // 0x1db7cc: 0x2442f750  addiu       $v0, $v0, -0x8B0
    ctx->pc = 0x1db7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965072));
label_1db7d0:
    // 0x1db7d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db7d4:
    // 0x1db7d4: 0xc061258  jal         func_184960
label_1db7d8:
    if (ctx->pc == 0x1DB7D8u) {
        ctx->pc = 0x1DB7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7D4u;
        // 0x1db7d8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB7DCu;
        goto label_1db7dc;
    }
    ctx->pc = 0x1DB7D4u;
    SET_GPR_U32(ctx, 31, 0x1DB7DCu);
    ctx->pc = 0x1DB7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB7D4u;
    // 0x1db7d8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1DB7D4u, 0x1DB7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB7DCu;
label_1db7dc:
    // 0x1db7dc: 0x24020306  addiu       $v0, $zero, 0x306
    ctx->pc = 0x1db7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_1db7e0:
    // 0x1db7e0: 0xc780850c  lwc1        $f0, -0x7AF4($gp)
    ctx->pc = 0x1db7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1db7e4:
    // 0x1db7e4: 0x26030230  addiu       $v1, $s0, 0x230
    ctx->pc = 0x1db7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_1db7e8:
    // 0x1db7e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1db7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1db7ec:
    // 0x1db7ec: 0xe600020c  swc1        $f0, 0x20C($s0)
    ctx->pc = 0x1db7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 524), bits); }
label_1db7f0:
    // 0x1db7f0: 0xae120150  sw          $s2, 0x150($s0)
    ctx->pc = 0x1db7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 18));
label_1db7f4:
    // 0x1db7f4: 0xae110154  sw          $s1, 0x154($s0)
    ctx->pc = 0x1db7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 17));
label_1db7f8:
    // 0x1db7f8: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x1db7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
label_1db7fc:
    // 0x1db7fc: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x1db7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
label_1db800:
    // 0x1db800: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x1db800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_1db804:
    // 0x1db804: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x1db804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_1db808:
    // 0x1db808: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1db808u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1db80c:
    // 0x1db80c: 0x26020240  addiu       $v0, $s0, 0x240
    ctx->pc = 0x1db80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_1db810:
    // 0x1db810: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1db810u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1db814:
    // 0x1db814: 0x26030290  addiu       $v1, $s0, 0x290
    ctx->pc = 0x1db814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_1db818:
    // 0x1db818: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1db818u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1db81c:
    // 0x1db81c: 0x260402a0  addiu       $a0, $s0, 0x2A0
    ctx->pc = 0x1db81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
label_1db820:
    // 0x1db820: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1db820u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1db824:
    // 0x1db824: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1db824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1db828:
    // 0x1db828: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x1db828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_1db82c:
    // 0x1db82c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1db82cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1db830:
    // 0x1db830: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1db830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1db834:
    // 0x1db834: 0x60f809  jalr        $v1
label_1db838:
    if (ctx->pc == 0x1DB838u) {
        ctx->pc = 0x1DB838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB834u;
        // 0x1db838: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB83Cu;
        goto label_1db83c;
    }
    ctx->pc = 0x1DB834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DB83Cu);
        ctx->pc = 0x1DB838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB834u;
        // 0x1db838: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB834u, 0x1DB83Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB83Cu;
label_1db83c:
    // 0x1db83c: 0x24021306  addiu       $v0, $zero, 0x1306
    ctx->pc = 0x1db83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4870));
label_1db840:
    // 0x1db840: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1db840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1db844:
    // 0x1db844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db848:
    // 0x1db848: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x1db848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
label_1db84c:
    // 0x1db84c: 0xc06825c  jal         func_1A0970
label_1db850:
    if (ctx->pc == 0x1DB850u) {
        ctx->pc = 0x1DB850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB84Cu;
        // 0x1db850: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB854u;
        goto label_1db854;
    }
    ctx->pc = 0x1DB84Cu;
    SET_GPR_U32(ctx, 31, 0x1DB854u);
    ctx->pc = 0x1DB850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB84Cu;
    // 0x1db850: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DB84Cu, 0x1DB854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB854u;
label_1db854:
    // 0x1db854: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1db854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db858:
    // 0x1db858: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1db85c:
    // 0x1db85c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db85cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1db860:
    // 0x1db860: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1db860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1db864:
    // 0x1db864: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1db864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1db868:
    // 0x1db868: 0x3e00008  jr          $ra
label_1db86c:
    if (ctx->pc == 0x1DB86Cu) {
        ctx->pc = 0x1DB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB868u;
        // 0x1db86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB870u;
        goto label_fallthrough_0x1db868;
    }
    ctx->pc = 0x1DB868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB868u;
        // 0x1db86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1db868:
    ctx->pc = 0x1DB870u;
}
