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

// Function: entry_001a2f9c
// Address: 0x1a2f9c - 0x1a2ff0
void entry_001a2f9c_0x1a2f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2f9c_0x1a2f9c");
#endif

    switch (ctx->pc) {
        case 0x1a2fa8u: goto label_1a2fa8;
        default: break;
    }

    ctx->pc = 0x1a2f9cu;

label_1a2f9c:
    // 0x1a2f9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a2f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a2fa0:
    // 0x1a2fa0: 0xc068866  jal         func_1A2198
label_1a2fa4:
    if (ctx->pc == 0x1A2FA4u) {
        ctx->pc = 0x1A2FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FA0u;
        // 0x1a2fa4: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2FA8u;
        goto label_1a2fa8;
    }
    ctx->pc = 0x1A2FA0u;
    SET_GPR_U32(ctx, 31, 0x1A2FA8u);
    ctx->pc = 0x1A2FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2FA0u;
    // 0x1a2fa4: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A2FA0u, 0x1A2FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FA8u;
label_1a2fa8:
    // 0x1a2fa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2fac:
    // 0x1a2fac: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x1a2facu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_1a2fb0:
    // 0x1a2fb0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1a2fb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a2fb4:
    // 0x1a2fb4: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1a2fb4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a2fb8:
    // 0x1a2fb8: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1a2fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a2fbc:
    // 0x1a2fbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a2fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a2fc0:
    // 0x1a2fc0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1a2fc4:
    if (ctx->pc == 0x1A2FC4u) {
        ctx->pc = 0x1A2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FC0u;
        // 0x1a2fc4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2FC8u;
        goto label_1a2fc8;
    }
    ctx->pc = 0x1A2FC0u;
    {
        const bool branch_taken_0x1a2fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FC0u;
        // 0x1a2fc4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fc0) {
            ctx->pc = 0x1A3058u;
            return;
        }
    }
    ctx->pc = 0x1A2FC8u;
label_1a2fc8:
    // 0x1a2fc8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a2fc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1a2fcc:
    // 0x1a2fcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a2fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a2fd0:
    // 0x1a2fd0: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1a2fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1a2fd4:
    // 0x1a2fd4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1a2fd8:
    if (ctx->pc == 0x1A2FD8u) {
        ctx->pc = 0x1A2FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FD4u;
        // 0x1a2fd8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2FDCu;
        goto label_1a2fdc;
    }
    ctx->pc = 0x1A2FD4u;
    {
        const bool branch_taken_0x1a2fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FD4u;
        // 0x1a2fd8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fd4) {
            ctx->pc = 0x1A3054u;
            return;
        }
    }
    ctx->pc = 0x1A2FDCu;
label_1a2fdc:
    // 0x1a2fdc: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a2fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1a2fe0:
    // 0x1a2fe0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a2fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a2fe4:
    // 0x1a2fe4: 0x8c639280  lw          $v1, -0x6D80($v1)
    ctx->pc = 0x1a2fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939264)));
label_1a2fe8:
    // 0x1a2fe8: 0x600008  jr          $v1
label_1a2fec:
    if (ctx->pc == 0x1A2FECu) {
        ctx->pc = 0x1A2FF0u;
        goto label_fallthrough_0x1a2fe8;
    }
    ctx->pc = 0x1A2FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2FE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1a2fe8:
    ctx->pc = 0x1A2FF0u;
}
