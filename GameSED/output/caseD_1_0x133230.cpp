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

// Function: caseD_1
// Address: 0x133230 - 0x133250
void caseD_1_0x133230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x133230");
#endif

    ctx->pc = 0x133230u;

    // 0x133230: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x133230u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133234: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x133234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x133238: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x133238u;
    {
        const bool branch_taken_0x133238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x133238) {
            ctx->pc = 0x133344u;
            return;
        }
    }
    ctx->pc = 0x133240u;
    // 0x133240: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x133240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x133244: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x133244u;
    {
        const bool branch_taken_0x133244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133244u;
        // 0x133248: 0x30421000  andi        $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x133244) {
            ctx->pc = 0x1332C8u;
            return;
        }
    }
    ctx->pc = 0x13324Cu;
    // 0x13324c: 0x0  nop
    ctx->pc = 0x13324cu;
    // NOP
    ctx->pc = 0x133250u;
}
