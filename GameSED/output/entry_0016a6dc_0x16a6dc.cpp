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

// Function: entry_0016a6dc
// Address: 0x16a6dc - 0x16a720
void entry_0016a6dc_0x16a6dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a6dc_0x16a6dc");
#endif

    switch (ctx->pc) {
        case 0x16a708u: goto label_16a708;
        case 0x16a718u: goto label_16a718;
        default: break;
    }

    ctx->pc = 0x16a6dcu;

label_16a6dc:
    // 0x16a6dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16a6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16a6e0:
    // 0x16a6e0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_16a6e4:
    if (ctx->pc == 0x16A6E4u) {
        ctx->pc = 0x16A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6E0u;
        // 0x16a6e4: 0x8e250c10  lw          $a1, 0xC10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A6E8u;
        goto label_16a6e8;
    }
    ctx->pc = 0x16A6E0u;
    {
        const bool branch_taken_0x16a6e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a6e0) {
            ctx->pc = 0x16A6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A6E0u;
            // 0x16a6e4: 0x8e250c10  lw          $a1, 0xC10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A720u;
            return;
        }
    }
    ctx->pc = 0x16A6E8u;
label_16a6e8:
    // 0x16a6e8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x16a6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16a6ec:
    // 0x16a6ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a6f0:
    // 0x16a6f0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16a6f4:
    // 0x16a6f4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x16a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16a6f8:
    // 0x16a6f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16a6f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16a6fc:
    // 0x16a6fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16a700:
    // 0x16a700: 0x60f809  jalr        $v1
label_16a704:
    if (ctx->pc == 0x16A704u) {
        ctx->pc = 0x16A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A700u;
        // 0x16a704: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A708u;
        goto label_16a708;
    }
    ctx->pc = 0x16A700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16A708u);
        ctx->pc = 0x16A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A700u;
        // 0x16a704: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A700u, 0x16A708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A708u;
label_16a708:
    // 0x16a708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a70c:
    // 0x16a70c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a710:
    // 0x16a710: 0xc05a900  jal         func_16A400
label_16a714:
    if (ctx->pc == 0x16A714u) {
        ctx->pc = 0x16A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A710u;
        // 0x16a714: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A718u;
        goto label_16a718;
    }
    ctx->pc = 0x16A710u;
    SET_GPR_U32(ctx, 31, 0x16A718u);
    ctx->pc = 0x16A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A710u;
    // 0x16a714: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A400u, 0x16A710u, 0x16A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A718u;
label_16a718:
    // 0x16a718: 0x10000041  b           . + 4 + (0x41 << 2)
label_16a71c:
    if (ctx->pc == 0x16A71Cu) {
        ctx->pc = 0x16A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A718u;
        // 0x16a71c: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A720u;
        goto label_fallthrough_0x16a718;
    }
    ctx->pc = 0x16A718u;
    {
        const bool branch_taken_0x16a718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A718u;
        // 0x16a71c: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a718) {
            ctx->pc = 0x16A820u;
            return;
        }
    }
label_fallthrough_0x16a718:
    ctx->pc = 0x16A720u;
}
