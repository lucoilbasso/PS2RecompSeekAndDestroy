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

// Function: entry_001d1218
// Address: 0x1d1218 - 0x1d1228
void entry_001d1218_0x1d1218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1218_0x1d1218");
#endif

    ctx->pc = 0x1d1218u;

    // 0x1d1218: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x1d1218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1d121c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1d121cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1d1220: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1220u;
    {
        const bool branch_taken_0x1d1220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1220u;
        // 0x1d1224: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1220) {
            ctx->pc = 0x1D1238u;
            return;
        }
    }
    ctx->pc = 0x1D1228u;
}
