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

// Function: entry_001cb390
// Address: 0x1cb390 - 0x1cb3a4
void entry_001cb390_0x1cb390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb390_0x1cb390");
#endif

    ctx->pc = 0x1cb390u;

    // 0x1cb390: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1cb390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1cb394: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1cb394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1cb398: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x1cb398u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cb39c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CB39Cu;
    {
        const bool branch_taken_0x1cb39c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB39Cu;
        // 0x1cb3a0: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb39c) {
            ctx->pc = 0x1CB414u;
            return;
        }
    }
    ctx->pc = 0x1CB3A4u;
}
