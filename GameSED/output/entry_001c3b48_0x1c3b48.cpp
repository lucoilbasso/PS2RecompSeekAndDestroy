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

// Function: entry_001c3b48
// Address: 0x1c3b48 - 0x1c3be8
void entry_001c3b48_0x1c3b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3b48_0x1c3b48");
#endif

    switch (ctx->pc) {
        case 0x1c3b78u: goto label_1c3b78;
        case 0x1c3b94u: goto label_1c3b94;
        case 0x1c3b9cu: goto label_1c3b9c;
        case 0x1c3be4u: goto label_1c3be4;
        default: break;
    }

    ctx->pc = 0x1c3b48u;

label_1c3b48:
    // 0x1c3b48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3b4c: 0x0  nop
    ctx->pc = 0x1c3b4cu;
    // NOP
    // 0x1c3b50: 0x0  nop
    ctx->pc = 0x1c3b50u;
    // NOP
    // 0x1c3b54: 0x0  nop
    ctx->pc = 0x1c3b54u;
    // NOP
    // 0x1c3b58: 0x0  nop
    ctx->pc = 0x1c3b58u;
    // NOP
    // 0x1c3b5c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C3B5Cu;
    {
        const bool branch_taken_0x1c3b5c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c3b5c) {
            ctx->pc = 0x1C3B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3b48;
        }
    }
    ctx->pc = 0x1C3B64u;
    // 0x1c3b64: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1c3b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1c3b68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c3b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3b6c: 0x24a53998  addiu       $a1, $a1, 0x3998
    ctx->pc = 0x1c3b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14744));
    // 0x1c3b70: 0xc06bc60  jal         func_1AF180
    ctx->pc = 0x1C3B70u;
    SET_GPR_U32(ctx, 31, 0x1C3B78u);
    ctx->pc = 0x1C3B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B70u;
    // 0x1c3b74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF180u, 0x1C3B70u, 0x1C3B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B78u;
label_1c3b78:
    // 0x1c3b78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c3b78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b7c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1c3b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c3b80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3b84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c3b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3b88: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1c3b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x1c3b8c: 0xc06c01e  jal         func_1B0078
    ctx->pc = 0x1C3B8Cu;
    SET_GPR_U32(ctx, 31, 0x1C3B94u);
    ctx->pc = 0x1C3B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B8Cu;
    // 0x1c3b90: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0078u, 0x1C3B8Cu, 0x1C3B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B94u;
label_1c3b94:
    // 0x1c3b94: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C3B94u;
    SET_GPR_U32(ctx, 31, 0x1C3B9Cu);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C3B94u, 0x1C3B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B9Cu;
label_1c3b9c:
    // 0x1c3b9c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1c3b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1c3ba0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c3ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3ba4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c3ba8: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x1c3ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x1c3bac: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1c3bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1c3bb0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c3bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3bb4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1c3bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1c3bb8: 0x34a5b020  ori         $a1, $a1, 0xB020
    ctx->pc = 0x1c3bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45088);
    // 0x1c3bbc: 0x3403ffc0  ori         $v1, $zero, 0xFFC0
    ctx->pc = 0x1c3bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1c3bc0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c3bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3bc4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1c3bc4u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3));
    // 0x1c3bc8: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x1c3bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x1c3bcc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1c3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3bd0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1c3bd0u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 3));
    // 0x1c3bd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3BD4u;
    {
        const bool branch_taken_0x1c3bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BD4u;
        // 0x1c3bd8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bd4) {
            ctx->pc = 0x1C3BE8u;
            return;
        }
    }
    ctx->pc = 0x1C3BDCu;
    // 0x1c3bdc: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1C3BDCu;
    SET_GPR_U32(ctx, 31, 0x1C3BE4u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1C3BDCu, 0x1C3BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BE4u;
label_1c3be4:
    // 0x1c3be4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c3be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x1c3be8u;
}
