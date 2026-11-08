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

// Function: entry_00147488
// Address: 0x147488 - 0x1474a8
void entry_00147488_0x147488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147488_0x147488");
#endif

    ctx->pc = 0x147488u;

    // 0x147488: 0x5072000b  beql        $v1, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x147488u;
    {
        const bool branch_taken_0x147488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x147488) {
            ctx->pc = 0x14748Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147488u;
            // 0x14748c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1474B8u;
            return;
        }
    }
    ctx->pc = 0x147490u;
    // 0x147490: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x147490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x147494: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x147494u;
    {
        const bool branch_taken_0x147494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x147494) {
            ctx->pc = 0x147498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147494u;
            // 0x147498: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1474C0u;
            return;
        }
    }
    ctx->pc = 0x14749Cu;
    // 0x14749c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14749Cu;
    {
        const bool branch_taken_0x14749c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1474A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14749Cu;
        // 0x1474a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14749c) {
            ctx->pc = 0x1474D0u;
            return;
        }
    }
    ctx->pc = 0x1474A4u;
    // 0x1474a4: 0x0  nop
    ctx->pc = 0x1474a4u;
    // NOP
    ctx->pc = 0x1474a8u;
}
