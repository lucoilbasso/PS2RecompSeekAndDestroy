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

// Function: entry_001161fc
// Address: 0x1161fc - 0x116220
void entry_001161fc_0x1161fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001161fc_0x1161fc");
#endif

    ctx->pc = 0x1161fcu;

    // 0x1161fc: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x1161fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x116200: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x116200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x116204: 0x16950013  bne         $s4, $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x116204u;
    {
        const bool branch_taken_0x116204 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        ctx->pc = 0x116208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116204u;
        // 0x116208: 0xac550000  sw          $s5, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116204) {
            ctx->pc = 0x116254u;
            return;
        }
    }
    ctx->pc = 0x11620Cu;
    // 0x11620c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11620Cu;
    {
        const bool branch_taken_0x11620c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x116210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11620Cu;
        // 0x116210: 0x2664f1d0  addiu       $a0, $s3, -0xE30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11620c) {
            ctx->pc = 0x116220u;
            return;
        }
    }
    ctx->pc = 0x116214u;
    // 0x116214: 0x27c542f8  addiu       $a1, $fp, 0x42F8
    ctx->pc = 0x116214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 17144));
    // 0x116218: 0xc068186  jal         func_1A0618
    ctx->pc = 0x116218u;
    SET_GPR_U32(ctx, 31, 0x116220u);
    ctx->pc = 0x11621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116218u;
    // 0x11621c: 0x24060031  addiu       $a2, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x116218u, 0x116220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116220u;
}
