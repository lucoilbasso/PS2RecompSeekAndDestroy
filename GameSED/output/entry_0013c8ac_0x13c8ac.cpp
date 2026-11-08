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

// Function: entry_0013c8ac
// Address: 0x13c8ac - 0x13c8e0
void entry_0013c8ac_0x13c8ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c8ac_0x13c8ac");
#endif

    switch (ctx->pc) {
        case 0x13c8b4u: goto label_13c8b4;
        default: break;
    }

    ctx->pc = 0x13c8acu;

label_13c8ac:
    // 0x13c8ac: 0xc062086  jal         func_188218
label_13c8b0:
    if (ctx->pc == 0x13C8B0u) {
        ctx->pc = 0x13C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8ACu;
        // 0x13c8b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8B4u;
        goto label_13c8b4;
    }
    ctx->pc = 0x13C8ACu;
    SET_GPR_U32(ctx, 31, 0x13C8B4u);
    ctx->pc = 0x13C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C8ACu;
    // 0x13c8b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188218u, 0x13C8ACu, 0x13C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8B4u;
label_13c8b4:
    // 0x13c8b4: 0x1680000a  bnez        $s4, . + 4 + (0xA << 2)
label_13c8b8:
    if (ctx->pc == 0x13C8B8u) {
        ctx->pc = 0x13C8BCu;
        goto label_13c8bc;
    }
    ctx->pc = 0x13C8B4u;
    {
        const bool branch_taken_0x13c8b4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c8b4) {
            ctx->pc = 0x13C8E0u;
            return;
        }
    }
    ctx->pc = 0x13C8BCu;
label_13c8bc:
    // 0x13c8bc: 0x8e6602f8  lw          $a2, 0x2F8($s3)
    ctx->pc = 0x13c8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 760)));
label_13c8c0:
    // 0x13c8c0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_13c8c4:
    if (ctx->pc == 0x13C8C4u) {
        ctx->pc = 0x13C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8C0u;
        // 0x13c8c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8C8u;
        goto label_13c8c8;
    }
    ctx->pc = 0x13C8C0u;
    {
        const bool branch_taken_0x13c8c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8C0u;
        // 0x13c8c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c8c0) {
            ctx->pc = 0x13C8E0u;
            return;
        }
    }
    ctx->pc = 0x13C8C8u;
label_13c8c8:
    // 0x13c8c8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13c8cc:
    // 0x13c8cc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13c8d0:
    // 0x13c8d0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13c8d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13c8d4:
    // 0x13c8d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13c8d8:
    // 0x13c8d8: 0x60f809  jalr        $v1
label_13c8dc:
    if (ctx->pc == 0x13C8DCu) {
        ctx->pc = 0x13C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8D8u;
        // 0x13c8dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8E0u;
        goto label_fallthrough_0x13c8d8;
    }
    ctx->pc = 0x13C8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13C8E0u);
        ctx->pc = 0x13C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8D8u;
        // 0x13c8dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C8D8u, 0x13C8E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13c8d8:
    ctx->pc = 0x13C8E0u;
}
