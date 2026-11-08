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

// Function: entry_0012eecc
// Address: 0x12eecc - 0x12ef08
void entry_0012eecc_0x12eecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eecc_0x12eecc");
#endif

    ctx->pc = 0x12eeccu;

    // 0x12eecc: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x12EECCu;
    {
        const bool branch_taken_0x12eecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EECCu;
        // 0x12eed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eecc) {
            ctx->pc = 0x12EFA4u;
            return;
        }
    }
    ctx->pc = 0x12EED4u;
    // 0x12eed4: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x12eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x12eed8: 0x4400032  bltz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x12EED8u;
    {
        const bool branch_taken_0x12eed8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EED8u;
        // 0x12eedc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eed8) {
            ctx->pc = 0x12EFA4u;
            return;
        }
    }
    ctx->pc = 0x12EEE0u;
    // 0x12eee0: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x12eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x12eee4: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EEE4u;
    {
        const bool branch_taken_0x12eee4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12eee4) {
            ctx->pc = 0x12EEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EEE4u;
            // 0x12eee8: 0x96040126  lhu         $a0, 0x126($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EF08u;
            return;
        }
    }
    ctx->pc = 0x12EEECu;
    // 0x12eeec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12eef0: 0x441002b  bgez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12EEF0u;
    {
        const bool branch_taken_0x12eef0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEF0u;
        // 0x12eef4: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eef0) {
            ctx->pc = 0x12EFA0u;
            return;
        }
    }
    ctx->pc = 0x12EEF8u;
    // 0x12eef8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x12eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x12eefc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12ef00: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x12EF00u;
    {
        const bool branch_taken_0x12ef00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF00u;
        // 0x12ef04: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef00) {
            ctx->pc = 0x12EFA0u;
            return;
        }
    }
    ctx->pc = 0x12EF08u;
}
