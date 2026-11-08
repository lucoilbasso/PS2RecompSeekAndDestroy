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

// Function: caseD_1b
// Address: 0x133e98 - 0x133f00
void caseD_1b_0x133e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1b_0x133e98");
#endif

    switch (ctx->pc) {
        case 0x133ea0u: goto label_133ea0;
        case 0x133eacu: goto label_133eac;
        case 0x133eb8u: goto label_133eb8;
        case 0x133ec4u: goto label_133ec4;
        case 0x133ef4u: goto label_133ef4;
        default: break;
    }

    ctx->pc = 0x133e98u;

    // 0x133e98: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133E98u;
    SET_GPR_U32(ctx, 31, 0x133EA0u);
    ctx->pc = 0x133E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E98u;
    // 0x133e9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133E98u, 0x133EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EA0u;
label_133ea0:
    // 0x133ea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ea4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133EA4u;
    SET_GPR_U32(ctx, 31, 0x133EACu);
    ctx->pc = 0x133EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133EA4u;
    // 0x133ea8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133EA4u, 0x133EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EACu;
label_133eac:
    // 0x133eac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x133eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133eb0: 0xc04db4e  jal         func_136D38
    ctx->pc = 0x133EB0u;
    SET_GPR_U32(ctx, 31, 0x133EB8u);
    ctx->pc = 0x133EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133EB0u;
    // 0x133eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x133EB0u, 0x133EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EB8u;
label_133eb8:
    // 0x133eb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ebc: 0xc04db4e  jal         func_136D38
    ctx->pc = 0x133EBCu;
    SET_GPR_U32(ctx, 31, 0x133EC4u);
    ctx->pc = 0x133EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133EBCu;
    // 0x133ec0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x133EBCu, 0x133EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EC4u;
label_133ec4:
    // 0x133ec4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x133ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ec8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x133ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x133ecc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x133eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x133ed0: 0x1683000b  bne         $s4, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x133ED0u;
    {
        const bool branch_taken_0x133ed0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x133ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133ED0u;
        // 0x133ed4: 0x8c46b830  lw          $a2, -0x47D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ed0) {
            ctx->pc = 0x133F00u;
            return;
        }
    }
    ctx->pc = 0x133ED8u;
    // 0x133ed8: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x133ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x133edc: 0x261010a0  addiu       $s0, $s0, 0x10A0
    ctx->pc = 0x133edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4256));
    // 0x133ee0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x133ee0u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[0])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x2610A0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x2610A0u, _value); } while (0);
    // 0x133ee4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ee8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133eec: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x133EECu;
    SET_GPR_U32(ctx, 31, 0x133EF4u);
    ctx->pc = 0x133EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133EECu;
    // 0x133ef0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x133EECu, 0x133EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EF4u;
label_133ef4:
    // 0x133ef4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x133EF4u;
    {
        const bool branch_taken_0x133ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EF4u;
        // 0x133ef8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ef4) {
            ctx->pc = 0x133F8Cu;
            return;
        }
    }
    ctx->pc = 0x133EFCu;
    // 0x133efc: 0x0  nop
    ctx->pc = 0x133efcu;
    // NOP
    ctx->pc = 0x133f00u;
}
