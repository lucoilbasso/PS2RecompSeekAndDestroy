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

// Function: entry_001088c0
// Address: 0x1088c0 - 0x1088d8
void entry_001088c0_0x1088c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001088c0_0x1088c0");
#endif

    ctx->pc = 0x1088c0u;

    // 0x1088c0: 0x14620210  bne         $v1, $v0, . + 4 + (0x210 << 2)
    ctx->pc = 0x1088C0u;
    {
        const bool branch_taken_0x1088c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1088C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088C0u;
        // 0x1088c4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088c0) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x1088C8u;
    // 0x1088c8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1088c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1088cc: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x1088CCu;
    {
        const bool branch_taken_0x1088cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1088D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088CCu;
        // 0x1088d0: 0xa6820008  sh          $v0, 0x8($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088cc) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x1088D4u;
    // 0x1088d4: 0x0  nop
    ctx->pc = 0x1088d4u;
    // NOP
    ctx->pc = 0x1088d8u;
}
