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

// Function: caseD_9
// Address: 0x1350e0 - 0x135110
void caseD_9_0x1350e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1350e0");
#endif

    switch (ctx->pc) {
        case 0x1350e8u: goto label_1350e8;
        case 0x135108u: goto label_135108;
        default: break;
    }

    ctx->pc = 0x1350e0u;

    // 0x1350e0: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x1350E0u;
    SET_GPR_U32(ctx, 31, 0x1350E8u);
    ctx->pc = 0x1350E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1350E0u;
    // 0x1350e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x1350E0u, 0x1350E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1350E8u;
label_1350e8:
    // 0x1350e8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1350e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1350ec: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1350ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x1350f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1350f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1350f4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1350f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1350f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1350f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1350fc: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x1350fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x135100: 0xc0556a2  jal         func_155A88
    ctx->pc = 0x135100u;
    SET_GPR_U32(ctx, 31, 0x135108u);
    ctx->pc = 0x135104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135100u;
    // 0x135104: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A88u, 0x135100u, 0x135108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135108u;
label_135108:
    // 0x135108: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x135108u;
    {
        const bool branch_taken_0x135108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135108u;
        // 0x13510c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135108) {
            ctx->pc = 0x135200u;
            return;
        }
    }
    ctx->pc = 0x135110u;
}
