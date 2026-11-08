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

// Function: entry_001cc978
// Address: 0x1cc978 - 0x1cc998
void entry_001cc978_0x1cc978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc978_0x1cc978");
#endif

    ctx->pc = 0x1cc978u;

    // 0x1cc978: 0x8e70000c  lw          $s0, 0xC($s3)
    ctx->pc = 0x1cc978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1cc97c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc980: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1cc980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1cc984: 0x1202002a  beq         $s0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1CC984u;
    {
        const bool branch_taken_0x1cc984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC984u;
        // 0x1cc988: 0x241efffd  addiu       $fp, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc984) {
            ctx->pc = 0x1CCA30u;
            return;
        }
    }
    ctx->pc = 0x1CC98Cu;
    // 0x1cc98c: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1cc98cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc990: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1cc990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1cc994: 0x0  nop
    ctx->pc = 0x1cc994u;
    // NOP
    ctx->pc = 0x1cc998u;
}
