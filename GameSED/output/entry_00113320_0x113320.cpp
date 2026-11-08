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

// Function: entry_00113320
// Address: 0x113320 - 0x113358
void entry_00113320_0x113320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113320_0x113320");
#endif

    switch (ctx->pc) {
        case 0x113350u: goto label_113350;
        default: break;
    }

    ctx->pc = 0x113320u;

    // 0x113320: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x113320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x113324: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x113324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x113328: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x113328u;
    {
        const bool branch_taken_0x113328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113328u;
        // 0x11332c: 0x263433f0  addiu       $s4, $s1, 0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 13296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113328) {
            ctx->pc = 0x113358u;
            return;
        }
    }
    ctx->pc = 0x113330u;
    // 0x113330: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x113330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x113334: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x113334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113338: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x113338u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x11333c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x11333cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x113340: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x113340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x113344: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x113344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x113348: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x113348u;
    SET_GPR_U32(ctx, 31, 0x113350u);
    ctx->pc = 0x11334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113348u;
    // 0x11334c: 0x24840108  addiu       $a0, $a0, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x113348u, 0x113350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113350u;
label_113350:
    // 0x113350: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x113350u;
    {
        const bool branch_taken_0x113350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113350u;
        // 0x113354: 0x263233f0  addiu       $s2, $s1, 0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 13296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113350) {
            ctx->pc = 0x113394u;
            return;
        }
    }
    ctx->pc = 0x113358u;
}
