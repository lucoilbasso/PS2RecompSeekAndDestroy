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

// Function: caseD_2
// Address: 0x132e00 - 0x132e60
void caseD_2_0x132e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x132e00");
#endif

    switch (ctx->pc) {
        case 0x132e14u: goto label_132e14;
        case 0x132e24u: goto label_132e24;
        case 0x132e2cu: goto label_132e2c;
        case 0x132e54u: goto label_132e54;
        default: break;
    }

    ctx->pc = 0x132e00u;

    // 0x132e00: 0x8e510048  lw          $s1, 0x48($s2)
    ctx->pc = 0x132e00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x132e04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x132e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x132e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e0c: 0xc04e354  jal         func_138D50
    ctx->pc = 0x132E0Cu;
    SET_GPR_U32(ctx, 31, 0x132E14u);
    ctx->pc = 0x132E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E0Cu;
    // 0x132e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D50u, 0x132E0Cu, 0x132E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E14u;
label_132e14:
    // 0x132e14: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x132e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x132e18: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x132e18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132e1c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x132E1Cu;
    SET_GPR_U32(ctx, 31, 0x132E24u);
    ctx->pc = 0x132E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E1Cu;
    // 0x132e20: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x132E1Cu, 0x132E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E24u;
label_132e24:
    // 0x132e24: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x132E24u;
    SET_GPR_U32(ctx, 31, 0x132E2Cu);
    ctx->pc = 0x132E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E24u;
    // 0x132e28: 0x24040260  addiu       $a0, $zero, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x132E24u, 0x132E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E2Cu;
label_132e2c:
    // 0x132e2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x132e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e34: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x132e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x132e38: 0x2442ef68  addiu       $v0, $v0, -0x1098
    ctx->pc = 0x132e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963048));
    // 0x132e3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x132e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e40: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x132e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x132e44: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x132e44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e4c: 0xc0529f0  jal         func_14A7C0
    ctx->pc = 0x132E4Cu;
    SET_GPR_U32(ctx, 31, 0x132E54u);
    ctx->pc = 0x132E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E4Cu;
    // 0x132e50: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7C0u, 0x132E4Cu, 0x132E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E54u;
label_132e54:
    // 0x132e54: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x132E54u;
    {
        const bool branch_taken_0x132e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E54u;
        // 0x132e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e54) {
            ctx->pc = 0x132EB8u;
            return;
        }
    }
    ctx->pc = 0x132E5Cu;
    // 0x132e5c: 0x0  nop
    ctx->pc = 0x132e5cu;
    // NOP
    ctx->pc = 0x132e60u;
}
