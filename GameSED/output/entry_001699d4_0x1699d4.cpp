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

// Function: entry_001699d4
// Address: 0x1699d4 - 0x169a58
void entry_001699d4_0x1699d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001699d4_0x1699d4");
#endif

    switch (ctx->pc) {
        case 0x1699e0u: goto label_1699e0;
        case 0x1699ecu: goto label_1699ec;
        case 0x1699f4u: goto label_1699f4;
        case 0x169a10u: goto label_169a10;
        case 0x169a1cu: goto label_169a1c;
        case 0x169a38u: goto label_169a38;
        case 0x169a44u: goto label_169a44;
        case 0x169a4cu: goto label_169a4c;
        default: break;
    }

    ctx->pc = 0x1699d4u;

    // 0x1699d4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1699d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1699d8: 0xc043b48  jal         func_10ED20
    ctx->pc = 0x1699D8u;
    SET_GPR_U32(ctx, 31, 0x1699E0u);
    ctx->pc = 0x1699DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1699D8u;
    // 0x1699dc: 0x120b82d  daddu       $s7, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED20u, 0x1699D8u, 0x1699E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1699E0u;
label_1699e0:
    // 0x1699e0: 0x24042846  addiu       $a0, $zero, 0x2846
    ctx->pc = 0x1699e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10310));
    // 0x1699e4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1699E4u;
    SET_GPR_U32(ctx, 31, 0x1699ECu);
    ctx->pc = 0x1699E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1699E4u;
    // 0x1699e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1699E4u, 0x1699ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1699ECu;
label_1699ec:
    // 0x1699ec: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1699ECu;
    SET_GPR_U32(ctx, 31, 0x1699F4u);
    ctx->pc = 0x1699F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1699ECu;
    // 0x1699f0: 0x24041280  addiu       $a0, $zero, 0x1280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1699ECu, 0x1699F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1699F4u;
label_1699f4:
    // 0x1699f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1699f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699f8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1699f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1699fc: 0x2442f3b0  addiu       $v0, $v0, -0xC50
    ctx->pc = 0x1699fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964144));
    // 0x169a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a04: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x169a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x169a08: 0xc059352  jal         func_164D48
    ctx->pc = 0x169A08u;
    SET_GPR_U32(ctx, 31, 0x169A10u);
    ctx->pc = 0x169A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A08u;
    // 0x169a0c: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164D48u, 0x169A08u, 0x169A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A10u;
label_169a10:
    // 0x169a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a14: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x169A14u;
    SET_GPR_U32(ctx, 31, 0x169A1Cu);
    ctx->pc = 0x169A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A14u;
    // 0x169a18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x169A14u, 0x169A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A1Cu;
label_169a1c:
    // 0x169a1c: 0xaed30c00  sw          $s3, 0xC00($s6)
    ctx->pc = 0x169a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 3072), GPR_U32(ctx, 19));
    // 0x169a20: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x169a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a24: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x169a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a28: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x169a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x169a2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x169a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a30: 0xc0658a2  jal         func_196288
    ctx->pc = 0x169A30u;
    SET_GPR_U32(ctx, 31, 0x169A38u);
    ctx->pc = 0x169A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A30u;
    // 0x169a34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196288u, 0x169A30u, 0x169A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A38u;
label_169a38:
    // 0x169a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a3c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x169A3Cu;
    SET_GPR_U32(ctx, 31, 0x169A44u);
    ctx->pc = 0x169A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A3Cu;
    // 0x169a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x169A3Cu, 0x169A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A44u;
label_169a44:
    // 0x169a44: 0xc0593e0  jal         func_164F80
    ctx->pc = 0x169A44u;
    SET_GPR_U32(ctx, 31, 0x169A4Cu);
    ctx->pc = 0x169A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A44u;
    // 0x169a48: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164F80u, 0x169A44u, 0x169A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A4Cu;
label_169a4c:
    // 0x169a4c: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x169A4Cu;
    {
        const bool branch_taken_0x169a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A4Cu;
        // 0x169a50: 0xaed50c08  sw          $s5, 0xC08($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 3080), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a4c) {
            ctx->pc = 0x16A07Cu;
            return;
        }
    }
    ctx->pc = 0x169A54u;
    // 0x169a54: 0x0  nop
    ctx->pc = 0x169a54u;
    // NOP
    ctx->pc = 0x169a58u;
}
