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

// Function: entry_001d4c10
// Address: 0x1d4c10 - 0x1d4c48
void entry_001d4c10_0x1d4c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4c10_0x1d4c10");
#endif

    switch (ctx->pc) {
        case 0x1d4c30u: goto label_1d4c30;
        default: break;
    }

    ctx->pc = 0x1d4c10u;

label_1d4c10:
    // 0x1d4c10: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x1d4c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1d4c14:
    // 0x1d4c14: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_1d4c18:
    if (ctx->pc == 0x1D4C18u) {
        ctx->pc = 0x1D4C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C14u;
        // 0x1d4c18: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C1Cu;
        goto label_1d4c1c;
    }
    ctx->pc = 0x1D4C14u;
    {
        const bool branch_taken_0x1d4c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c14) {
            ctx->pc = 0x1D4C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4C14u;
            // 0x1d4c18: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4C48u;
            return;
        }
    }
    ctx->pc = 0x1D4C1Cu;
label_1d4c1c:
    // 0x1d4c1c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d4c20:
    // 0x1d4c20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d4c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c24:
    // 0x1d4c24: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1d4c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1d4c28:
    // 0x1d4c28: 0x40f809  jalr        $v0
label_1d4c2c:
    if (ctx->pc == 0x1D4C2Cu) {
        ctx->pc = 0x1D4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C28u;
        // 0x1d4c2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C30u;
        goto label_1d4c30;
    }
    ctx->pc = 0x1D4C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4C30u);
        ctx->pc = 0x1D4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C28u;
        // 0x1d4c2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4C28u, 0x1D4C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4C30u;
label_1d4c30:
    // 0x1d4c30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d4c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c34:
    // 0x1d4c34: 0x5e00000e  bgtzl       $s0, . + 4 + (0xE << 2)
label_1d4c38:
    if (ctx->pc == 0x1D4C38u) {
        ctx->pc = 0x1D4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C34u;
        // 0x1d4c38: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C3Cu;
        goto label_1d4c3c;
    }
    ctx->pc = 0x1D4C34u;
    {
        const bool branch_taken_0x1d4c34 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1d4c34) {
            ctx->pc = 0x1D4C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4C34u;
            // 0x1d4c38: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4C70u;
            return;
        }
    }
    ctx->pc = 0x1D4C3Cu;
label_1d4c3c:
    // 0x1d4c3c: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1d4c40:
    if (ctx->pc == 0x1D4C40u) {
        ctx->pc = 0x1D4C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C3Cu;
        // 0x1d4c40: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C44u;
        goto label_1d4c44;
    }
    ctx->pc = 0x1D4C3Cu;
    {
        const bool branch_taken_0x1d4c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C3Cu;
        // 0x1d4c40: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c3c) {
            ctx->pc = 0x1D4DF8u;
            return;
        }
    }
    ctx->pc = 0x1D4C44u;
label_1d4c44:
    // 0x1d4c44: 0x0  nop
    ctx->pc = 0x1d4c44u;
    // NOP
    ctx->pc = 0x1d4c48u;
}
