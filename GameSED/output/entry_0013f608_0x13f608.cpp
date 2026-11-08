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

// Function: entry_0013f608
// Address: 0x13f608 - 0x13f6b0
void entry_0013f608_0x13f608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f608_0x13f608");
#endif

    switch (ctx->pc) {
        case 0x13f664u: goto label_13f664;
        case 0x13f67cu: goto label_13f67c;
        case 0x13f694u: goto label_13f694;
        default: break;
    }

    ctx->pc = 0x13f608u;

    // 0x13f608: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x13f608u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f60c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13f60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13f610: 0xc6350144  lwc1        $f21, 0x144($s1)
    ctx->pc = 0x13f610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13f614: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x13f614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x13f618: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x13f618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13f61c: 0xc6340140  lwc1        $f20, 0x140($s1)
    ctx->pc = 0x13f61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13f620: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x13f620u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f624: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x13f624u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f628: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x13f628u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13f62c: 0x4a0002ff  vnop
    ctx->pc = 0x13f62cu;
    // NOP operation, no action needed for VU0
    // 0x13f630: 0x4a0002ff  vnop
    ctx->pc = 0x13f630u;
    // NOP operation, no action needed for VU0
    // 0x13f634: 0x4a0002ff  vnop
    ctx->pc = 0x13f634u;
    // NOP operation, no action needed for VU0
    // 0x13f638: 0x4a0002ff  vnop
    ctx->pc = 0x13f638u;
    // NOP operation, no action needed for VU0
    // 0x13f63c: 0x4a0002ff  vnop
    ctx->pc = 0x13f63cu;
    // NOP operation, no action needed for VU0
    // 0x13f640: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x13f640u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x13f644: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x13f644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x13f648: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x13f648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x13f64c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x13F64Cu;
    {
        const bool branch_taken_0x13f64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F64Cu;
        // 0x13f650: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f64c) {
            ctx->pc = 0x13F6BCu;
            return;
        }
    }
    ctx->pc = 0x13F654u;
    // 0x13f654: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x13f654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f658: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x13f658u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x13f65c: 0xc067c0a  jal         func_19F028
    ctx->pc = 0x13F65Cu;
    SET_GPR_U32(ctx, 31, 0x13F664u);
    ctx->pc = 0x13F660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F65Cu;
    // 0x13f660: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x13F65Cu, 0x13F664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F664u;
label_13f664:
    // 0x13f664: 0x26240034  addiu       $a0, $s1, 0x34
    ctx->pc = 0x13f664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x13f668: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x13f668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f66c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x13f66cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x13f670: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x13f670u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x13f674: 0xc067c0a  jal         func_19F028
    ctx->pc = 0x13F674u;
    SET_GPR_U32(ctx, 31, 0x13F67Cu);
    ctx->pc = 0x13F678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F674u;
    // 0x13f678: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x13F674u, 0x13F67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F67Cu;
label_13f67c:
    // 0x13f67c: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x13f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13f680: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x13f680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f684: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x13f684u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x13f688: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x13f688u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x13f68c: 0xc067c0a  jal         func_19F028
    ctx->pc = 0x13F68Cu;
    SET_GPR_U32(ctx, 31, 0x13F694u);
    ctx->pc = 0x13F690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F68Cu;
    // 0x13f690: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x13F68Cu, 0x13F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F694u;
label_13f694:
    // 0x13f694: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F694u;
    {
        const bool branch_taken_0x13f694 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f694) {
            ctx->pc = 0x13F698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F694u;
            // 0x13f698: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F6B0u;
            return;
        }
    }
    ctx->pc = 0x13F69Cu;
    // 0x13f69c: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F69Cu;
    {
        const bool branch_taken_0x13f69c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f69c) {
            ctx->pc = 0x13F6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F69Cu;
            // 0x13f6a0: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F6B0u;
            return;
        }
    }
    ctx->pc = 0x13F6A4u;
    // 0x13f6a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F6A4u;
    {
        const bool branch_taken_0x13f6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6A4u;
        // 0x13f6a8: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6a4) {
            ctx->pc = 0x13F6BCu;
            return;
        }
    }
    ctx->pc = 0x13F6ACu;
    // 0x13f6ac: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x13f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    ctx->pc = 0x13f6b0u;
}
