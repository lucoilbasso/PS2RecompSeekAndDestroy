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

// Function: entry_001244d0
// Address: 0x1244d0 - 0x124500
void entry_001244d0_0x1244d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001244d0_0x1244d0");
#endif

    switch (ctx->pc) {
        case 0x1244dcu: goto label_1244dc;
        default: break;
    }

    ctx->pc = 0x1244d0u;

    // 0x1244d0: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x1244d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1244d4: 0xc04844a  jal         func_121128
    ctx->pc = 0x1244D4u;
    SET_GPR_U32(ctx, 31, 0x1244DCu);
    ctx->pc = 0x1244D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1244D4u;
    // 0x1244d8: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1244D4u, 0x1244DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244DCu;
label_1244dc:
    // 0x1244dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1244dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1244e0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1244E0u;
    {
        const bool branch_taken_0x1244e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1244E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244E0u;
        // 0x1244e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244e0) {
            ctx->pc = 0x124528u;
            return;
        }
    }
    ctx->pc = 0x1244E8u;
    // 0x1244e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1244e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1244ec: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1244ECu;
    {
        const bool branch_taken_0x1244ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1244ec) {
            ctx->pc = 0x1244F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1244ECu;
            // 0x1244f0: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124500u;
            return;
        }
    }
    ctx->pc = 0x1244F4u;
    // 0x1244f4: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x1244f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x1244f8: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x1244f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x1244fc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1244fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->pc = 0x124500u;
}
