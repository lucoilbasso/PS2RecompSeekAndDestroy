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

// Function: entry_001a3a38
// Address: 0x1a3a38 - 0x1a3a88
void entry_001a3a38_0x1a3a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3a38_0x1a3a38");
#endif

    ctx->pc = 0x1a3a38u;

label_1a3a38:
    // 0x1a3a38: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x1a3a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1a3a3c:
    // 0x1a3a3c: 0x94e3000a  lhu         $v1, 0xA($a3)
    ctx->pc = 0x1a3a3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1a3a40:
    // 0x1a3a40: 0x34468000  ori         $a2, $v0, 0x8000
    ctx->pc = 0x1a3a40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1a3a44:
    // 0x1a3a44: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1a3a44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3a48:
    // 0x1a3a48: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1a3a48u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3a4c:
    // 0x1a3a4c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1a3a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a3a50:
    // 0x1a3a50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a3a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a54:
    // 0x1a3a54: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_1a3a58:
    if (ctx->pc == 0x1A3A58u) {
        ctx->pc = 0x1A3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A54u;
        // 0x1a3a58: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A5Cu;
        goto label_1a3a5c;
    }
    ctx->pc = 0x1A3A54u;
    {
        const bool branch_taken_0x1a3a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A54u;
        // 0x1a3a58: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a54) {
            ctx->pc = 0x1A3AF0u;
            return;
        }
    }
    ctx->pc = 0x1A3A5Cu;
label_1a3a5c:
    // 0x1a3a5c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a3a5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1a3a60:
    // 0x1a3a60: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1a3a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a3a64:
    // 0x1a3a64: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1a3a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1a3a68:
    // 0x1a3a68: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1a3a6c:
    if (ctx->pc == 0x1A3A6Cu) {
        ctx->pc = 0x1A3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A68u;
        // 0x1a3a6c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A70u;
        goto label_1a3a70;
    }
    ctx->pc = 0x1A3A68u;
    {
        const bool branch_taken_0x1a3a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A68u;
        // 0x1a3a6c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a68) {
            ctx->pc = 0x1A3AECu;
            return;
        }
    }
    ctx->pc = 0x1A3A70u;
label_1a3a70:
    // 0x1a3a70: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a3a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1a3a74:
    // 0x1a3a74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a3a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a3a78:
    // 0x1a3a78: 0x8c6392a0  lw          $v1, -0x6D60($v1)
    ctx->pc = 0x1a3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939296)));
label_1a3a7c:
    // 0x1a3a7c: 0x600008  jr          $v1
label_1a3a80:
    if (ctx->pc == 0x1A3A80u) {
        ctx->pc = 0x1A3A84u;
        goto label_1a3a84;
    }
    ctx->pc = 0x1A3A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3A7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A3A84u;
label_1a3a84:
    // 0x1a3a84: 0x0  nop
    ctx->pc = 0x1a3a84u;
    // NOP
    ctx->pc = 0x1a3a88u;
}
