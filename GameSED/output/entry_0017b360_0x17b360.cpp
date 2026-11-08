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

// Function: entry_0017b360
// Address: 0x17b360 - 0x17b370
void entry_0017b360_0x17b360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b360_0x17b360");
#endif

    ctx->pc = 0x17b360u;

    // 0x17b360: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x17b360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x17b364: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x17b364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b368: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x17B368u;
    {
        const bool branch_taken_0x17b368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B368u;
        // 0x17b36c: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b368) {
            ctx->pc = 0x17B3DCu;
            return;
        }
    }
    ctx->pc = 0x17B370u;
}
