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

// Function: caseD_7
// Address: 0x14dad0 - 0x14daec
void caseD_7_0x14dad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x14dad0");
#endif

    ctx->pc = 0x14dad0u;

    // 0x14dad0: 0x24020701  addiu       $v0, $zero, 0x701
    ctx->pc = 0x14dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1793));
    // 0x14dad4: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DAD4u;
    {
        const bool branch_taken_0x14dad4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAD4u;
        // 0x14dad8: 0x24020702  addiu       $v0, $zero, 0x702 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1794));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dad4) {
            ctx->pc = 0x14DAECu;
            return;
        }
    }
    ctx->pc = 0x14DADCu;
    // 0x14dadc: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14dae0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x14dae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x14dae4: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x14dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    // 0x14dae8: 0x24020702  addiu       $v0, $zero, 0x702
    ctx->pc = 0x14dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1794));
    ctx->pc = 0x14daecu;
}
