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

// Function: caseD_1c
// Address: 0x133fa0 - 0x133fe8
void caseD_1c_0x133fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1c_0x133fa0");
#endif

    switch (ctx->pc) {
        case 0x133fa8u: goto label_133fa8;
        case 0x133fb0u: goto label_133fb0;
        case 0x133fe0u: goto label_133fe0;
        default: break;
    }

    ctx->pc = 0x133fa0u;

    // 0x133fa0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133FA0u;
    SET_GPR_U32(ctx, 31, 0x133FA8u);
    ctx->pc = 0x133FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FA0u;
    // 0x133fa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133FA0u, 0x133FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FA8u;
label_133fa8:
    // 0x133fa8: 0xc04db4e  jal         func_136D38
    ctx->pc = 0x133FA8u;
    SET_GPR_U32(ctx, 31, 0x133FB0u);
    ctx->pc = 0x133FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FA8u;
    // 0x133fac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x133FA8u, 0x133FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FB0u;
label_133fb0:
    // 0x133fb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x133fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x133fb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x133fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133fb8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x133fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x133fbc: 0x1683000a  bne         $s4, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x133FBCu;
    {
        const bool branch_taken_0x133fbc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x133FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FBCu;
        // 0x133fc0: 0x8c50b830  lw          $s0, -0x47D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133fbc) {
            ctx->pc = 0x133FE8u;
            return;
        }
    }
    ctx->pc = 0x133FC4u;
    // 0x133fc4: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x133fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x133fc8: 0x261010b0  addiu       $s0, $s0, 0x10B0
    ctx->pc = 0x133fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4272));
    // 0x133fcc: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x133fccu;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[0])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x2610B0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x2610B0u, _value); } while (0);
    // 0x133fd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133fd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133fd8: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x133FD8u;
    SET_GPR_U32(ctx, 31, 0x133FE0u);
    ctx->pc = 0x133FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FD8u;
    // 0x133fdc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x133FD8u, 0x133FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FE0u;
label_133fe0:
    // 0x133fe0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x133FE0u;
    {
        const bool branch_taken_0x133fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133fe0) {
            ctx->pc = 0x134074u;
            return;
        }
    }
    ctx->pc = 0x133FE8u;
}
