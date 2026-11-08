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

// Function: entry_001ca56c
// Address: 0x1ca56c - 0x1ca580
void entry_001ca56c_0x1ca56c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca56c_0x1ca56c");
#endif

    ctx->pc = 0x1ca56cu;

    // 0x1ca56c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1ca56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1ca570: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ca570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ca574: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ca574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ca578: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA578u;
    {
        const bool branch_taken_0x1ca578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA578u;
        // 0x1ca57c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca578) {
            ctx->pc = 0x1CA5A0u;
            return;
        }
    }
    ctx->pc = 0x1CA580u;
}
