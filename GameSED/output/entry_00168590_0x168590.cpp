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

// Function: entry_00168590
// Address: 0x168590 - 0x16863c
void entry_00168590_0x168590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168590_0x168590");
#endif

    switch (ctx->pc) {
        case 0x168604u: goto label_168604;
        case 0x168638u: goto label_168638;
        default: break;
    }

    ctx->pc = 0x168590u;

    // 0x168590: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x168590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x168594: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x168594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x168598: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x168598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16859c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1685a0: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x1685A0u;
    {
        const bool branch_taken_0x1685a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685A0u;
        // 0x1685a4: 0x8fa2020c  lw          $v0, 0x20C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685a0) {
            ctx->pc = 0x16874Cu;
            return;
        }
    }
    ctx->pc = 0x1685A8u;
    // 0x1685a8: 0x8fa70208  lw          $a3, 0x208($sp)
    ctx->pc = 0x1685a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1685ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1685acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1685b0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1685b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1685b4: 0x8ce301b4  lw          $v1, 0x1B4($a3)
    ctx->pc = 0x1685b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x1685b8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1685b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1685bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1685bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1685c0: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x1685c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1685c4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1685c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1685c8: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x1685c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1685cc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1685ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1685d0: 0x4a0002ff  vnop
    ctx->pc = 0x1685d0u;
    // NOP operation, no action needed for VU0
    // 0x1685d4: 0x4a0002ff  vnop
    ctx->pc = 0x1685d4u;
    // NOP operation, no action needed for VU0
    // 0x1685d8: 0x4a0002ff  vnop
    ctx->pc = 0x1685d8u;
    // NOP operation, no action needed for VU0
    // 0x1685dc: 0x4a0002ff  vnop
    ctx->pc = 0x1685dcu;
    // NOP operation, no action needed for VU0
    // 0x1685e0: 0x4a0002ff  vnop
    ctx->pc = 0x1685e0u;
    // NOP operation, no action needed for VU0
    // 0x1685e4: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1685e4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x1685e8: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1685e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x1685ec: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1685ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1685f0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1685F0u;
    {
        const bool branch_taken_0x1685f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685F0u;
        // 0x1685f4: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685f0) {
            ctx->pc = 0x16863Cu;
            return;
        }
    }
    ctx->pc = 0x1685F8u;
    // 0x1685f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1685f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685fc: 0xc06164c  jal         func_185930
    ctx->pc = 0x1685FCu;
    SET_GPR_U32(ctx, 31, 0x168604u);
    ctx->pc = 0x168600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1685FCu;
    // 0x168600: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1685FCu, 0x168604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168604u;
label_168604:
    // 0x168604: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168608: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x168608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16860c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x16860cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168610: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168610u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168614: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x168614u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168618: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x16861c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16861cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168620: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168620u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168624: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x168624u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x168628: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x168628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16862c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16862cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168630: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x168630u;
    SET_GPR_U32(ctx, 31, 0x168638u);
    ctx->pc = 0x168634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168630u;
    // 0x168634: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x168630u, 0x168638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168638u;
label_168638:
    // 0x168638: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x168638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x16863cu;
}
