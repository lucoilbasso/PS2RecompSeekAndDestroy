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

// Function: sceDevVu0PutCnd
// Address: 0x1acb98 - 0x1acd04
void sceDevVu0PutCnd_0x1acb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevVu0PutCnd_0x1acb98");
#endif

    switch (ctx->pc) {
        case 0x1acbb4u: goto label_1acbb4;
        default: break;
    }

    ctx->pc = 0x1acb98u;

    // 0x1acb98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1acb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1acb9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1acb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1acba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1acba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1acba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1acba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acba8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1acba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1acbac: 0xc06b23e  jal         func_1AC8F8
    ctx->pc = 0x1ACBACu;
    SET_GPR_U32(ctx, 31, 0x1ACBB4u);
    ctx->pc = 0x1ACBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACBACu;
    // 0x1acbb0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC8F8u, 0x1ACBACu, 0x1ACBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACBB4u;
label_1acbb4:
    // 0x1acbb4: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1ACBB4u;
    {
        const bool branch_taken_0x1acbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBB4u;
        // 0x1acbb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acbb4) {
            ctx->pc = 0x1ACCF0u;
            goto label_1accf0;
        }
    }
    ctx->pc = 0x1ACBBCu;
    // 0x1acbbc: 0xda000000  lqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1acbbcu;
    ctx->vu0_vf[0] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1acbc0: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1acbc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1acbc4: 0xda020020  lqc2        $vf2, 0x20($s0)
    ctx->pc = 0x1acbc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1acbc8: 0xda030030  lqc2        $vf3, 0x30($s0)
    ctx->pc = 0x1acbc8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1acbcc: 0xda040040  lqc2        $vf4, 0x40($s0)
    ctx->pc = 0x1acbccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1acbd0: 0xda050050  lqc2        $vf5, 0x50($s0)
    ctx->pc = 0x1acbd0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1acbd4: 0xda060060  lqc2        $vf6, 0x60($s0)
    ctx->pc = 0x1acbd4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1acbd8: 0xda070070  lqc2        $vf7, 0x70($s0)
    ctx->pc = 0x1acbd8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1acbdc: 0xda080080  lqc2        $vf8, 0x80($s0)
    ctx->pc = 0x1acbdcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1acbe0: 0xda090090  lqc2        $vf9, 0x90($s0)
    ctx->pc = 0x1acbe0u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1acbe4: 0xda0a00a0  lqc2        $vf10, 0xA0($s0)
    ctx->pc = 0x1acbe4u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1acbe8: 0xda0b00b0  lqc2        $vf11, 0xB0($s0)
    ctx->pc = 0x1acbe8u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1acbec: 0xda0c00c0  lqc2        $vf12, 0xC0($s0)
    ctx->pc = 0x1acbecu;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1acbf0: 0xda0d00d0  lqc2        $vf13, 0xD0($s0)
    ctx->pc = 0x1acbf0u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1acbf4: 0xda0e00e0  lqc2        $vf14, 0xE0($s0)
    ctx->pc = 0x1acbf4u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1acbf8: 0xda0f00f0  lqc2        $vf15, 0xF0($s0)
    ctx->pc = 0x1acbf8u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1acbfc: 0xda100100  lqc2        $vf16, 0x100($s0)
    ctx->pc = 0x1acbfcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1acc00: 0xda110110  lqc2        $vf17, 0x110($s0)
    ctx->pc = 0x1acc00u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1acc04: 0xda120120  lqc2        $vf18, 0x120($s0)
    ctx->pc = 0x1acc04u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1acc08: 0xda130130  lqc2        $vf19, 0x130($s0)
    ctx->pc = 0x1acc08u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1acc0c: 0xda140140  lqc2        $vf20, 0x140($s0)
    ctx->pc = 0x1acc0cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x1acc10: 0xda150150  lqc2        $vf21, 0x150($s0)
    ctx->pc = 0x1acc10u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1acc14: 0xda160160  lqc2        $vf22, 0x160($s0)
    ctx->pc = 0x1acc14u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1acc18: 0xda170170  lqc2        $vf23, 0x170($s0)
    ctx->pc = 0x1acc18u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x1acc1c: 0xda180180  lqc2        $vf24, 0x180($s0)
    ctx->pc = 0x1acc1cu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1acc20: 0xda190190  lqc2        $vf25, 0x190($s0)
    ctx->pc = 0x1acc20u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x1acc24: 0xda1a01a0  lqc2        $vf26, 0x1A0($s0)
    ctx->pc = 0x1acc24u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x1acc28: 0xda1b01b0  lqc2        $vf27, 0x1B0($s0)
    ctx->pc = 0x1acc28u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x1acc2c: 0xda1c01c0  lqc2        $vf28, 0x1C0($s0)
    ctx->pc = 0x1acc2cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x1acc30: 0xda1d01d0  lqc2        $vf29, 0x1D0($s0)
    ctx->pc = 0x1acc30u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x1acc34: 0xda1e01e0  lqc2        $vf30, 0x1E0($s0)
    ctx->pc = 0x1acc34u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x1acc38: 0xda1f01f0  lqc2        $vf31, 0x1F0($s0)
    ctx->pc = 0x1acc38u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x1acc3c: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x1acc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1acc40: 0x48c28000  ctc2.ni     $v0, $vi16
    ctx->pc = 0x1acc40u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 2) & 0xFFFFu);
    // 0x1acc44: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x1acc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x1acc48: 0x48c28800  ctc2.ni     $v0, $vi17
    ctx->pc = 0x1acc48u;
    // CTC2 write to read-only VU control register 17 ignored
    // 0x1acc4c: 0x8e220208  lw          $v0, 0x208($s1)
    ctx->pc = 0x1acc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x1acc50: 0x48c29000  ctc2.ni     $v0, $vi18
    ctx->pc = 0x1acc50u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 2) & 0x00FFFFFFu;
    // 0x1acc54: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x1acc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x1acc58: 0x48c2a000  ctc2.ni     $v0, $vi20
    ctx->pc = 0x1acc58u;
    ctx->vu0_r = _mm_castsi128_ps(_mm_set1_epi32(static_cast<int32_t>(GPR_U32(ctx, 2))));
    // 0x1acc5c: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x1acc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x1acc60: 0x48c2a800  ctc2.ni     $v0, $vi21
    ctx->pc = 0x1acc60u;
    { uint32_t tmp = GPR_U32(ctx, 2); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x1acc64: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x1acc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x1acc68: 0x48c2b000  ctc2.ni     $v0, $vi22
    ctx->pc = 0x1acc68u;
    { uint32_t tmp = GPR_U32(ctx, 2); std::memcpy(&ctx->vu0_q, &tmp, sizeof(tmp)); }
    // 0x1acc6c: 0x96220218  lhu         $v0, 0x218($s1)
    ctx->pc = 0x1acc6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x1acc70: 0x48c20000  ctc2.ni     $v0, $vi0
    ctx->pc = 0x1acc70u;
    // CTC2 write to VI0 ignored
    // 0x1acc74: 0x9622021a  lhu         $v0, 0x21A($s1)
    ctx->pc = 0x1acc74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x1acc78: 0x48c20800  ctc2.ni     $v0, $vi1
    ctx->pc = 0x1acc78u;
    ctx->vi[1] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x1acc7c: 0x9622021c  lhu         $v0, 0x21C($s1)
    ctx->pc = 0x1acc7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x1acc80: 0x48c21000  ctc2.ni     $v0, $vi2
    ctx->pc = 0x1acc80u;
    ctx->vi[2] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x1acc84: 0x9622021e  lhu         $v0, 0x21E($s1)
    ctx->pc = 0x1acc84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 542)));
    // 0x1acc88: 0x48c21800  ctc2.ni     $v0, $vi3
    ctx->pc = 0x1acc88u;
    ctx->vi[3] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x1acc8c: 0x96220220  lhu         $v0, 0x220($s1)
    ctx->pc = 0x1acc8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x1acc90: 0x48c22000  ctc2.ni     $v0, $vi4
    ctx->pc = 0x1acc90u;
    ctx->vi[4] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x1acc94: 0x96220222  lhu         $v0, 0x222($s1)
    ctx->pc = 0x1acc94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
    // 0x1acc98: 0x48c22800  ctc2.ni     $v0, $vi5
    ctx->pc = 0x1acc98u;
    ctx->vi[5] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x1acc9c: 0x96220224  lhu         $v0, 0x224($s1)
    ctx->pc = 0x1acc9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x1acca0: 0x48c23000  ctc2.ni     $v0, $vi6
    ctx->pc = 0x1acca0u;
    ctx->vi[6] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x1acca4: 0x96220226  lhu         $v0, 0x226($s1)
    ctx->pc = 0x1acca4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
    // 0x1acca8: 0x48c23800  ctc2.ni     $v0, $vi7
    ctx->pc = 0x1acca8u;
    ctx->vi[7] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x1accac: 0x96220228  lhu         $v0, 0x228($s1)
    ctx->pc = 0x1accacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x1accb0: 0x48c24000  ctc2.ni     $v0, $vi8
    ctx->pc = 0x1accb0u;
    ctx->vi[8] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x1accb4: 0x9622022a  lhu         $v0, 0x22A($s1)
    ctx->pc = 0x1accb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 554)));
    // 0x1accb8: 0x48c24800  ctc2.ni     $v0, $vi9
    ctx->pc = 0x1accb8u;
    ctx->vi[9] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x1accbc: 0x9622022c  lhu         $v0, 0x22C($s1)
    ctx->pc = 0x1accbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 556)));
    // 0x1accc0: 0x48c25000  ctc2.ni     $v0, $vi10
    ctx->pc = 0x1accc0u;
    ctx->vi[10] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x1accc4: 0x9622022e  lhu         $v0, 0x22E($s1)
    ctx->pc = 0x1accc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 558)));
    // 0x1accc8: 0x48c25800  ctc2.ni     $v0, $vi11
    ctx->pc = 0x1accc8u;
    ctx->vi[11] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x1acccc: 0x96220230  lhu         $v0, 0x230($s1)
    ctx->pc = 0x1accccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x1accd0: 0x48c26000  ctc2.ni     $v0, $vi12
    ctx->pc = 0x1accd0u;
    ctx->vi[12] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x1accd4: 0x96220232  lhu         $v0, 0x232($s1)
    ctx->pc = 0x1accd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 562)));
    // 0x1accd8: 0x48c26800  ctc2.ni     $v0, $vi13
    ctx->pc = 0x1accd8u;
    ctx->vi[13] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x1accdc: 0x96220234  lhu         $v0, 0x234($s1)
    ctx->pc = 0x1accdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1acce0: 0x48c27000  ctc2.ni     $v0, $vi14
    ctx->pc = 0x1acce0u;
    ctx->vi[14] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x1acce4: 0x96220236  lhu         $v0, 0x236($s1)
    ctx->pc = 0x1acce4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 566)));
    // 0x1acce8: 0x48c27800  ctc2.ni     $v0, $vi15
    ctx->pc = 0x1acce8u;
    ctx->vi[15] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x1accec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1accecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1accf0:
    // 0x1accf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1accf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1accf4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1accf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1accf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1accf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1accfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCFCu;
        // 0x1acd00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACD04u;
}
