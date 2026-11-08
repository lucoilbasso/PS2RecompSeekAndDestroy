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

// Function: caseD_0
// Address: 0x133218 - 0x133230
void caseD_0_0x133218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x133218");
#endif

    ctx->pc = 0x133218u;

    // 0x133218: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x133218u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13321c: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x13321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x133220: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x133220u;
    {
        const bool branch_taken_0x133220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x133220) {
            ctx->pc = 0x133344u;
            return;
        }
    }
    ctx->pc = 0x133228u;
    // 0x133228: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x133228u;
    {
        const bool branch_taken_0x133228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133228u;
        // 0x13322c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133228) {
            ctx->pc = 0x133344u;
            return;
        }
    }
    ctx->pc = 0x133230u;
}
