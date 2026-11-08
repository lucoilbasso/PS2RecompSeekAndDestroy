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

// Function: entry_0016e054
// Address: 0x16e054 - 0x16e080
void entry_0016e054_0x16e054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e054_0x16e054");
#endif

    ctx->pc = 0x16e054u;

    // 0x16e054: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x16E054u;
    {
        const bool branch_taken_0x16e054 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E054u;
        // 0x16e058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e054) {
            ctx->pc = 0x16E0F4u;
            return;
        }
    }
    ctx->pc = 0x16E05Cu;
    // 0x16e05c: 0x8e4202bc  lw          $v0, 0x2BC($s2)
    ctx->pc = 0x16e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 700)));
    // 0x16e060: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x16e060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e064: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x16e064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x16e068: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x16e068u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x16e06c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16e06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16e070: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E070u;
    {
        const bool branch_taken_0x16e070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e070) {
            ctx->pc = 0x16E080u;
            return;
        }
    }
    ctx->pc = 0x16E078u;
    // 0x16e078: 0xc061920  jal         func_186480
    ctx->pc = 0x16E078u;
    SET_GPR_U32(ctx, 31, 0x16E080u);
    ctx->pc = 0x16E07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E078u;
    // 0x16e07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16E078u, 0x16E080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E080u;
}
