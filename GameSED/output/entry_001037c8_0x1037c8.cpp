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

// Function: entry_001037c8
// Address: 0x1037c8 - 0x1037e8
void entry_001037c8_0x1037c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001037c8_0x1037c8");
#endif

    ctx->pc = 0x1037c8u;

    // 0x1037c8: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1037c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1037cc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1037CCu;
    {
        const bool branch_taken_0x1037cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1037D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037CCu;
        // 0x1037d0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037cc) {
            ctx->pc = 0x103834u;
            return;
        }
    }
    ctx->pc = 0x1037D4u;
    // 0x1037d4: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1037D4u;
    {
        const bool branch_taken_0x1037d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1037d4) {
            ctx->pc = 0x1037E8u;
            return;
        }
    }
    ctx->pc = 0x1037DCu;
    // 0x1037dc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1037dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1037e0: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x1037e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x1037e4: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1037e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1037e8u;
}
