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

// Function: Cmd_COS_Entry__FP15BsSCDEntControl
// Address: 0x1a64e8 - 0x1a6598
void Cmd_COS_Entry__FP15BsSCDEntControl_0x1a64e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_COS_Entry__FP15BsSCDEntControl_0x1a64e8");
#endif

    switch (ctx->pc) {
        case 0x1a6518u: goto label_1a6518;
        case 0x1a654cu: goto label_1a654c;
        default: break;
    }

    ctx->pc = 0x1a64e8u;

    // 0x1a64e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a64e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a64ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a64ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a64f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a64f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a64f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a64f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a64f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a64f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a64fc: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x1a64fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a6500: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a6500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a6504: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6508: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a650c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6510: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6510u;
    SET_GPR_U32(ctx, 31, 0x1A6518u);
    ctx->pc = 0x1A6514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6510u;
    // 0x1a6514: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6510u, 0x1A6518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6518u;
label_1a6518:
    // 0x1a6518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a651c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a651cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6520: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6524: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6528: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a6528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a652c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a652cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6530: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6534: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a6534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a6538: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a6538u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a653c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A653Cu;
    {
        const bool branch_taken_0x1a653c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A653Cu;
        // 0x1a6540: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a653c) {
            ctx->pc = 0x1A6550u;
            goto label_1a6550;
        }
    }
    ctx->pc = 0x1A6544u;
    // 0x1a6544: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6544u;
    SET_GPR_U32(ctx, 31, 0x1A654Cu);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6544u, 0x1A654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A654Cu;
label_1a654c:
    // 0x1a654c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a654cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6550:
    // 0x1a6550: 0x24a32000  addiu       $v1, $a1, 0x2000
    ctx->pc = 0x1a6550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
    // 0x1a6554: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1a6554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1a6558: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a6558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a655c: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x1a655cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
    // 0x1a6560: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x1a6560u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1a6564: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x1a6564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6568: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a6568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a656c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1a656cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1a6570: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x1a6570u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a6574: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x1a6574u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a6578: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x1a6578u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x1a657c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1a657cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1a6580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6584: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6588: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6588u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a658c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a658cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6590: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6590u;
        // 0x1a6594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6598u;
}
