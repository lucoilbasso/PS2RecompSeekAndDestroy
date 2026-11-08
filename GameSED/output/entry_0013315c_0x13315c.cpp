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

// Function: entry_0013315c
// Address: 0x13315c - 0x133180
void entry_0013315c_0x13315c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013315c_0x13315c");
#endif

    switch (ctx->pc) {
        case 0x133164u: goto label_133164;
        default: break;
    }

    ctx->pc = 0x13315cu;

    // 0x13315c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13315Cu;
    SET_GPR_U32(ctx, 31, 0x133164u);
    ctx->pc = 0x133160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13315Cu;
    // 0x133160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13315Cu, 0x133164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133164u;
label_133164:
    // 0x133164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133168: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13316c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13316cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133178: 0x8052aec  j           func_14ABB0
    ctx->pc = 0x133178u;
    ctx->pc = 0x13317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133178u;
    // 0x13317c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ABB0u;
    ApUnitSetOptionSound__FP7ApcUniti_0x14abb0(rdram, ctx, runtime); return;
    ctx->pc = 0x133180u;
}
