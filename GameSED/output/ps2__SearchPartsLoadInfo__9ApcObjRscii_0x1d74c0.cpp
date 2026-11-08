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

// Function: _SearchPartsLoadInfo__9ApcObjRscii
// Address: 0x1d74c0 - 0x1d7508
void ps2__SearchPartsLoadInfo__9ApcObjRscii_0x1d74c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SearchPartsLoadInfo__9ApcObjRscii_0x1d74c0");
#endif

    switch (ctx->pc) {
        case 0x1d74d8u: goto label_1d74d8;
        default: break;
    }

    ctx->pc = 0x1d74c0u;

    // 0x1d74c0: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x1d74c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1d74c4: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D74C4u;
    {
        const bool branch_taken_0x1d74c4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74C4u;
        // 0x1d74c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74c4) {
            ctx->pc = 0x1D74FCu;
            goto label_1d74fc;
        }
    }
    ctx->pc = 0x1D74CCu;
    // 0x1d74cc: 0x8c870040  lw          $a3, 0x40($a0)
    ctx->pc = 0x1d74ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1d74d0: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x1d74d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d74d4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1d74d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d74d8:
    // 0x1d74d8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1d74d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d74dc: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x1d74dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1d74e0: 0x66200b  movn        $a0, $v1, $a2
    ctx->pc = 0x1d74e0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1d74e4: 0x10850006  beq         $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D74E4u;
    {
        const bool branch_taken_0x1d74e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74E4u;
        // 0x1d74e8: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74e4) {
            ctx->pc = 0x1D7500u;
            goto label_1d7500;
        }
    }
    ctx->pc = 0x1D74ECu;
    // 0x1d74ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d74ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d74f0: 0x109102a  slt         $v0, $t0, $t1
    ctx->pc = 0x1d74f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1d74f4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D74F4u;
    {
        const bool branch_taken_0x1d74f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d74f4) {
            ctx->pc = 0x1D74F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D74F4u;
            // 0x1d74f8: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D74D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d74d8;
        }
    }
    ctx->pc = 0x1D74FCu;
label_1d74fc:
    // 0x1d74fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d74fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7500:
    // 0x1d7500: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7508u;
}
