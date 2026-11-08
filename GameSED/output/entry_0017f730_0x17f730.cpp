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

// Function: entry_0017f730
// Address: 0x17f730 - 0x17f74c
void entry_0017f730_0x17f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f730_0x17f730");
#endif

    switch (ctx->pc) {
        case 0x17f73cu: goto label_17f73c;
        default: break;
    }

    ctx->pc = 0x17f730u;

    // 0x17f730: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17f730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17f734: 0xc05fbc6  jal         func_17EF18
    ctx->pc = 0x17F734u;
    SET_GPR_U32(ctx, 31, 0x17F73Cu);
    ctx->pc = 0x17F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F734u;
    // 0x17f738: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EF18u, 0x17F734u, 0x17F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F73Cu;
label_17f73c:
    // 0x17f73c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x17f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17f740: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x17f740u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f744: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x17f744u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x17f748: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x17f748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x17f74cu;
}
