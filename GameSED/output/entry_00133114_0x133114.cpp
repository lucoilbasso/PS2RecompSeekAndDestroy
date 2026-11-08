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

// Function: entry_00133114
// Address: 0x133114 - 0x133138
void entry_00133114_0x133114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133114_0x133114");
#endif

    switch (ctx->pc) {
        case 0x13311cu: goto label_13311c;
        default: break;
    }

    ctx->pc = 0x133114u;

    // 0x133114: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133114u;
    SET_GPR_U32(ctx, 31, 0x13311Cu);
    ctx->pc = 0x133118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133114u;
    // 0x133118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133114u, 0x13311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13311Cu;
label_13311c:
    // 0x13311c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13311cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133124: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x133124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13312c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13312cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133130: 0x805325c  j           func_14C970
    ctx->pc = 0x133130u;
    ctx->pc = 0x133134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133130u;
    // 0x133134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C970u;
    ApUnitSetOptionPos__FP7ApcUniti_0x14c970(rdram, ctx, runtime); return;
    ctx->pc = 0x133138u;
}
