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

// Function: entry_0012e570
// Address: 0x12e570 - 0x12e598
void entry_0012e570_0x12e570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e570_0x12e570");
#endif

    switch (ctx->pc) {
        case 0x12e57cu: goto label_12e57c;
        default: break;
    }

    ctx->pc = 0x12e570u;

    // 0x12e570: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e574: 0xc041682  jal         func_105A08
    ctx->pc = 0x12E574u;
    SET_GPR_U32(ctx, 31, 0x12E57Cu);
    ctx->pc = 0x12E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E574u;
    // 0x12e578: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x12E574u, 0x12E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E57Cu;
label_12e57c:
    // 0x12e57c: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x12e57cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x12e580: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x12e580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e584: 0x4c2001f  bltzl       $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x12E584u;
    {
        const bool branch_taken_0x12e584 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x12e584) {
            ctx->pc = 0x12E588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E584u;
            // 0x12e588: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E604u;
            return;
        }
    }
    ctx->pc = 0x12E58Cu;
    // 0x12e58c: 0x24160041  addiu       $s6, $zero, 0x41
    ctx->pc = 0x12e58cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12e590: 0x24150044  addiu       $s5, $zero, 0x44
    ctx->pc = 0x12e590u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x12e594: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12e598u;
}
