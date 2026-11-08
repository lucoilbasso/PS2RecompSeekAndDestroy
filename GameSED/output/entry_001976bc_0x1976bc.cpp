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

// Function: entry_001976bc
// Address: 0x1976bc - 0x1976c8
void entry_001976bc_0x1976bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001976bc_0x1976bc");
#endif

    ctx->pc = 0x1976bcu;

    // 0x1976bc: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1976bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x1976c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1976C0u;
    {
        const bool branch_taken_0x1976c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976C0u;
        // 0x1976c4: 0x34c60200  ori         $a2, $a2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976c0) {
            ctx->pc = 0x1976D0u;
            return;
        }
    }
    ctx->pc = 0x1976C8u;
}
