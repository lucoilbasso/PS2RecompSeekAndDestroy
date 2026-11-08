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

// Function: entry_00127938
// Address: 0x127938 - 0x127988
void entry_00127938_0x127938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127938_0x127938");
#endif

    switch (ctx->pc) {
        case 0x12794cu: goto label_12794c;
        case 0x127974u: goto label_127974;
        case 0x12797cu: goto label_12797c;
        default: break;
    }

    ctx->pc = 0x127938u;

    // 0x127938: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x127938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x12793c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12793Cu;
    {
        const bool branch_taken_0x12793c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12793Cu;
        // 0x127940: 0x8f9189e0  lw          $s1, -0x7620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12793c) {
            ctx->pc = 0x127988u;
            return;
        }
    }
    ctx->pc = 0x127944u;
    // 0x127944: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x127944u;
    SET_GPR_U32(ctx, 31, 0x12794Cu);
    ctx->pc = 0x127948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127944u;
    // 0x127948: 0x8e040088  lw          $a0, 0x88($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x127944u, 0x12794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12794Cu;
label_12794c:
    // 0x12794c: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x12794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x127950: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x127950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x127954: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x127954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x127958: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x127958u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x12795c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x12795cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x127960: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x127960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x127964: 0xae11008c  sw          $s1, 0x8C($s0)
    ctx->pc = 0x127964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 17));
    // 0x127968: 0xae040080  sw          $a0, 0x80($s0)
    ctx->pc = 0x127968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
    // 0x12796c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12796Cu;
    SET_GPR_U32(ctx, 31, 0x127974u);
    ctx->pc = 0x127970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12796Cu;
    // 0x127970: 0x8e040088  lw          $a0, 0x88($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12796Cu, 0x127974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127974u;
label_127974:
    // 0x127974: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x127974u;
    SET_GPR_U32(ctx, 31, 0x12797Cu);
    ctx->pc = 0x127978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127974u;
    // 0x127978: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x127974u, 0x12797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12797Cu;
label_12797c:
    // 0x12797c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12797Cu;
    {
        const bool branch_taken_0x12797c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12797Cu;
        // 0x127980: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12797c) {
            ctx->pc = 0x1279ACu;
            return;
        }
    }
    ctx->pc = 0x127984u;
    // 0x127984: 0x0  nop
    ctx->pc = 0x127984u;
    // NOP
    ctx->pc = 0x127988u;
}
