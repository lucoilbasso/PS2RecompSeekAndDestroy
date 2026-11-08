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

// Function: entry_001a8780
// Address: 0x1a8780 - 0x1a87a8
void entry_001a8780_0x1a8780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8780_0x1a8780");
#endif

    ctx->pc = 0x1a8780u;

    // 0x1a8780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8784: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8784u;
    {
        const bool branch_taken_0x1a8784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8784u;
        // 0x1a8788: 0x3086001f  andi        $a2, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8784) {
            ctx->pc = 0x1A87A8u;
            return;
        }
    }
    ctx->pc = 0x1A878Cu;
    // 0x1a878c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8790: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a8790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8794: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x1a8794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x1a8798: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1a8798u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1a879c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a879cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a87a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A87A0u;
    {
        const bool branch_taken_0x1a87a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87A0u;
        // 0x1a87a4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87a0) {
            ctx->pc = 0x1A87F8u;
            return;
        }
    }
    ctx->pc = 0x1A87A8u;
}
