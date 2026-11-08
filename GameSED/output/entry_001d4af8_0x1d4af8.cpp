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

// Function: entry_001d4af8
// Address: 0x1d4af8 - 0x1d4b40
void entry_001d4af8_0x1d4af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4af8_0x1d4af8");
#endif

    switch (ctx->pc) {
        case 0x1d4b10u: goto label_1d4b10;
        default: break;
    }

    ctx->pc = 0x1d4af8u;

label_1d4af8:
    // 0x1d4af8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d4af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d4afc:
    // 0x1d4afc: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1d4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1d4b00:
    // 0x1d4b00: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1d4b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b04:
    // 0x1d4b04: 0x243300b  movn        $a2, $s2, $v1
    ctx->pc = 0x1d4b04u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
label_1d4b08:
    // 0x1d4b08: 0x40f809  jalr        $v0
label_1d4b0c:
    if (ctx->pc == 0x1D4B0Cu) {
        ctx->pc = 0x1D4B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B08u;
        // 0x1d4b0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B10u;
        goto label_1d4b10;
    }
    ctx->pc = 0x1D4B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4B10u);
        ctx->pc = 0x1D4B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B08u;
        // 0x1d4b0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4B08u, 0x1D4B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4B10u;
label_1d4b10:
    // 0x1d4b10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d4b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b14:
    // 0x1d4b14: 0x5a0000b8  blezl       $s0, . + 4 + (0xB8 << 2)
label_1d4b18:
    if (ctx->pc == 0x1D4B18u) {
        ctx->pc = 0x1D4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B14u;
        // 0x1d4b18: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B1Cu;
        goto label_1d4b1c;
    }
    ctx->pc = 0x1D4B14u;
    {
        const bool branch_taken_0x1d4b14 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1d4b14) {
            ctx->pc = 0x1D4B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4B14u;
            // 0x1d4b18: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4DF8u;
            return;
        }
    }
    ctx->pc = 0x1D4B1Cu;
label_1d4b1c:
    // 0x1d4b1c: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1d4b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1d4b20:
    // 0x1d4b20: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x1d4b20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1d4b24:
    // 0x1d4b24: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1d4b24u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1d4b28:
    // 0x1d4b28: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d4b2c:
    // 0x1d4b2c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_1d4b30:
    if (ctx->pc == 0x1D4B30u) {
        ctx->pc = 0x1D4B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B2Cu;
        // 0x1d4b30: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B34u;
        goto label_1d4b34;
    }
    ctx->pc = 0x1D4B2Cu;
    {
        const bool branch_taken_0x1d4b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B2Cu;
        // 0x1d4b30: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b2c) {
            ctx->pc = 0x1D4AD0u;
            return;
        }
    }
    ctx->pc = 0x1D4B34u;
label_1d4b34:
    // 0x1d4b34: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_1d4b38:
    if (ctx->pc == 0x1D4B38u) {
        ctx->pc = 0x1D4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B34u;
        // 0x1d4b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B3Cu;
        goto label_1d4b3c;
    }
    ctx->pc = 0x1D4B34u;
    {
        const bool branch_taken_0x1d4b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B34u;
        // 0x1d4b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b34) {
            ctx->pc = 0x1D4E04u;
            return;
        }
    }
    ctx->pc = 0x1D4B3Cu;
label_1d4b3c:
    // 0x1d4b3c: 0x0  nop
    ctx->pc = 0x1d4b3cu;
    // NOP
    ctx->pc = 0x1d4b40u;
}
