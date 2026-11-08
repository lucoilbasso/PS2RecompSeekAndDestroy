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

// Function: entry_00107bc0
// Address: 0x107bc0 - 0x107bd8
void entry_00107bc0_0x107bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107bc0_0x107bc0");
#endif

    ctx->pc = 0x107bc0u;

    // 0x107bc0: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x107bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x107bc4: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x107bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x107bc8: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x107BC8u;
    {
        const bool branch_taken_0x107bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BC8u;
        // 0x107bcc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bc8) {
            ctx->pc = 0x107B88u;
            return;
        }
    }
    ctx->pc = 0x107BD0u;
    // 0x107bd0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x107BD0u;
    {
        const bool branch_taken_0x107bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BD0u;
        // 0x107bd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bd0) {
            ctx->pc = 0x107C10u;
            return;
        }
    }
    ctx->pc = 0x107BD8u;
}
