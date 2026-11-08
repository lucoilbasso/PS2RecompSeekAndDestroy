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

// Function: entry_0013c438
// Address: 0x13c438 - 0x13c454
void entry_0013c438_0x13c438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c438_0x13c438");
#endif

    ctx->pc = 0x13c438u;

    // 0x13c438: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x13c438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13c43c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c440: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13c440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x13c444: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13c444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13c448: 0x14470002  bne         $v0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C448u;
    {
        const bool branch_taken_0x13c448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x13C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C448u;
        // 0x13c44c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c448) {
            ctx->pc = 0x13C454u;
            return;
        }
    }
    ctx->pc = 0x13C450u;
    // 0x13c450: 0xac7101d0  sw          $s1, 0x1D0($v1)
    ctx->pc = 0x13c450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 17));
    ctx->pc = 0x13c454u;
}
