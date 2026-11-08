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

// Function: entry_00198994
// Address: 0x198994 - 0x1989b8
void entry_00198994_0x198994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198994_0x198994");
#endif

    switch (ctx->pc) {
        case 0x1989acu: goto label_1989ac;
        default: break;
    }

    ctx->pc = 0x198994u;

    // 0x198994: 0x8fc201c4  lw          $v0, 0x1C4($fp)
    ctx->pc = 0x198994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 452)));
    // 0x198998: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x198998u;
    {
        const bool branch_taken_0x198998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198998) {
            ctx->pc = 0x19899Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198998u;
            // 0x19899c: 0x3c04001e  lui         $a0, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1989B8u;
            return;
        }
    }
    ctx->pc = 0x1989A0u;
    // 0x1989a0: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1989a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1989a4: 0xc0663b6  jal         func_198ED8
    ctx->pc = 0x1989A4u;
    SET_GPR_U32(ctx, 31, 0x1989ACu);
    ctx->pc = 0x1989A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989A4u;
    // 0x1989a8: 0x24848de0  addiu       $a0, $a0, -0x7220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198ED8u, 0x1989A4u, 0x1989ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1989ACu;
label_1989ac:
    // 0x1989ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1989ACu;
    {
        const bool branch_taken_0x1989ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1989B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1989ACu;
        // 0x1989b0: 0x8ec60004  lw          $a2, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1989ac) {
            ctx->pc = 0x1989C4u;
            return;
        }
    }
    ctx->pc = 0x1989B4u;
    // 0x1989b4: 0x0  nop
    ctx->pc = 0x1989b4u;
    // NOP
    ctx->pc = 0x1989b8u;
}
