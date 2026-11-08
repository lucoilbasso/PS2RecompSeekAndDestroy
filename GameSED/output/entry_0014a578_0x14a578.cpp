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

// Function: entry_0014a578
// Address: 0x14a578 - 0x14a590
void entry_0014a578_0x14a578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a578_0x14a578");
#endif

    ctx->pc = 0x14a578u;

    // 0x14a578: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A578u;
    {
        const bool branch_taken_0x14a578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A578u;
        // 0x14a57c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a578) {
            ctx->pc = 0x14A590u;
            return;
        }
    }
    ctx->pc = 0x14A580u;
    // 0x14a580: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14a580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14a584: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x14a584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x14a588: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14A588u;
    SET_GPR_U32(ctx, 31, 0x14A590u);
    ctx->pc = 0x14A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A588u;
    // 0x14a58c: 0x24a56b68  addiu       $a1, $a1, 0x6B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14A588u, 0x14A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A590u;
}
