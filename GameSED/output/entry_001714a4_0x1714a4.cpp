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

// Function: entry_001714a4
// Address: 0x1714a4 - 0x1714e8
void entry_001714a4_0x1714a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001714a4_0x1714a4");
#endif

    switch (ctx->pc) {
        case 0x1714b8u: goto label_1714b8;
        case 0x1714c8u: goto label_1714c8;
        case 0x1714dcu: goto label_1714dc;
        default: break;
    }

    ctx->pc = 0x1714a4u;

    // 0x1714a4: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1714a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1714a8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1714A8u;
    {
        const bool branch_taken_0x1714a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1714ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714A8u;
        // 0x1714ac: 0x2509823  subu        $s3, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714a8) {
            ctx->pc = 0x1714E8u;
            return;
        }
    }
    ctx->pc = 0x1714B0u;
    // 0x1714b0: 0xc05c560  jal         func_171580
    ctx->pc = 0x1714B0u;
    SET_GPR_U32(ctx, 31, 0x1714B8u);
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x1714B0u, 0x1714B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714B8u;
label_1714b8:
    // 0x1714b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1714b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714bc: 0x2123023  subu        $a2, $s0, $s2
    ctx->pc = 0x1714bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1714c0: 0xc05c560  jal         func_171580
    ctx->pc = 0x1714C0u;
    SET_GPR_U32(ctx, 31, 0x1714C8u);
    ctx->pc = 0x1714C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1714C0u;
    // 0x1714c4: 0x2922821  addu        $a1, $s4, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x1714C0u, 0x1714C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714C8u;
label_1714c8:
    // 0x1714c8: 0x3d02021  addu        $a0, $fp, $s0
    ctx->pc = 0x1714c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x1714cc: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x1714ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1714d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1714d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714d4: 0xc05c560  jal         func_171580
    ctx->pc = 0x1714D4u;
    SET_GPR_U32(ctx, 31, 0x1714DCu);
    ctx->pc = 0x1714D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1714D4u;
    // 0x1714d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x1714D4u, 0x1714DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714DCu;
label_1714dc:
    // 0x1714dc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1714DCu;
    {
        const bool branch_taken_0x1714dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1714E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714DCu;
        // 0x1714e0: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714dc) {
            ctx->pc = 0x171550u;
            return;
        }
    }
    ctx->pc = 0x1714E4u;
    // 0x1714e4: 0x0  nop
    ctx->pc = 0x1714e4u;
    // NOP
    ctx->pc = 0x1714e8u;
}
