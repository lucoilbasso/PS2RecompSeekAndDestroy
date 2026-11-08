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

// Function: entry_00167668
// Address: 0x167668 - 0x167780
void entry_00167668_0x167668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167668_0x167668");
#endif

    switch (ctx->pc) {
        case 0x167694u: goto label_167694;
        case 0x1676acu: goto label_1676ac;
        case 0x1676ccu: goto label_1676cc;
        case 0x1676e4u: goto label_1676e4;
        case 0x167714u: goto label_167714;
        case 0x16772cu: goto label_16772c;
        case 0x16774cu: goto label_16774c;
        case 0x167764u: goto label_167764;
        default: break;
    }

    ctx->pc = 0x167668u;

    // 0x167668: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x167668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x16766c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x167670: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x167674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167678: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x167678u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16767c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x16767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x167680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167684: 0xc79483d8  lwc1        $f20, -0x7C28($gp)
    ctx->pc = 0x167684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x167688: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x167688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16768c: 0xc06164c  jal         func_185930
    ctx->pc = 0x16768Cu;
    SET_GPR_U32(ctx, 31, 0x167694u);
    ctx->pc = 0x167690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16768Cu;
    // 0x167690: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16768Cu, 0x167694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167694u;
label_167694:
    // 0x167694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167698: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x167698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16769c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16769cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1676a0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1676a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1676a4: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1676A4u;
    SET_GPR_U32(ctx, 31, 0x1676ACu);
    ctx->pc = 0x1676A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1676A4u;
    // 0x1676a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1676A4u, 0x1676ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1676ACu;
label_1676ac:
    // 0x1676ac: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1676acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1676b0: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1676b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x1676b4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1676b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1676b8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1676b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1676bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1676bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1676c0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1676c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1676c4: 0xc06164c  jal         func_185930
    ctx->pc = 0x1676C4u;
    SET_GPR_U32(ctx, 31, 0x1676CCu);
    ctx->pc = 0x1676C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1676C4u;
    // 0x1676c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1676C4u, 0x1676CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1676CCu;
label_1676cc:
    // 0x1676cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1676ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1676d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1676d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1676d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1676dc: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1676DCu;
    SET_GPR_U32(ctx, 31, 0x1676E4u);
    ctx->pc = 0x1676E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1676DCu;
    // 0x1676e0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1676DCu, 0x1676E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1676E4u;
label_1676e4:
    // 0x1676e4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1676e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1676e8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1676e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x1676ec: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1676ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1676f0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1676f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1676f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1676f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1676f8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1676f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1676fc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1676fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167700: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x167700u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167704: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x167704u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16770c: 0xc06164c  jal         func_185930
    ctx->pc = 0x16770Cu;
    SET_GPR_U32(ctx, 31, 0x167714u);
    ctx->pc = 0x167710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16770Cu;
    // 0x167710: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16770Cu, 0x167714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167714u;
label_167714:
    // 0x167714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167718: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16771c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16771cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167720: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x167720u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x167724: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x167724u;
    SET_GPR_U32(ctx, 31, 0x16772Cu);
    ctx->pc = 0x167728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167724u;
    // 0x167728: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x167724u, 0x16772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16772Cu;
label_16772c:
    // 0x16772c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x16772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x167730: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x167734: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x167734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x167738: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16773c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16773cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167740: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x167740u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167744: 0xc06164c  jal         func_185930
    ctx->pc = 0x167744u;
    SET_GPR_U32(ctx, 31, 0x16774Cu);
    ctx->pc = 0x167748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167744u;
    // 0x167748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167744u, 0x16774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16774Cu;
label_16774c:
    // 0x16774c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16774cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167750: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167754: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x167754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167758: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x167758u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x16775c: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x16775Cu;
    SET_GPR_U32(ctx, 31, 0x167764u);
    ctx->pc = 0x167760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16775Cu;
    // 0x167760: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x16775Cu, 0x167764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167764u;
label_167764:
    // 0x167764: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x167764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x167768: 0xae621250  sw          $v0, 0x1250($s3)
    ctx->pc = 0x167768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4688), GPR_U32(ctx, 2));
    // 0x16776c: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x16776cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
    // 0x167770: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x167770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x167774: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x167774u;
    {
        const bool branch_taken_0x167774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167774u;
        // 0x167778: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167774) {
            ctx->pc = 0x16794Cu;
            return;
        }
    }
    ctx->pc = 0x16777Cu;
    // 0x16777c: 0x0  nop
    ctx->pc = 0x16777cu;
    // NOP
    ctx->pc = 0x167780u;
}
