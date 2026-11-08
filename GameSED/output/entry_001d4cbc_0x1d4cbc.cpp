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

// Function: entry_001d4cbc
// Address: 0x1d4cbc - 0x1d4ce8
void entry_001d4cbc_0x1d4cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4cbc_0x1d4cbc");
#endif

    switch (ctx->pc) {
        case 0x1d4cd4u: goto label_1d4cd4;
        default: break;
    }

    ctx->pc = 0x1d4cbcu;

    // 0x1d4cbc: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1D4CBCu;
    {
        const bool branch_taken_0x1d4cbc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4cbc) {
            ctx->pc = 0x1D4CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4CBCu;
            // 0x1d4cc0: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4CF4u;
            return;
        }
    }
    ctx->pc = 0x1D4CC4u;
    // 0x1d4cc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d4cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4cc8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d4cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d4ccc: 0xc07544f  jal         func_1D513C
    ctx->pc = 0x1D4CCCu;
    SET_GPR_U32(ctx, 31, 0x1D4CD4u);
    ctx->pc = 0x1D4CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4CCCu;
    // 0x1d4cd0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D513Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D513Cu, 0x1D4CCCu, 0x1D4CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4CD4u;
label_1d4cd4:
    // 0x1d4cd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4CD4u;
    {
        const bool branch_taken_0x1d4cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CD4u;
        // 0x1d4cd8: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cd4) {
            ctx->pc = 0x1D4CE8u;
            return;
        }
    }
    ctx->pc = 0x1D4CDCu;
    // 0x1d4cdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4CDCu;
    {
        const bool branch_taken_0x1d4cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CDCu;
        // 0x1d4ce0: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cdc) {
            ctx->pc = 0x1D4CECu;
            return;
        }
    }
    ctx->pc = 0x1D4CE4u;
    // 0x1d4ce4: 0x0  nop
    ctx->pc = 0x1d4ce4u;
    // NOP
    ctx->pc = 0x1d4ce8u;
}
