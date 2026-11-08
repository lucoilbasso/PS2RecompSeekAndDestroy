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

// Function: entry_00131890
// Address: 0x131890 - 0x1318c0
void entry_00131890_0x131890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131890_0x131890");
#endif

    switch (ctx->pc) {
        case 0x1318a8u: goto label_1318a8;
        default: break;
    }

    ctx->pc = 0x131890u;

    // 0x131890: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x131890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x131894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131898: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x131898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13189c: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x13189cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x1318a0: 0xc04bfd4  jal         func_12FF50
    ctx->pc = 0x1318A0u;
    SET_GPR_U32(ctx, 31, 0x1318A8u);
    ctx->pc = 0x1318A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1318A0u;
    // 0x1318a4: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FF50u, 0x1318A0u, 0x1318A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1318A8u;
label_1318a8:
    // 0x1318a8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1318A8u;
    {
        const bool branch_taken_0x1318a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1318ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318A8u;
        // 0x1318ac: 0x8fa70024  lw          $a3, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1318a8) {
            ctx->pc = 0x1318C0u;
            return;
        }
    }
    ctx->pc = 0x1318B0u;
    // 0x1318b0: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x1318b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1318b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1318b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1318b8: 0xc04c17e  jal         func_1305F8
    ctx->pc = 0x1318B8u;
    SET_GPR_U32(ctx, 31, 0x1318C0u);
    ctx->pc = 0x1318BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1318B8u;
    // 0x1318bc: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305F8u, 0x1318B8u, 0x1318C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1318C0u;
}
