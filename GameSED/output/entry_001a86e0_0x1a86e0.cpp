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

// Function: entry_001a86e0
// Address: 0x1a86e0 - 0x1a8708
void entry_001a86e0_0x1a86e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a86e0_0x1a86e0");
#endif

    ctx->pc = 0x1a86e0u;

    // 0x1a86e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a86e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a86e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A86E4u;
    {
        const bool branch_taken_0x1a86e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86E4u;
        // 0x1a86e8: 0x3086001f  andi        $a2, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86e4) {
            ctx->pc = 0x1A8708u;
            return;
        }
    }
    ctx->pc = 0x1A86ECu;
    // 0x1a86ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a86ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a86f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a86f4: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x1a86f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x1a86f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a86f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a86fc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A86FCu;
    {
        const bool branch_taken_0x1a86fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86FCu;
        // 0x1a8700: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86fc) {
            ctx->pc = 0x1A8750u;
            return;
        }
    }
    ctx->pc = 0x1A8704u;
    // 0x1a8704: 0x0  nop
    ctx->pc = 0x1a8704u;
    // NOP
    ctx->pc = 0x1a8708u;
}
