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

// Function: entry_001c8058
// Address: 0x1c8058 - 0x1c8078
void entry_001c8058_0x1c8058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8058_0x1c8058");
#endif

    ctx->pc = 0x1c8058u;

    // 0x1c8058: 0x286207ff  slti        $v0, $v1, 0x7FF
    ctx->pc = 0x1c8058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x1c805c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C805Cu;
    {
        const bool branch_taken_0x1c805c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C805Cu;
        // 0x1c8060: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c805c) {
            ctx->pc = 0x1C8078u;
            return;
        }
    }
    ctx->pc = 0x1C8064u;
    // 0x1c8064: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c8064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8068: 0xdc50bbd8  ld          $s0, -0x4428($v0)
    ctx->pc = 0x1c8068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294949848)));
    // 0x1c806c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1C806Cu;
    {
        const bool branch_taken_0x1c806c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c806c) {
            ctx->pc = 0x1C80F0u;
            return;
        }
    }
    ctx->pc = 0x1C8074u;
    // 0x1c8074: 0x0  nop
    ctx->pc = 0x1c8074u;
    // NOP
    ctx->pc = 0x1c8078u;
}
