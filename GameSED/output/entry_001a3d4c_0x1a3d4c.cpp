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

// Function: entry_001a3d4c
// Address: 0x1a3d4c - 0x1a3da0
void entry_001a3d4c_0x1a3d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3d4c_0x1a3d4c");
#endif

    ctx->pc = 0x1a3d4cu;

label_1a3d4c:
    // 0x1a3d4c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x1a3d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1a3d50:
    // 0x1a3d50: 0x94e4000a  lhu         $a0, 0xA($a3)
    ctx->pc = 0x1a3d50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1a3d54:
    // 0x1a3d54: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a3d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a3d58:
    // 0x1a3d58: 0x34488000  ori         $t0, $v0, 0x8000
    ctx->pc = 0x1a3d58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1a3d5c:
    // 0x1a3d5c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a3d5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a3d60:
    // 0x1a3d60: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1a3d60u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3d64:
    // 0x1a3d64: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1a3d64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a3d68:
    // 0x1a3d68: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a3d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d6c:
    // 0x1a3d6c: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
label_1a3d70:
    if (ctx->pc == 0x1A3D70u) {
        ctx->pc = 0x1A3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D6Cu;
        // 0x1a3d70: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D74u;
        goto label_1a3d74;
    }
    ctx->pc = 0x1A3D6Cu;
    {
        const bool branch_taken_0x1a3d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D6Cu;
        // 0x1a3d70: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d6c) {
            ctx->pc = 0x1A3E08u;
            return;
        }
    }
    ctx->pc = 0x1A3D74u;
label_1a3d74:
    // 0x1a3d74: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a3d74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1a3d78:
    // 0x1a3d78: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1a3d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a3d7c:
    // 0x1a3d7c: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x1a3d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1a3d80:
    // 0x1a3d80: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1a3d84:
    if (ctx->pc == 0x1A3D84u) {
        ctx->pc = 0x1A3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D80u;
        // 0x1a3d84: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D88u;
        goto label_1a3d88;
    }
    ctx->pc = 0x1A3D80u;
    {
        const bool branch_taken_0x1a3d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D80u;
        // 0x1a3d84: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d80) {
            ctx->pc = 0x1A3E04u;
            return;
        }
    }
    ctx->pc = 0x1A3D88u;
label_1a3d88:
    // 0x1a3d88: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a3d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1a3d8c:
    // 0x1a3d8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a3d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a3d90:
    // 0x1a3d90: 0x8c6392c0  lw          $v1, -0x6D40($v1)
    ctx->pc = 0x1a3d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939328)));
label_1a3d94:
    // 0x1a3d94: 0x600008  jr          $v1
label_1a3d98:
    if (ctx->pc == 0x1A3D98u) {
        ctx->pc = 0x1A3D9Cu;
        goto label_1a3d9c;
    }
    ctx->pc = 0x1A3D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3D94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A3D9Cu;
label_1a3d9c:
    // 0x1a3d9c: 0x0  nop
    ctx->pc = 0x1a3d9cu;
    // NOP
    ctx->pc = 0x1a3da0u;
}
