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

// Function: entry_001c6d1c
// Address: 0x1c6d1c - 0x1c6d48
void entry_001c6d1c_0x1c6d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6d1c_0x1c6d1c");
#endif

    switch (ctx->pc) {
        case 0x1c6d30u: goto label_1c6d30;
        default: break;
    }

    ctx->pc = 0x1c6d1cu;

    // 0x1c6d1c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1c6d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c6d20: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6D20u;
    {
        const bool branch_taken_0x1c6d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D20u;
        // 0x1c6d24: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d20) {
            ctx->pc = 0x1C6D48u;
            return;
        }
    }
    ctx->pc = 0x1C6D28u;
    // 0x1c6d28: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C6D28u;
    SET_GPR_U32(ctx, 31, 0x1C6D30u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C6D28u, 0x1C6D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D30u;
label_1c6d30:
    // 0x1c6d30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6D30u;
    {
        const bool branch_taken_0x1c6d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D30u;
        // 0x1c6d34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d30) {
            ctx->pc = 0x1C6D48u;
            return;
        }
    }
    ctx->pc = 0x1C6D38u;
    // 0x1c6d38: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x1c6d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1c6d3c: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x1c6d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x1c6d40: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1C6D40u;
    {
        const bool branch_taken_0x1c6d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D40u;
        // 0x1c6d44: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d40) {
            ctx->pc = 0x1C6F8Cu;
            return;
        }
    }
    ctx->pc = 0x1C6D48u;
}
