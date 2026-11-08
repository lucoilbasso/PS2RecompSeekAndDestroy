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

// Function: entry_00104f8c
// Address: 0x104f8c - 0x104fa8
void entry_00104f8c_0x104f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104f8c_0x104f8c");
#endif

    switch (ctx->pc) {
        case 0x104fa0u: goto label_104fa0;
        default: break;
    }

    ctx->pc = 0x104f8cu;

    // 0x104f8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x104f90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104f94: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x104f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x104f98: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x104F98u;
    SET_GPR_U32(ctx, 31, 0x104FA0u);
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x104F98u, 0x104FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FA0u;
label_104fa0:
    // 0x104fa0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x104fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x104fa4: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x104fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x104fa8u;
}
