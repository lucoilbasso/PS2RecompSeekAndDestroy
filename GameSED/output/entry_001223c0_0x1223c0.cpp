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

// Function: entry_001223c0
// Address: 0x1223c0 - 0x1223f8
void entry_001223c0_0x1223c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001223c0_0x1223c0");
#endif

    switch (ctx->pc) {
        case 0x1223ccu: goto label_1223cc;
        case 0x1223ecu: goto label_1223ec;
        default: break;
    }

    ctx->pc = 0x1223c0u;

label_1223c0:
    // 0x1223c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1223c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1223c4:
    // 0x1223c4: 0xc04885a  jal         func_122168
label_1223c8:
    if (ctx->pc == 0x1223C8u) {
        ctx->pc = 0x1223C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223C4u;
        // 0x1223c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223CCu;
        goto label_1223cc;
    }
    ctx->pc = 0x1223C4u;
    SET_GPR_U32(ctx, 31, 0x1223CCu);
    ctx->pc = 0x1223C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223C4u;
    // 0x1223c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122168u, 0x1223C4u, 0x1223CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223CCu;
label_1223cc:
    // 0x1223cc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1223d0:
    if (ctx->pc == 0x1223D0u) {
        ctx->pc = 0x1223D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223CCu;
        // 0x1223d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223D4u;
        goto label_1223d4;
    }
    ctx->pc = 0x1223CCu;
    {
        const bool branch_taken_0x1223cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1223cc) {
            ctx->pc = 0x1223D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1223CCu;
            // 0x1223d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1223F8u;
            return;
        }
    }
    ctx->pc = 0x1223D4u;
label_1223d4:
    // 0x1223d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1223d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1223d8:
    // 0x1223d8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1223d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1223dc:
    // 0x1223dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1223dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1223e0:
    // 0x1223e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1223e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1223e4:
    // 0x1223e4: 0x60f809  jalr        $v1
label_1223e8:
    if (ctx->pc == 0x1223E8u) {
        ctx->pc = 0x1223E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223E4u;
        // 0x1223e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223ECu;
        goto label_1223ec;
    }
    ctx->pc = 0x1223E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1223ECu);
        ctx->pc = 0x1223E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223E4u;
        // 0x1223e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1223E4u, 0x1223ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1223ECu;
label_1223ec:
    // 0x1223ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_1223f0:
    if (ctx->pc == 0x1223F0u) {
        ctx->pc = 0x1223F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223ECu;
        // 0x1223f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223F4u;
        goto label_1223f4;
    }
    ctx->pc = 0x1223ECu;
    {
        const bool branch_taken_0x1223ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1223F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223ECu;
        // 0x1223f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1223ec) {
            ctx->pc = 0x122404u;
            return;
        }
    }
    ctx->pc = 0x1223F4u;
label_1223f4:
    // 0x1223f4: 0x0  nop
    ctx->pc = 0x1223f4u;
    // NOP
    ctx->pc = 0x1223f8u;
}
