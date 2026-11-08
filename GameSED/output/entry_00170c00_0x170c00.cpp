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

// Function: entry_00170c00
// Address: 0x170c00 - 0x170c40
void entry_00170c00_0x170c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170c00_0x170c00");
#endif

    switch (ctx->pc) {
        case 0x170c14u: goto label_170c14;
        case 0x170c24u: goto label_170c24;
        case 0x170c38u: goto label_170c38;
        default: break;
    }

    ctx->pc = 0x170c00u;

    // 0x170c00: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x170c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x170c04: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x170C04u;
    {
        const bool branch_taken_0x170c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C04u;
        // 0x170c08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c04) {
            ctx->pc = 0x170C40u;
            return;
        }
    }
    ctx->pc = 0x170C0Cu;
    // 0x170c0c: 0xc074009  jal         func_1D0024
    ctx->pc = 0x170C0Cu;
    SET_GPR_U32(ctx, 31, 0x170C14u);
    ctx->pc = 0x170C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C0Cu;
    // 0x170c10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x170C0Cu, 0x170C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C14u;
label_170c14:
    // 0x170c14: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x170c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x170c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c1c: 0xc074009  jal         func_1D0024
    ctx->pc = 0x170C1Cu;
    SET_GPR_U32(ctx, 31, 0x170C24u);
    ctx->pc = 0x170C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C1Cu;
    // 0x170c20: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x170C1Cu, 0x170C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C24u;
label_170c24:
    // 0x170c24: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x170c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x170c28: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x170c28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x170c2c: 0x2b33023  subu        $a2, $s5, $s3
    ctx->pc = 0x170c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x170c30: 0xc074009  jal         func_1D0024
    ctx->pc = 0x170C30u;
    SET_GPR_U32(ctx, 31, 0x170C38u);
    ctx->pc = 0x170C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C30u;
    // 0x170c34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x170C30u, 0x170C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C38u;
label_170c38:
    // 0x170c38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x170C38u;
    {
        const bool branch_taken_0x170c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C38u;
        // 0x170c3c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c38) {
            ctx->pc = 0x170C5Cu;
            return;
        }
    }
    ctx->pc = 0x170C40u;
}
