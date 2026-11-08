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

// Function: entry_001baec4
// Address: 0x1baec4 - 0x1baee4
void entry_001baec4_0x1baec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baec4_0x1baec4");
#endif

    switch (ctx->pc) {
        case 0x1baed0u: goto label_1baed0;
        default: break;
    }

    ctx->pc = 0x1baec4u;

    // 0x1baec4: 0x8e64c0ac  lw          $a0, -0x3F54($s3)
    ctx->pc = 0x1baec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951084)));
    // 0x1baec8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BAEC8u;
    SET_GPR_U32(ctx, 31, 0x1BAED0u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BAEC8u, 0x1BAED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAED0u;
label_1baed0:
    // 0x1baed0: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x1baed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
    // 0x1baed4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1baed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1baed8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1baed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1baedc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BAEDCu;
    {
        const bool branch_taken_0x1baedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEDCu;
        // 0x1baee0: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baedc) {
            ctx->pc = 0x1BAF0Cu;
            return;
        }
    }
    ctx->pc = 0x1BAEE4u;
}
