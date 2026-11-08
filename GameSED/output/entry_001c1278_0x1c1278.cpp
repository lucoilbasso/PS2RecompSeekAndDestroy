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

// Function: entry_001c1278
// Address: 0x1c1278 - 0x1c129c
void entry_001c1278_0x1c1278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1278_0x1c1278");
#endif

    switch (ctx->pc) {
        case 0x1c1294u: goto label_1c1294;
        default: break;
    }

    ctx->pc = 0x1c1278u;

    // 0x1c1278: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x1c1278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1c127c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1280: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1280u;
    {
        const bool branch_taken_0x1c1280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1280) {
            ctx->pc = 0x1C1284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1280u;
            // 0x1c1284: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C129Cu;
            return;
        }
    }
    ctx->pc = 0x1C1288u;
    // 0x1c1288: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1c1288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1c128c: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C128Cu;
    SET_GPR_U32(ctx, 31, 0x1C1294u);
    ctx->pc = 0x1C1290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C128Cu;
    // 0x1c1290: 0x24a5b5d0  addiu       $a1, $a1, -0x4A30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C128Cu, 0x1C1294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1294u;
label_1c1294:
    // 0x1c1294: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c1294u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1298: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c1298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1c129cu;
}
