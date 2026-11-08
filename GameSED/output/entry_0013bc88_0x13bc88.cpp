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

// Function: entry_0013bc88
// Address: 0x13bc88 - 0x13bcbc
void entry_0013bc88_0x13bc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bc88_0x13bc88");
#endif

    ctx->pc = 0x13bc88u;

    // 0x13bc88: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x13BC88u;
    {
        const bool branch_taken_0x13bc88 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bc88) {
            ctx->pc = 0x13BCBCu;
            return;
        }
    }
    ctx->pc = 0x13BC90u;
    // 0x13bc90: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x13bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x13bc94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13bc98: 0x16c0000a  bnez        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x13BC98u;
    {
        const bool branch_taken_0x13bc98 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC98u;
        // 0x13bc9c: 0xae82002c  sw          $v0, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc98) {
            ctx->pc = 0x13BCC4u;
            return;
        }
    }
    ctx->pc = 0x13BCA0u;
    // 0x13bca0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x13bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x13bca4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13BCA4u;
    {
        const bool branch_taken_0x13bca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bca4) {
            ctx->pc = 0x13BCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BCA4u;
            // 0x13bca8: 0x8e82002c  lw          $v0, 0x2C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BCC8u;
            return;
        }
    }
    ctx->pc = 0x13BCACu;
    // 0x13bcac: 0x8e420160  lw          $v0, 0x160($s2)
    ctx->pc = 0x13bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x13bcb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13bcb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bcb4: 0xae400134  sw          $zero, 0x134($s2)
    ctx->pc = 0x13bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 0));
    // 0x13bcb8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x13bcbcu;
}
