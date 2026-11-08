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

// Function: entry_001a4238
// Address: 0x1a4238 - 0x1a4278
void entry_001a4238_0x1a4238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4238_0x1a4238");
#endif

    switch (ctx->pc) {
        case 0x1a4240u: goto label_1a4240;
        case 0x1a4260u: goto label_1a4260;
        case 0x1a4268u: goto label_1a4268;
        default: break;
    }

    ctx->pc = 0x1a4238u;

    // 0x1a4238: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1A4238u;
    SET_GPR_U32(ctx, 31, 0x1A4240u);
    ctx->pc = 0x1A423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4238u;
    // 0x1a423c: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1A4238u, 0x1A4240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4240u;
label_1a4240:
    // 0x1a4240: 0x8f83917c  lw          $v1, -0x6E84($gp)
    ctx->pc = 0x1a4240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939004)));
    // 0x1a4244: 0x8f829184  lw          $v0, -0x6E7C($gp)
    ctx->pc = 0x1a4244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939012)));
    // 0x1a4248: 0x8f84918c  lw          $a0, -0x6E74($gp)
    ctx->pc = 0x1a4248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
    // 0x1a424c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1a424cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1a4250: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a4250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a4254: 0xaf90917c  sw          $s0, -0x6E84($gp)
    ctx->pc = 0x1a4254u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939004), GPR_U32(ctx, 16));
    // 0x1a4258: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1A4258u;
    SET_GPR_U32(ctx, 31, 0x1A4260u);
    ctx->pc = 0x1A425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4258u;
    // 0x1a425c: 0xaf829184  sw          $v0, -0x6E7C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939012), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1A4258u, 0x1A4260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4260u;
label_1a4260:
    // 0x1a4260: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1A4260u;
    SET_GPR_U32(ctx, 31, 0x1A4268u);
    ctx->pc = 0x1A4264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4260u;
    // 0x1a4264: 0x8f849190  lw          $a0, -0x6E70($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939024)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1A4260u, 0x1A4268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4268u;
label_1a4268:
    // 0x1a4268: 0x8f839180  lw          $v1, -0x6E80($gp)
    ctx->pc = 0x1a4268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939008)));
    // 0x1a426c: 0x8f829188  lw          $v0, -0x6E78($gp)
    ctx->pc = 0x1a426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939016)));
    // 0x1a4270: 0x8f849190  lw          $a0, -0x6E70($gp)
    ctx->pc = 0x1a4270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939024)));
    // 0x1a4274: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1a4274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1a4278u;
}
