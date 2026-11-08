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

// Function: entry_001cf978
// Address: 0x1cf978 - 0x1cf998
void entry_001cf978_0x1cf978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf978_0x1cf978");
#endif

    ctx->pc = 0x1cf978u;

    // 0x1cf978: 0x3c0f0025  lui         $t7, 0x25
    ctx->pc = 0x1cf978u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)37 << 16));
    // 0x1cf97c: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x1cf97cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1cf980: 0x25e2e1c0  addiu       $v0, $t7, -0x1E40
    ctx->pc = 0x1cf980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294959552));
    // 0x1cf984: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x1cf984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1cf988: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1cf988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1cf98c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1cf98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cf990: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF990u;
    {
        const bool branch_taken_0x1cf990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF990u;
        // 0x1cf994: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf990) {
            ctx->pc = 0x1CF9A4u;
            return;
        }
    }
    ctx->pc = 0x1CF998u;
}
