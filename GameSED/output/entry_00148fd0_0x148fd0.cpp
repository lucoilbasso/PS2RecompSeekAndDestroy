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

// Function: entry_00148fd0
// Address: 0x148fd0 - 0x148ff4
void entry_00148fd0_0x148fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148fd0_0x148fd0");
#endif

    switch (ctx->pc) {
        case 0x148fe0u: goto label_148fe0;
        default: break;
    }

    ctx->pc = 0x148fd0u;

    // 0x148fd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x148fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x148fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148fd8: 0xc06256e  jal         func_1895B8
    ctx->pc = 0x148FD8u;
    SET_GPR_U32(ctx, 31, 0x148FE0u);
    ctx->pc = 0x148FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148FD8u;
    // 0x148fdc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1895B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1895B8u, 0x148FD8u, 0x148FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FE0u;
label_148fe0:
    // 0x148fe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148fe4: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x148fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x148fe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x148fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fec: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x148fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x148ff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x148ff4u;
}
