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

// Function: entry_0014daec
// Address: 0x14daec - 0x14db04
void entry_0014daec_0x14daec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014daec_0x14daec");
#endif

    ctx->pc = 0x14daecu;

    // 0x14daec: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DAECu;
    {
        const bool branch_taken_0x14daec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAECu;
        // 0x14daf0: 0x24020703  addiu       $v0, $zero, 0x703 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1795));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14daec) {
            ctx->pc = 0x14DB04u;
            return;
        }
    }
    ctx->pc = 0x14DAF4u;
    // 0x14daf4: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14daf8: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x14daf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x14dafc: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x14dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    // 0x14db00: 0x24020703  addiu       $v0, $zero, 0x703
    ctx->pc = 0x14db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1795));
    ctx->pc = 0x14db04u;
}
