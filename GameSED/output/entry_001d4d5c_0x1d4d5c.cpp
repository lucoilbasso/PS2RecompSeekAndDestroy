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

// Function: entry_001d4d5c
// Address: 0x1d4d5c - 0x1d4d90
void entry_001d4d5c_0x1d4d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4d5c_0x1d4d5c");
#endif

    switch (ctx->pc) {
        case 0x1d4d7cu: goto label_1d4d7c;
        default: break;
    }

    ctx->pc = 0x1d4d5cu;

label_1d4d5c:
    // 0x1d4d5c: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1d4d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1d4d60:
    // 0x1d4d60: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1d4d64:
    if (ctx->pc == 0x1D4D64u) {
        ctx->pc = 0x1D4D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D60u;
        // 0x1d4d64: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D68u;
        goto label_1d4d68;
    }
    ctx->pc = 0x1D4D60u;
    {
        const bool branch_taken_0x1d4d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4d60) {
            ctx->pc = 0x1D4D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4D60u;
            // 0x1d4d64: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4D90u;
            return;
        }
    }
    ctx->pc = 0x1D4D68u;
label_1d4d68:
    // 0x1d4d68: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d4d6c:
    // 0x1d4d6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d4d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d70:
    // 0x1d4d70: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1d4d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1d4d74:
    // 0x1d4d74: 0x40f809  jalr        $v0
label_1d4d78:
    if (ctx->pc == 0x1D4D78u) {
        ctx->pc = 0x1D4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D74u;
        // 0x1d4d78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D7Cu;
        goto label_1d4d7c;
    }
    ctx->pc = 0x1D4D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4D7Cu);
        ctx->pc = 0x1D4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D74u;
        // 0x1d4d78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4D74u, 0x1D4D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4D7Cu;
label_1d4d7c:
    // 0x1d4d7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d4d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d80:
    // 0x1d4d80: 0x1e00000e  bgtz        $s0, . + 4 + (0xE << 2)
label_1d4d84:
    if (ctx->pc == 0x1D4D84u) {
        ctx->pc = 0x1D4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D80u;
        // 0x1d4d84: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D88u;
        goto label_1d4d88;
    }
    ctx->pc = 0x1D4D80u;
    {
        const bool branch_taken_0x1d4d80 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1D4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D80u;
        // 0x1d4d84: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d80) {
            ctx->pc = 0x1D4DBCu;
            return;
        }
    }
    ctx->pc = 0x1D4D88u;
label_1d4d88:
    // 0x1d4d88: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1d4d8c:
    if (ctx->pc == 0x1D4D8Cu) {
        ctx->pc = 0x1D4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D88u;
        // 0x1d4d8c: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D90u;
        goto label_fallthrough_0x1d4d88;
    }
    ctx->pc = 0x1D4D88u;
    {
        const bool branch_taken_0x1d4d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D88u;
        // 0x1d4d8c: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d88) {
            ctx->pc = 0x1D4DF8u;
            return;
        }
    }
label_fallthrough_0x1d4d88:
    ctx->pc = 0x1D4D90u;
}
