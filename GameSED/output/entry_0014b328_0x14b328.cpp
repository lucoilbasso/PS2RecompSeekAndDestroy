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

// Function: entry_0014b328
// Address: 0x14b328 - 0x14b378
void entry_0014b328_0x14b328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b328_0x14b328");
#endif

    switch (ctx->pc) {
        case 0x14b330u: goto label_14b330;
        case 0x14b33cu: goto label_14b33c;
        case 0x14b348u: goto label_14b348;
        case 0x14b354u: goto label_14b354;
        case 0x14b370u: goto label_14b370;
        default: break;
    }

    ctx->pc = 0x14b328u;

    // 0x14b328: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x14B328u;
    SET_GPR_U32(ctx, 31, 0x14B330u);
    ctx->pc = 0x14B32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B328u;
    // 0x14b32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x14B328u, 0x14B330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B330u;
label_14b330:
    // 0x14b330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b334: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x14B334u;
    SET_GPR_U32(ctx, 31, 0x14B33Cu);
    ctx->pc = 0x14B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B334u;
    // 0x14b338: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x14B334u, 0x14B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B33Cu;
label_14b33c:
    // 0x14b33c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b340: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x14B340u;
    SET_GPR_U32(ctx, 31, 0x14B348u);
    ctx->pc = 0x14B344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B340u;
    // 0x14b344: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x14B340u, 0x14B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B348u;
label_14b348:
    // 0x14b348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b34c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x14B34Cu;
    SET_GPR_U32(ctx, 31, 0x14B354u);
    ctx->pc = 0x14B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B34Cu;
    // 0x14b350: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x14B34Cu, 0x14B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B354u;
label_14b354:
    // 0x14b354: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x14b354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x14b358: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x14b358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x14b35c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b360: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B360u;
    {
        const bool branch_taken_0x14b360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B360u;
        // 0x14b364: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b360) {
            ctx->pc = 0x14B378u;
            return;
        }
    }
    ctx->pc = 0x14B368u;
    // 0x14b368: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14B368u;
    SET_GPR_U32(ctx, 31, 0x14B370u);
    ctx->pc = 0x14B36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B368u;
    // 0x14b36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14B368u, 0x14B370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B370u;
label_14b370:
    // 0x14b370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14B370u;
    {
        const bool branch_taken_0x14b370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B370u;
        // 0x14b374: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b370) {
            ctx->pc = 0x14B37Cu;
            return;
        }
    }
    ctx->pc = 0x14B378u;
}
