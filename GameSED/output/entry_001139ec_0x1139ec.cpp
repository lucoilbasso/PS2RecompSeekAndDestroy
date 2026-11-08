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

// Function: entry_001139ec
// Address: 0x1139ec - 0x113a58
void entry_001139ec_0x1139ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001139ec_0x1139ec");
#endif

    switch (ctx->pc) {
        case 0x1139f4u: goto label_1139f4;
        case 0x113a10u: goto label_113a10;
        case 0x113a2cu: goto label_113a2c;
        default: break;
    }

    ctx->pc = 0x1139ecu;

    // 0x1139ec: 0xc05af84  jal         func_16BE10
    ctx->pc = 0x1139ECu;
    SET_GPR_U32(ctx, 31, 0x1139F4u);
    ctx->pc = 0x1139F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139ECu;
    // 0x1139f0: 0x265000c8  addiu       $s0, $s2, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BE10u, 0x1139ECu, 0x1139F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139F4u;
label_1139f4:
    // 0x1139f4: 0x264300a0  addiu       $v1, $s2, 0xA0
    ctx->pc = 0x1139f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x1139f8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1139f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1139fc: 0x24110200  addiu       $s1, $zero, 0x200
    ctx->pc = 0x1139fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x113a00: 0x24130219  addiu       $s3, $zero, 0x219
    ctx->pc = 0x113a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 537));
    // 0x113a04: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x113a04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x113a08: 0xc062d9e  jal         func_18B678
    ctx->pc = 0x113A08u;
    SET_GPR_U32(ctx, 31, 0x113A10u);
    ctx->pc = 0x113A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A08u;
    // 0x113a0c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B678u, 0x113A08u, 0x113A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A10u;
label_113a10:
    // 0x113a10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x113a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113a14: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x113a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113a18: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x113a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x113a1c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x113a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x113a20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x113a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x113a24: 0xc064db4  jal         func_1936D0
    ctx->pc = 0x113A24u;
    SET_GPR_U32(ctx, 31, 0x113A2Cu);
    ctx->pc = 0x113A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A24u;
    // 0x113a28: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1936D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1936D0u, 0x113A24u, 0x113A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A2Cu;
label_113a2c:
    // 0x113a2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x113a2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x113a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113a34: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x113A34u;
    {
        const bool branch_taken_0x113a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A34u;
        // 0x113a38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a34) {
            ctx->pc = 0x113A58u;
            return;
        }
    }
    ctx->pc = 0x113A3Cu;
    // 0x113a3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x113a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113a40: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x113a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x113a44: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x113a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x113a48: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x113a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x113a4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x113A4Cu;
    {
        const bool branch_taken_0x113a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A4Cu;
        // 0x113a50: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a4c) {
            ctx->pc = 0x113A7Cu;
            return;
        }
    }
    ctx->pc = 0x113A54u;
    // 0x113a54: 0x0  nop
    ctx->pc = 0x113a54u;
    // NOP
    ctx->pc = 0x113a58u;
}
