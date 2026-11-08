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

// Function: entry_0013fc0c
// Address: 0x13fc0c - 0x13fc54
void entry_0013fc0c_0x13fc0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fc0c_0x13fc0c");
#endif

    switch (ctx->pc) {
        case 0x13fc28u: goto label_13fc28;
        default: break;
    }

    ctx->pc = 0x13fc0cu;

    // 0x13fc0c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x13fc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13fc10: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13fc10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13fc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13fc18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13fc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13fc1c: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x13fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x13fc20: 0xc04fce4  jal         func_13F390
    ctx->pc = 0x13FC20u;
    SET_GPR_U32(ctx, 31, 0x13FC28u);
    ctx->pc = 0x13FC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC20u;
    // 0x13fc24: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F390u, 0x13FC20u, 0x13FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC28u;
label_13fc28:
    // 0x13fc28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13fc28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc2c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13FC2Cu;
    {
        const bool branch_taken_0x13fc2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC2Cu;
        // 0x13fc30: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc2c) {
            ctx->pc = 0x13FC54u;
            return;
        }
    }
    ctx->pc = 0x13FC34u;
    // 0x13fc34: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x13fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x13fc38: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x13fc38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13fc3c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x13fc3cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x13fc40: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13fc40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13fc44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13fc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13fc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc4c: 0xc0618c2  jal         func_186308
    ctx->pc = 0x13FC4Cu;
    SET_GPR_U32(ctx, 31, 0x13FC54u);
    ctx->pc = 0x13FC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC4Cu;
    // 0x13fc50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13FC4Cu, 0x13FC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC54u;
}
