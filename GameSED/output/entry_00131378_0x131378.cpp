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

// Function: entry_00131378
// Address: 0x131378 - 0x1313b0
void entry_00131378_0x131378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131378_0x131378");
#endif

    switch (ctx->pc) {
        case 0x1313a0u: goto label_1313a0;
        default: break;
    }

    ctx->pc = 0x131378u;

    // 0x131378: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x131378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13137c: 0x54e2000d  bnel        $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13137Cu;
    {
        const bool branch_taken_0x13137c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x13137c) {
            ctx->pc = 0x131380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13137Cu;
            // 0x131380: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1313B4u;
            return;
        }
    }
    ctx->pc = 0x131384u;
    // 0x131384: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x131384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x131388: 0x7e200000  sq          $zero, 0x0($s1)
    ctx->pc = 0x131388u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 0));
    // 0x13138c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x13138cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x131390: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x131390u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131394: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x131394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131398: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x131398u;
    SET_GPR_U32(ctx, 31, 0x1313A0u);
    ctx->pc = 0x13139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131398u;
    // 0x13139c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x131398u, 0x1313A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313A0u;
label_1313a0:
    // 0x1313a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1313a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1313a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313a8: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x1313A8u;
    SET_GPR_U32(ctx, 31, 0x1313B0u);
    ctx->pc = 0x1313ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313A8u;
    // 0x1313ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x1313A8u, 0x1313B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313B0u;
}
