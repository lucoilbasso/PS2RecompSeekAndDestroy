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

// Function: entry_001a10ec
// Address: 0x1a10ec - 0x1a1108
void entry_001a10ec_0x1a10ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a10ec_0x1a10ec");
#endif

    ctx->pc = 0x1a10ecu;

    // 0x1a10ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a10ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a10f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a10f4: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1A10F4u;
    {
        const bool branch_taken_0x1a10f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A10F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10F4u;
        // 0x1a10f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10f4) {
            ctx->pc = 0x1A11BCu;
            return;
        }
    }
    ctx->pc = 0x1A10FCu;
    // 0x1a10fc: 0x3c090026  lui         $t1, 0x26
    ctx->pc = 0x1a10fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)38 << 16));
    // 0x1a1100: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a1100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1104: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->pc = 0x1a1108u;
}
