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

// Function: entry_001a2cec
// Address: 0x1a2cec - 0x1a2d38
void entry_001a2cec_0x1a2cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2cec_0x1a2cec");
#endif

    switch (ctx->pc) {
        case 0x1a2d08u: goto label_1a2d08;
        case 0x1a2d2cu: goto label_1a2d2c;
        default: break;
    }

    ctx->pc = 0x1a2cecu;

label_1a2cec:
    // 0x1a2cec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2cecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2cf0:
    // 0x1a2cf0: 0x4c20021  bltzl       $a2, . + 4 + (0x21 << 2)
label_1a2cf4:
    if (ctx->pc == 0x1A2CF4u) {
        ctx->pc = 0x1A2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CF0u;
        // 0x1a2cf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CF8u;
        goto label_1a2cf8;
    }
    ctx->pc = 0x1A2CF0u;
    {
        const bool branch_taken_0x1a2cf0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1a2cf0) {
            ctx->pc = 0x1A2CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2CF0u;
            // 0x1a2cf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2D78u;
            return;
        }
    }
    ctx->pc = 0x1A2CF8u;
label_1a2cf8:
    // 0x1a2cf8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_1a2cfc:
    if (ctx->pc == 0x1A2CFCu) {
        ctx->pc = 0x1A2D00u;
        goto label_1a2d00;
    }
    ctx->pc = 0x1A2CF8u;
    {
        const bool branch_taken_0x1a2cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2cf8) {
            ctx->pc = 0x1A2D68u;
            return;
        }
    }
    ctx->pc = 0x1A2D00u;
label_1a2d00:
    // 0x1a2d00: 0xc06a67a  jal         func_1A99E8
label_1a2d04:
    if (ctx->pc == 0x1A2D04u) {
        ctx->pc = 0x1A2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D00u;
        // 0x1a2d04: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D08u;
        goto label_1a2d08;
    }
    ctx->pc = 0x1A2D00u;
    SET_GPR_U32(ctx, 31, 0x1A2D08u);
    ctx->pc = 0x1A2D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2D00u;
    // 0x1a2d04: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A99E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A99E8u, 0x1A2D00u, 0x1A2D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D08u;
label_1a2d08:
    // 0x1a2d08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a2d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a2d0c:
    // 0x1a2d0c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1a2d10:
    if (ctx->pc == 0x1A2D10u) {
        ctx->pc = 0x1A2D14u;
        goto label_1a2d14;
    }
    ctx->pc = 0x1A2D0Cu;
    {
        const bool branch_taken_0x1a2d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d0c) {
            ctx->pc = 0x1A2D70u;
            return;
        }
    }
    ctx->pc = 0x1A2D14u;
label_1a2d14:
    // 0x1a2d14: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a2d18:
    // 0x1a2d18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a2d1c:
    if (ctx->pc == 0x1A2D1Cu) {
        ctx->pc = 0x1A2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D18u;
        // 0x1a2d1c: 0x26260100  addiu       $a2, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D20u;
        goto label_1a2d20;
    }
    ctx->pc = 0x1A2D18u;
    {
        const bool branch_taken_0x1a2d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D18u;
        // 0x1a2d1c: 0x26260100  addiu       $a2, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d18) {
            ctx->pc = 0x1A2D38u;
            return;
        }
    }
    ctx->pc = 0x1A2D20u;
label_1a2d20:
    // 0x1a2d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2d24:
    // 0x1a2d24: 0x40f809  jalr        $v0
label_1a2d28:
    if (ctx->pc == 0x1A2D28u) {
        ctx->pc = 0x1A2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D24u;
        // 0x1a2d28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D2Cu;
        goto label_1a2d2c;
    }
    ctx->pc = 0x1A2D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2D2Cu);
        ctx->pc = 0x1A2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D24u;
        // 0x1a2d28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D24u, 0x1A2D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2D2Cu;
label_1a2d2c:
    // 0x1a2d2c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a2d30:
    if (ctx->pc == 0x1A2D30u) {
        ctx->pc = 0x1A2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D2Cu;
        // 0x1a2d30: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D34u;
        goto label_1a2d34;
    }
    ctx->pc = 0x1A2D2Cu;
    {
        const bool branch_taken_0x1a2d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D2Cu;
        // 0x1a2d30: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d2c) {
            ctx->pc = 0x1A2D50u;
            return;
        }
    }
    ctx->pc = 0x1A2D34u;
label_1a2d34:
    // 0x1a2d34: 0x0  nop
    ctx->pc = 0x1a2d34u;
    // NOP
    ctx->pc = 0x1a2d38u;
}
