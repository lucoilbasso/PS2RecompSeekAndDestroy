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

// Function: entry_001cdfac
// Address: 0x1cdfac - 0x1cdfd4
void entry_001cdfac_0x1cdfac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdfac_0x1cdfac");
#endif

    ctx->pc = 0x1cdfacu;

    // 0x1cdfac: 0x12800021  beqz        $s4, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CDFACu;
    {
        const bool branch_taken_0x1cdfac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFACu;
        // 0x1cdfb0: 0x8fa20d80  lw          $v0, 0xD80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdfac) {
            ctx->pc = 0x1CE034u;
            return;
        }
    }
    ctx->pc = 0x1CDFB4u;
    // 0x1cdfb4: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CDFB4u;
    {
        const bool branch_taken_0x1cdfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdfb4) {
            ctx->pc = 0x1CDFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDFB4u;
            // 0x1cdfb8: 0xafa00d98  sw          $zero, 0xD98($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 3480), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE074u;
            return;
        }
    }
    ctx->pc = 0x1CDFBCu;
    // 0x1cdfbc: 0x8fa60d9c  lw          $a2, 0xD9C($sp)
    ctx->pc = 0x1cdfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3484)));
    // 0x1cdfc0: 0x54c0001d  bnel        $a2, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CDFC0u;
    {
        const bool branch_taken_0x1cdfc0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdfc0) {
            ctx->pc = 0x1CDFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDFC0u;
            // 0x1cdfc4: 0x966403fa  lhu         $a0, 0x3FA($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1018)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE038u;
            return;
        }
    }
    ctx->pc = 0x1CDFC8u;
    // 0x1cdfc8: 0x27a30900  addiu       $v1, $sp, 0x900
    ctx->pc = 0x1cdfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
    // 0x1cdfcc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1cdfccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdfd0: 0x26640460  addiu       $a0, $s3, 0x460
    ctx->pc = 0x1cdfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1120));
    ctx->pc = 0x1cdfd4u;
}
