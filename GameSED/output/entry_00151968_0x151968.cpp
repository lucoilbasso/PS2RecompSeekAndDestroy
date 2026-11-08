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

// Function: entry_00151968
// Address: 0x151968 - 0x1519b4
void entry_00151968_0x151968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151968_0x151968");
#endif

    switch (ctx->pc) {
        case 0x151990u: goto label_151990;
        default: break;
    }

    ctx->pc = 0x151968u;

label_151968:
    // 0x151968: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_15196c:
    if (ctx->pc == 0x15196Cu) {
        ctx->pc = 0x15196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151968u;
        // 0x15196c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151970u;
        goto label_151970;
    }
    ctx->pc = 0x151968u;
    {
        const bool branch_taken_0x151968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151968u;
        // 0x15196c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151968) {
            ctx->pc = 0x1519B4u;
            return;
        }
    }
    ctx->pc = 0x151970u;
label_151970:
    // 0x151970: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x151970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_151974:
    // 0x151974: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x151974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_151978:
    // 0x151978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x151978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15197c:
    // 0x15197c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x15197cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_151980:
    // 0x151980: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x151980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_151984:
    // 0x151984: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x151984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_151988:
    // 0x151988: 0x40f809  jalr        $v0
label_15198c:
    if (ctx->pc == 0x15198Cu) {
        ctx->pc = 0x15198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151988u;
        // 0x15198c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151990u;
        goto label_151990;
    }
    ctx->pc = 0x151988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x151990u);
        ctx->pc = 0x15198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151988u;
        // 0x15198c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151988u, 0x151990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151990u;
label_151990:
    // 0x151990: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x151990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_151994:
    // 0x151994: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x151994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151998:
    // 0x151998: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x151998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_15199c:
    // 0x15199c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x15199cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1519a0:
    // 0x1519a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1519a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1519a4:
    // 0x1519a4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1519a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1519a8:
    // 0x1519a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1519a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1519ac:
    // 0x1519ac: 0x40f809  jalr        $v0
label_1519b0:
    if (ctx->pc == 0x1519B0u) {
        ctx->pc = 0x1519B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519ACu;
        // 0x1519b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1519B4u;
        goto label_fallthrough_0x1519ac;
    }
    ctx->pc = 0x1519ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1519B4u);
        ctx->pc = 0x1519B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519ACu;
        // 0x1519b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1519ACu, 0x1519B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1519ac:
    ctx->pc = 0x1519B4u;
}
