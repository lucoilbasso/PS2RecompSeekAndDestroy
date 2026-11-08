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

// Function: entry_0018b228
// Address: 0x18b228 - 0x18b258
void entry_0018b228_0x18b228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b228_0x18b228");
#endif

    switch (ctx->pc) {
        case 0x18b230u: goto label_18b230;
        default: break;
    }

    ctx->pc = 0x18b228u;

label_18b228:
    // 0x18b228: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x18B228u;
    SET_GPR_U32(ctx, 31, 0x18B230u);
    ctx->pc = 0x18B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B228u;
    // 0x18b22c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x18B228u, 0x18B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B230u;
label_18b230:
    // 0x18b230: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x18b230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x18b234: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x18B234u;
    {
        const bool branch_taken_0x18b234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B234u;
        // 0x18b238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b234) {
            ctx->pc = 0x18B228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b228;
        }
    }
    ctx->pc = 0x18B23Cu;
    // 0x18b23c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x18b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x18b240: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18b240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18b244: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B244u;
    {
        const bool branch_taken_0x18b244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B244u;
        // 0x18b248: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b244) {
            ctx->pc = 0x18B258u;
            return;
        }
    }
    ctx->pc = 0x18B24Cu;
    // 0x18b24c: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x18b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x18b250: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x18B250u;
    SET_GPR_U32(ctx, 31, 0x18B258u);
    ctx->pc = 0x18B254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B250u;
    // 0x18b254: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x18B250u, 0x18B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B258u;
}
