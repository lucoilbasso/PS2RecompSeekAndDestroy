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

// Function: entry_001536e8
// Address: 0x1536e8 - 0x153714
void entry_001536e8_0x1536e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001536e8_0x1536e8");
#endif

    ctx->pc = 0x1536e8u;

    // 0x1536e8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1536E8u;
    {
        const bool branch_taken_0x1536e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1536ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536E8u;
        // 0x1536ec: 0x2626075c  addiu       $a2, $s1, 0x75C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1884));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536e8) {
            ctx->pc = 0x1537D4u;
            return;
        }
    }
    ctx->pc = 0x1536F0u;
    // 0x1536f0: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1536f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1536f4: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x1536f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1536f8: 0x8cc4003c  lw          $a0, 0x3C($a2)
    ctx->pc = 0x1536f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x1536fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1536fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x153700: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x153700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x153704: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153704u;
    {
        const bool branch_taken_0x153704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153704u;
        // 0x153708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153704) {
            ctx->pc = 0x153714u;
            return;
        }
    }
    ctx->pc = 0x15370Cu;
    // 0x15370c: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x15370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x153710: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x153710u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x153714u;
}
