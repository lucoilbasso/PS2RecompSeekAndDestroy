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

// Function: entry_001d2548
// Address: 0x1d2548 - 0x1d2564
void entry_001d2548_0x1d2548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2548_0x1d2548");
#endif

    ctx->pc = 0x1d2548u;

    // 0x1d2548: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1d2548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d254c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D254Cu;
    {
        const bool branch_taken_0x1d254c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d254c) {
            ctx->pc = 0x1D2550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D254Cu;
            // 0x1d2550: 0x92a30000  lbu         $v1, 0x0($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2564u;
            return;
        }
    }
    ctx->pc = 0x1D2554u;
    // 0x1d2554: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x1d2554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1d2558: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1D2558u;
    {
        const bool branch_taken_0x1d2558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2558u;
        // 0x1d255c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2558) {
            ctx->pc = 0x1D2710u;
            return;
        }
    }
    ctx->pc = 0x1D2560u;
    // 0x1d2560: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x1d2560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->pc = 0x1d2564u;
}
