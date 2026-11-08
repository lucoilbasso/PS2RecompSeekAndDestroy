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

// Function: entry_001c2488
// Address: 0x1c2488 - 0x1c24c8
void entry_001c2488_0x1c2488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2488_0x1c2488");
#endif

    switch (ctx->pc) {
        case 0x1c2490u: goto label_1c2490;
        case 0x1c249cu: goto label_1c249c;
        case 0x1c24b8u: goto label_1c24b8;
        case 0x1c24c0u: goto label_1c24c0;
        default: break;
    }

    ctx->pc = 0x1c2488u;

label_1c2488:
    // 0x1c2488: 0xc0707ba  jal         func_1C1EE8
label_1c248c:
    if (ctx->pc == 0x1C248Cu) {
        ctx->pc = 0x1C2490u;
        goto label_1c2490;
    }
    ctx->pc = 0x1C2488u;
    SET_GPR_U32(ctx, 31, 0x1C2490u);
    ctx->pc = 0x1C1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EE8u, 0x1C2488u, 0x1C2490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2490u;
label_1c2490:
    // 0x1c2490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c2494:
    // 0x1c2494: 0xc0707f6  jal         func_1C1FD8
label_1c2498:
    if (ctx->pc == 0x1C2498u) {
        ctx->pc = 0x1C2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2494u;
        // 0x1c2498: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C249Cu;
        goto label_1c249c;
    }
    ctx->pc = 0x1C2494u;
    SET_GPR_U32(ctx, 31, 0x1C249Cu);
    ctx->pc = 0x1C2498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2494u;
    // 0x1c2498: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2494u, 0x1C249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C249Cu;
label_1c249c:
    // 0x1c249c: 0x242182b  sltu        $v1, $s2, $v0
    ctx->pc = 0x1c249cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c24a0:
    // 0x1c24a0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1c24a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1c24a4:
    // 0x1c24a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c24a8:
    // 0x1c24a8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1c24a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1c24ac:
    // 0x1c24ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c24acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c24b0:
    // 0x1c24b0: 0x40f809  jalr        $v0
label_1c24b4:
    if (ctx->pc == 0x1C24B4u) {
        ctx->pc = 0x1C24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24B0u;
        // 0x1c24b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24B8u;
        goto label_1c24b8;
    }
    ctx->pc = 0x1C24B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C24B8u);
        ctx->pc = 0x1C24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24B0u;
        // 0x1c24b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C24B0u, 0x1C24B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C24B8u;
label_1c24b8:
    // 0x1c24b8: 0xc07084a  jal         func_1C2128
label_1c24bc:
    if (ctx->pc == 0x1C24BCu) {
        ctx->pc = 0x1C24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24B8u;
        // 0x1c24bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24C0u;
        goto label_1c24c0;
    }
    ctx->pc = 0x1C24B8u;
    SET_GPR_U32(ctx, 31, 0x1C24C0u);
    ctx->pc = 0x1C24BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24B8u;
    // 0x1c24bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2128u, 0x1C24B8u, 0x1C24C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24C0u;
label_1c24c0:
    // 0x1c24c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c24c4:
    if (ctx->pc == 0x1C24C4u) {
        ctx->pc = 0x1C24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24C0u;
        // 0x1c24c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24C8u;
        goto label_fallthrough_0x1c24c0;
    }
    ctx->pc = 0x1C24C0u;
    {
        const bool branch_taken_0x1c24c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24C0u;
        // 0x1c24c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24c0) {
            ctx->pc = 0x1C24DCu;
            return;
        }
    }
label_fallthrough_0x1c24c0:
    ctx->pc = 0x1C24C8u;
}
